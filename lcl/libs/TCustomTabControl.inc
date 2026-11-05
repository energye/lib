// constructor
function TCustomTabControl_Create(TheOwner: TComponent): TCustomTabControl; extdecl;
begin
  {$define handleExceptionID := 12800}
  handleExceptionBegin
  Result := TCustomTabControl.Create(TheOwner);
  handleExceptionEnd
end;

// function
procedure TCustomTabControl_TabRect(AObj: TCustomTabControl; AIndex: Integer; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 12801}
  handleExceptionBegin
  Result := AObj.TabRect(AIndex);
  handleExceptionEnd
end;

// function
function TCustomTabControl_GetImageIndex(AObj: TCustomTabControl; ThePageIndex: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12802}
  handleExceptionBegin
  Result := AObj.GetImageIndex(ThePageIndex);
  handleExceptionEnd
end;

// function
function TCustomTabControl_IndexOf(AObj: TCustomTabControl; APage: TPersistent): integer; extdecl;
begin
  {$define handleExceptionID := 12803}
  handleExceptionBegin
  Result := AObj.IndexOf(APage);
  handleExceptionEnd
end;

// function
function TCustomTabControl_CustomPage(AObj: TCustomTabControl; Index: integer): TCustomPage; extdecl;
begin
  {$define handleExceptionID := 12804}
  handleExceptionBegin
  Result := AObj.CustomPage(Index);
  handleExceptionEnd
end;

// function
function TCustomTabControl_CanChangePageIndex(AObj: TCustomTabControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 12805}
  handleExceptionBegin
  Result := AObj.CanChangePageIndex();
  handleExceptionEnd
end;

// function
function TCustomTabControl_GetMinimumTabWidth(AObj: TCustomTabControl): integer; extdecl;
begin
  {$define handleExceptionID := 12806}
  handleExceptionBegin
  Result := AObj.GetMinimumTabWidth();
  handleExceptionEnd
end;

// function
function TCustomTabControl_GetMinimumTabHeight(AObj: TCustomTabControl): integer; extdecl;
begin
  {$define handleExceptionID := 12807}
  handleExceptionBegin
  Result := AObj.GetMinimumTabHeight();
  handleExceptionEnd
end;

// function
function TCustomTabControl_GetCapabilities(AObj: TCustomTabControl): TCTabControlCapabilities; extdecl;
begin
  {$define handleExceptionID := 12808}
  handleExceptionBegin
  Result := AObj.GetCapabilities();
  handleExceptionEnd
end;

// function
function TCustomTabControl_TabToPageIndex(AObj: TCustomTabControl; AIndex: integer): integer; extdecl;
begin
  {$define handleExceptionID := 12809}
  handleExceptionBegin
  Result := AObj.TabToPageIndex(AIndex);
  handleExceptionEnd
end;

// function
function TCustomTabControl_PageToTabIndex(AObj: TCustomTabControl; AIndex: integer): integer; extdecl;
begin
  {$define handleExceptionID := 12810}
  handleExceptionBegin
  Result := AObj.PageToTabIndex(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomTabControl_DoCloseTabClicked(AObj: TCustomTabControl; APage: TCustomPage); extdecl;
begin
  {$define handleExceptionID := 12811}
  handleExceptionBegin
  AObj.DoCloseTabClicked(APage);
  handleExceptionEnd
end;

// property
function TCustomTabControl_HotTrack(ASet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12812}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotTrack := AValue
  end else
    Result := AObj.HotTrack;
  handleExceptionEnd
end;

// property
function TCustomTabControl_Images(ASet: LongBool; AObj: TCustomTabControl; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 12813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomTabControl_ImagesWidth(ASet: LongBool; AObj: TCustomTabControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImagesWidth := AValue
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

// property
function TCustomTabControl_MultiLine(ASet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiLine := AValue
  end else
    Result := AObj.MultiLine;
  handleExceptionEnd
end;

// property
function TCustomTabControl_MultiSelect(ASet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiSelect := AValue
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

// property
function TCustomTabControl_Options(ASet: LongBool; AObj: TCustomTabControl; AValue: TCTabControlOptions): TCTabControlOptions; extdecl;
begin
  {$define handleExceptionID := 12817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TCustomTabControl_OwnerDraw(ASet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12818}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OwnerDraw := AValue
  end else
    Result := AObj.OwnerDraw;
  handleExceptionEnd
end;

// property
function TCustomTabControl_Page(AObj: TCustomTabControl; Index: Integer): TCustomPage; extdecl;
begin
  {$define handleExceptionID := 12819}
  handleExceptionBegin
  Result := AObj.Page[Index];
  handleExceptionEnd
end;

// property
function TCustomTabControl_PageCount(AObj: TCustomTabControl): integer; extdecl;
begin
  {$define handleExceptionID := 12820}
  handleExceptionBegin
  Result := AObj.PageCount;
  handleExceptionEnd
end;

// property
function TCustomTabControl_PageIndex(ASet: LongBool; AObj: TCustomTabControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageIndex := AValue
  end else
    Result := AObj.PageIndex;
  handleExceptionEnd
end;

// property
function TCustomTabControl_PagesToStrings(ASet: LongBool; AObj: TCustomTabControl; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 12822}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pages := AValue
  end else
    Result := AObj.Pages;
  handleExceptionEnd
end;

// property
function TCustomTabControl_RaggedRight(ASet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12823}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RaggedRight := AValue
  end else
    Result := AObj.RaggedRight;
  handleExceptionEnd
end;

// property
function TCustomTabControl_ScrollOpposite(ASet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12824}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollOpposite := AValue
  end else
    Result := AObj.ScrollOpposite;
  handleExceptionEnd
end;

// property
function TCustomTabControl_ShowTabs(ASet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12825}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowTabs := AValue
  end else
    Result := AObj.ShowTabs;
  handleExceptionEnd
end;

// property
function TCustomTabControl_Style(ASet: LongBool; AObj: TCustomTabControl; AValue: TTabStyle): TTabStyle; extdecl;
begin
  {$define handleExceptionID := 12826}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TCustomTabControl_TabHeight(ASet: LongBool; AObj: TCustomTabControl; AValue: Smallint): Smallint; extdecl;
begin
  {$define handleExceptionID := 12827}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabHeight := AValue
  end else
    Result := AObj.TabHeight;
  handleExceptionEnd
end;

// property
function TCustomTabControl_TabPosition(ASet: LongBool; AObj: TCustomTabControl; AValue: TTabPosition): TTabPosition; extdecl;
begin
  {$define handleExceptionID := 12828}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabPosition := AValue
  end else
    Result := AObj.TabPosition;
  handleExceptionEnd
end;

// property
function TCustomTabControl_TabWidth(ASet: LongBool; AObj: TCustomTabControl; AValue: Smallint): Smallint; extdecl;
begin
  {$define handleExceptionID := 12829}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabWidth := AValue
  end else
    Result := AObj.TabWidth;
  handleExceptionEnd
end;

// event
procedure TCustomTabControl_OnChanging(AObj: TCustomTabControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTabChangingEvent}
  {$DEFINE EventName := OnChanging}
  LCLEventMethodCode
end;

// event
procedure TCustomTabControl_OnCloseTabClicked(AObj: TCustomTabControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseTabClicked}
  LCLEventMethodCode
end;

// event
procedure TCustomTabControl_OnGetImageIndex(AObj: TCustomTabControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTabGetImageEvent}
  {$DEFINE EventName := OnGetImageIndex}
  LCLEventMethodCode
end;

function TCustomTabControl_TClass(): TClass; extdecl;
begin
  Result := TCustomTabControl;
end;

exports
  TCustomTabControl_Create,
  TCustomTabControl_TabRect,
  TCustomTabControl_GetImageIndex,
  TCustomTabControl_IndexOf,
  TCustomTabControl_CustomPage,
  TCustomTabControl_CanChangePageIndex,
  TCustomTabControl_GetMinimumTabWidth,
  TCustomTabControl_GetMinimumTabHeight,
  TCustomTabControl_GetCapabilities,
  TCustomTabControl_TabToPageIndex,
  TCustomTabControl_PageToTabIndex,
  TCustomTabControl_DoCloseTabClicked,
  TCustomTabControl_HotTrack,
  TCustomTabControl_Images,
  TCustomTabControl_ImagesWidth,
  TCustomTabControl_MultiLine,
  TCustomTabControl_MultiSelect,
  TCustomTabControl_Options,
  TCustomTabControl_OwnerDraw,
  TCustomTabControl_Page,
  TCustomTabControl_PageCount,
  TCustomTabControl_PageIndex,
  TCustomTabControl_PagesToStrings,
  TCustomTabControl_RaggedRight,
  TCustomTabControl_ScrollOpposite,
  TCustomTabControl_ShowTabs,
  TCustomTabControl_Style,
  TCustomTabControl_TabHeight,
  TCustomTabControl_TabPosition,
  TCustomTabControl_TabWidth,
  TCustomTabControl_OnChanging,
  TCustomTabControl_OnCloseTabClicked,
  TCustomTabControl_OnGetImageIndex,
  TCustomTabControl_TClass;