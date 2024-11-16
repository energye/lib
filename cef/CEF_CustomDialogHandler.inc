
//constructor
function CustomDialogHandler_Create(const events: IChromiumEvents): TCustomDialogHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomDialogHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomDialogHandler_AsInterface(AObj: TCustomDialogHandler; var Result: ICefDialogHandler); extdecl;
begin
  Result := AObj as ICefDialogHandler;
end;


exports
  CustomDialogHandler_Create,
  CustomDialogHandler_AsInterface;