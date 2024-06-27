
//constructor
function CustomFrameHandler_Create(const events: IChromiumEvents): TCustomFrameHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomFrameHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomFrameHandler_AsInterface(AObj: TCustomFrameHandler; var Result: ICefFrameHandler); extdecl;
begin
  Result := AObj as ICefFrameHandler;
end;


exports
  CustomFrameHandler_Create,
  CustomFrameHandler_AsInterface;