// constructor
function THelpContents_Create(TheOwner: TComponent): THelpContents; extdecl;
begin
  {$define handleExceptionID := 46600}
  handleExceptionBegin
  Result := THelpContents.Create(TheOwner);
  handleExceptionEnd
end;

function THelpContents_TClass(): TClass; extdecl;
begin
  Result := THelpContents;
end;

exports
  THelpContents_Create,
  THelpContents_TClass;