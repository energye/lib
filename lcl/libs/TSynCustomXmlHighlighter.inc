// constructor
function TSynCustomXmlHighlighter_Create(AOwner: TComponent): TSynCustomXmlHighlighter; extdecl;
begin
  {$define handleExceptionID := 43300}
  handleExceptionBegin
  Result := TSynCustomXmlHighlighter.Create(AOwner);
  handleExceptionEnd
end;

function TSynCustomXmlHighlighter_TClass(): TClass; extdecl;
begin
  Result := TSynCustomXmlHighlighter;
end;

exports
  TSynCustomXmlHighlighter_Create,
  TSynCustomXmlHighlighter_TClass;