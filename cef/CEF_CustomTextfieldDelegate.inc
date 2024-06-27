
//constructor
function CustomTextfieldDelegate_Create(const events: ICefTextfieldDelegateEvents): TCustomTextfieldDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomTextfieldDelegate.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomTextfieldDelegate_AsInterface(AObj: TCustomTextfieldDelegate; var Result: ICefTextfieldDelegate); extdecl;
begin
  Result := AObj as ICefTextfieldDelegate;
end;


exports
  CustomTextfieldDelegate_Create,
  CustomTextfieldDelegate_AsInterface;