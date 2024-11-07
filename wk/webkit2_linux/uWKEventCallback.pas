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
  uTools,
  uWkTypes, uLibWebkit, uWkJSValue;

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
    procedure WkWebview_OnLoadChange(Sender: TObject; loadEvent: WebKitLoadEvent);
    procedure WkWebview_OnExecuteScriptFinished(Sender: TObject; const jsValue: TWkJSValue);
    function WkWebview_OnLoadFailed(Sender: TObject; loadEvent: WebKitLoadEvent; failingUri: string; error: string): boolean;
    procedure WkWebview_OnURISchemeRequest(Sender: TObject; const uriSchemeRequest: WebKitURISchemeRequest);
    procedure WkWebview_OnProcessMessage(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
    function WkWebview_OnMousePress(Sender: TObject; event: PWkButtonEvent): boolean;
    function WkWebview_OnMouseRelease(Sender: TObject; event: PWkButtonEvent): boolean;
    procedure WkWebview_OnGetAcceptPolicyFinish(Sender: TObject; policy: WebKitCookieAcceptPolicy; error: string);
    procedure WkWebview_OnAddCookieFinish(Sender: TObject; aResult: boolean; error: string);
    procedure WkWebview_OnGetCookiesFinish(Sender: TObject; cookieList: PList; error: string);
    procedure WkWebview_OnDeleteCookieFinish(Sender: TObject; aResult: boolean; error: string);
    function WkWebview_OnDecidePolicy(Sender: TObject; decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
    procedure WkWebview_OnWebProcessTerminated(Sender: TObject; reason: WebKitWebProcessTerminationReason);
    function WkWebview_OnContextMenu(Sender: TObject; contextMenu: WebKitContextMenu; defaultAction: PWkAction): boolean;
    procedure WkWebview_OnContextMenuCommand(Sender: TObject; menuID: integer);
    procedure WkWebview_OnContextMenuDismissed(Sender: TObject);
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


procedure TWKEvent.WkWebview_OnLoadChange(Sender: TObject; loadEvent: WebKitLoadEvent);
begin
  SendEvent([Sender, loadEvent]);
end;

procedure TWKEvent.WkWebview_OnExecuteScriptFinished(Sender: TObject; const jsValue: TWkJSValue);
begin
  SendEvent([Sender, jsValue]);
end;

function TWKEvent.WkWebview_OnLoadFailed(Sender: TObject; loadEvent: WebKitLoadEvent; failingUri: string; error: string): boolean;
begin
  SendEvent([Sender, loadEvent, ToPChar(failingUri), ToPChar(error), @Result]);
end;

procedure TWKEvent.WkWebview_OnURISchemeRequest(Sender: TObject; const uriSchemeRequest: WebKitURISchemeRequest);
begin
  SendEvent([Sender, uriSchemeRequest]);
end;

procedure TWKEvent.WkWebview_OnProcessMessage(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
begin
  SendEvent([Sender, jsValue, processId]);
end;

function TWKEvent.WkWebview_OnMousePress(Sender: TObject; event: PWkButtonEvent): boolean;
begin
  SendEvent([Sender, event, @Result]);
end;

function TWKEvent.WkWebview_OnMouseRelease(Sender: TObject; event: PWkButtonEvent): boolean;
begin
  SendEvent([Sender, event, @Result]);
end;

procedure TWKEvent.WkWebview_OnGetAcceptPolicyFinish(Sender: TObject; policy: WebKitCookieAcceptPolicy; error: string);
begin
  SendEvent([Sender, policy, ToPChar(error)]);
end;

procedure TWKEvent.WkWebview_OnAddCookieFinish(Sender: TObject; aResult: boolean; error: string);
begin
  SendEvent([Sender, aResult, ToPChar(error)]);
end;

procedure TWKEvent.WkWebview_OnGetCookiesFinish(Sender: TObject; cookieList: PList; error: string);
begin
  SendEvent([Sender, cookieList, ToPChar(error)]);
end;

procedure TWKEvent.WkWebview_OnDeleteCookieFinish(Sender: TObject; aResult: boolean; error: string);
begin
  SendEvent([Sender, aResult, ToPChar(error)]);
end;

function TWKEvent.WkWebview_OnDecidePolicy(Sender: TObject; decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
begin
  SendEvent([Sender, decision, type_, @Result]);
end;

procedure TWKEvent.WkWebview_OnWebProcessTerminated(Sender: TObject; reason: WebKitWebProcessTerminationReason);
begin
  SendEvent([Sender, reason]);
end;

function TWKEvent.WkWebview_OnContextMenu(Sender: TObject; contextMenu: WebKitContextMenu; defaultAction: PWkAction): boolean;
begin
  SendEvent([Sender, contextMenu, defaultAction, @Result]);
end;

procedure TWKEvent.WkWebview_OnContextMenuCommand(Sender: TObject; menuID: integer);
begin
  SendEvent([Sender, menuID]);
end;

procedure TWKEvent.WkWebview_OnContextMenuDismissed(Sender: TObject);
begin
  SendEvent([Sender]);
end;


end.
