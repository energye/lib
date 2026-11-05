// constructor
function TCustomFlowPanel_Create(AOwner: TComponent): TCustomFlowPanel; extdecl;
begin
  {$define handleExceptionID := 19800}
  handleExceptionBegin
  Result := TCustomFlowPanel.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomFlowPanel_GetControlIndexWithControl(AObj: TCustomFlowPanel; AControl: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 19801}
  handleExceptionBegin
  Result := AObj.GetControlIndex(AControl);
  handleExceptionEnd
end;

// procedure
procedure TCustomFlowPanel_SetControlIndexWithControlInt(AObj: TCustomFlowPanel; AControl: TControl; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 19802}
  handleExceptionBegin
  AObj.SetControlIndex(AControl, Index);
  handleExceptionEnd
end;

// property
function TCustomFlowPanel_AutoWrap(ASet: LongBool; AObj: TCustomFlowPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoWrap := AValue
  end else
    Result := AObj.AutoWrap;
  handleExceptionEnd
end;

// property
function TCustomFlowPanel_ControlList(ASet: LongBool; AObj: TCustomFlowPanel; AValue: TFlowPanelControlList): TFlowPanelControlList; extdecl;
begin
  {$define handleExceptionID := 19804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlList := AValue
  end else
    Result := AObj.ControlList;
  handleExceptionEnd
end;

// property
function TCustomFlowPanel_FlowStyle(ASet: LongBool; AObj: TCustomFlowPanel; AValue: TFlowStyle): TFlowStyle; extdecl;
begin
  {$define handleExceptionID := 19805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FlowStyle := AValue
  end else
    Result := AObj.FlowStyle;
  handleExceptionEnd
end;

// property
function TCustomFlowPanel_FlowLayout(ASet: LongBool; AObj: TCustomFlowPanel; AValue: TTextLayout): TTextLayout; extdecl;
begin
  {$define handleExceptionID := 19806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FlowLayout := AValue
  end else
    Result := AObj.FlowLayout;
  handleExceptionEnd
end;

function TCustomFlowPanel_TClass(): TClass; extdecl;
begin
  Result := TCustomFlowPanel;
end;

exports
  TCustomFlowPanel_Create,
  TCustomFlowPanel_GetControlIndexWithControl,
  TCustomFlowPanel_SetControlIndexWithControlInt,
  TCustomFlowPanel_AutoWrap,
  TCustomFlowPanel_ControlList,
  TCustomFlowPanel_FlowStyle,
  TCustomFlowPanel_FlowLayout,
  TCustomFlowPanel_TClass;