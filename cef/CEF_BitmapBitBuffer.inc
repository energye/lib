
//constructor
function CEFBitmapBitBuffer_Create(aWidth,  aHeight: integer): TCEFBitmapBitBuffer; extdecl;
begin
  handleExceptionBegin
  Result := TCEFBitmapBitBuffer.Create(aWidth,  aHeight);
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_Width(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_Height(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_BufferLength(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BufferLength;
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_Empty(AObj: TCEFBitmapBitBuffer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Empty;
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_Scanline(AObj: TCEFBitmapBitBuffer; y: integer): PByte; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Scanline[y];
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_ScanlineSize(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScanlineSize;
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_BufferScanlineSize(AObj: TCEFBitmapBitBuffer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BufferScanlineSize;
  handleExceptionEnd
end;

//property
function CEFBitmapBitBuffer_BufferBits(AObj: TCEFBitmapBitBuffer): pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BufferBits;
  handleExceptionEnd
end;

//procedure
procedure CEFBitmapBitBuffer_UpdateSize(AObj: TCEFBitmapBitBuffer; aWidth,  aHeight: integer); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateSize(aWidth,  aHeight);
  handleExceptionEnd
end;


exports
  CEFBitmapBitBuffer_Create,
  CEFBitmapBitBuffer_Width,
  CEFBitmapBitBuffer_Height,
  CEFBitmapBitBuffer_BufferLength,
  CEFBitmapBitBuffer_Empty,
  CEFBitmapBitBuffer_Scanline,
  CEFBitmapBitBuffer_ScanlineSize,
  CEFBitmapBitBuffer_BufferScanlineSize,
  CEFBitmapBitBuffer_BufferBits,
  CEFBitmapBitBuffer_UpdateSize;