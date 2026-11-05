// constructor
function TLazDockZone_Create(TheTree: TDockTree; TheChildControl: TControl): TLazDockZone; extdecl;
begin
  {$define handleExceptionID := 23600}
  handleExceptionBegin
  Result := TLazDockZone.Create(TheTree, TheChildControl);
  handleExceptionEnd
end;

// function
procedure TLazDockZone_GetCaption(AObj: TLazDockZone;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23601}
  handleExceptionBegin
  StringBufferCreate(AObj.GetCaption(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TLazDockZone_GetParentControl(AObj: TLazDockZone): TWinControl; extdecl;
begin
  {$define handleExceptionID := 23602}
  handleExceptionBegin
  Result := AObj.GetParentControl();
  handleExceptionEnd
end;

// procedure
procedure TLazDockZone_FreeSubComponents(AObj: TLazDockZone); extdecl;
begin
  {$define handleExceptionID := 23603}
  handleExceptionBegin
  AObj.FreeSubComponents();
  handleExceptionEnd
end;

// property
function TLazDockZone_Splitter(ASet: LongBool; AObj: TLazDockZone; AValue: TLazDockSplitter): TLazDockSplitter; extdecl;
begin
  {$define handleExceptionID := 23604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Splitter := AValue
  end else
    Result := AObj.Splitter;
  handleExceptionEnd
end;

// property
function TLazDockZone_Pages(ASet: LongBool; AObj: TLazDockZone; AValue: TLazDockPages): TLazDockPages; extdecl;
begin
  {$define handleExceptionID := 23605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pages := AValue
  end else
    Result := AObj.Pages;
  handleExceptionEnd
end;

// property
function TLazDockZone_Page(ASet: LongBool; AObj: TLazDockZone; AValue: TLazDockPage): TLazDockPage; extdecl;
begin
  {$define handleExceptionID := 23606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Page := AValue
  end else
    Result := AObj.Page;
  handleExceptionEnd
end;

exports
  TLazDockZone_Create,
  TLazDockZone_GetCaption,
  TLazDockZone_GetParentControl,
  TLazDockZone_FreeSubComponents,
  TLazDockZone_Splitter,
  TLazDockZone_Pages,
  TLazDockZone_Page;