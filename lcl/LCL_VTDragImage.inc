
//constructor
function VTDragImage_Create(AOwner: TBaseVirtualTree): TVTDragImage; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TVTDragImage.Create(AOwner);
  handleExceptionEnd
end;

//property
function VTDragImage_ColorKey(AIsSet: LongBool; AObj: TVTDragImage; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='ColorKey'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorKey := AValue;
  end else
    Result := AObj.ColorKey;
  handleExceptionEnd
end;

//property
function VTDragImage_Fade(AIsSet: LongBool; AObj: TVTDragImage; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Fade'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Fade := AValue;
  end else
    Result := AObj.Fade;
  handleExceptionEnd
end;

//property
function VTDragImage_MoveRestriction(AIsSet: LongBool; AObj: TVTDragImage; AValue: TVTDragMoveRestriction): TVTDragMoveRestriction; extdecl;
begin
  {$define handleExceptionFuncName :='MoveRestriction'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MoveRestriction := AValue;
  end else
    Result := AObj.MoveRestriction;
  handleExceptionEnd
end;

//property
function VTDragImage_PostBlendBias(AIsSet: LongBool; AObj: TVTDragImage; AValue: TVTBias): TVTBias; extdecl;
begin
  {$define handleExceptionFuncName :='PostBlendBias'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PostBlendBias := AValue;
  end else
    Result := AObj.PostBlendBias;
  handleExceptionEnd
end;

//property
function VTDragImage_PreBlendBias(AIsSet: LongBool; AObj: TVTDragImage; AValue: TVTBias): TVTBias; extdecl;
begin
  {$define handleExceptionFuncName :='PreBlendBias'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreBlendBias := AValue;
  end else
    Result := AObj.PreBlendBias;
  handleExceptionEnd
end;

//property
function VTDragImage_Transparency(AIsSet: LongBool; AObj: TVTDragImage; AValue: TVTTransparency): TVTTransparency; extdecl;
begin
  {$define handleExceptionFuncName :='Transparency'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparency := AValue;
  end else
    Result := AObj.Transparency;
  handleExceptionEnd
end;

//property
function VTDragImage_Visible(AObj: TVTDragImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

//function
function VTDragImage_DragTo(AObj: TVTDragImage; var P: TPoint; ForceRepaint: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DragTo'}
  handleExceptionBegin
  Result := AObj.DragTo(P, ForceRepaint);
  handleExceptionEnd
end;

//function
procedure VTDragImage_GetDragImageRect(AObj: TVTDragImage; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetDragImageRect'}
  handleExceptionBegin
  Result := AObj.GetDragImageRect();
  handleExceptionEnd
end;

//function
function VTDragImage_WillMove(AObj: TVTDragImage; var P: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='WillMove'}
  handleExceptionBegin
  Result := AObj.WillMove(P);
  handleExceptionEnd
end;

//function
function VTDragImage_Class(): TClass; extdecl;
begin
  Result := TVTDragImage;
end;

//procedure
procedure VTDragImage_EndDrag(AObj: TVTDragImage); extdecl;
begin
  {$define handleExceptionFuncName :='EndDrag'}
  handleExceptionBegin
  AObj.EndDrag();
  handleExceptionEnd
end;

//procedure
procedure VTDragImage_HideDragImage(AObj: TVTDragImage); extdecl;
begin
  {$define handleExceptionFuncName :='HideDragImage'}
  handleExceptionBegin
  AObj.HideDragImage();
  handleExceptionEnd
end;

//procedure
procedure VTDragImage_RecaptureBackground(AObj: TVTDragImage; Tree: TBaseVirtualTree; var R: TRect; VisibleRegion: HRGN; CaptureNCArea, ReshowDragImage: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='RecaptureBackground'}
  handleExceptionBegin
  AObj.RecaptureBackground(Tree, R, VisibleRegion, CaptureNCArea, ReshowDragImage);
  handleExceptionEnd
end;

//procedure
procedure VTDragImage_ShowDragImage(AObj: TVTDragImage); extdecl;
begin
  {$define handleExceptionFuncName :='ShowDragImage'}
  handleExceptionBegin
  AObj.ShowDragImage();
  handleExceptionEnd
end;


exports
  VTDragImage_Create,
  VTDragImage_ColorKey,
  VTDragImage_Fade,
  VTDragImage_MoveRestriction,
  VTDragImage_PostBlendBias,
  VTDragImage_PreBlendBias,
  VTDragImage_Transparency,
  VTDragImage_Visible,
  VTDragImage_DragTo,
  VTDragImage_GetDragImageRect,
  VTDragImage_WillMove,
  VTDragImage_Class,
  VTDragImage_EndDrag,
  VTDragImage_HideDragImage,
  VTDragImage_RecaptureBackground,
  VTDragImage_ShowDragImage;