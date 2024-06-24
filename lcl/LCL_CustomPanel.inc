
//constructor
function CustomPanel_Create(TheOwner: TComponent): TCustomPanel; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPanel.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomPanel_Alignment(AIsSet: LongBool; AObj: TCustomPanel; AValue: TAlignment): TAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function CustomPanel_BevelColor(AIsSet: LongBool; AObj: TCustomPanel; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BevelColor := AValue;
  end else
    Result := AObj.BevelColor;
  handleExceptionEnd
end;

//property
function CustomPanel_BevelInner(AIsSet: LongBool; AObj: TCustomPanel; AValue: TPanelBevel): TPanelBevel; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BevelInner := AValue;
  end else
    Result := AObj.BevelInner;
  handleExceptionEnd
end;

//property
function CustomPanel_BevelOuter(AIsSet: LongBool; AObj: TCustomPanel; AValue: TPanelBevel): TPanelBevel; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BevelOuter := AValue;
  end else
    Result := AObj.BevelOuter;
  handleExceptionEnd
end;

//property
function CustomPanel_BevelWidth(AIsSet: LongBool; AObj: TCustomPanel; AValue: TBevelWidth): TBevelWidth; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BevelWidth := AValue;
  end else
    Result := AObj.BevelWidth;
  handleExceptionEnd
end;

//property
function CustomPanel_FullRepaint(AIsSet: LongBool; AObj: TCustomPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FullRepaint := AValue;
  end else
    Result := AObj.FullRepaint;
  handleExceptionEnd
end;

//property
function CustomPanel_ParentBackground(AIsSet: LongBool; AObj: TCustomPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBackground := AValue;
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

//property
function CustomPanel_ParentColor(AIsSet: LongBool; AObj: TCustomPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//function
function CustomPanel_Class(): TClass; extdecl;
begin
  Result := TCustomPanel;
end;


exports
  CustomPanel_Create,
  CustomPanel_Alignment,
  CustomPanel_BevelColor,
  CustomPanel_BevelInner,
  CustomPanel_BevelOuter,
  CustomPanel_BevelWidth,
  CustomPanel_FullRepaint,
  CustomPanel_ParentBackground,
  CustomPanel_ParentColor,
  CustomPanel_Class;