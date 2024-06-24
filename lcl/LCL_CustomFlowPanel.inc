
//constructor
function CustomFlowPanel_Create(AOwner: TComponent): TCustomFlowPanel; extdecl;
begin
  handleExceptionBegin
  Result := TCustomFlowPanel.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomFlowPanel_AutoWrap(AIsSet: LongBool; AObj: TCustomFlowPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoWrap := AValue;
  end else
    Result := AObj.AutoWrap;
  handleExceptionEnd
end;

//property
function CustomFlowPanel_ControlList(AIsSet: LongBool; AObj: TCustomFlowPanel; AValue: TFlowPanelControlList): TFlowPanelControlList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ControlList := AValue;
  end else
    Result := AObj.ControlList;
  handleExceptionEnd
end;

//property
function CustomFlowPanel_FlowStyle(AIsSet: LongBool; AObj: TCustomFlowPanel; AValue: TFlowStyle): TFlowStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FlowStyle := AValue;
  end else
    Result := AObj.FlowStyle;
  handleExceptionEnd
end;

//property
function CustomFlowPanel_FlowLayout(AIsSet: LongBool; AObj: TCustomFlowPanel; AValue: TTextLayout): TTextLayout; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FlowLayout := AValue;
  end else
    Result := AObj.FlowLayout;
  handleExceptionEnd
end;

//function
function CustomFlowPanel_Class(): TClass; extdecl;
begin
  Result := TCustomFlowPanel;
end;


exports
  CustomFlowPanel_Create,
  CustomFlowPanel_AutoWrap,
  CustomFlowPanel_ControlList,
  CustomFlowPanel_FlowStyle,
  CustomFlowPanel_FlowLayout,
  CustomFlowPanel_Class;