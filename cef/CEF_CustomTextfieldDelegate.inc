
//constructor
function CustomTextfieldDelegate_Create(const events: ICefTextfieldDelegateEvents): TCustomTextfieldDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomTextfieldDelegate.Create(events);
  handleExceptionEnd
end;


exports
  CustomTextfieldDelegate_Create;