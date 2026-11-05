// constructor
function TVTColors_Create(AOwner: TBaseVirtualTree): TVTColors; extdecl;
begin
  {$define handleExceptionID := 29400}
  handleExceptionBegin
  Result := TVTColors.Create(AOwner);
  handleExceptionEnd
end;

// property
function TVTColors_BackGroundColor(AObj: TVTColors): TColor; extdecl;
begin
  {$define handleExceptionID := 29401}
  handleExceptionBegin
  Result := AObj.BackGroundColor;
  handleExceptionEnd
end;

// property
function TVTColors_HeaderFontColor(AObj: TVTColors): TColor; extdecl;
begin
  {$define handleExceptionID := 29402}
  handleExceptionBegin
  Result := AObj.HeaderFontColor;
  handleExceptionEnd
end;

// property
function TVTColors_NodeFontColor(AObj: TVTColors): TColor; extdecl;
begin
  {$define handleExceptionID := 29403}
  handleExceptionBegin
  Result := AObj.NodeFontColor;
  handleExceptionEnd
end;

// property
function TVTColors_BorderColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderColor := AValue
  end else
    Result := AObj.BorderColor;
  handleExceptionEnd
end;

// property
function TVTColors_DisabledColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisabledColor := AValue
  end else
    Result := AObj.DisabledColor;
  handleExceptionEnd
end;

// property
function TVTColors_DropMarkColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropMarkColor := AValue
  end else
    Result := AObj.DropMarkColor;
  handleExceptionEnd
end;

// property
function TVTColors_DropTargetColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropTargetColor := AValue
  end else
    Result := AObj.DropTargetColor;
  handleExceptionEnd
end;

// property
function TVTColors_DropTargetBorderColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropTargetBorderColor := AValue
  end else
    Result := AObj.DropTargetBorderColor;
  handleExceptionEnd
end;

// property
function TVTColors_FocusedSelectionColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusedSelectionColor := AValue
  end else
    Result := AObj.FocusedSelectionColor;
  handleExceptionEnd
end;

// property
function TVTColors_FocusedSelectionBorderColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29410}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusedSelectionBorderColor := AValue
  end else
    Result := AObj.FocusedSelectionBorderColor;
  handleExceptionEnd
end;

// property
function TVTColors_GridLineColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29411}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GridLineColor := AValue
  end else
    Result := AObj.GridLineColor;
  handleExceptionEnd
end;

// property
function TVTColors_HeaderHotColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderHotColor := AValue
  end else
    Result := AObj.HeaderHotColor;
  handleExceptionEnd
end;

// property
function TVTColors_HotColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotColor := AValue
  end else
    Result := AObj.HotColor;
  handleExceptionEnd
end;

// property
function TVTColors_SelectionRectangleBlendColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29414}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionRectangleBlendColor := AValue
  end else
    Result := AObj.SelectionRectangleBlendColor;
  handleExceptionEnd
end;

// property
function TVTColors_SelectionRectangleBorderColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29415}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionRectangleBorderColor := AValue
  end else
    Result := AObj.SelectionRectangleBorderColor;
  handleExceptionEnd
end;

// property
function TVTColors_SelectionTextColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29416}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionTextColor := AValue
  end else
    Result := AObj.SelectionTextColor;
  handleExceptionEnd
end;

// property
function TVTColors_TreeLineColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29417}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreeLineColor := AValue
  end else
    Result := AObj.TreeLineColor;
  handleExceptionEnd
end;

// property
function TVTColors_UnfocusedColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29418}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UnfocusedColor := AValue
  end else
    Result := AObj.UnfocusedColor;
  handleExceptionEnd
end;

// property
function TVTColors_UnfocusedSelectionColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29419}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UnfocusedSelectionColor := AValue
  end else
    Result := AObj.UnfocusedSelectionColor;
  handleExceptionEnd
end;

// property
function TVTColors_UnfocusedSelectionBorderColor(ASet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29420}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UnfocusedSelectionBorderColor := AValue
  end else
    Result := AObj.UnfocusedSelectionBorderColor;
  handleExceptionEnd
end;

exports
  TVTColors_Create,
  TVTColors_BackGroundColor,
  TVTColors_HeaderFontColor,
  TVTColors_NodeFontColor,
  TVTColors_BorderColor,
  TVTColors_DisabledColor,
  TVTColors_DropMarkColor,
  TVTColors_DropTargetColor,
  TVTColors_DropTargetBorderColor,
  TVTColors_FocusedSelectionColor,
  TVTColors_FocusedSelectionBorderColor,
  TVTColors_GridLineColor,
  TVTColors_HeaderHotColor,
  TVTColors_HotColor,
  TVTColors_SelectionRectangleBlendColor,
  TVTColors_SelectionRectangleBorderColor,
  TVTColors_SelectionTextColor,
  TVTColors_TreeLineColor,
  TVTColors_UnfocusedColor,
  TVTColors_UnfocusedSelectionColor,
  TVTColors_UnfocusedSelectionBorderColor;