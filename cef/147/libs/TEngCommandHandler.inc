// constructor
function TEngCommandHandler_Create(out IntfCommandHandler: ICefCommandHandler): TEngCommandHandler; extdecl;
begin
  {$define handleExceptionID := 16900}
  handleExceptionBegin
  Result := TEngCommandHandler.Create();
  IntfCommandHandler := Result as ICefCommandHandler;
  handleExceptionEnd
end;

// event
procedure TEngCommandHandler_OnCommandChromeCommand(AObj: TEngCommandHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCommandHandler_TOnCommandChromeCommandEvent}
  {$DEFINE EventName := OnCommandChromeCommand}
  CEFEventMethodCode
end;

// event
procedure TEngCommandHandler_OnCommandIsChromeAppMenuItemVisible(AObj: TEngCommandHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCommandHandler_TOnCommandIsChromeAppMenuItemVisibleEvent}
  {$DEFINE EventName := OnCommandIsChromeAppMenuItemVisible}
  CEFEventMethodCode
end;

// event
procedure TEngCommandHandler_OnCommandIsChromeAppMenuItemEnabled(AObj: TEngCommandHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCommandHandler_TOnCommandIsChromeAppMenuItemEnabledEvent}
  {$DEFINE EventName := OnCommandIsChromeAppMenuItemEnabled}
  CEFEventMethodCode
end;

// event
procedure TEngCommandHandler_OnCommandIsChromePageActionIconVisible(AObj: TEngCommandHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCommandHandler_TOnCommandIsChromePageActionIconVisibleEvent}
  {$DEFINE EventName := OnCommandIsChromePageActionIconVisible}
  CEFEventMethodCode
end;

// event
procedure TEngCommandHandler_OnCommandIsChromeToolbarButtonVisible(AObj: TEngCommandHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCommandHandler_TOnCommandIsChromeToolbarButtonVisibleEvent}
  {$DEFINE EventName := OnCommandIsChromeToolbarButtonVisible}
  CEFEventMethodCode
end;

exports
  TEngCommandHandler_Create,
  TEngCommandHandler_OnCommandChromeCommand,
  TEngCommandHandler_OnCommandIsChromeAppMenuItemVisible,
  TEngCommandHandler_OnCommandIsChromeAppMenuItemEnabled,
  TEngCommandHandler_OnCommandIsChromePageActionIconVisible,
  TEngCommandHandler_OnCommandIsChromeToolbarButtonVisible;