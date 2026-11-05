{$IFDEF MSWINDOWS}
// property
function TCEFLinkedWinControlBase_UseSetFocus(ASet: LongBool; AObj: TCEFLinkedWinControlBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 900}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseSetFocus := AValue
  end else
    Result := AObj.UseSetFocus;
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
exports
  TCEFLinkedWinControlBase_UseSetFocus;
{$ENDIF}
