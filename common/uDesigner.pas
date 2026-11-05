//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uDesigner;

{$I ExtDecl.inc}
{$mode objfpc}{$H+}


interface

uses
  InterfaceBase,
  Classes, SysUtils, LMessages, Forms, Controls, LCLType;

type

  TDesignerIsDesignMsgEvent = function(Sender: TControl; var Message: TLMessage): boolean of object;
  TDesignerUTF8KeyPressEvent = procedure(var UTF8Key: TUTF8Char) of object;
  TDesignerModifiedEvent = procedure() of object;
  TDesignerNotificationEvent = procedure(AComponent: TComponent; Operation: TOperation) of object;
  TDesignerPaintGridEvent = procedure() of object;
  TDesignerValidateRenameEvent = procedure(AComponent: TComponent; const CurName, NewName: string) of object;
  TDesignerGetShiftStateEvent = function(): TShiftState of object;
  TDesignerSelectOnlyThisComponentEvent = procedure(AComponent: TComponent) of object;
  TDesignerUniqueNameEvent = function(const BaseName: string): string of object;
  TDesignerPrepareFreeDesignerEvent = procedure(AFreeComponent: boolean) of object;

  TDesigner = class(TIDesigner)
  private
    FOnIsDesignMsg: TDesignerIsDesignMsgEvent;
    FOnUTF8KeyPress: TDesignerUTF8KeyPressEvent;
    FOnModified: TDesignerModifiedEvent;
    FOnNotification: TDesignerNotificationEvent;
    FOnPaintGrid: TDesignerPaintGridEvent;
    FOnValidateRename: TDesignerValidateRenameEvent;
    FOnGetShiftState: TDesignerGetShiftStateEvent;
    FOnSelectOnlyThisComponent: TDesignerSelectOnlyThisComponentEvent;
    FOnUniqueName: TDesignerUniqueNameEvent;
    FOnPrepareFreeDesigner: TDesignerPrepareFreeDesignerEvent;
  protected
    function IsDesignMsg(Sender: TControl; var Message: TLMessage): boolean; override;
    procedure UTF8KeyPress(var UTF8Key: TUTF8Char); override;
    procedure Modified(); override;
    procedure Notification(AComponent: TComponent; Operation: TOperation); override;
    procedure PaintGrid(); override;
    procedure ValidateRename(AComponent: TComponent; const CurName, NewName: string); override;
    function GetShiftState: TShiftState; override;
    procedure SelectOnlyThisComponent(AComponent: TComponent); override;
    function UniqueName(const BaseName: string): string; override;
    procedure PrepareFreeDesigner(AFreeComponent: boolean); override;
  public
    property LookupRoot;
    property DefaultFormBoundsValid;
    property OnIsDesignMsg: TDesignerIsDesignMsgEvent read FOnIsDesignMsg write FOnIsDesignMsg;
    property OnUTF8KeyPress: TDesignerUTF8KeyPressEvent read FOnUTF8KeyPress write FOnUTF8KeyPress;
    property OnModified: TDesignerModifiedEvent read FOnModified write FOnModified;
    property OnNotification: TDesignerNotificationEvent read FOnNotification write FOnNotification;
    property OnPaintGrid: TDesignerPaintGridEvent read FOnPaintGrid write FOnPaintGrid;
    property OnValidateRename: TDesignerValidateRenameEvent read FOnValidateRename write FOnValidateRename;
    property OnGetShiftState: TDesignerGetShiftStateEvent read FOnGetShiftState write FOnGetShiftState;
    property OnSelectOnlyThisComponent: TDesignerSelectOnlyThisComponentEvent read FOnSelectOnlyThisComponent write FOnSelectOnlyThisComponent;
    property OnUniqueName: TDesignerUniqueNameEvent read FOnUniqueName write FOnUniqueName;
    property OnPrepareFreeDesigner: TDesignerPrepareFreeDesignerEvent read FOnPrepareFreeDesigner write FOnPrepareFreeDesigner;
  end;

implementation

function TDesigner.IsDesignMsg(Sender: TControl; var Message: TLMessage): boolean;
begin
  Result := false;
  if Assigned(FOnIsDesignMsg) then
    Result := FOnIsDesignMsg(Sender, Message);
end;

procedure TDesigner.UTF8KeyPress(var UTF8Key: TUTF8Char);
begin
  if Assigned(FOnUTF8KeyPress) then
    FOnUTF8KeyPress(UTF8Key);
end;

procedure TDesigner.Modified();
begin
  if Assigned(FOnModified) then
    FOnModified();
end;

procedure TDesigner.Notification(AComponent: TComponent; Operation: TOperation);
begin
  if Assigned(FOnNotification) then
    FOnNotification(AComponent, Operation);
end;

procedure TDesigner.PaintGrid();
begin
  if Assigned(FOnPaintGrid) then
    FOnPaintGrid();
end;

procedure TDesigner.ValidateRename(AComponent: TComponent; const CurName, NewName: string);
begin
  if Assigned(FOnValidateRename) then
    FOnValidateRename(AComponent, CurName, NewName);
end;

function TDesigner.GetShiftState: TShiftState;
begin
  Result := [];
  if Assigned(FOnGetShiftState) then
    Result := FOnGetShiftState();
end;

procedure TDesigner.SelectOnlyThisComponent(AComponent: TComponent);
begin
  if Assigned(FOnSelectOnlyThisComponent) then
    FOnSelectOnlyThisComponent(AComponent);
end;

function TDesigner.UniqueName(const BaseName: string): string;
begin
  if Assigned(FOnUniqueName) then
    Result := FOnUniqueName(BaseName);
end;

procedure TDesigner.PrepareFreeDesigner(AFreeComponent: boolean);
begin
  if Assigned(FOnPrepareFreeDesigner) then
    FOnPrepareFreeDesigner(AFreeComponent);
end;


initialization

finalization

end.
