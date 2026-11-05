// constructor
function TCustomHeaderControl_Create(AOwner: TComponent): TCustomHeaderControl; extdecl;
begin
  {$define handleExceptionID := 19100}
  handleExceptionBegin
  Result := TCustomHeaderControl.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomHeaderControl_GetSectionAt(AObj: TCustomHeaderControl; var P: TPoint): Integer; extdecl;
begin
  {$define handleExceptionID := 19101}
  handleExceptionBegin
  Result := AObj.GetSectionAt(P);
  handleExceptionEnd
end;

// procedure
procedure TCustomHeaderControl_Click(AObj: TCustomHeaderControl); extdecl;
begin
  {$define handleExceptionID := 19102}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

// procedure
procedure TCustomHeaderControl_DblClick(AObj: TCustomHeaderControl); extdecl;
begin
  {$define handleExceptionID := 19103}
  handleExceptionBegin
  AObj.DblClick();
  handleExceptionEnd
end;

// procedure
procedure TCustomHeaderControl_Paint(AObj: TCustomHeaderControl); extdecl;
begin
  {$define handleExceptionID := 19104}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

// procedure
procedure TCustomHeaderControl_PaintSection(AObj: TCustomHeaderControl; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 19105}
  handleExceptionBegin
  AObj.PaintSection(Index);
  handleExceptionEnd
end;

// procedure
procedure TCustomHeaderControl_ChangeScale(AObj: TCustomHeaderControl; M: Integer; D: Integer); extdecl;
begin
  {$define handleExceptionID := 19106}
  handleExceptionBegin
  AObj.ChangeScale(M, D);
  handleExceptionEnd
end;

// property
function TCustomHeaderControl_SectionFromOriginalIndex(AObj: TCustomHeaderControl; OriginalIndex: Integer): THeaderSection; extdecl;
begin
  {$define handleExceptionID := 19107}
  handleExceptionBegin
  Result := AObj.SectionFromOriginalIndex[OriginalIndex];
  handleExceptionEnd
end;

// property
function TCustomHeaderControl_DragReorder(ASet: LongBool; AObj: TCustomHeaderControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragReorder := AValue
  end else
    Result := AObj.DragReorder;
  handleExceptionEnd
end;

// property
function TCustomHeaderControl_Images(ASet: LongBool; AObj: TCustomHeaderControl; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 19109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomHeaderControl_ImagesWidth(ASet: LongBool; AObj: TCustomHeaderControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImagesWidth := AValue
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

// property
function TCustomHeaderControl_Sections(ASet: LongBool; AObj: TCustomHeaderControl; AValue: THeaderSections): THeaderSections; extdecl;
begin
  {$define handleExceptionID := 19111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sections := AValue
  end else
    Result := AObj.Sections;
  handleExceptionEnd
end;

// event
procedure TCustomHeaderControl_OnSectionDrag(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSectionDragEvent}
  {$DEFINE EventName := OnSectionDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomHeaderControl_OnSectionEndDrag(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSectionEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomHeaderControl_OnSectionClick(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionNotifyEvent}
  {$DEFINE EventName := OnSectionClick}
  LCLEventMethodCode
end;

// event
procedure TCustomHeaderControl_OnSectionResize(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionNotifyEvent}
  {$DEFINE EventName := OnSectionResize}
  LCLEventMethodCode
end;

// event
procedure TCustomHeaderControl_OnSectionTrack(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionTrackEvent}
  {$DEFINE EventName := OnSectionTrack}
  LCLEventMethodCode
end;

// event
procedure TCustomHeaderControl_OnSectionSeparatorDblClick(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionNotifyEvent}
  {$DEFINE EventName := OnSectionSeparatorDblClick}
  LCLEventMethodCode
end;

// event
procedure TCustomHeaderControl_OnCreateSectionClass(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomHCCreateSectionClassEvent}
  {$DEFINE EventName := OnCreateSectionClass}
  LCLEventMethodCode
end;

function TCustomHeaderControl_TClass(): TClass; extdecl;
begin
  Result := TCustomHeaderControl;
end;

exports
  TCustomHeaderControl_Create,
  TCustomHeaderControl_GetSectionAt,
  TCustomHeaderControl_Click,
  TCustomHeaderControl_DblClick,
  TCustomHeaderControl_Paint,
  TCustomHeaderControl_PaintSection,
  TCustomHeaderControl_ChangeScale,
  TCustomHeaderControl_SectionFromOriginalIndex,
  TCustomHeaderControl_DragReorder,
  TCustomHeaderControl_Images,
  TCustomHeaderControl_ImagesWidth,
  TCustomHeaderControl_Sections,
  TCustomHeaderControl_OnSectionDrag,
  TCustomHeaderControl_OnSectionEndDrag,
  TCustomHeaderControl_OnSectionClick,
  TCustomHeaderControl_OnSectionResize,
  TCustomHeaderControl_OnSectionTrack,
  TCustomHeaderControl_OnSectionSeparatorDblClick,
  TCustomHeaderControl_OnCreateSectionClass,
  TCustomHeaderControl_TClass;