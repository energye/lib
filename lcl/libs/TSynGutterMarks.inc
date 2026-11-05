// constructor
function TSynGutterMarks_Create(AnOwner: TComponent): TSynGutterMarks; extdecl;
begin
  {$define handleExceptionID := 40300}
  handleExceptionBegin
  Result := TSynGutterMarks.Create(AnOwner);
  handleExceptionEnd
end;

function TSynGutterMarks_TClass(): TClass; extdecl;
begin
  Result := TSynGutterMarks;
end;

exports
  TSynGutterMarks_Create,
  TSynGutterMarks_TClass;