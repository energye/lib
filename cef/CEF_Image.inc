
//function
procedure CefImage_UnWrap(data: Pointer; var Result: ICefImage); extdecl;
begin
  Result := TCefImageRef.UnWrap(data);
end;

//function
procedure CefImage_New(var Result: ICefImage); extdecl;
begin
  Result := TCefImageRef.New();
end;

//function
function CefImage_IsEmpty(AObj: ICefImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEmpty();
  handleExceptionEnd
end;

//function
function CefImage_IsSame(AObj: ICefImage; const that: ICefImage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefImage_AddBitmap(AObj: ICefImage; var scaleFactor: Single; pixelWidth,  pixelHeight: Integer; colorType: TCefColorType; alphaType: TCefAlphaType; const pixelData: Pointer; pixelDataSize: NativeUInt): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddBitmap(scaleFactor, pixelWidth,  pixelHeight, colorType, alphaType, pixelData, pixelDataSize);
  handleExceptionEnd
end;

//function
function CefImage_AddPng(AObj: ICefImage; var scaleFactor: Single; const pngData: Pointer; pngDataSize: NativeUInt): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddPng(scaleFactor, pngData, pngDataSize);
  handleExceptionEnd
end;

//function
function CefImage_AddJpeg(AObj: ICefImage; var scaleFactor: Single; const jpegData: Pointer; jpegDataSize: NativeUInt): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddJpeg(scaleFactor, jpegData, jpegDataSize);
  handleExceptionEnd
end;

//function
function CefImage_GetWidth(AObj: ICefImage): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetWidth();
  handleExceptionEnd
end;

//function
function CefImage_GetHeight(AObj: ICefImage): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHeight();
  handleExceptionEnd
end;

//function
function CefImage_HasRepresentation(AObj: ICefImage; var scaleFactor: Single): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasRepresentation(scaleFactor);
  handleExceptionEnd
end;

//function
function CefImage_RemoveRepresentation(AObj: ICefImage; var scaleFactor: Single): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoveRepresentation(scaleFactor);
  handleExceptionEnd
end;

//function
function CefImage_GetRepresentationInfo(AObj: ICefImage; var scaleFactor: Single; var actualScaleFactor: Single; var pixelWidth,  pixelHeight: Integer): LongBool; extdecl;
var
  RetactualScaleFactor: Single;
  RetpixelWidth: Integer;
  RetpixelHeight: Integer;
begin
  handleExceptionBegin
  RetactualScaleFactor := actualScaleFactor;
  RetpixelWidth := pixelWidth;
  RetpixelHeight := pixelHeight;
  Result := AObj.GetRepresentationInfo(scaleFactor, RetactualScaleFactor, RetpixelWidth, RetpixelHeight);
  actualScaleFactor := RetactualScaleFactor;
  pixelWidth := RetpixelWidth;
  pixelHeight := RetpixelHeight;
  handleExceptionEnd
end;

//function
procedure CefImage_GetAsBitmap(AObj: ICefImage; var scaleFactor: Single; colorType: TCefColorType; alphaType: TCefAlphaType; var pixelWidth,  pixelHeight: Integer; var Result: ICefBinaryValue); extdecl;
var
  RetpixelWidth: Integer;
  RetpixelHeight: Integer;
begin
  handleExceptionBegin
  RetpixelWidth := pixelWidth;
  RetpixelHeight := pixelHeight;
  Result := AObj.GetAsBitmap(scaleFactor, colorType, alphaType, RetpixelWidth, RetpixelHeight);
  pixelWidth := RetpixelWidth;
  pixelHeight := RetpixelHeight;
  handleExceptionEnd
end;

//function
procedure CefImage_GetAsPng(AObj: ICefImage; var scaleFactor: Single; withTransparency: LongBool; var pixelWidth,  pixelHeight: Integer; var Result: ICefBinaryValue); extdecl;
var
  RetpixelWidth: Integer;
  RetpixelHeight: Integer;
begin
  handleExceptionBegin
  RetpixelWidth := pixelWidth;
  RetpixelHeight := pixelHeight;
  Result := AObj.GetAsPng(scaleFactor, withTransparency, RetpixelWidth, RetpixelHeight);
  pixelWidth := RetpixelWidth;
  pixelHeight := RetpixelHeight;
  handleExceptionEnd
end;

//function
procedure CefImage_GetAsJpeg(AObj: ICefImage; var scaleFactor: Single; quality: Integer; var pixelWidth,  pixelHeight: Integer; var Result: ICefBinaryValue); extdecl;
var
  RetpixelWidth: Integer;
  RetpixelHeight: Integer;
begin
  handleExceptionBegin
  RetpixelWidth := pixelWidth;
  RetpixelHeight := pixelHeight;
  Result := AObj.GetAsJpeg(scaleFactor, quality, RetpixelWidth, RetpixelHeight);
  pixelWidth := RetpixelWidth;
  pixelHeight := RetpixelHeight;
  handleExceptionEnd
end;


exports
  CefImage_UnWrap,
  CefImage_New,
  CefImage_IsEmpty,
  CefImage_IsSame,
  CefImage_AddBitmap,
  CefImage_AddPng,
  CefImage_AddJpeg,
  CefImage_GetWidth,
  CefImage_GetHeight,
  CefImage_HasRepresentation,
  CefImage_RemoveRepresentation,
  CefImage_GetRepresentationInfo,
  CefImage_GetAsBitmap,
  CefImage_GetAsPng,
  CefImage_GetAsJpeg;