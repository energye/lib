// constructor
function TCustomControl_Create(AOwner: TComponent): TCustomControl; extdecl;
begin
  {$define handleExceptionID := 900}
  handleExceptionBegin
  Result := TCustomControl.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomControl_Canvas(ASet: LongBool; AObj: TCustomControl; AValue: TCanvas): TCanvas; extdecl;
begin
  {$define handleExceptionID := 901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Canvas := AValue
  end else
    Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TCustomControl_BorderStyleToBorderStyle(ASet: LongBool; AObj: TCustomControl; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// event
procedure TCustomControl_OnPaint(AObj: TCustomControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

function TCustomControl_TClass(): TClass; extdecl;
begin
  Result := TCustomControl;
end;

exports
  TCustomControl_Create,
  TCustomControl_Canvas,
  TCustomControl_BorderStyleToBorderStyle,
  TCustomControl_OnPaint,
  TCustomControl_TClass;