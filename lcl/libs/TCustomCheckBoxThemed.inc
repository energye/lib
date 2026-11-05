// constructor
function TCustomCheckBoxThemed_Create(AOwner: TComponent): TCustomCheckBoxThemed; extdecl;
begin
  {$define handleExceptionID := 34200}
  handleExceptionBegin
  Result := TCustomCheckBoxThemed.Create(AOwner);
  handleExceptionEnd
end;

// function static
procedure TCustomCheckBoxThemed_GetCheckBoxSize(const PixelsPerInch: Integer; var Result: TSize); extdecl;
begin
  Result := TCustomCheckBoxThemed.GetCheckBoxSize(PixelsPerInch);
end;

// procedure static
procedure TCustomCheckBoxThemed_PaintSelf(ACanvas: TCanvas; ACaption: PChar; var ARect: TRect; AState: TCheckBoxState; ARightToLeft: LongBool; AHovered: LongBool; APressed: LongBool; AFocused: LongBool; AAlignment: TLeftRight; AEnabled: LongBool); extdecl;
begin
  TCustomCheckBoxThemed.PaintSelf(ACanvas, ACaption, ARect, AState, ARightToLeft, AHovered, APressed, AFocused, AAlignment, AEnabled);
end;

// property
function TCustomCheckBoxThemed_Alignment(ASet: LongBool; AObj: TCustomCheckBoxThemed; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionID := 34201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TCustomCheckBoxThemed_AllowGrayed(ASet: LongBool; AObj: TCustomCheckBoxThemed; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowGrayed := AValue
  end else
    Result := AObj.AllowGrayed;
  handleExceptionEnd
end;

// property
function TCustomCheckBoxThemed_Checked(ASet: LongBool; AObj: TCustomCheckBoxThemed; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TCustomCheckBoxThemed_State(ASet: LongBool; AObj: TCustomCheckBoxThemed; AValue: TCheckBoxState): TCheckBoxState; extdecl;
begin
  {$define handleExceptionID := 34204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State := AValue
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

// event
procedure TCustomCheckBoxThemed_OnChange(AObj: TCustomCheckBoxThemed; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TCustomCheckBoxThemed_TClass(): TClass; extdecl;
begin
  Result := TCustomCheckBoxThemed;
end;

exports
  TCustomCheckBoxThemed_Create,
  TCustomCheckBoxThemed_GetCheckBoxSize,
  TCustomCheckBoxThemed_PaintSelf,
  TCustomCheckBoxThemed_Alignment,
  TCustomCheckBoxThemed_AllowGrayed,
  TCustomCheckBoxThemed_Checked,
  TCustomCheckBoxThemed_State,
  TCustomCheckBoxThemed_OnChange,
  TCustomCheckBoxThemed_TClass;