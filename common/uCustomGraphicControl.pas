//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uCustomGraphicControl;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Controls, Graphics, LMessages;

type

  TCustomGraphicNotify = procedure() of Object;

  TCustomGraphicControl = class(TGraphicControl)
  private
    FTextChanged: TCustomGraphicNotify;
    FOnWndProc: TWndMethod;
    FOnDestroy: TCustomGraphicNotify;
  protected
    procedure TextChanged; override;
    procedure WndProc(var TheMessage: TLMessage); override;
  public
    procedure InheritedWndProc(var TheMessage: TLMessage);
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  published
    property ActionLink;
    property DesktopFont;
    property DragCursor;
    property DragKind;
    property DragMode;
    property MouseCapture;
    property ParentBackground;
    property ParentColor;
    property ParentFont;
    property ParentShowHint;
    property SessionProperties;
    property Text;
    property OnPaint;
    property OnConstrainedResize;
    property OnContextPopup;
    property OnDblClick;
    property OnTripleClick;
    property OnQuadClick;
    property OnDragDrop;
    property OnDragOver;
    property OnEndDock;
    property OnEndDrag;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnMouseEnter;
    property OnMouseLeave;
    property OnMouseWheel;
    property OnMouseWheelDown;
    property OnMouseWheelUp;
    property OnMouseWheelHorz;
    property OnMouseWheelLeft;
    property OnMouseWheelRight;
    property OnStartDock;
    property OnStartDrag;
    property OnEditingDone;
    property OnTextChanged: TCustomGraphicNotify read FTextChanged write FTextChanged;
    property OnWndProc: TWndMethod read FOnWndProc write FOnWndProc;
    property OnDestroy: TCustomGraphicNotify read FOnDestroy write FOnDestroy;
  end;

implementation

constructor TCustomGraphicControl.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
end;

destructor TCustomGraphicControl.Destroy;
begin
  if Assigned(FOnDestroy) then FOnDestroy();
  inherited Destroy;
end;

procedure TCustomGraphicControl.TextChanged;
begin
  inherited TextChanged;
  if Assigned(FTextChanged) then FTextChanged();
end;

procedure TCustomGraphicControl.InheritedWndProc(var TheMessage: TLMessage);
begin
  inherited WndProc(TheMessage);
end;

procedure TCustomGraphicControl.WndProc(var TheMessage: TLMessage);
begin
  if Assigned(FOnWndProc) then
    FOnWndProc(TheMessage)
  else
    inherited WndProc(TheMessage);
end;

end.
