//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uLazVTEditLink;

//{$mode delphi}{$H+}
{$mode objfpc}{$H+}

interface

uses Classes, SysUtils, Forms, Controls, LMessages, laz.VirtualTrees;

type
  TVTBeginCancelEndEditEvent = function(): Boolean of object;
  TVTPrepareEditEvent = function(Tree: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex): Boolean of object;
  TVTGetBoundsEvent = function(): TRect of object;
  TVTProcessMessageEvent = procedure(var Msg: TLMessage)  of object;
  TVTSetBoundsEvent = procedure(R: TRect) of object;

type

  // Laz VirtualTrees IVTEditLink 自定义实现
  TCustomVTEditLink = class(TInterfacedObject, IVTEditLink)
  private
    FBeginEdit: TVTBeginCancelEndEditEvent;
    FCancelEdit: TVTBeginCancelEndEditEvent;
    FEndEdit: TVTBeginCancelEndEditEvent;
    FPrepareEdit: TVTPrepareEditEvent;
    FGetBounds: TVTGetBoundsEvent;
    FProcessMessage: TVTProcessMessageEvent;
    FSetBounds: TVTSetBoundsEvent;
    FDestroy: TNotifyEvent;
  protected
    function BeginEdit: Boolean; stdcall;
    function CancelEdit: Boolean; stdcall;
    function EndEdit: Boolean; stdcall;
    function PrepareEdit(Tree: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex): Boolean; stdcall;
    function GetBounds: TRect; stdcall;
    procedure ProcessMessage(var Message: TLMessage); stdcall;
    procedure SetBounds(R: TRect); stdcall;
  public
    constructor Create;
    destructor Destroy; override;
  public
    property OnBeginEdit: TVTBeginCancelEndEditEvent read FBeginEdit write FBeginEdit;
    property OnCancelEdit: TVTBeginCancelEndEditEvent read FCancelEdit write FCancelEdit;
    property OnEndEdit: TVTBeginCancelEndEditEvent read FEndEdit write FEndEdit;
    property OnPrepareEdit: TVTPrepareEditEvent read FPrepareEdit write FPrepareEdit;
    property OnGetBounds: TVTGetBoundsEvent read FGetBounds write FGetBounds;
    property OnProcessMessage: TVTProcessMessageEvent read FProcessMessage write FProcessMessage;
    property OnSetBounds: TVTSetBoundsEvent read FSetBounds write FSetBounds;
    property OnDestroy: TNotifyEvent read FDestroy write FDestroy;
  end;


implementation

constructor TCustomVTEditLink.Create;
begin
  inherited Create;
end;

destructor TCustomVTEditLink.Destroy;
begin
  if Assigned(FDestroy) then
    FDestroy(self);
  inherited Destroy;
end;

function TCustomVTEditLink.BeginEdit: Boolean; stdcall;
begin
  Result := false;
  if Assigned(FBeginEdit) then
    Result := FBeginEdit();
end;

function TCustomVTEditLink.CancelEdit: Boolean; stdcall;
begin
  Result := false;
  if Assigned(FCancelEdit) then
    Result := FCancelEdit();
end;

function TCustomVTEditLink.EndEdit: Boolean; stdcall;
begin
  Result := false;
  if Assigned(FEndEdit) then
    Result := FEndEdit();
end;

function TCustomVTEditLink.GetBounds: TRect; stdcall;
var
  TempRect: TRect;
begin
  if Assigned(FGetBounds) then
    TempRect := FGetBounds();
  Result := TempRect;
end;

function TCustomVTEditLink.PrepareEdit(Tree: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex): Boolean; stdcall;
begin
  Result := false;
  if Assigned(FPrepareEdit) then
    Result := FPrepareEdit(Tree, Node, Column);
end;

procedure TCustomVTEditLink.ProcessMessage(var Message: TLMessage); stdcall;
begin
  if Assigned(FProcessMessage) then
    FProcessMessage(Message);
end;

procedure TCustomVTEditLink.SetBounds(R: TRect); stdcall;
begin
  if Assigned(FSetBounds) then
    FSetBounds(R);
end;

end.

