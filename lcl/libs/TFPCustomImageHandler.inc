// constructor
function TFPCustomImageHandler_Create(): TFPCustomImageHandler; extdecl;
begin
  {$define handleExceptionID := 27600}
  handleExceptionBegin
  Result := TFPCustomImageHandler.Create();
  handleExceptionEnd
end;

// event
procedure TFPCustomImageHandler_OnProgress(AObj: TFPCustomImageHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFPImgProgressEvent}
  {$DEFINE EventName := OnProgress}
  LCLEventMethodCode
end;

exports
  TFPCustomImageHandler_Create,
  TFPCustomImageHandler_OnProgress;