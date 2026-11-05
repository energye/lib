// constructor
function TMemoScrollbar_Create(AControl: TWinControl; AKind: TScrollBarKind): TMemoScrollbar; extdecl;
begin
  {$define handleExceptionID := 24900}
  handleExceptionBegin
  Result := TMemoScrollbar.Create(AControl, AKind);
  handleExceptionEnd
end;

exports
  TMemoScrollbar_Create;
