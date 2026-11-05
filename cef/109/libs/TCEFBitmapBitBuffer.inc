// constructor
function TCEFBitmapBitBuffer_Create(aWidth: integer; aHeight: integer): TCEFBitmapBitBuffer; extdecl;
begin
  {$define handleExceptionID := 9300}
  handleExceptionBegin
  Result := TCEFBitmapBitBuffer.Create(aWidth, aHeight);
  handleExceptionEnd
end;

// procedure
procedure TCEFBitmapBitBuffer_UpdateSize(AObj: TCEFBitmapBitBuffer; aWidth: integer; aHeight: integer); extdecl;
begin
  {$define handleExceptionID := 9301}
  handleExceptionBegin
  AObj.UpdateSize(aWidth, aHeight);
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_Width(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  {$define handleExceptionID := 9302}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_Height(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  {$define handleExceptionID := 9303}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_BufferLength(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  {$define handleExceptionID := 9304}
  handleExceptionBegin
  Result := AObj.BufferLength;
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_Empty(AObj: TCEFBitmapBitBuffer): LongBool; extdecl;
begin
  {$define handleExceptionID := 9305}
  handleExceptionBegin
  Result := AObj.Empty;
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_Scanline(AObj: TCEFBitmapBitBuffer; y: integer): PByte; extdecl;
begin
  {$define handleExceptionID := 9306}
  handleExceptionBegin
  Result := AObj.Scanline[y];
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_ScanlineSize(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  {$define handleExceptionID := 9307}
  handleExceptionBegin
  Result := AObj.ScanlineSize;
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_BufferScanlineSize(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  {$define handleExceptionID := 9308}
  handleExceptionBegin
  Result := AObj.BufferScanlineSize;
  handleExceptionEnd
end;

// property
function TCEFBitmapBitBuffer_BufferBits(AObj: TCEFBitmapBitBuffer): pointer; extdecl;
begin
  {$define handleExceptionID := 9309}
  handleExceptionBegin
  Result := AObj.BufferBits;
  handleExceptionEnd
end;

exports
  TCEFBitmapBitBuffer_Create,
  TCEFBitmapBitBuffer_UpdateSize,
  TCEFBitmapBitBuffer_Width,
  TCEFBitmapBitBuffer_Height,
  TCEFBitmapBitBuffer_BufferLength,
  TCEFBitmapBitBuffer_Empty,
  TCEFBitmapBitBuffer_Scanline,
  TCEFBitmapBitBuffer_ScanlineSize,
  TCEFBitmapBitBuffer_BufferScanlineSize,
  TCEFBitmapBitBuffer_BufferBits;