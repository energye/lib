
//constructor
function CustomViewDelegate_Create(const events: ICefViewDelegateEvents): TCustomViewDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomViewDelegate.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomViewDelegate_AsInterface(AObj: TCustomViewDelegate; var Result: ICefViewDelegate); extdecl;
begin
  Result := AObj as ICefViewDelegate;
end;


exports
  CustomViewDelegate_Create,
  CustomViewDelegate_AsInterface;