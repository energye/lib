// constructor
function TLazDockSplitter_Create(AOwner: TComponent): TLazDockSplitter; extdecl;
begin
  {$define handleExceptionID := 24100}
  handleExceptionBegin
  Result := TLazDockSplitter.Create(AOwner);
  handleExceptionEnd
end;

function TLazDockSplitter_TClass(): TClass; extdecl;
begin
  Result := TLazDockSplitter;
end;

exports
  TLazDockSplitter_Create,
  TLazDockSplitter_TClass;