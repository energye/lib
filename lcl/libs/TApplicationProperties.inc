// constructor
function TApplicationProperties_Create(AOwner: TComponent): TApplicationProperties; extdecl;
begin
  {$define handleExceptionID := 32900}
  handleExceptionBegin
  Result := TApplicationProperties.Create(AOwner);
  handleExceptionEnd
end;

// property
function TApplicationProperties_CaptureExceptions(ASet: LongBool; AObj: TApplicationProperties; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaptureExceptions := AValue
  end else
    Result := AObj.CaptureExceptions;
  handleExceptionEnd
end;

// property
function TApplicationProperties_ExceptionDialog(ASet: LongBool; AObj: TApplicationProperties; AValue: TApplicationExceptionDlg): TApplicationExceptionDlg; extdecl;
begin
  {$define handleExceptionID := 32902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExceptionDialog := AValue
  end else
    Result := AObj.ExceptionDialog;
  handleExceptionEnd
end;

// property
procedure TApplicationProperties_HelpFile(ASet: LongBool; AObj: TApplicationProperties; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 32903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpFile := AValue
  end else
    StringBufferCreate(AObj.HelpFile, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TApplicationProperties_Hint(ASet: LongBool; AObj: TApplicationProperties; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 32904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Hint := AValue
  end else
    StringBufferCreate(AObj.Hint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TApplicationProperties_HintColor(ASet: LongBool; AObj: TApplicationProperties; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 32905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintColor := AValue
  end else
    Result := AObj.HintColor;
  handleExceptionEnd
end;

// property
function TApplicationProperties_HintHidePause(ASet: LongBool; AObj: TApplicationProperties; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 32906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintHidePause := AValue
  end else
    Result := AObj.HintHidePause;
  handleExceptionEnd
end;

// property
function TApplicationProperties_HintPause(ASet: LongBool; AObj: TApplicationProperties; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 32907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintPause := AValue
  end else
    Result := AObj.HintPause;
  handleExceptionEnd
end;

// property
function TApplicationProperties_HintShortCuts(ASet: LongBool; AObj: TApplicationProperties; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintShortCuts := AValue
  end else
    Result := AObj.HintShortCuts;
  handleExceptionEnd
end;

// property
function TApplicationProperties_HintShortPause(ASet: LongBool; AObj: TApplicationProperties; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 32909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintShortPause := AValue
  end else
    Result := AObj.HintShortPause;
  handleExceptionEnd
end;

// property
function TApplicationProperties_ShowButtonGlyphs(ASet: LongBool; AObj: TApplicationProperties; AValue: TApplicationShowGlyphs): TApplicationShowGlyphs; extdecl;
begin
  {$define handleExceptionID := 32910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowButtonGlyphs := AValue
  end else
    Result := AObj.ShowButtonGlyphs;
  handleExceptionEnd
end;

// property
function TApplicationProperties_ShowMenuGlyphs(ASet: LongBool; AObj: TApplicationProperties; AValue: TApplicationShowGlyphs): TApplicationShowGlyphs; extdecl;
begin
  {$define handleExceptionID := 32911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowMenuGlyphs := AValue
  end else
    Result := AObj.ShowMenuGlyphs;
  handleExceptionEnd
end;

// property
function TApplicationProperties_ShowHint(ASet: LongBool; AObj: TApplicationProperties; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowHint := AValue
  end else
    Result := AObj.ShowHint;
  handleExceptionEnd
end;

// property
function TApplicationProperties_ShowMainForm(ASet: LongBool; AObj: TApplicationProperties; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowMainForm := AValue
  end else
    Result := AObj.ShowMainForm;
  handleExceptionEnd
end;

// property
procedure TApplicationProperties_Title(ASet: LongBool; AObj: TApplicationProperties; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 32914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TApplicationProperties_OnActivate(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActivate}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnDeactivate(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDeactivate}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnException(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTExceptionEvent}
  {$DEFINE EventName := OnException}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnGetMainFormHandle(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetHandleEvent}
  {$DEFINE EventName := OnGetMainFormHandle}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnIdle(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTIdleEvent}
  {$DEFINE EventName := OnIdle}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnIdleEnd(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnIdleEnd}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnEndSession(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEndSession}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnQueryEndSession(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTQueryEndSessionEvent}
  {$DEFINE EventName := OnQueryEndSession}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnMinimize(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMinimize}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnModalBegin(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnModalBegin}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnModalEnd(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnModalEnd}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnRestore(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnRestore}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnDropFiles(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDropFilesEvent}
  {$DEFINE EventName := OnDropFiles}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnHelp(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTHelpEvent}
  {$DEFINE EventName := OnHelp}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnHint(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHint}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnShowHint(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTShowHintEvent}
  {$DEFINE EventName := OnShowHint}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnUserInput(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnUserInputEvent}
  {$DEFINE EventName := OnUserInput}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnActionExecute(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnActionExecute}
  LCLEventMethodCode
end;

// event
procedure TApplicationProperties_OnActionUpdate(AObj: TApplicationProperties; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnActionUpdate}
  LCLEventMethodCode
end;

function TApplicationProperties_TClass(): TClass; extdecl;
begin
  Result := TApplicationProperties;
end;

exports
  TApplicationProperties_Create,
  TApplicationProperties_CaptureExceptions,
  TApplicationProperties_ExceptionDialog,
  TApplicationProperties_HelpFile,
  TApplicationProperties_Hint,
  TApplicationProperties_HintColor,
  TApplicationProperties_HintHidePause,
  TApplicationProperties_HintPause,
  TApplicationProperties_HintShortCuts,
  TApplicationProperties_HintShortPause,
  TApplicationProperties_ShowButtonGlyphs,
  TApplicationProperties_ShowMenuGlyphs,
  TApplicationProperties_ShowHint,
  TApplicationProperties_ShowMainForm,
  TApplicationProperties_Title,
  TApplicationProperties_OnActivate,
  TApplicationProperties_OnDeactivate,
  TApplicationProperties_OnException,
  TApplicationProperties_OnGetMainFormHandle,
  TApplicationProperties_OnIdle,
  TApplicationProperties_OnIdleEnd,
  TApplicationProperties_OnEndSession,
  TApplicationProperties_OnQueryEndSession,
  TApplicationProperties_OnMinimize,
  TApplicationProperties_OnModalBegin,
  TApplicationProperties_OnModalEnd,
  TApplicationProperties_OnRestore,
  TApplicationProperties_OnDropFiles,
  TApplicationProperties_OnHelp,
  TApplicationProperties_OnHint,
  TApplicationProperties_OnShowHint,
  TApplicationProperties_OnUserInput,
  TApplicationProperties_OnActionExecute,
  TApplicationProperties_OnActionUpdate,
  TApplicationProperties_TClass;