// constructor
function TCefImageRef_Create(data: Pointer; out IntfImage: ICefImage): TCefImageRef; extdecl;
begin
  {$define handleExceptionID := 19400}
  handleExceptionBegin
  Result := TCefImageRef.Create(data);
  IntfImage := Result as ICefImage;
  handleExceptionEnd
end;

// function
function TCefImageRef_IsEmpty(AObj: ICefImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 19401}
  handleExceptionBegin
  Result := AObj.IsEmpty();
  handleExceptionEnd
end;

// function
function TCefImageRef_IsSame(AObj: ICefImage; const that: ICefImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 19402}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefImageRef_AddBitmap(AObj: ICefImage; var scaleFactor: Single; pixelWidth: Integer; pixelHeight: Integer; colorType: TCefColorType; alphaType: TCefAlphaType; const pixelData: Pointer; pixelDataSize: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19403}
  handleExceptionBegin
  Result := AObj.AddBitmap(scaleFactor, pixelWidth, pixelHeight, colorType, alphaType, pixelData, pixelDataSize);
  handleExceptionEnd
end;

// function
function TCefImageRef_AddPng(AObj: ICefImage; var scaleFactor: Single; const pngData: Pointer; pngDataSize: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19404}
  handleExceptionBegin
  Result := AObj.AddPng(scaleFactor, pngData, pngDataSize);
  handleExceptionEnd
end;

// function
function TCefImageRef_AddJpeg(AObj: ICefImage; var scaleFactor: Single; const jpegData: Pointer; jpegDataSize: NativeUInt): LongBool; extdecl;
begin
  {$define handleExceptionID := 19405}
  handleExceptionBegin
  Result := AObj.AddJpeg(scaleFactor, jpegData, jpegDataSize);
  handleExceptionEnd
end;

// function
function TCefImageRef_GetWidth(AObj: ICefImage): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 19406}
  handleExceptionBegin
  Result := AObj.GetWidth();
  handleExceptionEnd
end;

// function
function TCefImageRef_GetHeight(AObj: ICefImage): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 19407}
  handleExceptionBegin
  Result := AObj.GetHeight();
  handleExceptionEnd
end;

// function
function TCefImageRef_HasRepresentation(AObj: ICefImage; var scaleFactor: Single): LongBool; extdecl;
begin
  {$define handleExceptionID := 19408}
  handleExceptionBegin
  Result := AObj.HasRepresentation(scaleFactor);
  handleExceptionEnd
end;

// function
function TCefImageRef_RemoveRepresentation(AObj: ICefImage; var scaleFactor: Single): LongBool; extdecl;
begin
  {$define handleExceptionID := 19409}
  handleExceptionBegin
  Result := AObj.RemoveRepresentation(scaleFactor);
  handleExceptionEnd
end;

// function
function TCefImageRef_GetRepresentationInfo(AObj: ICefImage; var scaleFactor: Single; var actualScaleFactor: Single; var pixelWidth: Integer; var pixelHeight: Integer): LongBool; extdecl;
var
  OutactualScaleFactor: Single;
  OutpixelWidth: Integer;
  OutpixelHeight: Integer;
begin
  {$define handleExceptionID := 19410}
  handleExceptionBegin
  OutactualScaleFactor := actualScaleFactor;
  OutpixelWidth := pixelWidth;
  OutpixelHeight := pixelHeight;
  Result := AObj.GetRepresentationInfo(scaleFactor, OutactualScaleFactor, OutpixelWidth, OutpixelHeight);
  actualScaleFactor := OutactualScaleFactor;
  pixelWidth := OutpixelWidth;
  pixelHeight := OutpixelHeight;
  handleExceptionEnd
end;

// function
procedure TCefImageRef_GetAsBitmap(AObj: ICefImage; var scaleFactor: Single; colorType: TCefColorType; alphaType: TCefAlphaType; var pixelWidth: Integer; var pixelHeight: Integer; var Result: ICefBinaryValue); extdecl;
var
  OutpixelWidth: Integer;
  OutpixelHeight: Integer;
begin
  {$define handleExceptionID := 19411}
  handleExceptionBegin
  OutpixelWidth := pixelWidth;
  OutpixelHeight := pixelHeight;
  Result := AObj.GetAsBitmap(scaleFactor, colorType, alphaType, OutpixelWidth, OutpixelHeight);
  pixelWidth := OutpixelWidth;
  pixelHeight := OutpixelHeight;
  handleExceptionEnd
end;

// function
procedure TCefImageRef_GetAsPng(AObj: ICefImage; var scaleFactor: Single; withTransparency: LongBool; var pixelWidth: Integer; var pixelHeight: Integer; var Result: ICefBinaryValue); extdecl;
var
  OutpixelWidth: Integer;
  OutpixelHeight: Integer;
begin
  {$define handleExceptionID := 19412}
  handleExceptionBegin
  OutpixelWidth := pixelWidth;
  OutpixelHeight := pixelHeight;
  Result := AObj.GetAsPng(scaleFactor, withTransparency, OutpixelWidth, OutpixelHeight);
  pixelWidth := OutpixelWidth;
  pixelHeight := OutpixelHeight;
  handleExceptionEnd
end;

// function
procedure TCefImageRef_GetAsJpeg(AObj: ICefImage; var scaleFactor: Single; quality: Integer; var pixelWidth: Integer; var pixelHeight: Integer; var Result: ICefBinaryValue); extdecl;
var
  OutpixelWidth: Integer;
  OutpixelHeight: Integer;
begin
  {$define handleExceptionID := 19413}
  handleExceptionBegin
  OutpixelWidth := pixelWidth;
  OutpixelHeight := pixelHeight;
  Result := AObj.GetAsJpeg(scaleFactor, quality, OutpixelWidth, OutpixelHeight);
  pixelWidth := OutpixelWidth;
  pixelHeight := OutpixelHeight;
  handleExceptionEnd
end;

// function static
procedure TCefImageRef_UnWrap(data: Pointer; var Result: ICefImage); extdecl;
begin
  Result := TCefImageRef.UnWrap(data);
end;

// function static
procedure TCefImageRef_New(var Result: ICefImage); extdecl;
begin
  Result := TCefImageRef.New();
end;

exports
  TCefImageRef_Create,
  TCefImageRef_IsEmpty,
  TCefImageRef_IsSame,
  TCefImageRef_AddBitmap,
  TCefImageRef_AddPng,
  TCefImageRef_AddJpeg,
  TCefImageRef_GetWidth,
  TCefImageRef_GetHeight,
  TCefImageRef_HasRepresentation,
  TCefImageRef_RemoveRepresentation,
  TCefImageRef_GetRepresentationInfo,
  TCefImageRef_GetAsBitmap,
  TCefImageRef_GetAsPng,
  TCefImageRef_GetAsJpeg,
  TCefImageRef_UnWrap,
  TCefImageRef_New;