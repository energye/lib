// constructor
function TCustomTextfieldDelegate_Create(const events: ICefTextfieldDelegateEvents; out IntfTextfieldDelegate: ICefTextfieldDelegate; out IntfViewDelegate: ICefViewDelegate): TCustomTextfieldDelegate; extdecl;
begin
  {$define handleExceptionID := 7700}
  handleExceptionBegin
  Result := TCustomTextfieldDelegate.Create(events);
  IntfTextfieldDelegate := Result as ICefTextfieldDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TCustomTextfieldDelegate_Create;
