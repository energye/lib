
//constructor
function GraphicsObject_Create(): TGraphicsObject; extdecl;
begin
  handleExceptionBegin
  Result := TGraphicsObject.Create();
  handleExceptionEnd
end;

//function
function GraphicsObject_Class(): TClass; extdecl;
begin
  Result := TGraphicsObject;
end;

//property event
procedure GraphicsObject_SetOnChanging(AObj: TGraphicsObject; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChanging}
  EventMethodCode
end;

//property event
procedure GraphicsObject_SetOnChange(AObj: TGraphicsObject; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  GraphicsObject_Create,
  GraphicsObject_Class,
  GraphicsObject_SetOnChanging,
  GraphicsObject_SetOnChange;