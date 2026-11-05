//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uArrayWrap;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses laz.VirtualTrees, {$ifdef Windows} ActiveX, {$else} laz.FakeActiveX, {$endif}FPCanvas, Types;

type

  PUint32Array = ^TUint32Array;
  TUint32Array = array of uint32;

  PUint64Array = ^TUint64Array;
  TUint64Array = array of uint64;

  PInt64Array = ^TInt64Array;
  TInt64Array = array of int64;

  PStringArray = ^TStringArray;
  TStringArray = array of string;

  PPointArray = ^TPointArray;
  TPointArray = array of TPoint;

  PByteArray = ^TByteArray;
  TByteArray = array of byte;

  PFormatEtcArray = ^TFormatEtcArray;
  PFormatEtc = ^TFormatEtc;

  // TFormatEtcArray
  TFormatEtcArrayWrap = class
  protected
    FData: TFormatEtcArray;
    FSize: integer;
  public
    function FormatEtcArrayData(): PFormatEtcArray;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: PFormatEtc);
    function GetValue(AIndex: integer): PFormatEtc;
  public
    constructor Create(AData: TFormatEtcArray);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

  // TPointArray
  TPointArrayWrap = class
  protected
    FData: TPointArray;
    FSize: integer;
  public
    function PointArrayData(): PPointArray;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: TPoint);
    function GetValue(AIndex: integer): TPoint;
  public
    constructor Create(AData: TPointArray);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

  // TUint32Array
  TUint32ArrayWrap = class
  protected
    FData: TUint32Array;
    FSize: integer;
  public
    function Uint32ArrayData(): PUint32Array;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: uint32);
    function GetValue(AIndex: integer): uint32;
  public
    constructor Create(AData: TUint32Array);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

  // TUint64Array
  TUint64ArrayWrap = class
  protected
    FData: TUint64Array;
    FSize: integer;
  public
    function Uint64ArrayData(): PUint64Array;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: uint64);
    function GetValue(AIndex: integer): uint64;
  public
    constructor Create(AData: TUint64Array);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

  // TInt64Array
  TInt64ArrayWrap = class
  protected
    FData: TInt64Array;
    FSize: integer;
  public
    function Int64ArrayData(): PInt64Array;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: int64);
    function GetValue(AIndex: integer): int64;
  public
    constructor Create(AData: TInt64Array);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

  // TBrushPattern
  TBrushPatternWrap = class
  protected
    FData: TBrushPattern;
    FSize: integer;
  public
    function BrushPatternData(): PBrushPattern;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: longword);
    function GetValue(AIndex: integer): longword;
  public
    constructor Create(AData: TBrushPattern);
    constructor Create();
    destructor Destroy; override;
  end;

  // TStringArray
  TStringArrayWrap = class
  protected
    FData: TStringArray;
    FSize: integer;
  public
    function StringArrayData(): PStringArray;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: string);
    function GetValue(AIndex: integer): string;
  public
    constructor Create(AData: TStringArray);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

  TByteArrayWrap = class
  protected
    FData: TByteArray;
    FSize: integer;
  public
    function ByteArrayData(): PByteArray;
    function Size(): integer;
    procedure SetValue(AIndex: integer; AValue: byte);
    function GetValue(AIndex: integer): byte;
  public
    constructor Create(AData: TByteArray);
    constructor Create(ASize: integer);
    destructor Destroy; override;
  end;

implementation

// TFormatEtcArray
constructor TFormatEtcArrayWrap.Create(AData: TFormatEtcArray);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TFormatEtcArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TFormatEtcArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;

function TFormatEtcArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

function TFormatEtcArrayWrap.FormatEtcArrayData(): PFormatEtcArray;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TFormatEtcArrayWrap.SetValue(AIndex: integer; AValue: PFormatEtc);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue^;
end;

function TFormatEtcArrayWrap.GetValue(AIndex: integer): PFormatEtc;
begin
  Result := nil;
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := @FData[AIndex];
end;

// TPointArray
constructor TPointArrayWrap.Create(AData: TPointArray);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TPointArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TPointArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;

function TPointArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

function TPointArrayWrap.PointArrayData(): PPointArray;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TPointArrayWrap.SetValue(AIndex: integer; AValue: TPoint);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue;
end;

function TPointArrayWrap.GetValue(AIndex: integer): TPoint;
begin
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex];
end;

// TUint32Array
constructor TUint32ArrayWrap.Create(AData: TUint32Array);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TUint32ArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TUint32ArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;

function TUint32ArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

function TUint32ArrayWrap.Uint32ArrayData(): PUint32Array;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TUint32ArrayWrap.SetValue(AIndex: integer; AValue: uint32);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue;
end;

function TUint32ArrayWrap.GetValue(AIndex: integer): uint32;
begin
  Result := 0;
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex];
end;


// TUint64Array
constructor TUint64ArrayWrap.Create(AData: TUint64Array);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TUint64ArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TUint64ArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;

function TUint64ArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

function TUint64ArrayWrap.Uint64ArrayData(): PUint64Array;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TUint64ArrayWrap.SetValue(AIndex: integer; AValue: uint64);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue;
end;

function TUint64ArrayWrap.GetValue(AIndex: integer): uint64;
begin
  Result := 0;
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex];
end;

// TInt64Array
constructor TInt64ArrayWrap.Create(AData: TInt64Array);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TInt64ArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TInt64ArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;

function TInt64ArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

function TInt64ArrayWrap.Int64ArrayData(): PInt64Array;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TInt64ArrayWrap.SetValue(AIndex: integer; AValue: int64);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue;
end;

function TInt64ArrayWrap.GetValue(AIndex: integer): int64;
begin
  Result := 0;
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex];
end;

// TBrushPattern
constructor TBrushPatternWrap.Create(AData: TBrushPattern);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TBrushPatternWrap.Create();
begin
  FSize := PatternBitCount;
end;

destructor TBrushPatternWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
end;

function TBrushPatternWrap.Size(): integer;
begin
  Result := FSize;
end;

function TBrushPatternWrap.BrushPatternData(): PBrushPattern;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TBrushPatternWrap.SetValue(AIndex: integer; AValue: longword);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue;
end;

function TBrushPatternWrap.GetValue(AIndex: integer): longword;
begin
  Result := 0;
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex];
end;

// TStringArray
constructor TStringArrayWrap.Create(AData: TStringArray);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TStringArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TStringArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;

function TStringArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

function TStringArrayWrap.StringArrayData(): PStringArray;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TStringArrayWrap.SetValue(AIndex: integer; AValue: string);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue;
end;

function TStringArrayWrap.GetValue(AIndex: integer): string;
begin
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex]
  else
    Result := '';
end;


// TByteArrayWrap
constructor TByteArrayWrap.Create(AData: TByteArray);
begin
  inherited Create;
  FData := AData;
  FSize := Length(AData);
end;

constructor TByteArrayWrap.Create(ASize: integer);
begin
  inherited Create;
  SetLength(FData, ASize);
  FSize := ASize;
end;

destructor TByteArrayWrap.Destroy;
begin
  inherited Destroy;
  FSize := 0;
  SetLength(FData, 0);
end;

function TByteArrayWrap.Size(): integer;
begin
  Result := FSize;
end;

function TByteArrayWrap.ByteArrayData(): PByteArray;
begin
  Result := nil;
  if Length(FData) > 0 then
    Result := @FData;
end;

procedure TByteArrayWrap.SetValue(AIndex: integer; AValue: byte);
begin
  if AIndex < FSize then
    FData[AIndex] := AValue;
end;

function TByteArrayWrap.GetValue(AIndex: integer): byte;
begin
  if (AIndex >= 0) and (AIndex < FSize) then
    Result := FData[AIndex]
  else
    Result := 0;
end;

end.
