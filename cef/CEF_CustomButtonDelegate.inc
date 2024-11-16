
//constructor
function CustomButtonDelegate_Create(const events: ICefButtonDelegateEvents): TCustomButtonDelegate; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomButtonDelegate.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomButtonDelegate_AsInterface(AObj: TCustomButtonDelegate; var Result: ICefButtonDelegate); extdecl;
begin
  Result := AObj as ICefButtonDelegate;
end;


exports
  CustomButtonDelegate_Create,
  CustomButtonDelegate_AsInterface;