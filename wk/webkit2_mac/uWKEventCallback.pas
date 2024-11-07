//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uWKEventCallback;

{$mode objfpc}{$H+}
{$Z4+}

{$I ExtDecl.inc}

interface

uses
  Classes,
  SysUtils,
  uWebkit, uWkInterface, uWKNavigationAction, uWKWebpagePreferences, uWKNavigationResponse,
  uWKDownload, uWKURLSchemeTask, uWKWebViewConfiguration, uWKWindowFeatures, uWKFrameInfo, uNSURLRequest,
  uNSURLResponse, uWKUserContentController, uWKNavigation,
  uTools;

type
  // 基础事件回调函数
  TWKEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;
  // 清除事件回调函数
  TWKRemoveEventCallPtr = function(f: Pointer): Pointer; extdecl;

var
  GWKEventCallbackPtr: TWKEventCallbackPtr;
  GWKRemoveEventCallbackPtr: TWKRemoveEventCallPtr;


type

  { TWKEventBase }

  TWKEventBase = class
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

  TWKEvent = class(TWKEventBase)
  public
    // WKScriptMessageHandlerProtocol
    procedure WkWebview_OnProcessMessage(sender: TWKUserContentController; name, data: string);

    // WKNavigationDelegateProtocol
    procedure WkWebview_OnDecidePolicyForNavigationActionPreferences(webView: IWKWebView; navigationAction: TWKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: TWKWebpagePreferences);
    procedure WkWebview_OnDecidePolicyForNavigationResponse(webView: IWKWebView; navigationResponse: TWKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
    procedure WkWebview_OnStartProvisionalNavigation(webView: IWKWebView; navigation: TWKNavigation);
    procedure WkWebview_OnReceiveServerRedirectForProvisionalNavigation(webView: IWKWebView; navigation: TWKNavigation);
    procedure WkWebview_OnFailProvisionalNavigationWithError(webView: IWKWebView; navigation: TWKNavigation; error: string);
    procedure WkWebview_OnCommitNavigation(webView: IWKWebView; navigation: TWKNavigation);
    procedure WkWebview_OnFinishNavigation(webView: IWKWebView; navigation: TWKNavigation);
    procedure WkWebview_OnFailNavigationWithError(webView: IWKWebView; navigation: TWKNavigation; error: string);
    procedure WkWebview_OnWebContentProcessDidTerminate(webView: IWKWebView);
    procedure WkWebview_OnNavigationActionDidBecomeDownload(webView: IWKWebView; navigationAction: TWKNavigationAction; download: TWKDownload);
    procedure WkWebview_OnNavigationResponseDidBecomeDownload(webView: IWKWebView; navigationResponse: TWKNavigationResponse; download: TWKDownload);

    // WKURLSchemeHandlerProtocol
    procedure WkWebview_OnStartURLSchemeTask(webView: IWKWebView; urlSchemeTask: TWKURLSchemeTask);
    procedure WkWebview_OnStopURLSchemeTask(webView: IWKWebView; urlSchemeTask: TWKURLSchemeTask);

    // WKUIDelegateProtocol
    function WkWebview_OnCreateWebView(webView: IWKWebView; configuration_: TWKWebViewConfiguration; navigationAction: TWKNavigationAction; windowFeatures: TWKWindowFeatures): IWKWebView;
    procedure WkWebview_OnRunJavaScriptAlert(webView: IWKWebView; message_: string; frame: TWKFrameInfo);
    function WkWebview_OnRunJavaScriptConfirmCompletion(webView: IWKWebView; message_: string; frame: TWKFrameInfo): Boolean;
    function WkWebview_OnRunJavaScriptTextInputCompletion(webView: IWKWebView; prompt: string; defaultText: string; frame: TWKFrameInfo): string;
    procedure WkWebview_OnWebViewDidClose(webView: IWKWebView);

    // WKDownload
    procedure WkWebview_OnDownloadCancelCompletionHandler(webView: IWKWebView; download: TWKDownload; aData: Pointer; aLength: Integer {NSData});
    procedure WkWebview_OnDownloadDecideDestinationUsingResponseSuggestedFilename(webView: IWKWebView; download: TWKDownload; response: TNSURLResponse; suggestedFilename: string);
    procedure WkWebview_OnDownloadWillPerformHTTPRedirectionNewRequest(webView: IWKWebView; download: TWKDownload; response: TNSHTTPURLResponse; request: TNSURLRequest);
    procedure WkWebview_OnDownloadFinish(webView: IWKWebView; download: TWKDownload);
    procedure WkWebview_OnDownloadFailWithError(webView: IWKWebView; download: TWKDownload; error: string; aData: Pointer; aLength: Integer {NSData});
  end;

// 公共发送事件函数
procedure SendWKEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

implementation

{ TWKEventBase }

class constructor TWKEventBase.Create;
begin
  InitCriticalSection(FEventObjectsLock);
  FEventObjects := TEventObjectList.Create();
end;

class destructor TWKEventBase.Destroy;
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

function TWKEventBase.CheckDataPtr: Boolean;
begin
  Result := FHostDataPtr <> nil;
end;

function TWKEventBase.GetDataPtr: Pointer;
begin
  Result := FHostDataPtr;
end;

class procedure TWKEventBase.CallRemoveEvent(AMethod: TMethod);
begin
  // 通知宿主程序，某个事件要清除了，解除引用。
  if Assigned(GWKRemoveEventCallbackPtr) then
    GWKRemoveEventCallbackPtr(TWKEventBase(AMethod.Data).FHostDataPtr);
end;

procedure TWKEventBase.SendEvent(AArgs: array of const);
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

constructor TWKEventBase.Create(AHostDataPtr: Pointer);
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

destructor TWKEventBase.Destroy;
begin
  inherited Destroy;
end;

class procedure TWKEventBase.Remove(AMethod: TMethod);
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

class function TWKEventBase.CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
begin
  Result := False;
  System.EnterCriticalSection(FEventObjectsLock);
   try
     if AMethod.Data <> nil then
     begin
       // 只有当要替换的数据不同时，则更新
       if TWKEventBase(AMethod.Data).FHostDataPtr <> AHostDataPtr then
       begin
         CallRemoveEvent(AMethod);
         TWKEventBase(AMethod.Data).FHostDataPtr := AHostDataPtr;
         Result := True;
       end;
     end;
   finally
     System.LeaveCriticalSection(FEventObjectsLock);
   end;
end;

{ TWKEvent }

// ----------------- 事件实现 -------------------------------


// WKScriptMessageHandlerProtocol
procedure TWKEvent.WkWebview_OnProcessMessage(sender: TWKUserContentController; name, data: string);
begin
  SendEvent([Sender]);
end;

// WKNavigationDelegateProtocol
procedure TWKEvent.WkWebview_OnDecidePolicyForNavigationActionPreferences(webView: IWKWebView; navigationAction: TWKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: TWKWebpagePreferences);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnDecidePolicyForNavigationResponse(webView: IWKWebView; navigationResponse: TWKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnStartProvisionalNavigation(webView: IWKWebView; navigation: TWKNavigation);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnReceiveServerRedirectForProvisionalNavigation(webView: IWKWebView; navigation: TWKNavigation);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnFailProvisionalNavigationWithError(webView: IWKWebView; navigation: TWKNavigation; error: string);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnCommitNavigation(webView: IWKWebView; navigation: TWKNavigation);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnFinishNavigation(webView: IWKWebView; navigation: TWKNavigation);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnFailNavigationWithError(webView: IWKWebView; navigation: TWKNavigation; error: string);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnWebContentProcessDidTerminate(webView: IWKWebView);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnNavigationActionDidBecomeDownload(webView: IWKWebView; navigationAction: TWKNavigationAction; download: TWKDownload);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnNavigationResponseDidBecomeDownload(webView: IWKWebView; navigationResponse: TWKNavigationResponse; download: TWKDownload);
begin
  SendEvent([webView]);
end;


// WKURLSchemeHandlerProtocol
procedure TWKEvent.WkWebview_OnStartURLSchemeTask(webView: IWKWebView; urlSchemeTask: TWKURLSchemeTask);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnStopURLSchemeTask(webView: IWKWebView; urlSchemeTask: TWKURLSchemeTask);
begin
  SendEvent([webView]);
end;


// WKUIDelegateProtocol
function TWKEvent.WkWebview_OnCreateWebView(webView: IWKWebView; configuration_: TWKWebViewConfiguration; navigationAction: TWKNavigationAction; windowFeatures: TWKWindowFeatures): IWKWebView;
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnRunJavaScriptAlert(webView: IWKWebView; message_: string; frame: TWKFrameInfo);
begin
  SendEvent([webView]);
end;

function TWKEvent.WkWebview_OnRunJavaScriptConfirmCompletion(webView: IWKWebView; message_: string; frame: TWKFrameInfo): Boolean;
begin
  SendEvent([webView]);
end;

function TWKEvent.WkWebview_OnRunJavaScriptTextInputCompletion(webView: IWKWebView; prompt: string; defaultText: string; frame: TWKFrameInfo): string;
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnWebViewDidClose(webView: IWKWebView);
begin
  SendEvent([webView]);
end;


// WKDownload
procedure TWKEvent.WkWebview_OnDownloadCancelCompletionHandler(webView: IWKWebView; download: TWKDownload; aData: Pointer; aLength: Integer {NSData});
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnDownloadDecideDestinationUsingResponseSuggestedFilename(webView: IWKWebView; download: TWKDownload; response: TNSURLResponse; suggestedFilename: string);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnDownloadWillPerformHTTPRedirectionNewRequest(webView: IWKWebView; download: TWKDownload; response: TNSHTTPURLResponse; request: TNSURLRequest);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnDownloadFinish(webView: IWKWebView; download: TWKDownload);
begin
  SendEvent([webView]);
end;

procedure TWKEvent.WkWebview_OnDownloadFailWithError(webView: IWKWebView; download: TWKDownload; error: string; aData: Pointer; aLength: Integer {NSData});
begin
  SendEvent([webView]);
end;


end.
