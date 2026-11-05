// constructor
function THelpTopicSearch_Create(TheOwner: TComponent): THelpTopicSearch; extdecl;
begin
  {$define handleExceptionID := 46700}
  handleExceptionBegin
  Result := THelpTopicSearch.Create(TheOwner);
  handleExceptionEnd
end;

function THelpTopicSearch_TClass(): TClass; extdecl;
begin
  Result := THelpTopicSearch;
end;

exports
  THelpTopicSearch_Create,
  THelpTopicSearch_TClass;