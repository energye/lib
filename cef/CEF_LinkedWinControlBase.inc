
//property
function CEFLinkedWinControlBase_UseSetFocus(AIsSet: LongBool; AObj: TCEFLinkedWinControlBase; AValue: LongBool): LongBool; extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='UseSetFocus'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseSetFocus := AValue;
  end else
    Result := AObj.UseSetFocus;
  handleExceptionEnd
{$ENDIF}
end;


exports
  CEFLinkedWinControlBase_UseSetFocus;