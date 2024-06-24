
//constructor
function DragImageList_Create(AOwner: TComponent): TDragImageList; extdecl;
begin
  handleExceptionBegin
  Result := TDragImageList.Create(AOwner);
  handleExceptionEnd
end;

//property
function DragImageList_DragCursor(AIsSet: LongBool; AObj: TDragImageList; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
procedure DragImageList_DragHotspot(AIsSet: LongBool; AObj: TDragImageList; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragHotspot := AValue;
  end else
    Result := AObj.DragHotspot;
  handleExceptionEnd
end;

//property
function DragImageList_Dragging(AObj: TDragImageList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Dragging;
  handleExceptionEnd
end;

//property
function DragImageList_DraggingResolution(AObj: TDragImageList): TDragImageListResolution; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DraggingResolution;
  handleExceptionEnd
end;

//property
function DragImageList_ResolutionForDragImageListResolution(AObj: TDragImageList; AImageWidth: Integer): TDragImageListResolution; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Resolution[AImageWidth];
  handleExceptionEnd
end;

//function
function DragImageList_BeginDrag(AObj: TDragImageList; Window: HWND; X, Y: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BeginDrag(Window, X, Y);
  handleExceptionEnd
end;

//function
function DragImageList_DragLock(AObj: TDragImageList; Window: HWND; XPos, YPos: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragLock(Window, XPos, YPos);
  handleExceptionEnd
end;

//function
function DragImageList_DragMove(AObj: TDragImageList; X, Y: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragMove(X, Y);
  handleExceptionEnd
end;

//function
function DragImageList_EndDrag(AObj: TDragImageList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EndDrag();
  handleExceptionEnd
end;

//function
function DragImageList_SetDragImage(AObj: TDragImageList; Index, HotSpotX, HotSpotY: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetDragImage(Index, HotSpotX, HotSpotY);
  handleExceptionEnd
end;

//function
function DragImageList_Class(): TClass; extdecl;
begin
  Result := TDragImageList;
end;

//procedure
procedure DragImageList_DragUnlock(AObj: TDragImageList); extdecl;
begin
  handleExceptionBegin
  AObj.DragUnlock();
  handleExceptionEnd
end;

//procedure
procedure DragImageList_HideDragImage(AObj: TDragImageList); extdecl;
begin
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

//procedure
procedure DragImageList_ShowDragImage(AObj: TDragImageList); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;


exports
  DragImageList_Create,
  DragImageList_DragCursor,
  DragImageList_DragHotspot,
  DragImageList_Dragging,
  DragImageList_DraggingResolution,
  DragImageList_ResolutionForDragImageListResolution,
  DragImageList_BeginDrag,
  DragImageList_DragLock,
  DragImageList_DragMove,
  DragImageList_EndDrag,
  DragImageList_SetDragImage,
  DragImageList_Class,
  DragImageList_DragUnlock,
  DragImageList_HideDragImage,
  DragImageList_ShowDragImage;