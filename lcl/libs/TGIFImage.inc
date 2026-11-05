// constructor
function TGIFImage_Create(): TGIFImage; extdecl;
begin
  {$define handleExceptionID := 15100}
  handleExceptionBegin
  Result := TGIFImage.Create();
  handleExceptionEnd
end;

{$IFNDEF DisableLCLGIF}
// property
function TGIFImage_Interlaced(AObj: TGIFImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 15101}
  handleExceptionBegin
  Result := AObj.Interlaced;
  handleExceptionEnd
end;
{$ENDIF}

{$IFNDEF DisableLCLGIF}
// property
function TGIFImage_BitsPerPixel(AObj: TGIFImage): byte; extdecl;
begin
  {$define handleExceptionID := 15102}
  handleExceptionBegin
  Result := AObj.BitsPerPixel;
  handleExceptionEnd
end;
{$ENDIF}

exports
  TGIFImage_Create,
{$IFNDEF DisableLCLGIF}
  TGIFImage_Interlaced,
{$ENDIF}
{$IFNDEF DisableLCLGIF}
  TGIFImage_BitsPerPixel{$ENDIF}
;