// constructor
function TCustomOpenGLControl_Create(TheOwner: TComponent): TCustomOpenGLControl; extdecl;
begin
  {$define handleExceptionID := 30600}
  handleExceptionBegin
  Result := TCustomOpenGLControl.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomOpenGLControl_MakeCurrent(AObj: TCustomOpenGLControl; SaveOldToStack: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 30601}
  handleExceptionBegin
  Result := AObj.MakeCurrent(SaveOldToStack);
  handleExceptionEnd
end;

// function
function TCustomOpenGLControl_ReleaseContext(AObj: TCustomOpenGLControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 30602}
  handleExceptionBegin
  Result := AObj.ReleaseContext();
  handleExceptionEnd
end;

// function
function TCustomOpenGLControl_RestoreOldOpenGLControl(AObj: TCustomOpenGLControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 30603}
  handleExceptionBegin
  Result := AObj.RestoreOldOpenGLControl();
  handleExceptionEnd
end;

// function
function TCustomOpenGLControl_SharingControlCount(AObj: TCustomOpenGLControl): integer; extdecl;
begin
  {$define handleExceptionID := 30604}
  handleExceptionBegin
  Result := AObj.SharingControlCount();
  handleExceptionEnd
end;

// procedure
procedure TCustomOpenGLControl_Paint(AObj: TCustomOpenGLControl); extdecl;
begin
  {$define handleExceptionID := 30605}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

// procedure
procedure TCustomOpenGLControl_RealizeBounds(AObj: TCustomOpenGLControl); extdecl;
begin
  {$define handleExceptionID := 30606}
  handleExceptionBegin
  AObj.RealizeBounds();
  handleExceptionEnd
end;

// procedure
procedure TCustomOpenGLControl_DoOnPaint(AObj: TCustomOpenGLControl); extdecl;
begin
  {$define handleExceptionID := 30607}
  handleExceptionBegin
  AObj.DoOnPaint();
  handleExceptionEnd
end;

// procedure
procedure TCustomOpenGLControl_SwapBuffers(AObj: TCustomOpenGLControl); extdecl;
begin
  {$define handleExceptionID := 30608}
  handleExceptionBegin
  AObj.SwapBuffers();
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_SharingControls(AObj: TCustomOpenGLControl; Index: integer): TCustomOpenGLControl; extdecl;
begin
  {$define handleExceptionID := 30609}
  handleExceptionBegin
  Result := AObj.SharingControls[Index];
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_FrameDiffTimeInMSecs(AObj: TCustomOpenGLControl): integer; extdecl;
begin
  {$define handleExceptionID := 30610}
  handleExceptionBegin
  Result := AObj.FrameDiffTimeInMSecs;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_SharedControl(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: TCustomOpenGLControl): TCustomOpenGLControl; extdecl;
begin
  {$define handleExceptionID := 30611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SharedControl := AValue
  end else
    Result := AObj.SharedControl;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_AutoResizeViewport(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 30612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoResizeViewport := AValue
  end else
    Result := AObj.AutoResizeViewport;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_DebugContext(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 30613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DebugContext := AValue
  end else
    Result := AObj.DebugContext;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_RGBA(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 30614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RGBA := AValue
  end else
    Result := AObj.RGBA;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_OpenGLMajorVersion(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 30615}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OpenGLMajorVersion := AValue
  end else
    Result := AObj.OpenGLMajorVersion;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_OpenGLMinorVersion(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 30616}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OpenGLMinorVersion := AValue
  end else
    Result := AObj.OpenGLMinorVersion;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_MultiSampling(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 30617}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiSampling := AValue
  end else
    Result := AObj.MultiSampling;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_AlphaBits(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 30618}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlphaBits := AValue
  end else
    Result := AObj.AlphaBits;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_DepthBits(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 30619}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DepthBits := AValue
  end else
    Result := AObj.DepthBits;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_StencilBits(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 30620}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StencilBits := AValue
  end else
    Result := AObj.StencilBits;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_AUXBuffers(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 30621}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AUXBuffers := AValue
  end else
    Result := AObj.AUXBuffers;
  handleExceptionEnd
end;

// property
function TCustomOpenGLControl_Options(ASet: LongBool; AObj: TCustomOpenGLControl; AValue: TOpenGLControlOptions): TOpenGLControlOptions; extdecl;
begin
  {$define handleExceptionID := 30622}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// event
procedure TCustomOpenGLControl_OnMakeCurrent(AObj: TCustomOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOpenGlCtrlMakeCurrentEvent}
  {$DEFINE EventName := OnMakeCurrent}
  LCLEventMethodCode
end;

// event
procedure TCustomOpenGLControl_OnPaint(AObj: TCustomOpenGLControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

function TCustomOpenGLControl_TClass(): TClass; extdecl;
begin
  Result := TCustomOpenGLControl;
end;

exports
  TCustomOpenGLControl_Create,
  TCustomOpenGLControl_MakeCurrent,
  TCustomOpenGLControl_ReleaseContext,
  TCustomOpenGLControl_RestoreOldOpenGLControl,
  TCustomOpenGLControl_SharingControlCount,
  TCustomOpenGLControl_Paint,
  TCustomOpenGLControl_RealizeBounds,
  TCustomOpenGLControl_DoOnPaint,
  TCustomOpenGLControl_SwapBuffers,
  TCustomOpenGLControl_SharingControls,
  TCustomOpenGLControl_FrameDiffTimeInMSecs,
  TCustomOpenGLControl_SharedControl,
  TCustomOpenGLControl_AutoResizeViewport,
  TCustomOpenGLControl_DebugContext,
  TCustomOpenGLControl_RGBA,
  TCustomOpenGLControl_OpenGLMajorVersion,
  TCustomOpenGLControl_OpenGLMinorVersion,
  TCustomOpenGLControl_MultiSampling,
  TCustomOpenGLControl_AlphaBits,
  TCustomOpenGLControl_DepthBits,
  TCustomOpenGLControl_StencilBits,
  TCustomOpenGLControl_AUXBuffers,
  TCustomOpenGLControl_Options,
  TCustomOpenGLControl_OnMakeCurrent,
  TCustomOpenGLControl_OnPaint,
  TCustomOpenGLControl_TClass;