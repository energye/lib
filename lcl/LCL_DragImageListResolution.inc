
//constructor
function DragImageListResolution_Create(TheOwner: TComponent): TDragImageListResolution; extdecl;
begin
  handleExceptionBegin
  Result := TDragImageListResolution.Create(TheOwner);
  handleExceptionEnd
end;

//property
procedure DragImageListResolution_DragHotspot(AIsSet: LongBool; AObj: TDragImageListResolution; var AValue: TPoint; var Result: TPoint); extdecl;
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
function DragImageListResolution_Dragging(AObj: TDragImageListResolution): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Dragging;
  handleExceptionEnd
end;

//function
function DragImageListResolution_BeginDrag(AObj: TDragImageListResolution; Window: HWND; X, Y: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BeginDrag(Window, X, Y);
  handleExceptionEnd
end;

//function
function DragImageListResolution_DragLock(AObj: TDragImageListResolution; Window: HWND; XPos, YPos: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragLock(Window, XPos, YPos);
  handleExceptionEnd
end;

//function
function DragImageListResolution_DragMove(AObj: TDragImageListResolution; X, Y: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragMove(X, Y);
  handleExceptionEnd
end;

//function
function DragImageListResolution_EndDrag(AObj: TDragImageListResolution): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EndDrag();
  handleExceptionEnd
end;

//function
function DragImageListResolution_Class(): TClass; extdecl;
begin
  Result := TDragImageListResolution;
end;

//procedure
procedure DragImageListResolution_DragUnlock(AObj: TDragImageListResolution); extdecl;
begin
  handleExceptionBegin
  AObj.DragUnlock();
  handleExceptionEnd
end;

//procedure
procedure DragImageListResolution_HideDragImage(AObj: TDragImageListResolution); extdecl;
begin
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

//procedure
procedure DragImageListResolution_ShowDragImage(AObj: TDragImageListResolution); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;


exports
  DragImageListResolution_Create,
  DragImageListResolution_DragHotspot,
  DragImageListResolution_Dragging,
  DragImageListResolution_BeginDrag,
  DragImageListResolution_DragLock,
  DragImageListResolution_DragMove,
  DragImageListResolution_EndDrag,
  DragImageListResolution_Class,
  DragImageListResolution_DragUnlock,
  DragImageListResolution_HideDragImage,
  DragImageListResolution_ShowDragImage;