// constructor
function TDragImageList_Create(AOwner: TComponent): TDragImageList; extdecl;
begin
  {$define handleExceptionID := 8300}
  handleExceptionBegin
  Result := TDragImageList.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TDragImageList_CreateSize(AWidth: Integer; AHeight: Integer): TDragImageList; extdecl;
begin
  {$define handleExceptionID := 8301}
  handleExceptionBegin
  Result := TDragImageList.CreateSize(AWidth, AHeight);
  handleExceptionEnd
end;

// function
function TDragImageList_BeginDrag(AObj: TDragImageList; Window: HWND; X: Integer; Y: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 8302}
  handleExceptionBegin
  Result := AObj.BeginDrag(Window, X, Y);
  handleExceptionEnd
end;

// function
function TDragImageList_DragLock(AObj: TDragImageList; Window: HWND; XPos: Integer; YPos: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 8303}
  handleExceptionBegin
  Result := AObj.DragLock(Window, XPos, YPos);
  handleExceptionEnd
end;

// function
function TDragImageList_DragMove(AObj: TDragImageList; X: Integer; Y: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 8304}
  handleExceptionBegin
  Result := AObj.DragMove(X, Y);
  handleExceptionEnd
end;

// function
function TDragImageList_EndDrag(AObj: TDragImageList): LongBool; extdecl;
begin
  {$define handleExceptionID := 8305}
  handleExceptionBegin
  Result := AObj.EndDrag();
  handleExceptionEnd
end;

// function
function TDragImageList_SetDragImage(AObj: TDragImageList; Index: Integer; HotSpotX: Integer; HotSpotY: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 8306}
  handleExceptionBegin
  Result := AObj.SetDragImage(Index, HotSpotX, HotSpotY);
  handleExceptionEnd
end;

// procedure
procedure TDragImageList_DragUnlock(AObj: TDragImageList); extdecl;
begin
  {$define handleExceptionID := 8307}
  handleExceptionBegin
  AObj.DragUnlock();
  handleExceptionEnd
end;

// procedure
procedure TDragImageList_HideDragImage(AObj: TDragImageList); extdecl;
begin
  {$define handleExceptionID := 8308}
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

// procedure
procedure TDragImageList_ShowDragImage(AObj: TDragImageList); extdecl;
begin
  {$define handleExceptionID := 8309}
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;

// property
function TDragImageList_DragCursor(ASet: LongBool; AObj: TDragImageList; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 8310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
procedure TDragImageList_DragHotspot(ASet: LongBool; AObj: TDragImageList; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 8311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragHotspot := AValue
  end else
    Result := AObj.DragHotspot;
  handleExceptionEnd
end;

// property
function TDragImageList_Dragging(AObj: TDragImageList): LongBool; extdecl;
begin
  {$define handleExceptionID := 8312}
  handleExceptionBegin
  Result := AObj.Dragging;
  handleExceptionEnd
end;

// property
function TDragImageList_DraggingResolution(AObj: TDragImageList): TDragImageListResolution; extdecl;
begin
  {$define handleExceptionID := 8313}
  handleExceptionBegin
  Result := AObj.DraggingResolution;
  handleExceptionEnd
end;

// property
function TDragImageList_ResolutionWithIntToDragImageListResolution(AObj: TDragImageList; AImageWidth: Integer): TDragImageListResolution; extdecl;
begin
  {$define handleExceptionID := 8314}
  handleExceptionBegin
  Result := AObj.Resolution[AImageWidth];
  handleExceptionEnd
end;

function TDragImageList_TClass(): TClass; extdecl;
begin
  Result := TDragImageList;
end;

exports
  TDragImageList_Create,
  TDragImageList_CreateSize,
  TDragImageList_BeginDrag,
  TDragImageList_DragLock,
  TDragImageList_DragMove,
  TDragImageList_EndDrag,
  TDragImageList_SetDragImage,
  TDragImageList_DragUnlock,
  TDragImageList_HideDragImage,
  TDragImageList_ShowDragImage,
  TDragImageList_DragCursor,
  TDragImageList_DragHotspot,
  TDragImageList_Dragging,
  TDragImageList_DraggingResolution,
  TDragImageList_ResolutionWithIntToDragImageListResolution,
  TDragImageList_TClass;