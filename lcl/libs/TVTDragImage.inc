// constructor
function TVTDragImage_Create(AOwner: TBaseVirtualTree): TVTDragImage; extdecl;
begin
  {$define handleExceptionID := 29900}
  handleExceptionBegin
  Result := TVTDragImage.Create(AOwner);
  handleExceptionEnd
end;

// function
function TVTDragImage_DragTo(AObj: TVTDragImage; var P: TPoint; ForceRepaint: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29901}
  handleExceptionBegin
  Result := AObj.DragTo(P, ForceRepaint);
  handleExceptionEnd
end;

// function
procedure TVTDragImage_GetDragImageRect(AObj: TVTDragImage; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 29902}
  handleExceptionBegin
  Result := AObj.GetDragImageRect();
  handleExceptionEnd
end;

// function
function TVTDragImage_WillMove(AObj: TVTDragImage; var P: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 29903}
  handleExceptionBegin
  Result := AObj.WillMove(P);
  handleExceptionEnd
end;

// procedure
procedure TVTDragImage_EndDrag(AObj: TVTDragImage); extdecl;
begin
  {$define handleExceptionID := 29904}
  handleExceptionBegin
  AObj.EndDrag();
  handleExceptionEnd
end;

// procedure
procedure TVTDragImage_HideDragImage(AObj: TVTDragImage); extdecl;
begin
  {$define handleExceptionID := 29905}
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

// procedure
procedure TVTDragImage_RecaptureBackground(AObj: TVTDragImage; Tree: TBaseVirtualTree; var R: TRect; VisibleRegion: HRGN; CaptureNCArea: LongBool; ReshowDragImage: LongBool); extdecl;
begin
  {$define handleExceptionID := 29906}
  handleExceptionBegin
  AObj.RecaptureBackground(Tree, R, VisibleRegion, CaptureNCArea, ReshowDragImage);
  handleExceptionEnd
end;

// procedure
procedure TVTDragImage_ShowDragImage(AObj: TVTDragImage); extdecl;
begin
  {$define handleExceptionID := 29907}
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;

// property
function TVTDragImage_ColorKey(ASet: LongBool; AObj: TVTDragImage; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorKey := AValue
  end else
    Result := AObj.ColorKey;
  handleExceptionEnd
end;

// property
function TVTDragImage_Fade(ASet: LongBool; AObj: TVTDragImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Fade := AValue
  end else
    Result := AObj.Fade;
  handleExceptionEnd
end;

// property
function TVTDragImage_MoveRestriction(ASet: LongBool; AObj: TVTDragImage; AValue: TVTDragMoveRestriction): TVTDragMoveRestriction; extdecl;
begin
  {$define handleExceptionID := 29910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MoveRestriction := AValue
  end else
    Result := AObj.MoveRestriction;
  handleExceptionEnd
end;

// property
function TVTDragImage_PostBlendBias(ASet: LongBool; AObj: TVTDragImage; AValue: TVTBias): TVTBias; extdecl;
begin
  {$define handleExceptionID := 29911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PostBlendBias := AValue
  end else
    Result := AObj.PostBlendBias;
  handleExceptionEnd
end;

// property
function TVTDragImage_PreBlendBias(ASet: LongBool; AObj: TVTDragImage; AValue: TVTBias): TVTBias; extdecl;
begin
  {$define handleExceptionID := 29912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreBlendBias := AValue
  end else
    Result := AObj.PreBlendBias;
  handleExceptionEnd
end;

// property
function TVTDragImage_Transparency(ASet: LongBool; AObj: TVTDragImage; AValue: TVTTransparency): TVTTransparency; extdecl;
begin
  {$define handleExceptionID := 29913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparency := AValue
  end else
    Result := AObj.Transparency;
  handleExceptionEnd
end;

// property
function TVTDragImage_Visible(AObj: TVTDragImage): LongBool; extdecl;
begin
  {$define handleExceptionID := 29914}
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

exports
  TVTDragImage_Create,
  TVTDragImage_DragTo,
  TVTDragImage_GetDragImageRect,
  TVTDragImage_WillMove,
  TVTDragImage_EndDrag,
  TVTDragImage_HideDragImage,
  TVTDragImage_RecaptureBackground,
  TVTDragImage_ShowDragImage,
  TVTDragImage_ColorKey,
  TVTDragImage_Fade,
  TVTDragImage_MoveRestriction,
  TVTDragImage_PostBlendBias,
  TVTDragImage_PreBlendBias,
  TVTDragImage_Transparency,
  TVTDragImage_Visible;