//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uRawImageWrap;

{$mode objfpc}{$H+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, GraphType;

type

  TRawImageDescriptionWrap = class
  private
    FData: TRawImageDescription;
  public
    constructor Create();
    constructor Create(const AData: TRawImageDescription);
    destructor Destroy; override;
  protected
    function GetFormat(): TRawImageColorFormat;
    procedure SetFormat(AValue: TRawImageColorFormat);
    function GetWidth(): cardinal;
    procedure SetWidth(AValue: cardinal);
    function GetHeight(): cardinal;
    procedure SetHeight(AValue: cardinal);
    function GetDepth(): byte;
    procedure SetDepth(AValue: byte);
    function GetBitOrder(): TRawImageBitOrder;
    procedure SetBitOrder(AValue: TRawImageBitOrder);
    function GetByteOrder(): TRawImageByteOrder;
    procedure SetByteOrder(AValue: TRawImageByteOrder);
    function GetLineOrder(): TRawImageLineOrder;
    procedure SetLineOrder(AValue: TRawImageLineOrder);
    function GetLineEnd(): TRawImageLineEnd;
    procedure SetLineEnd(AValue: TRawImageLineEnd);
    function GetBitsPerPixel(): byte;
    procedure SetBitsPerPixel(AValue: byte);
    function GetRedPrec(): byte;
    procedure SetRedPrec(AValue: byte);
    function GetRedShift(): byte;
    procedure SetRedShift(AValue: byte);
    function GetGreenPrec(): byte;
    procedure SetGreenPrec(AValue: byte);
    function GetGreenShift(): byte;
    procedure SetGreenShift(AValue: byte);
    function GetBluePrec(): byte;
    procedure SetBluePrec(AValue: byte);
    function GetBlueShift(): byte;
    procedure SetBlueShift(AValue: byte);
    function GetAlphaPrec(): byte;
    procedure SetAlphaPrec(AValue: byte);
    function GetAlphaShift(): byte;
    procedure SetAlphaShift(AValue: byte);
    function GetMaskBitsPerPixel(): byte;
    procedure SetMaskBitsPerPixel(AValue: byte);
    function GetMaskShift(): byte;
    procedure SetMaskShift(AValue: byte);
    function GetMaskLineEnd(): TRawImageLineEnd;
    procedure SetMaskLineEnd(AValue: TRawImageLineEnd);
    function GetMaskBitOrder(): TRawImageBitOrder;
    procedure SetMaskBitOrder(AValue: TRawImageBitOrder);
    function GetPaletteColorCount(): word;
    procedure SetPaletteColorCount(AValue: word);
    function GetPaletteBitsPerIndex(): byte;
    procedure SetPaletteBitsPerIndex(AValue: byte);
    function GetPaletteShift(): byte;
    procedure SetPaletteShift(AValue: byte);
    function GetPaletteLineEnd(): TRawImageLineEnd;
    procedure SetPaletteLineEnd(AValue: TRawImageLineEnd);
    function GetPaletteBitOrder(): TRawImageBitOrder;
    procedure SetPaletteBitOrder(AValue: TRawImageBitOrder);
    function GetPaletteByteOrder(): TRawImageByteOrder;
    procedure SetPaletteByteOrder(AValue: TRawImageByteOrder);

  public
    function RawImageDescriptionData(): PRawImageDescription;
    // don't use a constructor here, it will break compatibility with a record
    procedure Init();
    // 1-bit mono format
    procedure Init_BPP1(AWidth, AHeight: integer);
    // 16-bits formats
    procedure Init_BPP16_R5G6B5(AWidth, AHeight: integer);
    // Formats in RGB order
    procedure Init_BPP24_R8G8B8_BIO_TTB(AWidth, AHeight: integer);
    procedure Init_BPP24_R8G8B8_BIO_TTB_UpsideDown(AWidth, AHeight: integer);
    procedure Init_BPP32_A8R8G8B8_BIO_TTB(AWidth, AHeight: integer);
    procedure Init_BPP32_R8G8B8A8_BIO_TTB(AWidth, AHeight: integer);
    // Formats in Windows pixels order: BGR
    procedure Init_BPP24_B8G8R8_BIO_TTB(AWidth, AHeight: integer);
    procedure Init_BPP24_B8G8R8_M1_BIO_TTB(AWidth, AHeight: integer);
    procedure Init_BPP32_B8G8R8_BIO_TTB(AWidth, AHeight: integer);
    procedure Init_BPP32_B8G8R8_M1_BIO_TTB(AWidth, AHeight: integer);
    procedure Init_BPP32_B8G8R8A8_BIO_TTB(AWidth, AHeight: integer);
    procedure Init_BPP32_B8G8R8A8_M1_BIO_TTB(AWidth, AHeight: integer);
    function GetDescriptionFromMask(): TRawImageDescriptionWrap;
    function GetDescriptionFromAlpha(): TRawImageDescriptionWrap;
    //returns indices of channels in four-element array
    procedure GetRGBIndices(out Ridx, Gidx, Bidx, Aidx: byte);
    function BytesPerLine(): PtrUInt;
    function BitsPerLine(): PtrUInt;
    function MaskBytesPerLine(): PtrUInt;
    function MaskBitsPerLine(): PtrUInt;
    function AsString(): string;
    function IsEqual(ADesc: TRawImageDescriptionWrap): boolean;
  public
    property Format: TRawImageColorFormat              read GetFormat write SetFormat;
    property Width: cardinal                           read GetWidth write SetWidth;
    property Height: cardinal                          read GetHeight write SetHeight;
    // used bits per pixel
    property Depth: Byte                               read GetDepth write SetDepth;
    property BitOrder: TRawImageBitOrder               read GetBitOrder write SetBitOrder;
    property ByteOrder: TRawImageByteOrder             read GetByteOrder write SetByteOrder;
    property LineOrder: TRawImageLineOrder             read GetLineOrder write SetLineOrder;
    property LineEnd: TRawImageLineEnd                 read GetLineEnd write SetLineEnd;
    // bits per pixel. can be greater than Depth.
    property BitsPerPixel: Byte                        read GetBitsPerPixel write SetBitsPerPixel;
    // red or gray precision. bits for red
    property RedPrec: Byte                             read GetRedPrec write SetRedPrec;
    // bitshift. Direction: from least to most significant
    property RedShift: Byte                               read GetRedShift write SetRedShift;
    property GreenPrec: Byte                              read GetGreenPrec write SetGreenPrec;
    property GreenShift: Byte                             read GetGreenShift write SetGreenShift;
    property BluePrec: Byte                               read GetBluePrec write SetBluePrec;
    property BlueShift: Byte                              read GetBlueShift write SetBlueShift;
    property AlphaPrec: Byte                              read GetAlphaPrec write SetAlphaPrec;
    property AlphaShift: Byte                             read GetAlphaShift write SetAlphaShift;

    // The next values are only valid, if there is a mask (MaskBitsPerPixel > 0)
    // Masks are always separate with a depth of 1 bpp. One pixel can occupy
    // one byte at most
    // a value of 1 means that pixel is masked
    // a value of 0 means the pixel value is shown
    // bits per mask pixel, usually 1, 0 when no mask
    property MaskBitsPerPixel: Byte                  read GetMaskBitsPerPixel write SetMaskBitsPerPixel;
    // the shift (=position) of the mask bit
    property MaskShift: Byte                         read GetMaskShift write SetMaskShift;
    property MaskLineEnd: TRawImageLineEnd           read GetMaskLineEnd write SetMaskLineEnd;
    property MaskBitOrder: TRawImageBitOrder         read GetMaskBitOrder write SetMaskBitOrder;

    // The next values are only valid, if there is a palette (PaletteColorCount > 0)
    // entries in color palette. 0 when no palette.
    property PaletteColorCount: Word                read GetPaletteColorCount write SetPaletteColorCount;
    // bits per palette index, this can be larger than the colors used
    property PaletteBitsPerIndex: Byte              read GetPaletteBitsPerIndex write SetPaletteBitsPerIndex;
    // bitshift. Direction: from least to most significant
    property PaletteShift: Byte                     read GetPaletteShift write SetPaletteShift;
    property PaletteLineEnd: TRawImageLineEnd       read GetPaletteLineEnd write SetPaletteLineEnd;
    property PaletteBitOrder: TRawImageBitOrder     read GetPaletteBitOrder write SetPaletteBitOrder;
    property PaletteByteOrder: TRawImageByteOrder   read GetPaletteByteOrder write SetPaletteByteOrder;
  public
    class function UnWrap(const AData: PRawImageDescription): TRawImageDescriptionWrap;
  end;

  TRawImageWrap = class
  private
    FData: TRawImage;
  protected
    function GetData(): PByte;
    procedure SetData(AValue: PByte);
    function GetDescription(): TRawImageDescriptionWrap;
    procedure SetDescription(AValue: TRawImageDescriptionWrap);
    function GetDataSize(): PtrUInt;
    procedure SetDataSize(AValue: PtrUInt);
    function GetMask(): pbyte;
    procedure SetMask(AValue: pbyte);
    function GetMaskSize(): PtrUInt;
    procedure SetMaskSize(AValue: PtrUInt);
    function GetPalette(): pbyte;
    procedure SetPalette(AValue: pbyte);
    function GetPaletteSize(): PtrUInt;
    procedure SetPaletteSize(AValue: PtrUInt);
  public
    constructor Create();
    constructor Create(const AData: TRawImage);
    destructor Destroy; override;
  public
    function RawImageData(): PRawImage;
    procedure Init();
    procedure CreateData(AZeroMem: boolean);
    procedure FreeData();
    procedure ReleaseData();
    procedure ExtractRect(const ARect: TRect; out ADst: TRawImageWrap);
    function GetLineStart(ALine: cardinal): pbyte;
    procedure PerformEffect(const ADrawEffect: TGraphicsDrawEffect; CreateNewData: boolean = True; FreeOldData: boolean = False);
    function ReadBits(const APosition: TRawImagePosition; APrec, AShift: byte): word;
    procedure ReadChannels(const APosition: TRawImagePosition; out ARed, AGreen, ABlue, AAlpha: word);
    procedure ReadMask(const APosition: TRawImagePosition; out AMask: boolean);
    procedure WriteBits(const APosition: TRawImagePosition; APrec, AShift: byte; ABits: word);
    procedure WriteChannels(const APosition: TRawImagePosition; ARed, AGreen, ABlue, AAlpha: word);
    procedure WriteMask(const APosition: TRawImagePosition; AMask: boolean);
    function IsMasked(ATestPixels: boolean): boolean;
    function IsTransparent(ATestPixels: boolean): boolean;
    function IsEqual(AImage: TRawImageWrap): boolean;
  public
    property Description: TRawImageDescriptionWrap   read GetDescription    write SetDescription;
    property Data: PByte                             read GetData           write SetData;
    property DataSize: PtrUInt                       read GetDataSize       write SetDataSize;
    property Mask: PByte                             read GetMask           write SetMask;
    property MaskSize: PtrUInt                       read GetMaskSize       write SetMaskSize;
    property Palette: PByte                          read GetPalette        write SetPalette;
    property PaletteSize: PtrUInt                    read GetPaletteSize    write SetPaletteSize;
  public
    class function UnWrap(const AData: PRawImage): TRawImageWrap;
  end;

implementation

constructor TRawImageDescriptionWrap.Create();
begin
  inherited Create();
end;

constructor TRawImageDescriptionWrap.Create(const AData: TRawImageDescription);
begin
  inherited Create();
  FData := AData;
end;

class function TRawImageDescriptionWrap.UnWrap(const AData: PRawImageDescription): TRawImageDescriptionWrap;
begin
  Result := nil;
  if AData <> nil then
  begin
    Result := Create();
    Result.FData := AData^;
  end;
end;

destructor TRawImageDescriptionWrap.Destroy;
begin
  inherited Destroy;
end;

function TRawImageDescriptionWrap.GetFormat(): TRawImageColorFormat;
begin
  Result := FData.Format;
end;

procedure TRawImageDescriptionWrap.SetFormat(AValue: TRawImageColorFormat);
begin
  FData.Format := AValue;
end;

function TRawImageDescriptionWrap.GetWidth(): cardinal;
begin
  Result := FData.Width;
end;

procedure TRawImageDescriptionWrap.SetWidth(AValue: cardinal);
begin
  FData.Width := AValue;
end;

function TRawImageDescriptionWrap.GetHeight(): cardinal;
begin
  Result := FData.Height;
end;

procedure TRawImageDescriptionWrap.SetHeight(AValue: cardinal);
begin
  FData.Height := AValue;
end;

function TRawImageDescriptionWrap.GetDepth(): byte;
begin
  Result := FData.Depth;
end;

procedure TRawImageDescriptionWrap.SetDepth(AValue: byte);
begin
  FData.Depth := AValue;
end;

function TRawImageDescriptionWrap.GetBitOrder(): TRawImageBitOrder;
begin
  Result := FData.BitOrder;
end;

procedure TRawImageDescriptionWrap.SetBitOrder(AValue: TRawImageBitOrder);
begin
  FData.BitOrder := AValue;
end;

function TRawImageDescriptionWrap.GetByteOrder(): TRawImageByteOrder;
begin
  Result := FData.ByteOrder;
end;

procedure TRawImageDescriptionWrap.SetByteOrder(AValue: TRawImageByteOrder);
begin
  FData.ByteOrder := AValue;
end;

function TRawImageDescriptionWrap.GetLineOrder(): TRawImageLineOrder;
begin
  Result := FData.LineOrder;
end;

procedure TRawImageDescriptionWrap.SetLineOrder(AValue: TRawImageLineOrder);
begin
  FData.LineOrder := AValue;
end;

function TRawImageDescriptionWrap.GetLineEnd(): TRawImageLineEnd;
begin
  Result := FData.LineEnd;
end;

procedure TRawImageDescriptionWrap.SetLineEnd(AValue: TRawImageLineEnd);
begin
  FData.LineEnd := AValue;
end;

function TRawImageDescriptionWrap.GetBitsPerPixel(): byte;
begin
  Result := FData.BitsPerPixel;
end;

procedure TRawImageDescriptionWrap.SetBitsPerPixel(AValue: byte);
begin
  FData.BitsPerPixel := AValue;
end;

function TRawImageDescriptionWrap.GetRedPrec(): byte;
begin
  Result := FData.RedPrec;
end;

procedure TRawImageDescriptionWrap.SetRedPrec(AValue: byte);
begin
  FData.RedPrec := AValue;
end;

function TRawImageDescriptionWrap.GetRedShift(): byte;
begin
  Result := FData.RedShift;
end;

procedure TRawImageDescriptionWrap.SetRedShift(AValue: byte);
begin
  FData.RedShift := AValue;
end;

function TRawImageDescriptionWrap.GetGreenPrec(): byte;
begin
  Result := FData.GreenPrec;
end;

procedure TRawImageDescriptionWrap.SetGreenPrec(AValue: byte);
begin
  FData.GreenPrec := AValue;
end;

function TRawImageDescriptionWrap.GetGreenShift(): byte;
begin
  Result := FData.GreenShift;
end;

procedure TRawImageDescriptionWrap.SetGreenShift(AValue: byte);
begin
  FData.GreenShift := AValue;
end;

function TRawImageDescriptionWrap.GetBluePrec(): byte;
begin
  Result := FData.BluePrec;
end;

procedure TRawImageDescriptionWrap.SetBluePrec(AValue: byte);
begin
  FData.BluePrec := AValue;
end;

function TRawImageDescriptionWrap.GetBlueShift(): byte;
begin
  Result := FData.BlueShift;
end;

procedure TRawImageDescriptionWrap.SetBlueShift(AValue: byte);
begin
  FData.BlueShift := AValue;
end;

function TRawImageDescriptionWrap.GetAlphaPrec(): byte;
begin
  Result := FData.AlphaPrec;
end;

procedure TRawImageDescriptionWrap.SetAlphaPrec(AValue: byte);
begin
  FData.AlphaPrec := AValue;
end;

function TRawImageDescriptionWrap.GetAlphaShift(): byte;
begin
  Result := FData.AlphaShift;
end;

procedure TRawImageDescriptionWrap.SetAlphaShift(AValue: byte);
begin
  FData.AlphaShift := AValue;
end;

function TRawImageDescriptionWrap.GetMaskBitsPerPixel(): byte;
begin
  Result := FData.MaskBitsPerPixel;
end;

procedure TRawImageDescriptionWrap.SetMaskBitsPerPixel(AValue: byte);
begin
  FData.MaskBitsPerPixel := AValue;
end;

function TRawImageDescriptionWrap.GetMaskShift(): byte;
begin
  Result := FData.MaskShift;
end;

procedure TRawImageDescriptionWrap.SetMaskShift(AValue: byte);
begin
  FData.MaskShift := AValue;
end;


function TRawImageDescriptionWrap.GetMaskLineEnd(): TRawImageLineEnd;
begin
  Result := FData.MaskLineEnd;
end;

procedure TRawImageDescriptionWrap.SetMaskLineEnd(AValue: TRawImageLineEnd);
begin
  FData.MaskLineEnd := AValue;
end;

function TRawImageDescriptionWrap.GetMaskBitOrder(): TRawImageBitOrder;
begin
  Result := FData.MaskBitOrder;
end;

procedure TRawImageDescriptionWrap.SetMaskBitOrder(AValue: TRawImageBitOrder);
begin
  FData.MaskBitOrder := AValue;
end;

function TRawImageDescriptionWrap.GetPaletteColorCount(): word;
begin
  Result := FData.PaletteColorCount;
end;

procedure TRawImageDescriptionWrap.SetPaletteColorCount(AValue: word);
begin
  FData.PaletteColorCount := AValue;
end;

function TRawImageDescriptionWrap.GetPaletteBitsPerIndex(): byte;
begin
  Result := FData.PaletteBitsPerIndex;
end;

procedure TRawImageDescriptionWrap.SetPaletteBitsPerIndex(AValue: byte);
begin
  FData.PaletteBitsPerIndex := AValue;
end;

function TRawImageDescriptionWrap.GetPaletteShift(): byte;
begin
  Result := FData.PaletteShift;
end;

procedure TRawImageDescriptionWrap.SetPaletteShift(AValue: byte);
begin
  FData.PaletteShift := AValue;
end;

function TRawImageDescriptionWrap.GetPaletteLineEnd(): TRawImageLineEnd;
begin
  Result := FData.PaletteLineEnd;
end;

procedure TRawImageDescriptionWrap.SetPaletteLineEnd(AValue: TRawImageLineEnd);
begin
  FData.PaletteLineEnd := AValue;
end;

function TRawImageDescriptionWrap.GetPaletteBitOrder(): TRawImageBitOrder;
begin
  Result := FData.PaletteBitOrder;
end;

procedure TRawImageDescriptionWrap.SetPaletteBitOrder(AValue: TRawImageBitOrder);
begin
  FData.PaletteBitOrder := AValue;
end;

function TRawImageDescriptionWrap.GetPaletteByteOrder(): TRawImageByteOrder;
begin
  Result := FData.PaletteByteOrder;
end;

procedure TRawImageDescriptionWrap.SetPaletteByteOrder(AValue: TRawImageByteOrder);
begin
  FData.PaletteByteOrder := AValue;
end;

function TRawImageDescriptionWrap.RawImageDescriptionData(): PRawImageDescription;
begin
  Result := @FData;
end;

procedure TRawImageDescriptionWrap.Init();
begin
  FData.Init;
end;

procedure TRawImageDescriptionWrap.Init_BPP1(AWidth, AHeight: integer);
begin
  FData.Init_BPP1(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP16_R5G6B5(AWidth, AHeight: integer);
begin
  FData.Init_BPP16_R5G6B5(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP24_R8G8B8_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP24_R8G8B8_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP24_R8G8B8_BIO_TTB_UpsideDown(AWidth, AHeight: integer);
begin
  FData.Init_BPP24_R8G8B8_BIO_TTB_UpsideDown(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP32_A8R8G8B8_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP32_A8R8G8B8_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP32_R8G8B8A8_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP32_R8G8B8A8_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP24_B8G8R8_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP24_B8G8R8_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP24_B8G8R8_M1_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP24_B8G8R8_M1_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP32_B8G8R8_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP32_B8G8R8_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP32_B8G8R8_M1_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP32_B8G8R8_M1_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP32_B8G8R8A8_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP32_B8G8R8A8_BIO_TTB(AWidth, AHeight);
end;

procedure TRawImageDescriptionWrap.Init_BPP32_B8G8R8A8_M1_BIO_TTB(AWidth, AHeight: integer);
begin
  FData.Init_BPP32_B8G8R8A8_M1_BIO_TTB(AWidth, AHeight);
end;

function TRawImageDescriptionWrap.GetDescriptionFromMask(): TRawImageDescriptionWrap;
begin
  Result := TRawImageDescriptionWrap.Create();
  Result.FData := FData.GetDescriptionFromMask;
end;

function TRawImageDescriptionWrap.GetDescriptionFromAlpha(): TRawImageDescriptionWrap;
begin
  Result := TRawImageDescriptionWrap.Create();
  Result.FData := FData.GetDescriptionFromAlpha;
end;

procedure TRawImageDescriptionWrap.GetRGBIndices(out Ridx, Gidx, Bidx, Aidx: byte);
begin
  FData.GetRGBIndices(Ridx, Gidx, Bidx, Aidx);
end;

function TRawImageDescriptionWrap.BytesPerLine(): PtrUInt;
begin
  Result := FData.BytesPerLine();
end;

function TRawImageDescriptionWrap.BitsPerLine(): PtrUInt;
begin
  Result := FData.BitsPerLine();
end;

function TRawImageDescriptionWrap.MaskBytesPerLine(): PtrUInt;
begin
  Result := FData.MaskBytesPerLine();
end;

function TRawImageDescriptionWrap.MaskBitsPerLine(): PtrUInt;
begin
  Result := FData.MaskBitsPerLine();
end;

function TRawImageDescriptionWrap.AsString(): string;
begin
  Result := FData.AsString();
end;

function TRawImageDescriptionWrap.IsEqual(ADesc: TRawImageDescriptionWrap): boolean;
begin
  Result := FData.IsEqual(ADesc.FData);
end;


constructor TRawImageWrap.Create();
begin
  inherited Create();
end;

constructor TRawImageWrap.Create(const AData: TRawImage);
begin
  inherited Create();
  FData := AData;
end;

class function TRawImageWrap.UnWrap(const AData: PRawImage): TRawImageWrap;
begin
  Result := nil;
  if AData <> nil then
  begin
    Result := Create();
    Result.FData := AData^;
  end;
end;

destructor TRawImageWrap.Destroy;
begin
  inherited Destroy();
end;

function TRawImageWrap.GetDescription(): TRawImageDescriptionWrap;
begin
  Result := TRawImageDescriptionWrap.Create();
  Result.FData := FData.Description;
end;

procedure TRawImageWrap.SetDescription(AValue: TRawImageDescriptionWrap);
begin
  FData.Description := AValue.RawImageDescriptionData()^;
end;

function TRawImageWrap.GetData(): pbyte;
begin
  Result := FData.Data;
end;

procedure TRawImageWrap.SetData(AValue: pbyte);
begin
  FData.Data := AValue;
end;

function TRawImageWrap.GetDataSize(): PtrUInt;
begin
  Result := FData.DataSize;
end;

procedure TRawImageWrap.SetDataSize(AValue: PtrUInt);
begin
  FData.DataSize := AValue;
end;

function TRawImageWrap.GetMask(): pbyte;
begin
  Result := FData.Mask;
end;

procedure TRawImageWrap.SetMask(AValue: pbyte);
begin
  FData.Mask := AValue;
end;

function TRawImageWrap.GetMaskSize(): PtrUInt;
begin
  Result := FData.MaskSize;
end;

procedure TRawImageWrap.SetMaskSize(AValue: PtrUInt);
begin
  FData.MaskSize := AValue;
end;

function TRawImageWrap.GetPalette(): pbyte;
begin
  Result := FData.Palette;
end;

procedure TRawImageWrap.SetPalette(AValue: pbyte);
begin
  FData.Palette := AValue;
end;

function TRawImageWrap.GetPaletteSize(): PtrUInt;
begin
  Result := FData.PaletteSize;
end;

procedure TRawImageWrap.SetPaletteSize(AValue: PtrUInt);
begin
  FData.PaletteSize := AValue;
end;

function TRawImageWrap.RawImageData(): PRawImage;
begin
  Result := @FData;
end;

procedure TRawImageWrap.Init();
begin
  FData.Init();
end;

procedure TRawImageWrap.CreateData(AZeroMem: boolean);
begin
  FData.CreateData(AZeroMem);
end;

procedure TRawImageWrap.FreeData();
begin
  FData.FreeData();
end;

procedure TRawImageWrap.ReleaseData();
begin
  FData.ReleaseData();
end;

procedure TRawImageWrap.ExtractRect(const ARect: TRect; out ADst: TRawImageWrap);
begin
  FData.ExtractRect(ARect, ADst.FData);
end;

function TRawImageWrap.GetLineStart(ALine: cardinal): pbyte;
begin
  Result := FData.GetLineStart(ALine);
end;

procedure TRawImageWrap.PerformEffect(const ADrawEffect: TGraphicsDrawEffect; CreateNewData: boolean = True; FreeOldData: boolean = False);
begin
  FData.PerformEffect(ADrawEffect, CreateNewData, FreeOldData);
end;

function TRawImageWrap.ReadBits(const APosition: TRawImagePosition; APrec, AShift: byte): word;
begin
  Result := FData.ReadBits(APosition, APrec, AShift);
end;

procedure TRawImageWrap.ReadChannels(const APosition: TRawImagePosition; out ARed, AGreen, ABlue, AAlpha: word);
begin
  FData.ReadChannels(APosition, ARed, AGreen, ABlue, AAlpha);
end;

procedure TRawImageWrap.ReadMask(const APosition: TRawImagePosition; out AMask: boolean);
begin
  FData.ReadMask(APosition, AMask);
end;

procedure TRawImageWrap.WriteBits(const APosition: TRawImagePosition; APrec, AShift: byte; ABits: word);
begin
  FData.WriteBits(APosition, APrec, AShift, ABits);
end;

procedure TRawImageWrap.WriteChannels(const APosition: TRawImagePosition; ARed, AGreen, ABlue, AAlpha: word);
begin
  FData.WriteChannels(APosition, ARed, AGreen, ABlue, AAlpha);
end;

procedure TRawImageWrap.WriteMask(const APosition: TRawImagePosition; AMask: boolean);
begin
  FData.WriteMask(APosition, AMask);
end;

function TRawImageWrap.IsMasked(ATestPixels: boolean): boolean;
begin
  Result := FData.IsMasked(ATestPixels);
end;

function TRawImageWrap.IsTransparent(ATestPixels: boolean): boolean;
begin
  Result := FData.IsTransparent(ATestPixels);
end;

function TRawImageWrap.IsEqual(AImage: TRawImageWrap): boolean;
begin
  Result := FData.IsEqual(AImage.FData);
end;


end.
