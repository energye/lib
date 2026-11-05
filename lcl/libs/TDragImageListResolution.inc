// constructor
function TDragImageListResolution_Create(TheOwner: TComponent): TDragImageListResolution; extdecl;
begin
  {$define handleExceptionID := 25000}
  handleExceptionBegin
  Result := TDragImageListResolution.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TDragImageListResolution_BeginDrag(AObj: TDragImageListResolution; Window: HWND; X: Integer; Y: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 25001}
  handleExceptionBegin
  Result := AObj.BeginDrag(Window, X, Y);
  handleExceptionEnd
end;

// function
function TDragImageListResolution_DragLock(AObj: TDragImageListResolution; Window: HWND; XPos: Integer; YPos: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 25002}
  handleExceptionBegin
  Result := AObj.DragLock(Window, XPos, YPos);
  handleExceptionEnd
end;

// function
function TDragImageListResolution_DragMove(AObj: TDragImageListResolution; X: Integer; Y: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 25003}
  handleExceptionBegin
  Result := AObj.DragMove(X, Y);
  handleExceptionEnd
end;

// function
function TDragImageListResolution_EndDrag(AObj: TDragImageListResolution): LongBool; extdecl;
begin
  {$define handleExceptionID := 25004}
  handleExceptionBegin
  Result := AObj.EndDrag();
  handleExceptionEnd
end;

// procedure
procedure TDragImageListResolution_DragUnlock(AObj: TDragImageListResolution); extdecl;
begin
  {$define handleExceptionID := 25005}
  handleExceptionBegin
  AObj.DragUnlock();
  handleExceptionEnd
end;

// procedure
procedure TDragImageListResolution_HideDragImage(AObj: TDragImageListResolution); extdecl;
begin
  {$define handleExceptionID := 25006}
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

// procedure
procedure TDragImageListResolution_ShowDragImage(AObj: TDragImageListResolution); extdecl;
begin
  {$define handleExceptionID := 25007}
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;

// property
procedure TDragImageListResolution_DragHotspot(ASet: LongBool; AObj: TDragImageListResolution; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 25008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragHotspot := AValue
  end else
    Result := AObj.DragHotspot;
  handleExceptionEnd
end;

// property
function TDragImageListResolution_Dragging(AObj: TDragImageListResolution): LongBool; extdecl;
begin
  {$define handleExceptionID := 25009}
  handleExceptionBegin
  Result := AObj.Dragging;
  handleExceptionEnd
end;

function TDragImageListResolution_TClass(): TClass; extdecl;
begin
  Result := TDragImageListResolution;
end;

exports
  TDragImageListResolution_Create,
  TDragImageListResolution_BeginDrag,
  TDragImageListResolution_DragLock,
  TDragImageListResolution_DragMove,
  TDragImageListResolution_EndDrag,
  TDragImageListResolution_DragUnlock,
  TDragImageListResolution_HideDragImage,
  TDragImageListResolution_ShowDragImage,
  TDragImageListResolution_DragHotspot,
  TDragImageListResolution_Dragging,
  TDragImageListResolution_TClass;