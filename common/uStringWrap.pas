//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uStringWrap;

{$mode objfpc}{$H+}
{$Z4+}

interface

type

  IStringWrap = interface
    ['{1F9A7B44-DCDC-4477-9067-3ADD44BDEB7B}']
    procedure SetValue(const AValue: string);
    function GetValue(): string;
    function GetSize(): integer;
    property Value: string read GetValue write SetValue;
    property Size: integer read GetSize;
  end;

  TStringWrap = class
  protected
    FValue: string;
  protected
    procedure SetValue(const AValue: string);
    function GetValue(): string;
    function GetSize(): integer;
  public
    constructor Create;
    destructor Destroy; override;
  published
    property Value: string read GetValue write SetValue;
    property Len: integer read GetSize;
  end;

implementation

function TStringWrap.GetValue(): string;
begin
  Result := FValue;
end;

procedure TStringWrap.SetValue(const AValue: string);
begin
  FValue := AValue;
end;

function TStringWrap.GetSize(): integer;
begin
  Result := Length(FValue); //UTF8Length(); UTF8LengthFast
end;

constructor TStringWrap.Create;
begin
  inherited Create;
  FValue := '';
end;

destructor TStringWrap.Destroy;
begin
  inherited Destroy;
  FValue := '';
end;

end.
