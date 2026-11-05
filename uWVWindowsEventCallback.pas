//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uWVWindowsEventCallback;

{$mode objfpc}{$H+}

{$Z4+}

{$I ExtDecl.inc}

interface

uses
  Controls, Forms, ComCtrls, Menus, ExtCtrls, Classes, SysUtils, Graphics, LCLType, ImgList, FPImage, Messages, Types,
  // wv2
  uWVTypes, uWVTypeLibrary,
  uTools, uWVWindowsRecordStruct, uWVArrayWrap;

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
    procedure TWVBrowserBase_TNotifyEvent(Sender: TObject);
    procedure TWVBrowserBase_TOnAcceleratorKeyPressedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs);
    procedure TWVBrowserBase_TOnAddScriptToExecuteOnDocumentCreatedCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: wvstring);
    procedure TWVBrowserBase_TOnBasicAuthenticationRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs);
    procedure TWVBrowserBase_TOnBrowserExtensionEnableCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
    procedure TWVBrowserBase_TOnBrowserExtensionRemoveCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
    procedure TWVBrowserBase_TOnBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
    procedure TWVBrowserBase_TOnBytesReceivedChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
    procedure TWVBrowserBase_TOnCallDevToolsProtocolMethodCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: wvstring; aExecutionID: integer);
    procedure TWVBrowserBase_TOnCapturePreviewCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure TWVBrowserBase_TOnClearBrowsingDataCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure TWVBrowserBase_TOnClearCacheCompletedEvent(Sender: TObject; aResult: boolean);
    procedure TWVBrowserBase_TOnClearDataForOriginCompletedEvent(Sender: TObject; aResult: boolean);
    procedure TWVBrowserBase_TOnClientCertificateRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs);
    procedure TWVBrowserBase_TOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
    procedure TWVBrowserBase_TOnContentLoadingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContentLoadingEventArgs);
    procedure TWVBrowserBase_TOnContextMenuRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContextMenuRequestedEventArgs);
    procedure TWVBrowserBase_TOnCustomItemSelectedEvent(Sender: TObject; const aMenuItem: ICoreWebView2ContextMenuItem);
    procedure TWVBrowserBase_TOnDOMContentLoadedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DOMContentLoadedEventArgs);
    procedure TWVBrowserBase_TOnDevToolsProtocolEventReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs; const aEventName : wvstring; aEventID : integer);
    procedure TWVBrowserBase_TOnDownloadStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DownloadStartingEventArgs);
    procedure TWVBrowserBase_TOnDownloadStateChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
    procedure TWVBrowserBase_TOnEstimatedEndTimeChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
    procedure TWVBrowserBase_TOnExecuteScriptCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring; aExecutionID: integer);
    procedure TWVBrowserBase_TOnExecuteScriptWithResultCompletedEvent(Sender: TObject; errorCode: HResult; const aResult: ICoreWebView2ExecuteScriptResult; aExecutionID : integer);
    procedure TWVBrowserBase_TOnFaviconChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: IUnknown);
    procedure TWVBrowserBase_TOnFrameContentLoadingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ContentLoadingEventArgs; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFrameCreatedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2FrameCreatedEventArgs);
    procedure TWVBrowserBase_TOnFrameDOMContentLoadedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2DOMContentLoadedEventArgs; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFrameDestroyedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFrameNameChangedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFrameNavigationCompletedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationCompletedEventArgs; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFrameNavigationStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationStartingEventArgs; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFramePermissionRequestedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2PermissionRequestedEventArgs2; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFrameScreenCaptureStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ScreenCaptureStartingEventArgs; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnFrameWebMessageReceivedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2WebMessageReceivedEventArgs; aFrameID: cardinal);
    procedure TWVBrowserBase_TOnGetCookiesCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2CookieList);
    procedure TWVBrowserBase_TOnGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
    procedure TWVBrowserBase_TOnGetFaviconCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: IStream);
    procedure TWVBrowserBase_TOnGetNonDefaultPermissionSettingsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2PermissionSettingCollectionView);
    procedure TWVBrowserBase_TOnGetProcessExtendedInfosCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2ProcessExtendedInfoCollection);
    procedure TWVBrowserBase_TOnIgnoreCertificateErrorsCompletedEvent(Sender: TObject; aResult: boolean);
    procedure TWVBrowserBase_TOnInitializationErrorEvent(Sender: TObject; aErrorCode: HRESULT; const aErrorMessage: wvstring);
    procedure TWVBrowserBase_TOnIsDefaultDownloadDialogOpenChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure TWVBrowserBase_TOnIsDocumentPlayingAudioChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure TWVBrowserBase_TOnIsMutedChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure TWVBrowserBase_TOnLaunchingExternalUriSchemeEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs);
    procedure TWVBrowserBase_TOnMoveFocusRequestedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2MoveFocusRequestedEventArgs);
    procedure TWVBrowserBase_TOnNavigationCompletedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationCompletedEventArgs);
    procedure TWVBrowserBase_TOnNavigationStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationStartingEventArgs);
    procedure TWVBrowserBase_TOnNewWindowRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NewWindowRequestedEventArgs);
    procedure TWVBrowserBase_TOnNonClientRegionChangedEvent(Sender: TObject; const aController : ICoreWebView2CompositionController; const aArgs : ICoreWebView2NonClientRegionChangedEventArgs);
    procedure TWVBrowserBase_TOnNotificationCloseRequestedEvent(Sender: TObject; const aNotification: ICoreWebView2Notification; const aArgs: IUnknown);
    procedure TWVBrowserBase_TOnNotificationReceivedEvent(Sender: TObject; const aWebView : ICoreWebView2; const aArgs : ICoreWebView2NotificationReceivedEventArgs);
    procedure TWVBrowserBase_TOnOfflineCompletedEvent(Sender: TObject; aResult: boolean);
    procedure TWVBrowserBase_TOnPermissionRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2PermissionRequestedEventArgs);
    procedure TWVBrowserBase_TOnPrintCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aResult: TWVPrintStatus);
    procedure TWVBrowserBase_TOnPrintToPdfCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aResult: boolean);
    procedure TWVBrowserBase_TOnPrintToPdfStreamCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: IStream);
    procedure TWVBrowserBase_TOnProcessFailedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ProcessFailedEventArgs);
    procedure TWVBrowserBase_TOnProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
    procedure TWVBrowserBase_TOnProfileAddBrowserExtensionCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2BrowserExtension);
    procedure TWVBrowserBase_TOnProfileDeletedEvent(Sender: TObject; const aProfile: ICoreWebView2Profile);
    procedure TWVBrowserBase_TOnProfileGetBrowserExtensionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2BrowserExtensionList);
    procedure TWVBrowserBase_TOnRefreshIgnoreCacheCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring);
    procedure TWVBrowserBase_TOnRetrieveHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aHTML: wvstring);
    procedure TWVBrowserBase_TOnRetrieveMHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aMHTML: wvstring);
    procedure TWVBrowserBase_TOnRetrieveTextCompletedEvent(Sender: TObject; aResult: boolean; const aText: wvstring);
    procedure TWVBrowserBase_TOnSaveAsUIShowingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SaveAsUIShowingEventArgs);
    procedure TWVBrowserBase_TOnSaveFileSecurityCheckStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SaveFileSecurityCheckStartingEventArgs);
    procedure TWVBrowserBase_TOnScreenCaptureStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScreenCaptureStartingEventArgs);
    procedure TWVBrowserBase_TOnScriptDialogOpeningEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs);
    procedure TWVBrowserBase_TOnServerCertificateErrorActionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure TWVBrowserBase_TOnServerCertificateErrorDetectedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs);
    procedure TWVBrowserBase_TOnSetPermissionStateCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure TWVBrowserBase_TOnShowSaveAsUICompletedEvent(Sender: TObject; aErrorCode: HResult; aResult: TWVSaveAsUIResult);
    procedure TWVBrowserBase_TOnSimulateKeyEventCompletedEvent(Sender: TObject; aResult: boolean);
    procedure TWVBrowserBase_TOnSourceChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SourceChangedEventArgs);
    procedure TWVBrowserBase_TOnStatusBarTextChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure TWVBrowserBase_TOnTrySuspendCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aResult: boolean);
    procedure TWVBrowserBase_TOnWebMessageReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebMessageReceivedEventArgs);
    procedure TWVBrowserBase_TOnWebResourceRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceRequestedEventArgs);
    procedure TWVBrowserBase_TOnWebResourceResponseReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs);
    procedure TWVBrowserBase_TOnWebResourceResponseViewGetContentCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: IStream; aResourceID : integer);
    procedure TWVWinControl_TDragDropEvent(Sender, Source: TObject; X,Y: Integer);
    procedure TWVWinControl_TDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
    procedure TWVWinControl_TEndDragEvent(Sender, Target: TObject; X,Y: Integer);
    procedure TWVWinControl_TStartDragEvent(Sender: TObject; var DragObject: TDragObject);

  end;

// 公共发送事件函数
procedure WVSendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

// 非 of object 事件方法定义, 此处包括 var 指针定义部分
procedure TWVLoader_TLoaderBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
procedure TWVLoader_TLoaderGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
procedure TWVLoader_TLoaderNewBrowserVersionAvailableEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
procedure TWVLoader_TLoaderNotifyEvent(Sender: TObject);
procedure TWVLoader_TLoaderProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);

var
  TWVLoader_TLoaderBrowserProcessExitedEventPtr : Pointer = nil;
  TWVLoader_TLoaderGetCustomSchemesEventPtr : Pointer = nil;
  TWVLoader_TLoaderNewBrowserVersionAvailableEventPtr : Pointer = nil;
  TWVLoader_TLoaderNotifyEventPtr : Pointer = nil;
  TWVLoader_TLoaderProcessInfosChangedEventPtr : Pointer = nil;

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

procedure TWVEvent.TWVBrowserBase_TNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TWVEvent.TWVBrowserBase_TOnAcceleratorKeyPressedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs);
begin
  SendEvent([Sender, aController, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnAddScriptToExecuteOnDocumentCreatedCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResult)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnBasicAuthenticationRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnBrowserExtensionEnableCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aExtensionID)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnBrowserExtensionRemoveCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aExtensionID)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
begin
  SendEvent([Sender, aEnvironment, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnBytesReceivedChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnCallDevToolsProtocolMethodCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: wvstring; aExecutionID: integer);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResult), aExecutionID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnCapturePreviewCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.TWVBrowserBase_TOnClearBrowsingDataCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.TWVBrowserBase_TOnClearCacheCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnClearDataForOriginCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnClientCertificateRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
begin
  SendEvent([Sender, @aMessage, @aHandled]);
end;

procedure TWVEvent.TWVBrowserBase_TOnContentLoadingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContentLoadingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnContextMenuRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContextMenuRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnCustomItemSelectedEvent(Sender: TObject; const aMenuItem: ICoreWebView2ContextMenuItem);
begin
  SendEvent([Sender, aMenuItem]);
end;

procedure TWVEvent.TWVBrowserBase_TOnDOMContentLoadedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DOMContentLoadedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnDevToolsProtocolEventReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs; const aEventName : wvstring; aEventID : integer);
begin
  SendEvent([Sender, aWebView, aArgs, ToPChar(aEventName), aEventID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnDownloadStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DownloadStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnDownloadStateChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnEstimatedEndTimeChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnExecuteScriptCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring; aExecutionID: integer);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResultObjectAsJson), aExecutionID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnExecuteScriptWithResultCompletedEvent(Sender: TObject; errorCode: HResult; const aResult: ICoreWebView2ExecuteScriptResult; aExecutionID : integer);
begin
  SendEvent([Sender, errorCode, aResult, aExecutionID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFaviconChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: IUnknown);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameContentLoadingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ContentLoadingEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameCreatedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2FrameCreatedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameDOMContentLoadedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2DOMContentLoadedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameDestroyedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameNameChangedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameNavigationCompletedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationCompletedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameNavigationStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationStartingEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFramePermissionRequestedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2PermissionRequestedEventArgs2; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameScreenCaptureStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ScreenCaptureStartingEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnFrameWebMessageReceivedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2WebMessageReceivedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.TWVBrowserBase_TOnGetCookiesCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2CookieList);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
var
  aCustomSchemesWrap: TWVCustomSchemeInfoArrayWrap;
begin
  aCustomSchemesWrap := TWVCustomSchemeInfoArrayWrap.Create(aCustomSchemes);
  SendEvent([Sender, @aCustomSchemesWrap]);
  if aCustomSchemesWrap.Size() > 0 then
    aCustomSchemes := aCustomSchemesWrap.WVCustomSchemeInfoArrayData()^;
  aCustomSchemesWrap.Free();
end;

procedure TWVEvent.TWVBrowserBase_TOnGetFaviconCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: IStream);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnGetNonDefaultPermissionSettingsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2PermissionSettingCollectionView);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnGetProcessExtendedInfosCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2ProcessExtendedInfoCollection);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnIgnoreCertificateErrorsCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnInitializationErrorEvent(Sender: TObject; aErrorCode: HRESULT; const aErrorMessage: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aErrorMessage)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnIsDefaultDownloadDialogOpenChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TWVEvent.TWVBrowserBase_TOnIsDocumentPlayingAudioChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TWVEvent.TWVBrowserBase_TOnIsMutedChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TWVEvent.TWVBrowserBase_TOnLaunchingExternalUriSchemeEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnMoveFocusRequestedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2MoveFocusRequestedEventArgs);
begin
  SendEvent([Sender, aController, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnNavigationCompletedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationCompletedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnNavigationStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnNewWindowRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NewWindowRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnNonClientRegionChangedEvent(Sender: TObject; const aController : ICoreWebView2CompositionController; const aArgs : ICoreWebView2NonClientRegionChangedEventArgs);
begin
  SendEvent([Sender, aController, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnNotificationCloseRequestedEvent(Sender: TObject; const aNotification: ICoreWebView2Notification; const aArgs: IUnknown);
begin
  SendEvent([Sender, aNotification, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnNotificationReceivedEvent(Sender: TObject; const aWebView : ICoreWebView2; const aArgs : ICoreWebView2NotificationReceivedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnOfflineCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnPermissionRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2PermissionRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnPrintCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aResult: TWVPrintStatus);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnPrintToPdfCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aResult: boolean);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnPrintToPdfStreamCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: IStream);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnProcessFailedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ProcessFailedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
begin
  SendEvent([Sender, aEnvironment]);
end;

procedure TWVEvent.TWVBrowserBase_TOnProfileAddBrowserExtensionCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2BrowserExtension);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnProfileDeletedEvent(Sender: TObject; const aProfile: ICoreWebView2Profile);
begin
  SendEvent([Sender, aProfile]);
end;

procedure TWVEvent.TWVBrowserBase_TOnProfileGetBrowserExtensionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: ICoreWebView2BrowserExtensionList);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnRefreshIgnoreCacheCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResultObjectAsJson)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnRetrieveHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aHTML: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aHTML)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnRetrieveMHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aMHTML: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aMHTML)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnRetrieveTextCompletedEvent(Sender: TObject; aResult: boolean; const aText: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aText)]);
end;

procedure TWVEvent.TWVBrowserBase_TOnSaveAsUIShowingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SaveAsUIShowingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnSaveFileSecurityCheckStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SaveFileSecurityCheckStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnScreenCaptureStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScreenCaptureStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnScriptDialogOpeningEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnServerCertificateErrorActionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.TWVBrowserBase_TOnServerCertificateErrorDetectedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnSetPermissionStateCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.TWVBrowserBase_TOnShowSaveAsUICompletedEvent(Sender: TObject; aErrorCode: HResult; aResult: TWVSaveAsUIResult);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnSimulateKeyEventCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnSourceChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SourceChangedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnStatusBarTextChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TWVEvent.TWVBrowserBase_TOnTrySuspendCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aResult: boolean);
begin
  SendEvent([Sender, aErrorCode, aResult]);
end;

procedure TWVEvent.TWVBrowserBase_TOnWebMessageReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebMessageReceivedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnWebResourceRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnWebResourceResponseReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.TWVBrowserBase_TOnWebResourceResponseViewGetContentCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResult: IStream; aResourceID : integer);
begin
  SendEvent([Sender, aErrorCode, aResult, aResourceID]);
end;

procedure TWVEvent.TWVWinControl_TDragDropEvent(Sender, Source: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TWVEvent.TWVWinControl_TDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, Integer(State), @Accept]);
end;

procedure TWVEvent.TWVWinControl_TEndDragEvent(Sender, Target: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

procedure TWVEvent.TWVWinControl_TStartDragEvent(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;



// 非 of object 事件方法定义实现
procedure TWVLoader_TLoaderBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
begin
  if TWVLoader_TLoaderBrowserProcessExitedEventPtr <> nil then
    WVSendEventByPointer(TWVLoader_TLoaderBrowserProcessExitedEventPtr, [Sender, aEnvironment, aArgs]);
end;

procedure TWVLoader_TLoaderGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
var
  aCustomSchemesWrap: TWVCustomSchemeInfoArrayWrap;
begin
  aCustomSchemesWrap := TWVCustomSchemeInfoArrayWrap.Create(aCustomSchemes);
  if TWVLoader_TLoaderGetCustomSchemesEventPtr <> nil then
    WVSendEventByPointer(TWVLoader_TLoaderGetCustomSchemesEventPtr, [Sender, @aCustomSchemesWrap]);
  if aCustomSchemesWrap.Size() > 0 then
    aCustomSchemes := aCustomSchemesWrap.WVCustomSchemeInfoArrayData()^;
  aCustomSchemesWrap.Free();
end;

procedure TWVLoader_TLoaderNewBrowserVersionAvailableEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
begin
  if TWVLoader_TLoaderNewBrowserVersionAvailableEventPtr <> nil then
    WVSendEventByPointer(TWVLoader_TLoaderNewBrowserVersionAvailableEventPtr, [Sender, aEnvironment]);
end;

procedure TWVLoader_TLoaderNotifyEvent(Sender: TObject);
begin
  if TWVLoader_TLoaderNotifyEventPtr <> nil then
    WVSendEventByPointer(TWVLoader_TLoaderNotifyEventPtr, [Sender]);
end;

procedure TWVLoader_TLoaderProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
begin
  if TWVLoader_TLoaderProcessInfosChangedEventPtr <> nil then
    WVSendEventByPointer(TWVLoader_TLoaderProcessInfosChangedEventPtr, [Sender, aEnvironment]);
end;



end.
