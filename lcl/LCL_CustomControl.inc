
//constructor
function CustomControl_Create(AOwner: TComponent): TCustomControl; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomControl.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomControl_Canvas(AIsSet: LongBool; AObj: TCustomControl; AValue: TCanvas): TCanvas; extdecl;
begin
  {$define handleExceptionFuncName :='Canvas'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Canvas := AValue;
  end else
    Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function CustomControl_BorderStyle(AIsSet: LongBool; AObj: TCustomControl; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionFuncName :='BorderStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//function
function CustomControl_Class(): TClass; extdecl;
begin
  Result := TCustomControl;
end;

//property event
procedure CustomControl_SetOnPaint(AObj: TCustomControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;


exports
  CustomControl_Create,
  CustomControl_Canvas,
  CustomControl_BorderStyle,
  CustomControl_Class,
  CustomControl_SetOnPaint;