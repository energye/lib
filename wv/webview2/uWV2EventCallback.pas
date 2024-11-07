//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uWV2EventCallback;

{$mode objfpc}{$H+}

{$I ExtDecl.inc}

interface

uses
  Controls,
  Forms,
  ComCtrls,
  Menus,
  ExtCtrls,
  Classes,
  SysUtils,
  Graphics,
  LCLType,
  ImgList,
  FPImage,
  fgl,
  Messages,
  ActiveX,
  uTools,
  uWVTypes, uWVTypeLibrary, uWV2RecordStruct;

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
    procedure OnTNotifyEvent(Sender: TObject);
    procedure OnTDragDropEvent(Sender, Source: TObject; X, Y: Integer);
    procedure OnTDragOverEvent(Sender, Source: TObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
    procedure OnTStartDragEvent(Sender: TObject; var DragObject: TDragObject);
    procedure OnTEndDragEvent(Sender, Target: TObject; X, Y: Integer);

    procedure OnTOnExecuteScriptCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring; aExecutionID: integer);
    procedure OnTOnCapturePreviewCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure OnTOnWebResourceResponseViewGetContentCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aContents: IStream; aResourceID : integer);
    procedure OnTOnGetCookiesCompletedEvent(Sender: TObject; aResult: HRESULT; const aCookieList: ICoreWebView2CookieList);
    procedure OnTOnTrySuspendCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
    procedure OnTOnPrintToPdfCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
    procedure OnTOnCallDevToolsProtocolMethodCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aReturnObjectAsJson: wvstring; aExecutionID: integer);
    procedure OnTOnAddScriptToExecuteOnDocumentCreatedCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aID: wvstring);
    procedure OnTOnMoveFocusRequestedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2MoveFocusRequestedEventArgs);
    procedure OnTOnAcceleratorKeyPressedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs);
    procedure OnTOnBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
    procedure OnTOnNavigationStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationStartingEventArgs);
    procedure OnTOnNavigationCompletedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationCompletedEventArgs);
    procedure OnTOnSourceChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SourceChangedEventArgs);
    procedure OnTOnContentLoadingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContentLoadingEventArgs);
    procedure OnTOnNewWindowRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NewWindowRequestedEventArgs);
    procedure OnTOnWebResourceRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceRequestedEventArgs);
    procedure OnTOnScriptDialogOpeningEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs);
    procedure OnTOnPermissionRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2PermissionRequestedEventArgs);
    procedure OnTOnProcessFailedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ProcessFailedEventArgs);
    procedure OnTOnWebMessageReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebMessageReceivedEventArgs);
    procedure OnTOnDevToolsProtocolEventReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs; const aEventName : wvstring; aEventID : integer);
    procedure OnTOnWebResourceResponseReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs);
    procedure OnTOnDOMContentLoadedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DOMContentLoadedEventArgs);
    procedure OnTOnFrameCreatedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2FrameCreatedEventArgs);
    procedure OnTOnDownloadStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DownloadStartingEventArgs);
    procedure OnTOnClientCertificateRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs);
    procedure OnTOnBytesReceivedChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
    procedure OnTOnEstimatedEndTimeChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
    procedure OnTOnDownloadStateChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
    procedure OnTOnFrameNameChangedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
    procedure OnTOnFrameDestroyedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
    procedure OnTOnInitializationErrorEvent(Sender: TObject; aErrorCode: HRESULT; const aErrorMessage: wvstring);
    procedure OnTOnPrintCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aPrintStatus: TWVPrintStatus);
    procedure OnTOnRefreshIgnoreCacheCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring);
    procedure OnTOnRetrieveHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aHTML: wvstring);
    procedure OnTOnRetrieveTextCompletedEvent(Sender: TObject; aResult: boolean; const aText: wvstring);
    procedure OnTOnRetrieveMHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aMHTML: wvstring);
    procedure OnTOnClearCacheCompletedEvent(Sender: TObject; aResult: boolean);
    procedure OnTOnClearDataForOriginCompletedEvent(Sender: TObject; aResult: boolean);
    procedure OnTOnOfflineCompletedEvent(Sender: TObject; aResult: boolean);
    procedure OnTOnIgnoreCertificateErrorsCompletedEvent(Sender: TObject; aResult: boolean);
    procedure OnTOnSimulateKeyEventCompletedEvent(Sender: TObject; aResult: boolean);
    procedure OnTOnIsMutedChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure OnTOnIsDocumentPlayingAudioChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure OnTOnIsDefaultDownloadDialogOpenChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure OnTOnProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
    procedure OnTOnFrameNavigationStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationStartingEventArgs; aFrameID: cardinal);
    procedure OnTOnFrameNavigationCompletedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationCompletedEventArgs; aFrameID: cardinal);
    procedure OnTOnFrameContentLoadingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ContentLoadingEventArgs; aFrameID: cardinal);
    procedure OnTOnFrameDOMContentLoadedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2DOMContentLoadedEventArgs; aFrameID: cardinal);
    procedure OnTOnFrameWebMessageReceivedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2WebMessageReceivedEventArgs; aFrameID: cardinal);
    procedure OnTOnBasicAuthenticationRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs);
    procedure OnTOnContextMenuRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContextMenuRequestedEventArgs);
    procedure OnTOnCustomItemSelectedEvent(Sender: TObject; const aMenuItem: ICoreWebView2ContextMenuItem);
    procedure OnTOnStatusBarTextChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
    procedure OnTOnFramePermissionRequestedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2PermissionRequestedEventArgs2; aFrameID: cardinal);
    procedure OnTOnClearBrowsingDataCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure OnTOnServerCertificateErrorActionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure OnTOnServerCertificateErrorDetectedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs);
    procedure OnTOnFaviconChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: IUnknown);
    procedure OnTOnGetFaviconCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aFaviconStream: IStream);
    procedure OnTOnPrintToPdfStreamCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aPdfStream: IStream);
    procedure OnTOnGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
    procedure OnTOnGetNonDefaultPermissionSettingsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aCollectionView: ICoreWebView2PermissionSettingCollectionView);
    procedure OnTOnSetPermissionStateCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
    procedure OnTOnLaunchingExternalUriSchemeEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs);
    procedure OnTOnGetProcessExtendedInfosCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aValue: ICoreWebView2ProcessExtendedInfoCollection);
    procedure OnTOnBrowserExtensionRemoveCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
    procedure OnTOnBrowserExtensionEnableCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
    procedure OnTOnProfileAddBrowserExtensionCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extension: ICoreWebView2BrowserExtension);
    procedure OnTOnProfileGetBrowserExtensionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extensionList: ICoreWebView2BrowserExtensionList);
    procedure OnTOnProfileDeletedEvent(Sender: TObject; const aProfile: ICoreWebView2Profile);
    procedure OnTOnExecuteScriptWithResultCompletedEvent(Sender: TObject; errorCode: HResult; const result_: ICoreWebView2ExecuteScriptResult; aExecutionID : integer);

    // Custom events
    procedure OnTOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
  end;


// 公共发送事件函数
procedure SendWVEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

implementation

{ TWVEventBase }

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
    SendWVEventByPointer(DataPtr, AArgs);
  end;
end;

procedure SendWVEventByPointer(EventDataPtr: Pointer; AArgs: array of const);
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

// ----------------- 事件实现 -------------------------------


procedure TWVEvent.OnTNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TWVEvent.OnTDragDropEvent(Sender, Source: TObject; X, Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TWVEvent.OnTDragOverEvent(Sender, Source: TObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, Integer(State), Pointer(@Accept)]);
end;

procedure TWVEvent.OnTStartDragEvent(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TWVEvent.OnTEndDragEvent(Sender, Target: TObject; X, Y: Integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

// Browser events
procedure TWVEvent.OnTOnExecuteScriptCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring; aExecutionID: integer);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResultObjectAsJson), aExecutionID]);
end;

procedure TWVEvent.OnTOnCapturePreviewCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.OnTOnWebResourceResponseViewGetContentCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aContents: IStream; aResourceID : integer);
begin
  SendEvent([Sender, aErrorCode, aContents, aResourceID]);
end;

procedure TWVEvent.OnTOnGetCookiesCompletedEvent(Sender: TObject; aResult: HRESULT; const aCookieList: ICoreWebView2CookieList);
begin
  SendEvent([Sender, aResult, aCookieList]);
end;

procedure TWVEvent.OnTOnTrySuspendCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
begin
  SendEvent([Sender, aErrorCode, aIsSuccessful]);
end;

procedure TWVEvent.OnTOnPrintToPdfCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aIsSuccessful: boolean);
begin
  SendEvent([Sender, aErrorCode, aIsSuccessful]);
end;

procedure TWVEvent.OnTOnCallDevToolsProtocolMethodCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aReturnObjectAsJson: wvstring; aExecutionID: integer);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aReturnObjectAsJson), aExecutionID]);
end;

procedure TWVEvent.OnTOnAddScriptToExecuteOnDocumentCreatedCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aID)]);
end;

procedure TWVEvent.OnTOnMoveFocusRequestedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2MoveFocusRequestedEventArgs);
begin
  SendEvent([Sender, aController, aArgs]);
end;

procedure TWVEvent.OnTOnAcceleratorKeyPressedEvent(Sender: TObject; const aController: ICoreWebView2Controller; const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs);
begin
  SendEvent([Sender, aController, aArgs]);
end;

procedure TWVEvent.OnTOnBrowserProcessExitedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment; const aArgs: ICoreWebView2BrowserProcessExitedEventArgs);
begin
  SendEvent([Sender, aEnvironment, aArgs]);
end;

procedure TWVEvent.OnTOnNavigationStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnNavigationCompletedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NavigationCompletedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnSourceChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2SourceChangedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnContentLoadingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContentLoadingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnNewWindowRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2NewWindowRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnWebResourceRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnScriptDialogOpeningEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnPermissionRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2PermissionRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnProcessFailedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ProcessFailedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnWebMessageReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebMessageReceivedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnDevToolsProtocolEventReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DevToolsProtocolEventReceivedEventArgs; const aEventName : wvstring; aEventID : integer);
begin
  SendEvent([Sender, aWebView, aArgs, ToPChar(aEventName), aEventID]);
end;

procedure TWVEvent.OnTOnWebResourceResponseReceivedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnDOMContentLoadedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DOMContentLoadedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnFrameCreatedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2FrameCreatedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnDownloadStartingEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2DownloadStartingEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnClientCertificateRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ClientCertificateRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnBytesReceivedChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TWVEvent.OnTOnEstimatedEndTimeChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TWVEvent.OnTOnDownloadStateChangedEvent(Sender: TObject; const aDownloadOperation: ICoreWebView2DownloadOperation; aDownloadID: integer);
begin
  SendEvent([Sender, aDownloadOperation, aDownloadID]);
end;

procedure TWVEvent.OnTOnFrameNameChangedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aFrameID]);
end;

procedure TWVEvent.OnTOnFrameDestroyedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aFrameID]);
end;

procedure TWVEvent.OnTOnInitializationErrorEvent(Sender: TObject; aErrorCode: HRESULT; const aErrorMessage: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aErrorMessage)]);
end;

procedure TWVEvent.OnTOnPrintCompletedEvent(Sender: TObject; aErrorCode: HRESULT; aPrintStatus: TWVPrintStatus);
begin
  SendEvent([Sender, aErrorCode, aPrintStatus]);
end;

procedure TWVEvent.OnTOnRefreshIgnoreCacheCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aResultObjectAsJson: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aResultObjectAsJson)]);
end;

procedure TWVEvent.OnTOnRetrieveHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aHTML: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aHTML)]);
end;

procedure TWVEvent.OnTOnRetrieveTextCompletedEvent(Sender: TObject; aResult: boolean; const aText: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aText)]);
end;

procedure TWVEvent.OnTOnRetrieveMHTMLCompletedEvent(Sender: TObject; aResult: boolean; const aMHTML: wvstring);
begin
  SendEvent([Sender, aResult, ToPChar(aMHTML)]);
end;

procedure TWVEvent.OnTOnClearCacheCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.OnTOnClearDataForOriginCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.OnTOnOfflineCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.OnTOnIgnoreCertificateErrorsCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.OnTOnSimulateKeyEventCompletedEvent(Sender: TObject; aResult: boolean);
begin
  SendEvent([Sender, aResult]);
end;

procedure TWVEvent.OnTOnIsMutedChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TWVEvent.OnTOnIsDocumentPlayingAudioChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TWVEvent.OnTOnIsDefaultDownloadDialogOpenChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender, aWebView]);
end;

procedure TWVEvent.OnTOnProcessInfosChangedEvent(Sender: TObject; const aEnvironment: ICoreWebView2Environment);
begin
  SendEvent([Sender, aEnvironment]);
end;

procedure TWVEvent.OnTOnFrameNavigationStartingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationStartingEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.OnTOnFrameNavigationCompletedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2NavigationCompletedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.OnTOnFrameContentLoadingEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2ContentLoadingEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.OnTOnFrameDOMContentLoadedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2DOMContentLoadedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.OnTOnFrameWebMessageReceivedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2WebMessageReceivedEventArgs; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.OnTOnBasicAuthenticationRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnContextMenuRequestedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ContextMenuRequestedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnCustomItemSelectedEvent(Sender: TObject; const aMenuItem: ICoreWebView2ContextMenuItem);
begin
  SendEvent([Sender, aMenuItem]);
end;

procedure TWVEvent.OnTOnStatusBarTextChangedEvent(Sender: TObject; const aWebView: ICoreWebView2);
begin
  SendEvent([Sender,aWebView]);
end;

procedure TWVEvent.OnTOnFramePermissionRequestedEvent(Sender: TObject; const aFrame: ICoreWebView2Frame; const aArgs: ICoreWebView2PermissionRequestedEventArgs2; aFrameID: cardinal);
begin
  SendEvent([Sender, aFrame, aArgs, aFrameID]);
end;

procedure TWVEvent.OnTOnClearBrowsingDataCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.OnTOnServerCertificateErrorActionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.OnTOnServerCertificateErrorDetectedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2ServerCertificateErrorDetectedEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnFaviconChangedEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: IUnknown);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnGetFaviconCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aFaviconStream: IStream);
begin
  SendEvent([Sender, aErrorCode, aFaviconStream]);
end;

procedure TWVEvent.OnTOnPrintToPdfStreamCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aPdfStream: IStream);
begin
  SendEvent([Sender, aErrorCode, aPdfStream]);
end;

procedure TWVEvent.OnTOnGetCustomSchemesEvent(Sender: TObject; var aCustomSchemes: TWVCustomSchemeInfoArray);
var
  RetData, currentData: Pointer; // 数据指针
  RetSize: integer; // 数据个数
  idx, customSchemeInfoSizeOf: integer; // 遍历，和record大小
  customSchemePtr: TCustomSchemeInfoPtr;// 在指针地址取值
begin
  SendEvent([Sender, @RetData, @RetSize]);
  if RetSize > 0 then
  begin
    customSchemeInfoSizeOf := SizeOf(TCustomSchemeInfoPtr); // record大小
    SetLength(aCustomSchemes, RetSize); // 初始化数组大小
    for idx := 0 to RetSize - 1 do
    begin
      currentData := RetData + customSchemeInfoSizeOf * idx; // 当前数据指针
      customSchemePtr := PCustomSchemeInfoPtr(currentData)^; // 取出数据转成自定义URL协议record
      // 设置值
      aCustomSchemes[idx].SchemeName := PCharToUStr(customSchemePtr.SchemeName);
      aCustomSchemes[idx].TreatAsSecure := customSchemePtr.TreatAsSecure;
      aCustomSchemes[idx].AllowedDomains := PCharToUStr(customSchemePtr.AllowedDomains);
      aCustomSchemes[idx].HasAuthorityComponent := customSchemePtr.HasAuthorityComponent;
    end;
  end;
end;

procedure TWVEvent.OnTOnGetNonDefaultPermissionSettingsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aCollectionView: ICoreWebView2PermissionSettingCollectionView);
begin
  SendEvent([Sender, aErrorCode, aCollectionView]);
end;

procedure TWVEvent.OnTOnSetPermissionStateCompletedEvent(Sender: TObject; aErrorCode: HRESULT);
begin
  SendEvent([Sender, aErrorCode]);
end;

procedure TWVEvent.OnTOnLaunchingExternalUriSchemeEvent(Sender: TObject; const aWebView: ICoreWebView2; const aArgs: ICoreWebView2LaunchingExternalUriSchemeEventArgs);
begin
  SendEvent([Sender, aWebView, aArgs]);
end;

procedure TWVEvent.OnTOnGetProcessExtendedInfosCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aValue: ICoreWebView2ProcessExtendedInfoCollection);
begin
  SendEvent([Sender, aErrorCode, aValue]);
end;

procedure TWVEvent.OnTOnBrowserExtensionRemoveCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aExtensionID)]);
end;

procedure TWVEvent.OnTOnBrowserExtensionEnableCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const aExtensionID: wvstring);
begin
  SendEvent([Sender, aErrorCode, ToPChar(aExtensionID)]);
end;

procedure TWVEvent.OnTOnProfileAddBrowserExtensionCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extension: ICoreWebView2BrowserExtension);
begin
  SendEvent([Sender, aErrorCode, extension]);
end;

procedure TWVEvent.OnTOnProfileGetBrowserExtensionsCompletedEvent(Sender: TObject; aErrorCode: HRESULT; const extensionList: ICoreWebView2BrowserExtensionList);
begin
  SendEvent([Sender, aErrorCode, extensionList]);
end;

procedure TWVEvent.OnTOnProfileDeletedEvent(Sender: TObject; const aProfile: ICoreWebView2Profile);
begin
  SendEvent([Sender, aProfile]);
end;

procedure TWVEvent.OnTOnExecuteScriptWithResultCompletedEvent(Sender: TObject; errorCode: HResult; const result_: ICoreWebView2ExecuteScriptResult; aExecutionID : integer);
begin
  SendEvent([Sender, errorCode, result_, aExecutionID]);
end;

// Custom events
procedure TWVEvent.OnTOnCompMsgEvent(Sender: TObject; var aMessage: TMessage; var aHandled: Boolean);
begin
  SendEvent([Sender, @aMessage, @aHandled]);
end;

end.
