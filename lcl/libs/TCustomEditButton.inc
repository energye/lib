// constructor
function TCustomEditButton_Create(AOwner: TComponent): TCustomEditButton; extdecl;
begin
  {$define handleExceptionID := 2200}
  handleExceptionBegin
  Result := TCustomEditButton.Create(AOwner);
  handleExceptionEnd
end;

function TCustomEditButton_TClass(): TClass; extdecl;
begin
  Result := TCustomEditButton;
end;

exports
  TCustomEditButton_Create,
  TCustomEditButton_TClass;