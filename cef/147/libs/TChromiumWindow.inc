// constructor
function TChromiumWindow_Create(AOwner: TComponent): TChromiumWindow; extdecl;
begin
  {$define handleExceptionID := 1000}
  handleExceptionBegin
  Result := TChromiumWindow.Create(AOwner);
  handleExceptionEnd
end;

// function
function TChromiumWindow_CreateBrowser(AObj: TChromiumWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 1001}
  handleExceptionBegin
  Result := AObj.CreateBrowser();
  handleExceptionEnd
end;

// procedure
procedure TChromiumWindow_CloseBrowser(AObj: TChromiumWindow; aForceClose: LongBool); extdecl;
begin
  {$define handleExceptionID := 1002}
  handleExceptionBegin
  AObj.CloseBrowser(aForceClose);
  handleExceptionEnd
end;

// procedure
procedure TChromiumWindow_LoadURL(AObj: TChromiumWindow; const aURL: PChar); extdecl;
begin
  {$define handleExceptionID := 1003}
  handleExceptionBegin
  AObj.LoadURL(PCharToUStr(aURL));
  handleExceptionEnd
end;

// procedure
procedure TChromiumWindow_NotifyMoveOrResizeStarted(AObj: TChromiumWindow); extdecl;
begin
  {$define handleExceptionID := 1004}
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

// property
function TChromiumWindow_ChromiumBrowser(AObj: TChromiumWindow): TChromium; extdecl;
begin
  {$define handleExceptionID := 1005}
  handleExceptionBegin
  Result := AObj.ChromiumBrowser;
  handleExceptionEnd
end;

// property
function TChromiumWindow_Initialized(AObj: TChromiumWindow): LongBool; extdecl;
begin
  {$define handleExceptionID := 1006}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// event
procedure TChromiumWindow_OnClose(AObj: TChromiumWindow; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumWindow_TNotifyEvent}
  {$DEFINE EventName := OnClose}
  CEFEventMethodCode
end;

// event
procedure TChromiumWindow_OnBeforeClose(AObj: TChromiumWindow; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumWindow_TNotifyEvent}
  {$DEFINE EventName := OnBeforeClose}
  CEFEventMethodCode
end;

// event
procedure TChromiumWindow_OnAfterCreated(AObj: TChromiumWindow; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TChromiumWindow_TNotifyEvent}
  {$DEFINE EventName := OnAfterCreated}
  CEFEventMethodCode
end;

exports
  TChromiumWindow_Create,
  TChromiumWindow_CreateBrowser,
  TChromiumWindow_CloseBrowser,
  TChromiumWindow_LoadURL,
  TChromiumWindow_NotifyMoveOrResizeStarted,
  TChromiumWindow_ChromiumBrowser,
  TChromiumWindow_Initialized,
  TChromiumWindow_OnClose,
  TChromiumWindow_OnBeforeClose,
  TChromiumWindow_OnAfterCreated;