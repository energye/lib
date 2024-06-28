
//constructor
function LazDockPage_Create(TheOwner: TComponent): TLazDockPage; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLazDockPage.Create(TheOwner);
  handleExceptionEnd
end;

//property
function LazDockPage_DockZone(AObj: TLazDockPage): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='DockZone'}
  handleExceptionBegin
  Result := AObj.DockZone;
  handleExceptionEnd
end;

//property
function LazDockPage_PageControl(AObj: TLazDockPage): TLazDockPages; extdecl;
begin
  {$define handleExceptionFuncName :='PageControl'}
  handleExceptionBegin
  Result := AObj.PageControl;
  handleExceptionEnd
end;

//function
function LazDockPage_Class(): TClass; extdecl;
begin
  Result := TLazDockPage;
end;


exports
  LazDockPage_Create,
  LazDockPage_DockZone,
  LazDockPage_PageControl,
  LazDockPage_Class;