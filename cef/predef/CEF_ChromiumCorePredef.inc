
procedure ChromiumCore_IMESetComposition(AObj: TChromiumCore; const AText: PChar; const AUnderlines : PCompositionUnderlineArray; ASize: Integer; const AReplacementRange, ASelectionRange : PCefRange); extdecl;
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

//function
function ChromiumCore_SetCookie(AObj: TChromiumCore; const url: PChar; aSetImmediately: LongBool; aID: integer; const cookie: TCookiePtr): LongBool; extdecl;
var
  InCookie: TCookie;
begin
  handleExceptionBegin
  InCookie := CookieToPas(cookie);
  Result := AObj.SetCookie(url, InCookie.name, InCookie.value, InCookie.domain, InCookie.path, InCookie.secure, InCookie.httponly, InCookie.has_expires, InCookie.creation,
    InCookie.last_access, InCookie.expires, InCookie.same_site, InCookie.priority, aSetImmediately, aID);
  handleExceptionEnd
end;

procedure ChromiumCore_AsChromiumEvents(AObj: TChromiumCore; var Result: IChromiumEvents); extdecl;
begin
  Result := AObj as IChromiumEvents;
end;

exports
  ChromiumCore_IMESetComposition,
  ChromiumCore_SetCookie,
  ChromiumCore_AsChromiumEvents;
