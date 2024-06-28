
procedure ChromiumCore_IMESetComposition(AObj: TChromiumCore; const AText: PChar; const AUnderlines : PCompositionUnderlineArray; ASize: Integer; const AReplacementRange, ASelectionRange : PCefRange); extdecl;
var
  underline: TCefCompositionUnderlineDynArray;
  idx: Integer;
begin
  {$define handleExceptionFuncName :='IMESetComposition'}
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

//function
function ChromiumCore_SetCookie(AObj: TChromiumCore; const url: PChar; aSetImmediately: LongBool; aID: integer; const cookie: TCookiePtr): LongBool; extdecl;
var
  InCookie: TCookie;
begin
  {$define handleExceptionFuncName :='SetCookie'}
  handleExceptionBegin
  InCookie := CookieToPas(cookie);
  Result := AObj.SetCookie(url, InCookie.name, InCookie.value, InCookie.domain, InCookie.path, InCookie.secure, InCookie.httponly, InCookie.has_expires, InCookie.creation,
    InCookie.last_access, InCookie.expires, InCookie.same_site, InCookie.priority, aSetImmediately, aID);
  handleExceptionEnd
end;

exports
  ChromiumCore_IMESetComposition,
  ChromiumCore_SetCookie;
