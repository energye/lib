
//constructor
function CustomJsDialogHandler_Create(const events: IChromiumEvents): TCustomJsDialogHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomJsDialogHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomJsDialogHandler_AsInterface(AObj: TCustomJsDialogHandler; var Result: ICefJsDialogHandler); extdecl;
begin
  Result := AObj as ICefJsDialogHandler;
end;


exports
  CustomJsDialogHandler_Create,
  CustomJsDialogHandler_AsInterface;