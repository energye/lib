//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uScaledImageListResolutionWrap;

{$mode objfpc}{$H+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, ImgList, Graphics, GraphType, Types;

type
  PScaledImageListResolution = ^TScaledImageListResolution;

  TScaledImageListResolutionWrap = class
  private
    FData: TScaledImageListResolution;
  public
    procedure GetBitmap(Index: Integer; Image: TCustomBitmap);
    procedure GetBitmap(Index: Integer; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect);
    procedure DrawXY(ACanvas: TCanvas; AX, AY, AIndex: Integer; AEnabled: Boolean);
    procedure DrawXYEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawEffect: TGraphicsDrawEffect);
    procedure DrawXYStyleType(ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; AEnabled: Boolean);
    procedure DrawXYStyleTypeEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect);
    procedure StretchDraw(Canvas: TCanvas; Index: Integer; ARect: TRect; Enabled: Boolean);
    procedure DrawOverlayXYOverlay(ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; AEnabled: Boolean);
    procedure DrawOverlayXYOverlayEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawEffect: TGraphicsDrawEffect);
    procedure DrawOverlayXYOverlayTypeEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect);
    function Width(): Integer;
    function Height(): Integer;
    function Size(): TSize;
    function Resolution(): TCustomImageListResolution;
    function Count(): Integer;
    function Valid(): Boolean;
  public
    constructor Create(AResolution: TScaledImageListResolution);
    constructor Create(AResolution: TCustomImageListResolution; const AScaleFactor: Double);
    destructor Destroy; override;
  end;

implementation

constructor TScaledImageListResolutionWrap.Create(AResolution: TScaledImageListResolution);
begin
  inherited Create();
  FData := AResolution;
end;

constructor TScaledImageListResolutionWrap.Create(AResolution: TCustomImageListResolution; const AScaleFactor: Double);
begin
  inherited Create();
  FData := TScaledImageListResolution.Create(AResolution, AScaleFactor);
end;

destructor TScaledImageListResolutionWrap.Destroy;
begin
  inherited Destroy;
end;

procedure TScaledImageListResolutionWrap.GetBitmap(Index: Integer; Image: TCustomBitmap);
begin
  FData.GetBitmap(Index, Image);
end;

procedure TScaledImageListResolutionWrap.GetBitmap(Index: Integer; Image: TCustomBitmap; AEffect: TGraphicsDrawEffect);
begin
  FData.GetBitmap(Index, Image, AEffect);
end;

procedure TScaledImageListResolutionWrap.DrawXY(ACanvas: TCanvas; AX, AY, AIndex: Integer; AEnabled: Boolean);
begin
  FData.Draw(ACanvas, AX, AY, AIndex, AEnabled);
end;

procedure TScaledImageListResolutionWrap.DrawXYEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawEffect: TGraphicsDrawEffect);
begin
  FData.Draw(ACanvas, AX, AY, AIndex, ADrawEffect);
end;

procedure TScaledImageListResolutionWrap.DrawXYStyleType(ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; AEnabled: Boolean);
begin
  FData.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, AEnabled);
end;

procedure TScaledImageListResolutionWrap.DrawXYStyleTypeEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect);
begin
  FData.Draw(ACanvas, AX, AY, AIndex, ADrawingStyle, AImageType, ADrawEffect);
end;

procedure TScaledImageListResolutionWrap.StretchDraw(Canvas: TCanvas; Index: Integer; ARect: TRect; Enabled: Boolean);
begin
  FData.StretchDraw(Canvas, Index, ARect, Enabled);
end;

procedure TScaledImageListResolutionWrap.DrawOverlayXYOverlay(ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; AEnabled: Boolean);
begin
  FData.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, AEnabled);
end;

procedure TScaledImageListResolutionWrap.DrawOverlayXYOverlayEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawEffect: TGraphicsDrawEffect);
begin
  FData.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawEffect);
end;

procedure TScaledImageListResolutionWrap.DrawOverlayXYOverlayTypeEffect(ACanvas: TCanvas; AX, AY, AIndex: Integer; AOverlay: TOverlay; ADrawingStyle: TDrawingStyle; AImageType: TImageType; ADrawEffect: TGraphicsDrawEffect);
begin
  FData.DrawOverlay(ACanvas, AX, AY, AIndex, AOverlay, ADrawingStyle, AImageType, ADrawEffect);
end;

function TScaledImageListResolutionWrap.Width(): Integer;
begin
  Result := FData.Width;
end;

function TScaledImageListResolutionWrap.Height(): Integer;
begin
  Result := FData.Height;
end;

function TScaledImageListResolutionWrap.Size(): TSize;
begin
  Result := FData.Size;
end;

function TScaledImageListResolutionWrap.Resolution(): TCustomImageListResolution;
begin
  Result := FData.Resolution;
end;

function TScaledImageListResolutionWrap.Count(): Integer;
begin
  Result := FData.Count;
end;

function TScaledImageListResolutionWrap.Valid(): Boolean;
begin
  Result := FData.Valid;
end;



end.
