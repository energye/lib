// procedure
procedure TFPCustomImageWriter_ImageWrite(AObj: TFPCustomImageWriter; Str: TStream; Img: TFPCustomImage); extdecl;
begin
  {$define handleExceptionID := 27800}
  handleExceptionBegin
  AObj.ImageWrite(Str, Img);
  handleExceptionEnd
end;

exports
  TFPCustomImageWriter_ImageWrite;
