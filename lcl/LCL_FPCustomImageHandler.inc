
//constructor
function FPCustomImageHandler_Create(): TFPCustomImageHandler; extdecl;
begin
  handleExceptionBegin
  Result := TFPCustomImageHandler.Create();
  handleExceptionEnd
end;

//function
function FPCustomImageHandler_Class(): TClass; extdecl;
begin
  Result := TFPCustomImageHandler;
end;

//property event
procedure FPCustomImageHandler_SetOnProgress(AObj: TFPCustomImageHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFPImgProgressEvent}
  {$DEFINE EventName := OnProgress}
  EventMethodCode
end;


exports
  FPCustomImageHandler_Create,
  FPCustomImageHandler_Class,
  FPCustomImageHandler_SetOnProgress;