
//function
function FPCustomImageWriter_Class(): TClass; extdecl;
begin
  Result := TFPCustomImageWriter;
end;

//procedure
procedure FPCustomImageWriter_ImageWrite(AObj: TFPCustomImageWriter; Str: TStream; Img: TFPCustomImage); extdecl;
begin
  handleExceptionBegin
  AObj.ImageWrite(Str, Img);
  handleExceptionEnd
end;


exports
  FPCustomImageWriter_Class,
  FPCustomImageWriter_ImageWrite;