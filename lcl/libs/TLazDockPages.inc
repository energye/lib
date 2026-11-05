// constructor
function TLazDockPages_Create(TheOwner: TComponent): TLazDockPages; extdecl;
begin
  {$define handleExceptionID := 24000}
  handleExceptionBegin
  Result := TLazDockPages.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TLazDockPages_PageWithIntToLazDockPage(AObj: TLazDockPages; Index: Integer): TLazDockPage; extdecl;
begin
  {$define handleExceptionID := 24001}
  handleExceptionBegin
  Result := AObj.Page[Index];
  handleExceptionEnd
end;

// property
function TLazDockPages_ActivePageComponent(ASet: LongBool; AObj: TLazDockPages; AValue: TLazDockPage): TLazDockPage; extdecl;
begin
  {$define handleExceptionID := 24002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActivePageComponent := AValue
  end else
    Result := AObj.ActivePageComponent;
  handleExceptionEnd
end;

function TLazDockPages_TClass(): TClass; extdecl;
begin
  Result := TLazDockPages;
end;

exports
  TLazDockPages_Create,
  TLazDockPages_PageWithIntToLazDockPage,
  TLazDockPages_ActivePageComponent,
  TLazDockPages_TClass;