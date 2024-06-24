
//constructor
function CustomTabControl_Create(TheOwner: TComponent): TCustomTabControl; extdecl;
begin
  handleExceptionBegin
  Result := TCustomTabControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomTabControl_HotTrack(AIsSet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotTrack := AValue;
  end else
    Result := AObj.HotTrack;
  handleExceptionEnd
end;

//property
function CustomTabControl_Images(AIsSet: LongBool; AObj: TCustomTabControl; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function CustomTabControl_ImagesWidth(AIsSet: LongBool; AObj: TCustomTabControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function CustomTabControl_MultiLine(AIsSet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiLine := AValue;
  end else
    Result := AObj.MultiLine;
  handleExceptionEnd
end;

//property
function CustomTabControl_MultiSelect(AIsSet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiSelect := AValue;
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

//property
function CustomTabControl_Options(AIsSet: LongBool; AObj: TCustomTabControl; AValue: TCTabControlOptions): TCTabControlOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function CustomTabControl_OwnerDraw(AIsSet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OwnerDraw := AValue;
  end else
    Result := AObj.OwnerDraw;
  handleExceptionEnd
end;

//property
function CustomTabControl_Page(AObj: TCustomTabControl; Index: Integer): TCustomPage; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Page[Index];
  handleExceptionEnd
end;

//property
function CustomTabControl_PageCount(AObj: TCustomTabControl): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PageCount;
  handleExceptionEnd
end;

//property
function CustomTabControl_PageIndex(AIsSet: LongBool; AObj: TCustomTabControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageIndex := AValue;
  end else
    Result := AObj.PageIndex;
  handleExceptionEnd
end;

//property
function CustomTabControl_Pages(AIsSet: LongBool; AObj: TCustomTabControl; AValue: TStrings): TStrings; extdecl;
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
function CustomTabControl_RaggedRight(AIsSet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RaggedRight := AValue;
  end else
    Result := AObj.RaggedRight;
  handleExceptionEnd
end;

//property
function CustomTabControl_ScrollOpposite(AIsSet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollOpposite := AValue;
  end else
    Result := AObj.ScrollOpposite;
  handleExceptionEnd
end;

//property
function CustomTabControl_ShowTabs(AIsSet: LongBool; AObj: TCustomTabControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowTabs := AValue;
  end else
    Result := AObj.ShowTabs;
  handleExceptionEnd
end;

//property
function CustomTabControl_Style(AIsSet: LongBool; AObj: TCustomTabControl; AValue: TTabStyle): TTabStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function CustomTabControl_TabHeight(AIsSet: LongBool; AObj: TCustomTabControl; AValue: Smallint): Smallint; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabHeight := AValue;
  end else
    Result := AObj.TabHeight;
  handleExceptionEnd
end;

//property
function CustomTabControl_TabPosition(AIsSet: LongBool; AObj: TCustomTabControl; AValue: TTabPosition): TTabPosition; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabPosition := AValue;
  end else
    Result := AObj.TabPosition;
  handleExceptionEnd
end;

//property
function CustomTabControl_TabWidth(AIsSet: LongBool; AObj: TCustomTabControl; AValue: Smallint): Smallint; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabWidth := AValue;
  end else
    Result := AObj.TabWidth;
  handleExceptionEnd
end;

//function
procedure CustomTabControl_TabRect(AObj: TCustomTabControl; AIndex: Integer; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.TabRect(AIndex);
  handleExceptionEnd
end;

//function
function CustomTabControl_GetImageIndex(AObj: TCustomTabControl; ThePageIndex: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetImageIndex(ThePageIndex);
  handleExceptionEnd
end;

//function
function CustomTabControl_IndexOf(AObj: TCustomTabControl; APage: TPersistent): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(APage);
  handleExceptionEnd
end;

//function
function CustomTabControl_CustomPage(AObj: TCustomTabControl; Index: integer): TCustomPage; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CustomPage(Index);
  handleExceptionEnd
end;

//function
function CustomTabControl_CanChangePageIndex(AObj: TCustomTabControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanChangePageIndex();
  handleExceptionEnd
end;

//function
function CustomTabControl_GetMinimumTabWidth(AObj: TCustomTabControl): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMinimumTabWidth();
  handleExceptionEnd
end;

//function
function CustomTabControl_GetMinimumTabHeight(AObj: TCustomTabControl): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMinimumTabHeight();
  handleExceptionEnd
end;

//function
function CustomTabControl_GetCapabilities(AObj: TCustomTabControl): TCTabControlCapabilities; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCapabilities();
  handleExceptionEnd
end;

//function
function CustomTabControl_TabToPageIndex(AObj: TCustomTabControl; AIndex: integer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TabToPageIndex(AIndex);
  handleExceptionEnd
end;

//function
function CustomTabControl_PageToTabIndex(AObj: TCustomTabControl; AIndex: integer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PageToTabIndex(AIndex);
  handleExceptionEnd
end;

//function
function CustomTabControl_Class(): TClass; extdecl;
begin
  Result := TCustomTabControl;
end;

//procedure
procedure CustomTabControl_DoCloseTabClicked(AObj: TCustomTabControl; APage: TCustomPage); extdecl;
begin
  handleExceptionBegin
  AObj.DoCloseTabClicked(APage);
  handleExceptionEnd
end;

//property event
procedure CustomTabControl_SetOnChanging(AObj: TCustomTabControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTabChangingEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;

//property event
procedure CustomTabControl_SetOnCloseTabClicked(AObj: TCustomTabControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseTabClicked}
  EventMethodCode
end;

//property event
procedure CustomTabControl_SetOnGetImageIndex(AObj: TCustomTabControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTTabGetImageEvent}
  {$DEFINE EventName := OnGetImageIndex}
  EventMethodCode
end;


exports
  CustomTabControl_Create,
  CustomTabControl_HotTrack,
  CustomTabControl_Images,
  CustomTabControl_ImagesWidth,
  CustomTabControl_MultiLine,
  CustomTabControl_MultiSelect,
  CustomTabControl_Options,
  CustomTabControl_OwnerDraw,
  CustomTabControl_Page,
  CustomTabControl_PageCount,
  CustomTabControl_PageIndex,
  CustomTabControl_Pages,
  CustomTabControl_RaggedRight,
  CustomTabControl_ScrollOpposite,
  CustomTabControl_ShowTabs,
  CustomTabControl_Style,
  CustomTabControl_TabHeight,
  CustomTabControl_TabPosition,
  CustomTabControl_TabWidth,
  CustomTabControl_TabRect,
  CustomTabControl_GetImageIndex,
  CustomTabControl_IndexOf,
  CustomTabControl_CustomPage,
  CustomTabControl_CanChangePageIndex,
  CustomTabControl_GetMinimumTabWidth,
  CustomTabControl_GetMinimumTabHeight,
  CustomTabControl_GetCapabilities,
  CustomTabControl_TabToPageIndex,
  CustomTabControl_PageToTabIndex,
  CustomTabControl_Class,
  CustomTabControl_DoCloseTabClicked,
  CustomTabControl_SetOnChanging,
  CustomTabControl_SetOnCloseTabClicked,
  CustomTabControl_SetOnGetImageIndex;