//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uWVArrayWrap;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses uWVTypes;

type

  PWVCustomSchemeInfoArray = ^TWVCustomSchemeInfoArray;

  // TWVCustomSchemeInfoArray
  TWVCustomSchemeInfoArrayWrap = class
  protected
    FData: TWVCustomSchemeInfoArray;
    FSize: integer;
  public
    function WVCustomSchemeInfoArrayData(): PWVCustomSchemeInfoArray;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: TWVCustomSchemeInfo);
    function GetValue(AIndex: integer): TWVCustomSchemeInfo;
    procedure AddValue(AValue: TWVCustomSchemeInfo);
  public
    constructor Create(AData: TWVCustomSchemeInfoArray);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

implementation


function TWVCustomSchemeInfoArrayWrap.WVCustomSchemeInfoArrayData(): PWVCustomSchemeInfoArray;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

function TWVCustomSchemeInfoArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

procedure TWVCustomSchemeInfoArrayWrap.SetValue(AIndex: integer; AValue: TWVCustomSchemeInfo);
begin
  if AIndex >= 0 then
  begin
    if AIndex < FSize then
      FData[AIndex] := AValue;
  end
  else
  begin
    AddValue(AValue);
  end;
end;

procedure TWVCustomSchemeInfoArrayWrap.AddValue(AValue: TWVCustomSchemeInfo);
begin
  FSize := Length(FData) + 1;
  SetLength(FData, FSize);
  FData[FSize - 1] := AValue;
end;

function TWVCustomSchemeInfoArrayWrap.GetValue(AIndex: integer): TWVCustomSchemeInfo;
begin
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex];
end;

constructor TWVCustomSchemeInfoArrayWrap.Create(AData: TWVCustomSchemeInfoArray);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TWVCustomSchemeInfoArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TWVCustomSchemeInfoArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;


end.
