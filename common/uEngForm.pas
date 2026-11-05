//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uEngForm;

{$mode objfpc}{$H+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, Forms, Controls, LMessages, LCLType;

type
  { TEngForm }

  TEngForm = class(TForm)
  private
    FOnWndProc: TWndMethod;
    FGoPtr: Pointer;
  protected
    procedure ProcessResource; override;
    procedure WndProc(var TheMessage: TLMessage); override;
    procedure CreateParams(var Params: TCreateParams); override;
    procedure FormCreate(Sender: TObject);
  public
    constructor Create(AOwner: TComponent); override;
    constructor CreateNew(AOwner: TComponent; Num: Integer = 0); override;
    constructor CreateFromClassName(TheOwner: TComponent; const AClassName: string);
  public
    procedure ScaleForPPI(ANewPPI: Integer);
    procedure ScaleForCurrentDpi;
    procedure GoDeactivate();
    procedure GoActivate();
    procedure InheritedWndProc(var TheMessage: TLMessage);
    procedure EnabledMaximize(AValue: Boolean);
    procedure EnabledMinimize(AValue: Boolean);
    procedure EnabledSystemMenu(AValue: Boolean);

    procedure ScreenCenter;
    procedure WorkAreaCenter;

    property GoPtr: Pointer read FGoPtr write FGoPtr;
  published
    property OnWndProc: TWndMethod read FOnWndProc write FOnWndProc;
  end;

  TRequestCallCreateParams = function(goPtr: Pointer; Sender: TEngForm; var Params: TCreateParams): Pointer; extdecl;
  TRequestCallFormCreate = function(goPtr: Pointer; Sender: TEngForm): Pointer; extdecl;

var
  GRequestCallCreateParamsPtr: TRequestCallCreateParams = nil;
  GRequestCallFormCreatePtr: TRequestCallFormCreate = nil;

implementation

constructor TEngForm.Create(AOwner: TComponent);
begin
  OnCreate := @FormCreate;
  inherited Create(AOwner);
end;

constructor TEngForm.CreateNew(AOwner: TComponent; Num: Integer);
begin
  inherited CreateNew(AOwner, Num);
end;

procedure TEngForm.GoDeactivate();
begin
  self.Deactivate;
end;

procedure TEngForm.GoActivate();
begin
  self.Activate;
end;

procedure TEngForm.ScaleForPPI(ANewPPI: Integer);
begin
  if ANewPPI < 30 then
    Exit;
  if ANewPPI <> PixelsPerInch then
  begin
    AutoAdjustLayout(lapAutoAdjustForDPI, PixelsPerInch, ANewPPI,
      MulDiv(Width, ANewPPI, PixelsPerInch),
      MulDiv(Height, ANewPPI, PixelsPerInch));
  end;
end;

procedure TEngForm.ScaleForCurrentDpi;
begin
  if not Scaled then
  begin
    Scaled := True;
    Exit;
  end;
  if PixelsPerInch <> Monitor.PixelsPerInch then
  begin
    AutoAdjustLayout(lapAutoAdjustForDPI, PixelsPerInch, Monitor.PixelsPerInch,
      MulDiv(Width, Monitor.PixelsPerInch, PixelsPerInch),
      MulDiv(Height, Monitor.PixelsPerInch, PixelsPerInch));
  end;
end;

procedure TEngForm.InheritedWndProc(var TheMessage: TLMessage);
begin
  inherited WndProc(TheMessage);
end;

procedure TEngForm.EnabledMaximize(AValue: Boolean);
begin
  if AValue then
  begin
    if not(biMaximize in BorderIcons) then
      BorderIcons := BorderIcons + [biMaximize]
  end else
  begin
    if biMaximize in BorderIcons then
      BorderIcons := BorderIcons - [biMaximize]
  end;
end;

procedure TEngForm.EnabledMinimize(AValue: Boolean);
begin
  if AValue then
  begin
    if not(biMinimize in BorderIcons) then
      BorderIcons := BorderIcons + [biMinimize]
  end else
  begin
    if biMinimize in BorderIcons then
      BorderIcons := BorderIcons - [biMinimize]
  end;
end;

procedure TEngForm.EnabledSystemMenu(AValue: Boolean);
begin
  if AValue then
  begin
    if not(biSystemMenu in BorderIcons) then
      BorderIcons := BorderIcons + [biSystemMenu]
  end else
  begin
    if biSystemMenu in BorderIcons then
      BorderIcons := BorderIcons - [biSystemMenu]
  end;
end;

procedure TEngForm.ScreenCenter;
begin
  Left := (Screen.Width - Width) div 2;
  Top := (Screen.Height - Height) div 2;
end;

procedure TEngForm.WorkAreaCenter;
begin
  Left := (Screen.WorkAreaWidth - Width) div 2;
  Top := (Screen.WorkAreaHeight - Height) div 2;
end;

procedure TEngForm.ProcessResource;
begin
  Self.ClientHeight := 321;
  Self.ClientWidth := 678;
  // 没有使用窗口资源，不处理，处理就会报错的。
end;

procedure TEngForm.WndProc(var TheMessage: TLMessage);
begin
  if Assigned(FOnWndProc) then
    FOnWndProc(TheMessage)
  else
    inherited WndProc(TheMessage);
end;

procedure TEngForm.FormCreate(Sender: TObject);
begin
  if Assigned(GRequestCallFormCreatePtr) then
    GRequestCallFormCreatePtr(FGoPtr, Self);
end;

procedure TEngForm.CreateParams(var Params: TCreateParams);
begin
  inherited CreateParams(Params);
  if Assigned(GRequestCallCreateParamsPtr) then
    GRequestCallCreateParamsPtr(FGoPtr, Self, Params);
end;

constructor TEngForm.CreateFromClassName(TheOwner: TComponent; const AClassName: string);
begin
  inherited Create(TheOwner);
end;

initialization

finalization

end.

