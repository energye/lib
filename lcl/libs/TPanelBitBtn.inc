// constructor
function TPanelBitBtn_Create(AOwner: TComponent): TPanelBitBtn; extdecl;
begin
  {$define handleExceptionID := 33000}
  handleExceptionBegin
  Result := TPanelBitBtn.Create(AOwner);
  handleExceptionEnd
end;

function TPanelBitBtn_TClass(): TClass; extdecl;
begin
  Result := TPanelBitBtn;
end;

exports
  TPanelBitBtn_Create,
  TPanelBitBtn_TClass;