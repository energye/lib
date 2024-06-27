
//constructor
function CustomFocusHandler_Create(const events: IChromiumEvents): TCustomFocusHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomFocusHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomFocusHandler_AsInterface(AObj: TCustomFocusHandler; var Result: ICefFocusHandler); extdecl;
begin
  Result := AObj as ICefFocusHandler;
end;


exports
  CustomFocusHandler_Create,
  CustomFocusHandler_AsInterface;