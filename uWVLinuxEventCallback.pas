//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uWVLinuxEventCallback;

{$mode objfpc}{$H+}

{$Z4+}

{$I ExtDecl.inc}

interface

uses
  Classes,
  SysUtils,
  uTools,
  uWkTypes, uLibWebkit, uWkJSValue, uWVLinuxRecordStruct, uArrayWrap;

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
    procedure TWkWebview_TWkAddCookieFinishEvent(Sender: TObject; Result: boolean; error: string);
    procedure TWkWebview_TWkContextMenuCommandEvent(Sender: TObject; menuID: integer);
    procedure TWkWebview_TWkContextMenuDismissedEvent(Sender: TObject);
    function TWkWebview_TWkContextMenuEvent(Sender: TObject; contextMenu: WebKitContextMenu; defaultAction: PWkAction): boolean;
    function TWkWebview_TWkDecidePolicyEvent(Sender: TObject; decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
    procedure TWkWebview_TWkDeleteCookieFinishEvent(Sender: TObject; Result: boolean; error: string);
    procedure TWkWebview_TWkExecuteScriptFinishedEvent(Sender: TObject; const jsValue: TWkJSValue; aId: Integer);
    procedure TWkWebview_TWkGetAcceptPolicyFinishEvent(Sender: TObject; policy: WebKitCookieAcceptPolicy; error: string);
    procedure TWkWebview_TWkGetCookiesFinishEvent(Sender: TObject; cookieList: PList; error: string);
    procedure TWkWebview_TWkLoadChangeEvent(Sender: TObject; loadEvent: WebKitLoadEvent);
    function TWkWebview_TWkLoadFailedEvent(Sender: TObject; loadEvent: WebKitLoadEvent; failingUri: string; error: string): boolean;
    function TWkWebview_TWkMouseEvent(Sender: TObject; event: PWkButtonEvent): boolean;
    procedure TWkWebview_TWkProcessMessageEvent(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
    procedure TWkWebview_TWkURISchemeRequestEvent(Sender: TObject; const uriSchemeRequest: WebKitURISchemeRequest);
    procedure TWkWebview_TWkWebProcessTerminatedEvent(Sender: TObject; reason: WebKitWebProcessTerminationReason);

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

procedure TWVEvent.TWkWebview_TWkAddCookieFinishEvent(Sender: TObject; Result: boolean; error: string);
begin
  SendEvent([Sender, Result, ToPChar(error)]);
end;

procedure TWVEvent.TWkWebview_TWkContextMenuCommandEvent(Sender: TObject; menuID: integer);
begin
  SendEvent([Sender, menuID]);
end;

procedure TWVEvent.TWkWebview_TWkContextMenuDismissedEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

function TWVEvent.TWkWebview_TWkContextMenuEvent(Sender: TObject; contextMenu: WebKitContextMenu; defaultAction: PWkAction): boolean;
begin
  SendEvent([Sender, contextMenu, defaultAction, @Result]);
end;

function TWVEvent.TWkWebview_TWkDecidePolicyEvent(Sender: TObject; decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
begin
  SendEvent([Sender, decision, Integer(type_), @Result]);
end;

procedure TWVEvent.TWkWebview_TWkDeleteCookieFinishEvent(Sender: TObject; Result: boolean; error: string);
begin
  SendEvent([Sender, Result, ToPChar(error)]);
end;

procedure TWVEvent.TWkWebview_TWkExecuteScriptFinishedEvent(Sender: TObject; const jsValue: TWkJSValue; aId: Integer);
begin
  SendEvent([Sender, jsValue, aId]);
end;

procedure TWVEvent.TWkWebview_TWkGetAcceptPolicyFinishEvent(Sender: TObject; policy: WebKitCookieAcceptPolicy; error: string);
begin
  SendEvent([Sender, Integer(policy), ToPChar(error)]);
end;

procedure TWVEvent.TWkWebview_TWkGetCookiesFinishEvent(Sender: TObject; cookieList: PList; error: string);
begin
  SendEvent([Sender, cookieList, ToPChar(error)]);
end;

procedure TWVEvent.TWkWebview_TWkLoadChangeEvent(Sender: TObject; loadEvent: WebKitLoadEvent);
begin
  SendEvent([Sender, Integer(loadEvent)]);
end;

function TWVEvent.TWkWebview_TWkLoadFailedEvent(Sender: TObject; loadEvent: WebKitLoadEvent; failingUri: string; error: string): boolean;
begin
  SendEvent([Sender, Integer(loadEvent), ToPChar(failingUri), ToPChar(error), @Result]);
end;

function TWVEvent.TWkWebview_TWkMouseEvent(Sender: TObject; event: PWkButtonEvent): boolean;
var
  eventPtr: TWkButtonEventPtr;
begin
  eventPtr := TWkButtonEventToGo(event^);
  SendEvent([Sender, @eventPtr, @Result]);
end;

procedure TWVEvent.TWkWebview_TWkProcessMessageEvent(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
begin
  SendEvent([Sender, jsValue, Integer(processId)]);
end;

procedure TWVEvent.TWkWebview_TWkURISchemeRequestEvent(Sender: TObject; const uriSchemeRequest: WebKitURISchemeRequest);
begin
  SendEvent([Sender, uriSchemeRequest]);
end;

procedure TWVEvent.TWkWebview_TWkWebProcessTerminatedEvent(Sender: TObject; reason: WebKitWebProcessTerminationReason);
begin
  SendEvent([Sender, Integer(reason)]);
end;



// 非 of object 事件方法定义实现


end.
