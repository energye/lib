
procedure ICefBrowserHost_IMESetComposition(AObj: ICefBrowserHost; const AText: PChar; const AUnderlines : PCompositionUnderlineArray; ASize: Integer; const AReplacementRange, ASelectionRange : PCefRange); extdecl;
var
  underline: TCefCompositionUnderlineDynArray;
  idx: Integer;
begin
  {$define handleExceptionFuncName :='IMESetComposition'}
  handleExceptionBegin
  if ASize > 0 then
    try
      SetLength(underline, ASize);
      for idx := 0 to ASize - 1 do
      begin
        underline[idx] := AUnderlines^[idx];
      end;
      AObj.IMESetComposition(AText, underline, AReplacementRange, ASelectionRange);
    finally
      SetLength(underline, 0);
    end;
  handleExceptionEnd
end;


exports
  ICefBrowserHost_IMESetComposition;
