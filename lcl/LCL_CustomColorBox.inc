
//constructor
function CustomColorBox_Create(AOwner: TComponent): TCustomColorBox; extdecl;
begin
  handleExceptionBegin
  Result := TCustomColorBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomColorBox_ColorRectWidth(AIsSet: LongBool; AObj: TCustomColorBox; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorRectWidth := AValue;
  end else
    Result := AObj.ColorRectWidth;
  handleExceptionEnd
end;

//property
function CustomColorBox_ColorRectOffset(AIsSet: LongBool; AObj: TCustomColorBox; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorRectOffset := AValue;
  end else
    Result := AObj.ColorRectOffset;
  handleExceptionEnd
end;

//property
function CustomColorBox_StyleForColorBoxStyle(AIsSet: LongBool; AObj: TCustomColorBox; AValue: TColorBoxStyle): TColorBoxStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function CustomColorBox_Colors(AObj: TCustomColorBox; Index: Integer): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Colors[Index];
  handleExceptionEnd
end;

//property
function CustomColorBox_ColorNames(AObj: TCustomColorBox; Index: Integer): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ColorNames[Index]);
  handleExceptionEnd
end;

//property
function CustomColorBox_Selected(AIsSet: LongBool; AObj: TCustomColorBox; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Selected := AValue;
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

//property
function CustomColorBox_DefaultColorColor(AIsSet: LongBool; AObj: TCustomColorBox; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultColorColor := AValue;
  end else
    Result := AObj.DefaultColorColor;
  handleExceptionEnd
end;

//property
function CustomColorBox_NoneColorColor(AIsSet: LongBool; AObj: TCustomColorBox; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NoneColorColor := AValue;
  end else
    Result := AObj.NoneColorColor;
  handleExceptionEnd
end;

//property
function CustomColorBox_ColorDialog(AIsSet: LongBool; AObj: TCustomColorBox; AValue: TcolorDialog): TcolorDialog; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColorDialog := AValue;
  end else
    Result := AObj.ColorDialog;
  handleExceptionEnd
end;

//function
function CustomColorBox_Class(): TClass; extdecl;
begin
  Result := TCustomColorBox;
end;

//property event
procedure CustomColorBox_SetOnGetColors(AObj: TCustomColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetColorsEvent}
  {$DEFINE EventName := OnGetColors}
  EventMethodCode
end;


exports
  CustomColorBox_Create,
  CustomColorBox_ColorRectWidth,
  CustomColorBox_ColorRectOffset,
  CustomColorBox_StyleForColorBoxStyle,
  CustomColorBox_Colors,
  CustomColorBox_ColorNames,
  CustomColorBox_Selected,
  CustomColorBox_DefaultColorColor,
  CustomColorBox_NoneColorColor,
  CustomColorBox_ColorDialog,
  CustomColorBox_Class,
  CustomColorBox_SetOnGetColors;