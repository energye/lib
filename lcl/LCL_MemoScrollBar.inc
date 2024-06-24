
//constructor
function MemoScrollBar_Create(AControl: TWinControl; AKind: TScrollBarKind): TMemoScrollBar; extdecl;
begin
  handleExceptionBegin
  Result := TMemoScrollBar.Create(AControl, AKind);
  handleExceptionEnd
end;

//function
function MemoScrollBar_Class(): TClass; extdecl;
begin
  Result := TMemoScrollBar;
end;


exports
  MemoScrollBar_Create,
  MemoScrollBar_Class;