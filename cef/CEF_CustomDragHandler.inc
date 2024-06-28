
//constructor
function CustomDragHandler_Create(const events: IChromiumEvents): TCustomDragHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomDragHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomDragHandler_AsInterface(AObj: TCustomDragHandler; var Result: ICefDragHandler); extdecl;
begin
  Result := AObj as ICefDragHandler;
end;


exports
  CustomDragHandler_Create,
  CustomDragHandler_AsInterface;