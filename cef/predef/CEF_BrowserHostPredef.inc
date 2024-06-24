
procedure ICefBrowserHost_IMESetComposition(AObj: ICefBrowserHost; const AText: PChar; const AUnderlines : PCompositionUnderlineArray; ASize: Integer; const AReplacementRange, ASelectionRange : PCefRange); extdecl;
var
  underline: TCefCompositionUnderlineDynArray;
  idx: Integer;
begin
  handleExceptionBegin
  SetLength(underline, ASize);
  for idx := 0 to ASize - 1 do
  begin
    underline[idx] := AUnderlines^[idx];
  end;
  AObj.IMESetComposition(AText, underline, AReplacementRange, ASelectionRange);
  SetLength(underline, 0);
  handleExceptionEnd
end;


exports
  ICefBrowserHost_IMESetComposition;
