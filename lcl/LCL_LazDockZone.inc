
//constructor
function LazDockZone_Create(TheTree: TDockTree; TheChildControl: TControl): TLazDockZone; extdecl;
begin
  handleExceptionBegin
  Result := TLazDockZone.Create(TheTree, TheChildControl);
  handleExceptionEnd
end;

//property
function LazDockZone_Splitter(AIsSet: LongBool; AObj: TLazDockZone; AValue: TLazDockSplitter): TLazDockSplitter; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Splitter := AValue;
  end else
    Result := AObj.Splitter;
  handleExceptionEnd
end;

//property
function LazDockZone_Pages(AIsSet: LongBool; AObj: TLazDockZone; AValue: TLazDockPages): TLazDockPages; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pages := AValue;
  end else
    Result := AObj.Pages;
  handleExceptionEnd
end;

//property
function LazDockZone_Page(AIsSet: LongBool; AObj: TLazDockZone; AValue: TLazDockPage): TLazDockPage; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Page := AValue;
  end else
    Result := AObj.Page;
  handleExceptionEnd
end;

//function
function LazDockZone_GetCaption(AObj: TLazDockZone): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetCaption());
  handleExceptionEnd
end;

//function
function LazDockZone_GetParentControl(AObj: TLazDockZone): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetParentControl();
  handleExceptionEnd
end;

//function
function LazDockZone_Class(): TClass; extdecl;
begin
  Result := TLazDockZone;
end;

//procedure
procedure LazDockZone_FreeSubComponents(AObj: TLazDockZone); extdecl;
begin
  handleExceptionBegin
  AObj.FreeSubComponents();
  handleExceptionEnd
end;


exports
  LazDockZone_Create,
  LazDockZone_Splitter,
  LazDockZone_Pages,
  LazDockZone_Page,
  LazDockZone_GetCaption,
  LazDockZone_GetParentControl,
  LazDockZone_Class,
  LazDockZone_FreeSubComponents;