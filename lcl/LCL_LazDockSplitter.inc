
//constructor
function LazDockSplitter_Create(AOwner: TComponent): TLazDockSplitter; extdecl;
begin
  handleExceptionBegin
  Result := TLazDockSplitter.Create(AOwner);
  handleExceptionEnd
end;

//function
function LazDockSplitter_Class(): TClass; extdecl;
begin
  Result := TLazDockSplitter;
end;


exports
  LazDockSplitter_Create,
  LazDockSplitter_Class;