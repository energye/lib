
//constructor
function CustomHeaderControl_Create(AOwner: TComponent): TCustomHeaderControl; extdecl;
begin
  handleExceptionBegin
  Result := TCustomHeaderControl.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomHeaderControl_SectionFromOriginalIndex(AObj: TCustomHeaderControl; OriginalIndex: Integer): THeaderSection; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SectionFromOriginalIndex[OriginalIndex];
  handleExceptionEnd
end;

//property
function CustomHeaderControl_DragReorder(AIsSet: LongBool; AObj: TCustomHeaderControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragReorder := AValue;
  end else
    Result := AObj.DragReorder;
  handleExceptionEnd
end;

//property
function CustomHeaderControl_Images(AIsSet: LongBool; AObj: TCustomHeaderControl; AValue: TCustomImageList): TCustomImageList; extdecl;
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
function CustomHeaderControl_ImagesWidth(AIsSet: LongBool; AObj: TCustomHeaderControl; AValue: Integer): Integer; extdecl;
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
function CustomHeaderControl_Sections(AIsSet: LongBool; AObj: TCustomHeaderControl; AValue: THeaderSections): THeaderSections; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Sections := AValue;
  end else
    Result := AObj.Sections;
  handleExceptionEnd
end;

//function
function CustomHeaderControl_GetSectionAt(AObj: TCustomHeaderControl; var P: TPoint): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSectionAt(P);
  handleExceptionEnd
end;

//function
function CustomHeaderControl_Class(): TClass; extdecl;
begin
  Result := TCustomHeaderControl;
end;

//procedure
procedure CustomHeaderControl_Click(AObj: TCustomHeaderControl); extdecl;
begin
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

//procedure
procedure CustomHeaderControl_DblClick(AObj: TCustomHeaderControl); extdecl;
begin
  handleExceptionBegin
  AObj.DblClick();
  handleExceptionEnd
end;

//procedure
procedure CustomHeaderControl_Paint(AObj: TCustomHeaderControl); extdecl;
begin
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

//procedure
procedure CustomHeaderControl_PaintSection(AObj: TCustomHeaderControl; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PaintSection(Index);
  handleExceptionEnd
end;

//procedure
procedure CustomHeaderControl_ChangeScale(AObj: TCustomHeaderControl; M, D: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ChangeScale(M, D);
  handleExceptionEnd
end;

//property event
procedure CustomHeaderControl_SetOnSectionDrag(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSectionDragEvent}
  {$DEFINE EventName := OnSectionDrag}
  EventMethodCode
end;

//property event
procedure CustomHeaderControl_SetOnSectionEndDrag(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSectionEndDrag}
  EventMethodCode
end;

//property event
procedure CustomHeaderControl_SetOnSectionClick(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionNotifyEvent}
  {$DEFINE EventName := OnSectionClick}
  EventMethodCode
end;

//property event
procedure CustomHeaderControl_SetOnSectionResize(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionNotifyEvent}
  {$DEFINE EventName := OnSectionResize}
  EventMethodCode
end;

//property event
procedure CustomHeaderControl_SetOnSectionTrack(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionTrackEvent}
  {$DEFINE EventName := OnSectionTrack}
  EventMethodCode
end;

//property event
procedure CustomHeaderControl_SetOnSectionSeparatorDblClick(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomSectionNotifyEvent}
  {$DEFINE EventName := OnSectionSeparatorDblClick}
  EventMethodCode
end;

//property event
procedure CustomHeaderControl_SetOnCreateSectionClass(AObj: TCustomHeaderControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomHCCreateSectionClassEvent}
  {$DEFINE EventName := OnCreateSectionClass}
  EventMethodCode
end;


exports
  CustomHeaderControl_Create,
  CustomHeaderControl_SectionFromOriginalIndex,
  CustomHeaderControl_DragReorder,
  CustomHeaderControl_Images,
  CustomHeaderControl_ImagesWidth,
  CustomHeaderControl_Sections,
  CustomHeaderControl_GetSectionAt,
  CustomHeaderControl_Class,
  CustomHeaderControl_Click,
  CustomHeaderControl_DblClick,
  CustomHeaderControl_Paint,
  CustomHeaderControl_PaintSection,
  CustomHeaderControl_ChangeScale,
  CustomHeaderControl_SetOnSectionDrag,
  CustomHeaderControl_SetOnSectionEndDrag,
  CustomHeaderControl_SetOnSectionClick,
  CustomHeaderControl_SetOnSectionResize,
  CustomHeaderControl_SetOnSectionTrack,
  CustomHeaderControl_SetOnSectionSeparatorDblClick,
  CustomHeaderControl_SetOnCreateSectionClass;