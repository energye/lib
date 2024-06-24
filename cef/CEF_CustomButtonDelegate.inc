
//constructor
function CustomButtonDelegate_Create(const events: ICefButtonDelegateEvents): TCustomButtonDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomButtonDelegate.Create(events);
  handleExceptionEnd
end;


exports
  CustomButtonDelegate_Create;