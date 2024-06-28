
//constructor
function CustomColorListBox_Create(AOwner: TComponent): TCustomColorListBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomColorListBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomColorListBox_ColorRectWidth(AIsSet: LongBool; AObj: TCustomColorListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ColorRectWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorRectWidth := AValue;
  end else
    Result := AObj.ColorRectWidth;
  handleExceptionEnd
end;

//property
function CustomColorListBox_ColorRectOffset(AIsSet: LongBool; AObj: TCustomColorListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ColorRectOffset'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorRectOffset := AValue;
  end else
    Result := AObj.ColorRectOffset;
  handleExceptionEnd
end;

//property
function CustomColorListBox_StyleForColorBoxStyle(AIsSet: LongBool; AObj: TCustomColorListBox; AValue: TColorBoxStyle): TColorBoxStyle; extdecl;
begin
  {$define handleExceptionFuncName :='StyleForColorBoxStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function CustomColorListBox_Colors(AIsSet: LongBool; AObj: TCustomColorListBox; Index: Integer; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='Colors'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Colors[Index] := AValue;
  end else
    Result := AObj.Colors[Index];
  handleExceptionEnd
end;

//property
function CustomColorListBox_ColorNames(AObj: TCustomColorListBox; Index: Integer): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ColorNames'}
  handleExceptionBegin
  Result := ToPChar(AObj.ColorNames[Index]);
  handleExceptionEnd
end;

//property
function CustomColorListBox_SelectedForColor(AIsSet: LongBool; AObj: TCustomColorListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedForColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Selected := AValue;
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

//property
function CustomColorListBox_DefaultColorColor(AIsSet: LongBool; AObj: TCustomColorListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultColorColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultColorColor := AValue;
  end else
    Result := AObj.DefaultColorColor;
  handleExceptionEnd
end;

//property
function CustomColorListBox_NoneColorColor(AIsSet: LongBool; AObj: TCustomColorListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='NoneColorColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NoneColorColor := AValue;
  end else
    Result := AObj.NoneColorColor;
  handleExceptionEnd
end;

//property
function CustomColorListBox_ColorDialog(AIsSet: LongBool; AObj: TCustomColorListBox; AValue: TColorDialog): TColorDialog; extdecl;
begin
  {$define handleExceptionFuncName :='ColorDialog'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorDialog := AValue;
  end else
    Result := AObj.ColorDialog;
  handleExceptionEnd
end;

//function
function CustomColorListBox_Class(): TClass; extdecl;
begin
  Result := TCustomColorListBox;
end;

//property event
procedure CustomColorListBox_SetOnGetColors(AObj: TCustomColorListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTLBGetColorsEvent}
  {$DEFINE EventName := OnGetColors}
  EventMethodCode
end;


exports
  CustomColorListBox_Create,
  CustomColorListBox_ColorRectWidth,
  CustomColorListBox_ColorRectOffset,
  CustomColorListBox_StyleForColorBoxStyle,
  CustomColorListBox_Colors,
  CustomColorListBox_ColorNames,
  CustomColorListBox_SelectedForColor,
  CustomColorListBox_DefaultColorColor,
  CustomColorListBox_NoneColorColor,
  CustomColorListBox_ColorDialog,
  CustomColorListBox_Class,
  CustomColorListBox_SetOnGetColors;