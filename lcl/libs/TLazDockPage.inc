// constructor
function TLazDockPage_Create(TheOwner: TComponent): TLazDockPage; extdecl;
begin
  {$define handleExceptionID := 23900}
  handleExceptionBegin
  Result := TLazDockPage.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TLazDockPage_DockZone(AObj: TLazDockPage): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23901}
  handleExceptionBegin
  Result := AObj.DockZone;
  handleExceptionEnd
end;

// property
function TLazDockPage_PageControl(AObj: TLazDockPage): TLazDockPages; extdecl;
begin
  {$define handleExceptionID := 23902}
  handleExceptionBegin
  Result := AObj.PageControl;
  handleExceptionEnd
end;

function TLazDockPage_TClass(): TClass; extdecl;
begin
  Result := TLazDockPage;
end;

exports
  TLazDockPage_Create,
  TLazDockPage_DockZone,
  TLazDockPage_PageControl,
  TLazDockPage_TClass;