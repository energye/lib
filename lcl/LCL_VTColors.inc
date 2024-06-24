
//constructor
function VTColors_Create(AOwner: TBaseVirtualTree): TVTColors; extdecl;
begin
  handleExceptionBegin
  Result := TVTColors.Create(AOwner);
  handleExceptionEnd
end;

//property
function VTColors_BackGroundColor(AObj: TVTColors): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BackGroundColor;
  handleExceptionEnd
end;

//property
function VTColors_HeaderFontColor(AObj: TVTColors): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HeaderFontColor;
  handleExceptionEnd
end;

//property
function VTColors_NodeFontColor(AObj: TVTColors): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NodeFontColor;
  handleExceptionEnd
end;

//property
function VTColors_BorderColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderColor := AValue;
  end else
    Result := AObj.BorderColor;
  handleExceptionEnd
end;

//property
function VTColors_DisabledColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisabledColor := AValue;
  end else
    Result := AObj.DisabledColor;
  handleExceptionEnd
end;

//property
function VTColors_DropMarkColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropMarkColor := AValue;
  end else
    Result := AObj.DropMarkColor;
  handleExceptionEnd
end;

//property
function VTColors_DropTargetColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropTargetColor := AValue;
  end else
    Result := AObj.DropTargetColor;
  handleExceptionEnd
end;

//property
function VTColors_DropTargetBorderColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropTargetBorderColor := AValue;
  end else
    Result := AObj.DropTargetBorderColor;
  handleExceptionEnd
end;

//property
function VTColors_FocusedSelectionColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusedSelectionColor := AValue;
  end else
    Result := AObj.FocusedSelectionColor;
  handleExceptionEnd
end;

//property
function VTColors_FocusedSelectionBorderColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusedSelectionBorderColor := AValue;
  end else
    Result := AObj.FocusedSelectionBorderColor;
  handleExceptionEnd
end;

//property
function VTColors_GridLineColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GridLineColor := AValue;
  end else
    Result := AObj.GridLineColor;
  handleExceptionEnd
end;

//property
function VTColors_HeaderHotColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderHotColor := AValue;
  end else
    Result := AObj.HeaderHotColor;
  handleExceptionEnd
end;

//property
function VTColors_HotColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotColor := AValue;
  end else
    Result := AObj.HotColor;
  handleExceptionEnd
end;

//property
function VTColors_SelectionRectangleBlendColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionRectangleBlendColor := AValue;
  end else
    Result := AObj.SelectionRectangleBlendColor;
  handleExceptionEnd
end;

//property
function VTColors_SelectionRectangleBorderColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionRectangleBorderColor := AValue;
  end else
    Result := AObj.SelectionRectangleBorderColor;
  handleExceptionEnd
end;

//property
function VTColors_SelectionTextColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionTextColor := AValue;
  end else
    Result := AObj.SelectionTextColor;
  handleExceptionEnd
end;

//property
function VTColors_TreeLineColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreeLineColor := AValue;
  end else
    Result := AObj.TreeLineColor;
  handleExceptionEnd
end;

//property
function VTColors_UnfocusedColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UnfocusedColor := AValue;
  end else
    Result := AObj.UnfocusedColor;
  handleExceptionEnd
end;

//property
function VTColors_UnfocusedSelectionColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UnfocusedSelectionColor := AValue;
  end else
    Result := AObj.UnfocusedSelectionColor;
  handleExceptionEnd
end;

//property
function VTColors_UnfocusedSelectionBorderColor(AIsSet: LongBool; AObj: TVTColors; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UnfocusedSelectionBorderColor := AValue;
  end else
    Result := AObj.UnfocusedSelectionBorderColor;
  handleExceptionEnd
end;

//function
function VTColors_Class(): TClass; extdecl;
begin
  Result := TVTColors;
end;


exports
  VTColors_Create,
  VTColors_BackGroundColor,
  VTColors_HeaderFontColor,
  VTColors_NodeFontColor,
  VTColors_BorderColor,
  VTColors_DisabledColor,
  VTColors_DropMarkColor,
  VTColors_DropTargetColor,
  VTColors_DropTargetBorderColor,
  VTColors_FocusedSelectionColor,
  VTColors_FocusedSelectionBorderColor,
  VTColors_GridLineColor,
  VTColors_HeaderHotColor,
  VTColors_HotColor,
  VTColors_SelectionRectangleBlendColor,
  VTColors_SelectionRectangleBorderColor,
  VTColors_SelectionTextColor,
  VTColors_TreeLineColor,
  VTColors_UnfocusedColor,
  VTColors_UnfocusedSelectionColor,
  VTColors_UnfocusedSelectionBorderColor,
  VTColors_Class;