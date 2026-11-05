// procedure
procedure TBeautifierSetIndentCallback_Callback(AObj: TBeautifierSetIndentCallback; LinePos: Integer; Indent: Integer; RelativeToLinePos: Integer; IndentChars: PChar; IndentCharsFromLinePos: Integer); extdecl;
begin
  {$define handleExceptionID := 41600}
  handleExceptionBegin
  AObj.Callback(LinePos, Indent, RelativeToLinePos, IndentChars, IndentCharsFromLinePos);
  handleExceptionEnd
end;

exports
  TBeautifierSetIndentCallback_Callback;
