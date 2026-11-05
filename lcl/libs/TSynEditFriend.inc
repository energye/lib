// constructor
function TSynEditFriend_Create(AOwner: TComponent): TSynEditFriend; extdecl;
begin
  {$define handleExceptionID := 36500}
  handleExceptionBegin
  Result := TSynEditFriend.Create(AOwner);
  handleExceptionEnd
end;

function TSynEditFriend_TClass(): TClass; extdecl;
begin
  Result := TSynEditFriend;
end;

exports
  TSynEditFriend_Create,
  TSynEditFriend_TClass;