//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uWkEventCallback;

{$mode objfpc}{$H+}
{$Z4+}

{$I ExtDecl.inc}

interface

uses
  Classes,
  SysUtils,
  CocoaAll, uWebkit,
  uString, uTools;

type
  // 基础事件回调函数
  TWKEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;
  // 清除事件回调函数
  TWKRemoveEventCallPtr = function(f: Pointer): Pointer; extdecl;

var
  GWKEventCallbackPtr: TWKEventCallbackPtr;
  GWKRemoveEventCallbackPtr: TWKRemoveEventCallPtr;


type

  { TWkEventBase }

  TWkEventBase = class
  private class var
    FEventObjectsLock: TRtlCriticalSection;
    FEventObjects: TEventObjectList;
  public
    class constructor Create;
    class destructor Destroy;
  private
    // 保存传入的，一个标识吧
    FHostDataPtr: Pointer;
    function GetDataPtr: Pointer;
    // 不单独使用的，配置其他使用
    class procedure CallRemoveEvent(AMethod: TMethod);
  protected
    procedure SendEvent(AArgs: array of const);
    function CheckDataPtr: Boolean;
  public
    constructor Create(AHostDataPtr: Pointer);
    destructor Destroy; override;
    property DataPtr: Pointer read GetDataPtr;

    // 移除事件中的对象
    class procedure Remove(AMethod: TMethod);
    class function CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
  end;

  { TWKEvent }

  TWKEvent = class(TWkEventBase)
  public
    // WKScriptMessageHandlerProtocol
    procedure WkWebview_OnProcessMessage(sender: TObject; userContentController: WKUserContentController; name, data: string);

    // WKNavigationDelegateProtocol
    procedure WkWebview_OnDecidePolicyForNavigationActionPreferences(sender: TObject; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences);
    procedure WkWebview_OnDecidePolicyForNavigationResponse(sender: TObject; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
    procedure WkWebview_OnStartProvisionalNavigation(sender: TObject; navigation: WKNavigation);
    procedure WkWebview_OnReceiveServerRedirectForProvisionalNavigation(sender: TObject; navigation: WKNavigation);
    procedure WkWebview_OnFailProvisionalNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
    procedure WkWebview_OnCommitNavigation(sender: TObject; navigation: WKNavigation);
    procedure WkWebview_OnFinishNavigation(sender: TObject; navigation: WKNavigation);
    procedure WkWebview_OnFailNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
    procedure WkWebview_OnWebContentProcessDidTerminate(sender: TObject);
    procedure WkWebview_OnNavigationActionDidBecomeDownload(sender: TObject; navigationAction: WKNavigationAction; download: WKDownload);
    procedure WkWebview_OnNavigationResponseDidBecomeDownload(sender: TObject; navigationResponse: WKNavigationResponse; download: WKDownload);

    // WKURLSchemeHandlerProtocol
    procedure WkWebview_OnStartURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
    procedure WkWebview_OnStopURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);

    // WKUIDelegateProtocol
    function WkWebview_OnCreateWebView(sender: TObject; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
    procedure WkWebview_OnRunJavaScriptAlert(sender: TObject; message_: string; frame: WKFrameInfo);
    function WkWebview_OnRunJavaScriptConfirmCompletion(sender: TObject; message_: string; frame: WKFrameInfo): Boolean;
    function WkWebview_OnRunJavaScriptTextInputCompletion(sender: TObject; prompt: string; defaultText: string; frame: WKFrameInfo): string;
    procedure WkWebview_OnWebViewDidClose(sender: TObject);

    // WKDownload
    procedure WkWebview_OnDownloadCancelCompletionHandler(sender: TObject; download: WKDownload; aData: Pointer; aLength: Integer {NSData});
    procedure WkWebview_OnDownloadDecideDestinationUsingResponseSuggestedFilename(sender: TObject; download: WKDownload; response: NSURLResponse; suggestedFilename: string);
    procedure WkWebview_OnDownloadWillPerformHTTPRedirectionNewRequest(sender: TObject; download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest);
    procedure WkWebview_OnDownloadFinish(sender: TObject; download: WKDownload);
    procedure WkWebview_OnDownloadFailWithError(sender: TObject; download: WKDownload; error: string; aData: Pointer; aLength: Integer {NSData});
  end;

// 公共发送事件函数
procedure SendWKEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

implementation

{ TWkEventBase }

class constructor TWkEventBase.Create;
begin
  InitCriticalSection(FEventObjectsLock);
  FEventObjects := TEventObjectList.Create();
end;

class destructor TWkEventBase.Destroy;
begin
  System.EnterCriticalSection(FEventObjectsLock);
  try
    FEventObjects.Clear;
    FreeAndNil(FEventObjects);
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
    DoneCriticalsection(FEventObjectsLock);
  end;
end;

function TWkEventBase.CheckDataPtr: Boolean;
begin
  Result := FHostDataPtr <> nil;
end;

function TWkEventBase.GetDataPtr: Pointer;
begin
  Result := FHostDataPtr;
end;

class procedure TWkEventBase.CallRemoveEvent(AMethod: TMethod);
begin
  // 通知宿主程序，某个事件要清除了，解除引用。
  if Assigned(GWKRemoveEventCallbackPtr) then
    GWKRemoveEventCallbackPtr(TWkEventBase(AMethod.Data).FHostDataPtr);
end;

procedure TWkEventBase.SendEvent(AArgs: array of const);
begin
  if Assigned(GWKEventCallbackPtr) and CheckDataPtr then
  begin
    // 这里要替换为 Pointer
    SendWKEventByPointer(DataPtr, AArgs);
  end;
end;

procedure SendWKEventByPointer(EventDataPtr: Pointer; AArgs: array of const);
var
  LParams: array[0..CALL_MAX_PARAM-1] of Pointer;
  LArgLen: Integer;
  LV: TVarRec;
  I: Integer;
begin
  LArgLen := Length(AArgs);
  if LArgLen <= Length(LParams) then
  begin
    for I := 0 to LArgLen - 1 do
    begin
      LV := AArgs[I];
      case LV.VType of
        vtInteger       : LParams[I] := Pointer(LV.VInteger);
        vtBoolean       : LParams[I] := Pointer(Byte(LV.VBoolean));
        vtChar          : LParams[I] := Pointer(Ord(LV.VChar));
        vtExtended      : LParams[I] := LV.VExtended;
        vtString        : LParams[I] := LV.VAnsiString;
        vtPointer       : LParams[I] := LV.VPointer;
        vtPChar         : LParams[I] := LV.VPChar;
        vtObject        : LParams[I] := LV.VObject;
        vtClass         : LParams[I] := LV.VClass;
        vtWideChar      : LParams[I] := Pointer(Ord(LV.VWideChar));
        vtPWideChar     : LParams[I] := LV.VPWideChar;
        vtAnsiString    : LParams[I] := LV.VAnsiString;
        vtInterface     : LParams[I] := LV.VInterface;
        vtWideString    : LParams[I] := LV.VWideString;
        vtInt64         : LParams[I] := LV.VInt64;
        vtUnicodeString : LParams[I] := LV.VUnicodeString;
      end;
    end;
    GWKEventCallbackPtr(EventDataPtr, @LParams[0], LArgLen);
  end;
end;

constructor TWkEventBase.Create(AHostDataPtr: Pointer);
begin
  inherited Create;
  FHostDataPtr := AHostDataPtr;
  // 并自己添加到对象列表，以便整个程序结束后清理对象
  System.EnterCriticalSection(FEventObjectsLock);
  try
    FEventObjects.AddOrSetData(Pointer(Self), Self);
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
  end;
end;

destructor TWkEventBase.Destroy;
begin
  inherited Destroy;
end;

class procedure TWkEventBase.Remove(AMethod: TMethod);
begin
  System.EnterCriticalSection(FEventObjectsLock);
  try
    // 这是一个class，找到后会删除并Free掉这个对象
    if AMethod.Data <> nil then
    begin
      CallRemoveEvent(AMethod);
      FEventObjects.Remove(AMethod.Data);
    end;
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
  end;
end;

class function TWkEventBase.CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
begin
  Result := False;
  System.EnterCriticalSection(FEventObjectsLock);
   try
     if AMethod.Data <> nil then
     begin
       // 只有当要替换的数据不同时，则更新
       if TWkEventBase(AMethod.Data).FHostDataPtr <> AHostDataPtr then
       begin
         CallRemoveEvent(AMethod);
         TWkEventBase(AMethod.Data).FHostDataPtr := AHostDataPtr;
         Result := True;
       end;
     end;
   finally
     System.LeaveCriticalSection(FEventObjectsLock);
   end;
end;

{ TWkEvent }

// ----------------- 事件实现 -------------------------------


// WKScriptMessageHandlerProtocol
procedure TWkEvent.WkWebview_OnProcessMessage(sender: TObject; userContentController: WKUserContentController; name, data: string);
begin
  SendEvent([Sender, userContentController, ToPChar(name), ToPChar(data)]);
end;

// WKNavigationDelegateProtocol
procedure TWkEvent.WkWebview_OnDecidePolicyForNavigationActionPreferences(sender: TObject; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences);
begin
  SendEvent([sender, navigationAction, @actionPolicy, @preferences]);
end;

procedure TWkEvent.WkWebview_OnDecidePolicyForNavigationResponse(sender: TObject; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
begin
  SendEvent([sender, navigationResponse, @responsePolicy]);
end;

procedure TWkEvent.WkWebview_OnStartProvisionalNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWkEvent.WkWebview_OnReceiveServerRedirectForProvisionalNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWkEvent.WkWebview_OnFailProvisionalNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
begin
  SendEvent([sender, navigation, ToPChar(error)]);
end;

procedure TWkEvent.WkWebview_OnCommitNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWkEvent.WkWebview_OnFinishNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWkEvent.WkWebview_OnFailNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
begin
  SendEvent([sender, navigation, ToPChar(error)]);
end;

procedure TWkEvent.WkWebview_OnWebContentProcessDidTerminate(sender: TObject);
begin
  SendEvent([sender]);
end;

procedure TWkEvent.WkWebview_OnNavigationActionDidBecomeDownload(sender: TObject; navigationAction: WKNavigationAction; download: WKDownload);
begin
  SendEvent([sender, navigationAction, download]);
end;

procedure TWkEvent.WkWebview_OnNavigationResponseDidBecomeDownload(sender: TObject; navigationResponse: WKNavigationResponse; download: WKDownload);
begin
  SendEvent([sender, navigationResponse, download]);
end;


// WKURLSchemeHandlerProtocol
procedure TWkEvent.WkWebview_OnStartURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
begin
  SendEvent([sender, urlSchemeTask]);
end;

procedure TWkEvent.WkWebview_OnStopURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
begin
  SendEvent([sender, urlSchemeTask]);
end;


// WKUIDelegateProtocol
function TWkEvent.WkWebview_OnCreateWebView(sender: TObject; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin
  SendEvent([sender, configuration_, navigationAction, windowFeatures, @Result]);
end;

procedure TWkEvent.WkWebview_OnRunJavaScriptAlert(sender: TObject; message_: string; frame: WKFrameInfo);
begin
  SendEvent([sender, ToPChar(message_), frame]);
end;

function TWkEvent.WkWebview_OnRunJavaScriptConfirmCompletion(sender: TObject; message_: string; frame: WKFrameInfo): Boolean;
begin
  SendEvent([sender, ToPChar(message_), frame, @Result]);
end;

function TWkEvent.WkWebview_OnRunJavaScriptTextInputCompletion(sender: TObject; prompt: string; defaultText: string; frame: WKFrameInfo): string;
var
  RetValue: TString;
begin
  RetValue := TString.Create;;
  SendEvent([sender, ToPChar(prompt), ToPChar(defaultText), frame, RetValue]);
  Result := RetValue.GetValue();
  RetValue.Free;
end;

procedure TWkEvent.WkWebview_OnWebViewDidClose(sender: TObject);
begin
  SendEvent([sender]);
end;


// WKDownload
procedure TWkEvent.WkWebview_OnDownloadCancelCompletionHandler(sender: TObject; download: WKDownload; aData: Pointer; aLength: Integer {NSData});
begin
  SendEvent([sender, download, aData, aLength]);
end;

procedure TWkEvent.WkWebview_OnDownloadDecideDestinationUsingResponseSuggestedFilename(sender: TObject; download: WKDownload; response: NSURLResponse; suggestedFilename: string);
begin
  SendEvent([sender, download, response, ToPChar(suggestedFilename)]);
end;

procedure TWkEvent.WkWebview_OnDownloadWillPerformHTTPRedirectionNewRequest(sender: TObject; download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest);
begin
  SendEvent([sender, download, response, request]);
end;

procedure TWkEvent.WkWebview_OnDownloadFinish(sender: TObject; download: WKDownload);
begin
  SendEvent([sender, download]);
end;

procedure TWkEvent.WkWebview_OnDownloadFailWithError(sender: TObject; download: WKDownload; error: string; aData: Pointer; aLength: Integer {NSData});
begin
  SendEvent([sender, download, ToPChar(error), aData, aLength]);
end;


end.
