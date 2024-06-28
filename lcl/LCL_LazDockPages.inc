
//constructor
function LazDockPages_Create(TheOwner: TComponent): TLazDockPages; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLazDockPages.Create(TheOwner);
  handleExceptionEnd
end;

//property
function LazDockPages_PageForLazDockPage(AObj: TLazDockPages; Index: Integer): TLazDockPage; extdecl;
begin
  {$define handleExceptionFuncName :='PageForLazDockPage'}
  handleExceptionBegin
  Result := AObj.Page[Index];
  handleExceptionEnd
end;

//property
function LazDockPages_ActivePageComponent(AIsSet: LongBool; AObj: TLazDockPages; AValue: TLazDockPage): TLazDockPage; extdecl;
begin
  {$define handleExceptionFuncName :='ActivePageComponent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ActivePageComponent := AValue;
  end else
    Result := AObj.ActivePageComponent;
  handleExceptionEnd
end;

//function
function LazDockPages_Class(): TClass; extdecl;
begin
  Result := TLazDockPages;
end;


exports
  LazDockPages_Create,
  LazDockPages_PageForLazDockPage,
  LazDockPages_ActivePageComponent,
  LazDockPages_Class;