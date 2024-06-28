
//procedure
function VirtualTreeColumns_GetVisibleColumns(AObj: TVirtualTreeColumns; out ResultCols: TColumnsArray): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetVisibleColumns'}
  handleExceptionBegin
  ResultCols := AObj.GetVisibleColumns();
  Result := Length(ResultCols);
  handleExceptionEnd
end;

exports
  VirtualTreeColumns_GetVisibleColumns;
