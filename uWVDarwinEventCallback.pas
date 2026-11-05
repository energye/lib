//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uWVDarwinEventCallback;

{$mode objfpc}{$H+}

{$Z4+}

{$I ExtDecl.inc}

interface

uses
  Classes,
  SysUtils,
  uTools,
  CocoaAll, uWebKit, uWVDarwinRecordStruct, uWkTypes;

const
  // CALL 最长参数数
  CALL_MAX_PARAM = 12;

type
  // 基础事件回调函数
  TWVEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;
  // 清除事件回调函数
  TWVRemoveEventCallPtr = function(f: Pointer): Pointer; extdecl;

var
  GWVEventCallbackPtr: TWVEventCallbackPtr;
  GWVRemoveEventCallbackPtr: TWVRemoveEventCallPtr;

type

  { TWVEventBase }

  TWVEventBase = class
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

  { TWVEvent }

  TWVEvent = class(TWVEventBase)
  public
    // ----------------- 事件定义 -------------------------------
    procedure TWkWebview_TWKConcludeDragOperation(sender: NSDraggingInfoProtocol; var handle: Boolean);
    function TWkWebview_TWKCreateWebView(sender: TObject; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
    procedure TWkWebview_TWKDecidePolicyForNavigationActionPreferences(sender: TObject; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences);
    procedure TWkWebview_TWKDecidePolicyForNavigationResponse(sender: TObject; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
    procedure TWkWebview_TWKDownloadCancelCompletionHandler(sender: TObject; download: WKDownload; aData: Pointer; aLength: Integer );
    procedure TWkWebview_TWKDownloadDecideDestinationUsingResponseSuggestedFilename(sender: TObject; download: WKDownload; response: NSURLResponse; suggestedFilename: string);
    procedure TWkWebview_TWKDownloadFailWithError(sender: TObject; download: WKDownload; error: string; aData: Pointer; aLength: Integer );
    procedure TWkWebview_TWKDownloadFinish(sender: TObject; download: WKDownload);
    procedure TWkWebview_TWKDownloadWillPerformHTTPRedirectionNewRequest(sender: TObject; download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest);
    procedure TWkWebview_TWKDraggingEnded(sender: NSDraggingInfoProtocol; var handle: Boolean);
    function TWkWebview_TWKDraggingEntered(sender: NSDraggingInfoProtocol; var handle: Boolean): Integer;
    procedure TWkWebview_TWKDraggingExited(sender: NSDraggingInfoProtocol; var handle: Boolean);
    function TWkWebview_TWKDraggingUpdated(sender: NSDraggingInfoProtocol; var handle: Boolean): Integer;
    function TWkWebview_TWKPerformDragOperation(sender: NSDraggingInfoProtocol): Boolean;
    function TWkWebview_TWKPrepareForDragOperation(sender: NSDraggingInfoProtocol): Boolean;
    procedure TWkWebview_TWKRunJavaScriptAlert(sender: TObject; message_: string; frame: WKFrameInfo);
    function TWkWebview_TWKRunJavaScriptConfirmCompletion(sender: TObject; message_: string; frame: WKFrameInfo): Boolean;
    function TWkWebview_TWKRunJavaScriptTextInputCompletion(sender: TObject; prompt: string; defaultText: string; frame: WKFrameInfo): string;
    procedure TWkWebview_TWKStartURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
    procedure TWkWebview_TWKStopURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
    procedure TWkWebview_TWKUpdateDraggingItemsForDrag(sender: NSDraggingInfoProtocol; var handle: Boolean);
    function TWkWebview_TWKWantsPeriodicDraggingUpdates(): Boolean;
    procedure TWkWebview_TWKWebViewDidClose(sender: TObject);
    procedure TWkWebview_TWkCommitNavigation(sender: TObject; navigation: WKNavigation);
    procedure TWkWebview_TWkFailNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
    procedure TWkWebview_TWkFailProvisionalNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
    procedure TWkWebview_TWkFinishNavigation(sender: TObject; navigation: WKNavigation);
    procedure TWkWebview_TWkMouseEvent(Sender: TObject; event: PWKButtonEvent);
    procedure TWkWebview_TWkNavigationActionDidBecomeDownload(sender: TObject; navigationAction: WKNavigationAction; download: WKDownload);
    procedure TWkWebview_TWkNavigationResponseDidBecomeDownload(sender: TObject; navigationResponse: WKNavigationResponse; download: WKDownload);
    procedure TWkWebview_TWkProcessMessageEvent(sender: TObject; userContentController: WKUserContentController; name, data: string);
    procedure TWkWebview_TWkReceiveServerRedirectForProvisionalNavigation(sender: TObject; navigation: WKNavigation);
    procedure TWkWebview_TWkStartProvisionalNavigation(sender: TObject; navigation: WKNavigation);
    procedure TWkWebview_TWkWebContentProcessDidTerminate(sender: TObject);

  end;

// 公共发送事件函数
procedure WVSendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

// 非 of object 事件方法定义, 此处包括 var 指针定义部分


implementation

class constructor TWVEventBase.Create;
begin
  InitCriticalSection(FEventObjectsLock);
  FEventObjects := TEventObjectList.Create();
end;

class destructor TWVEventBase.Destroy;
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

function TWVEventBase.CheckDataPtr: Boolean;
begin
  Result := FHostDataPtr <> nil;
end;

function TWVEventBase.GetDataPtr: Pointer;
begin
  Result := FHostDataPtr;
end;

class procedure TWVEventBase.CallRemoveEvent(AMethod: TMethod);
begin
  // 通知宿主程序，某个事件要清除了，解除引用。
  if Assigned(GWVRemoveEventCallbackPtr) then
    GWVRemoveEventCallbackPtr(TWVEventBase(AMethod.Data).FHostDataPtr);
end;

procedure TWVEventBase.SendEvent(AArgs: array of const);
begin
  if Assigned(GWVEventCallbackPtr) and CheckDataPtr then
  begin
    // 这里要替换为 Pointer
    WVSendEventByPointer(DataPtr, AArgs);
  end;
end;

procedure WVSendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);
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
        vtString        : LParams[I] := {$IFDEF MSWINDOWS}LV.VString{$ELSE}LV.VAnsiString{$ENDIF};
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
    GWVEventCallbackPtr(EventDataPtr, @LParams[0], LArgLen);
  end;
end;

constructor TWVEventBase.Create(AHostDataPtr: Pointer);
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

destructor TWVEventBase.Destroy;
begin
  inherited Destroy;
end;

class procedure TWVEventBase.Remove(AMethod: TMethod);
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

class function TWVEventBase.CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
begin
  Result := False;
  System.EnterCriticalSection(FEventObjectsLock);
   try
     if AMethod.Data <> nil then
     begin
       // 只有当要替换的数据不同时，则更新
       if TWVEventBase(AMethod.Data).FHostDataPtr <> AHostDataPtr then
       begin
         CallRemoveEvent(AMethod);
         TWVEventBase(AMethod.Data).FHostDataPtr := AHostDataPtr;
         Result := True;
       end;
     end;
   finally
     System.LeaveCriticalSection(FEventObjectsLock);
   end;
end;

{ TWVEvent }

// ----------------- 事件定义实现 -------------------------------

procedure TWVEvent.TWkWebview_TWKConcludeDragOperation(sender: NSDraggingInfoProtocol; var handle: Boolean);
begin
  SendEvent([sender, @handle]);
end;

function TWVEvent.TWkWebview_TWKCreateWebView(sender: TObject; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin
  SendEvent([sender, configuration_, navigationAction, windowFeatures, @Result]);
end;

procedure TWVEvent.TWkWebview_TWKDecidePolicyForNavigationActionPreferences(sender: TObject; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences);
begin
  SendEvent([sender, navigationAction, @actionPolicy, @preferences]);
end;

procedure TWVEvent.TWkWebview_TWKDecidePolicyForNavigationResponse(sender: TObject; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
begin
  SendEvent([sender, navigationResponse, @responsePolicy]);
end;

procedure TWVEvent.TWkWebview_TWKDownloadCancelCompletionHandler(sender: TObject; download: WKDownload; aData: Pointer; aLength: Integer );
begin
  SendEvent([sender, download, aData, aLength]);
end;

procedure TWVEvent.TWkWebview_TWKDownloadDecideDestinationUsingResponseSuggestedFilename(sender: TObject; download: WKDownload; response: NSURLResponse; suggestedFilename: string);
begin
  SendEvent([sender, download, response, ToPChar(suggestedFilename)]);
end;

procedure TWVEvent.TWkWebview_TWKDownloadFailWithError(sender: TObject; download: WKDownload; error: string; aData: Pointer; aLength: Integer );
begin
  SendEvent([sender, download, ToPChar(error), aData, aLength]);
end;

procedure TWVEvent.TWkWebview_TWKDownloadFinish(sender: TObject; download: WKDownload);
begin
  SendEvent([sender, download]);
end;

procedure TWVEvent.TWkWebview_TWKDownloadWillPerformHTTPRedirectionNewRequest(sender: TObject; download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest);
begin
  SendEvent([sender, download, response, request]);
end;

procedure TWVEvent.TWkWebview_TWKDraggingEnded(sender: NSDraggingInfoProtocol; var handle: Boolean);
begin
  SendEvent([sender, @handle]);
end;

function TWVEvent.TWkWebview_TWKDraggingEntered(sender: NSDraggingInfoProtocol; var handle: Boolean): Integer;
begin
  SendEvent([sender, @handle, @Result]);
end;

procedure TWVEvent.TWkWebview_TWKDraggingExited(sender: NSDraggingInfoProtocol; var handle: Boolean);
begin
  SendEvent([sender, @handle]);
end;

function TWVEvent.TWkWebview_TWKDraggingUpdated(sender: NSDraggingInfoProtocol; var handle: Boolean): Integer;
begin
  SendEvent([sender, @handle, @Result]);
end;

function TWVEvent.TWkWebview_TWKPerformDragOperation(sender: NSDraggingInfoProtocol): Boolean;
begin
  SendEvent([sender, @Result]);
end;

function TWVEvent.TWkWebview_TWKPrepareForDragOperation(sender: NSDraggingInfoProtocol): Boolean;
begin
  SendEvent([sender, @Result]);
end;

procedure TWVEvent.TWkWebview_TWKRunJavaScriptAlert(sender: TObject; message_: string; frame: WKFrameInfo);
begin
  SendEvent([sender, ToPChar(message_), frame]);
end;

function TWVEvent.TWkWebview_TWKRunJavaScriptConfirmCompletion(sender: TObject; message_: string; frame: WKFrameInfo): Boolean;
begin
  SendEvent([sender, ToPChar(message_), frame, @Result]);
end;

function TWVEvent.TWkWebview_TWKRunJavaScriptTextInputCompletion(sender: TObject; prompt: string; defaultText: string; frame: WKFrameInfo): string;
begin
  SendEvent([sender, ToPChar(prompt), ToPChar(defaultText), frame, @Result]);
end;

procedure TWVEvent.TWkWebview_TWKStartURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
begin
  SendEvent([sender, urlSchemeTask]);
end;

procedure TWVEvent.TWkWebview_TWKStopURLSchemeTask(sender: TObject; urlSchemeTask: WKURLSchemeTask);
begin
  SendEvent([sender, urlSchemeTask]);
end;

procedure TWVEvent.TWkWebview_TWKUpdateDraggingItemsForDrag(sender: NSDraggingInfoProtocol; var handle: Boolean);
begin
  SendEvent([sender, @handle]);
end;

function TWVEvent.TWkWebview_TWKWantsPeriodicDraggingUpdates(): Boolean;
begin
  SendEvent([@Result]);
end;

procedure TWVEvent.TWkWebview_TWKWebViewDidClose(sender: TObject);
begin
  SendEvent([sender]);
end;

procedure TWVEvent.TWkWebview_TWkCommitNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWVEvent.TWkWebview_TWkFailNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
begin
  SendEvent([sender, navigation, ToPChar(error)]);
end;

procedure TWVEvent.TWkWebview_TWkFailProvisionalNavigationWithError(sender: TObject; navigation: WKNavigation; error: string);
begin
  SendEvent([sender, navigation, ToPChar(error)]);
end;

procedure TWVEvent.TWkWebview_TWkFinishNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWVEvent.TWkWebview_TWkMouseEvent(Sender: TObject; event: PWKButtonEvent);
var
  eventPtr: TWKButtonEventPtr;
begin
  eventPtr := TWKButtonEventToGo(event^);
  SendEvent([Sender, @eventPtr]);
end;

procedure TWVEvent.TWkWebview_TWkNavigationActionDidBecomeDownload(sender: TObject; navigationAction: WKNavigationAction; download: WKDownload);
begin
  SendEvent([sender, navigationAction, download]);
end;

procedure TWVEvent.TWkWebview_TWkNavigationResponseDidBecomeDownload(sender: TObject; navigationResponse: WKNavigationResponse; download: WKDownload);
begin
  SendEvent([sender, navigationResponse, download]);
end;

procedure TWVEvent.TWkWebview_TWkProcessMessageEvent(sender: TObject; userContentController: WKUserContentController; name, data: string);
begin
  SendEvent([sender, userContentController, ToPChar(name), ToPChar(data)]);
end;

procedure TWVEvent.TWkWebview_TWkReceiveServerRedirectForProvisionalNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWVEvent.TWkWebview_TWkStartProvisionalNavigation(sender: TObject; navigation: WKNavigation);
begin
  SendEvent([sender, navigation]);
end;

procedure TWVEvent.TWkWebview_TWkWebContentProcessDidTerminate(sender: TObject);
begin
  SendEvent([sender]);
end;



// 非 of object 事件方法定义实现


end.
