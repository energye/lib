// constructor
function TCustomPage_Create(TheOwner: TComponent): TCustomPage; extdecl;
begin
  {$define handleExceptionID := 13000}
  handleExceptionBegin
  Result := TCustomPage.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomPage_CanTab(AObj: TCustomPage): LongBool; extdecl;
begin
  {$define handleExceptionID := 13001}
  handleExceptionBegin
  Result := AObj.CanTab();
  handleExceptionEnd
end;

// function
function TCustomPage_VisibleIndex(AObj: TCustomPage): integer; extdecl;
begin
  {$define handleExceptionID := 13002}
  handleExceptionBegin
  Result := AObj.VisibleIndex();
  handleExceptionEnd
end;

// property
function TCustomPage_PageIndex(ASet: LongBool; AObj: TCustomPage; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 13003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageIndex := AValue
  end else
    Result := AObj.PageIndex;
  handleExceptionEnd
end;

// property
function TCustomPage_TabVisible(ASet: LongBool; AObj: TCustomPage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabVisible := AValue
  end else
    Result := AObj.TabVisible;
  handleExceptionEnd
end;

// property
function TCustomPage_ImageIndex(ASet: LongBool; AObj: TCustomPage; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 13005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// event
procedure TCustomPage_OnHide(AObj: TCustomPage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHide}
  LCLEventMethodCode
end;

// event
procedure TCustomPage_OnShow(AObj: TCustomPage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  LCLEventMethodCode
end;

function TCustomPage_TClass(): TClass; extdecl;
begin
  Result := TCustomPage;
end;

exports
  TCustomPage_Create,
  TCustomPage_CanTab,
  TCustomPage_VisibleIndex,
  TCustomPage_PageIndex,
  TCustomPage_TabVisible,
  TCustomPage_ImageIndex,
  TCustomPage_OnHide,
  TCustomPage_OnShow,
  TCustomPage_TClass;