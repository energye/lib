
//constructor
function CustomPage_Create(TheOwner: TComponent): TCustomPage; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPage.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomPage_PageIndex(AIsSet: LongBool; AObj: TCustomPage; AValue: Integer): Integer; extdecl;
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
function CustomPage_TabVisible(AIsSet: LongBool; AObj: TCustomPage; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabVisible := AValue;
  end else
    Result := AObj.TabVisible;
  handleExceptionEnd
end;

//property
function CustomPage_ImageIndex(AIsSet: LongBool; AObj: TCustomPage; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//function
function CustomPage_CanTab(AObj: TCustomPage): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanTab();
  handleExceptionEnd
end;

//function
function CustomPage_VisibleIndex(AObj: TCustomPage): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VisibleIndex();
  handleExceptionEnd
end;

//function
function CustomPage_Class(): TClass; extdecl;
begin
  Result := TCustomPage;
end;

//property event
procedure CustomPage_SetOnHide(AObj: TCustomPage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHide}
  EventMethodCode
end;

//property event
procedure CustomPage_SetOnShow(AObj: TCustomPage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  EventMethodCode
end;


exports
  CustomPage_Create,
  CustomPage_PageIndex,
  CustomPage_TabVisible,
  CustomPage_ImageIndex,
  CustomPage_CanTab,
  CustomPage_VisibleIndex,
  CustomPage_Class,
  CustomPage_SetOnHide,
  CustomPage_SetOnShow;