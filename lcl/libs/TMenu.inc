// constructor
function TMenu_Create(AOwner: TComponent): TMenu; extdecl;
begin
  {$define handleExceptionID := 2700}
  handleExceptionBegin
  Result := TMenu.Create(AOwner);
  handleExceptionEnd
end;

// function
function TMenu_FindItem(AObj: TMenu; AValue: PtrInt; Kind: TFindItemKind): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 2701}
  handleExceptionBegin
  Result := AObj.FindItem(AValue, Kind);
  handleExceptionEnd
end;

// function
function TMenu_GetHelpContext(AObj: TMenu; AValue: PtrInt; ByCommand: LongBool): THelpContext; extdecl;
begin
  {$define handleExceptionID := 2702}
  handleExceptionBegin
  Result := AObj.GetHelpContext(AValue, ByCommand);
  handleExceptionEnd
end;

// function
function TMenu_IsShortcut(AObj: TMenu; var Message: TLMKeyPtr): LongBool; extdecl;
var
  OutMessage: TLMKey;
begin
  {$define handleExceptionID := 2703}
  handleExceptionBegin
  OutMessage := TLMKeyToPas(Message);
  Result := AObj.IsShortcut(OutMessage);
  Message := TLMKeyToGo(OutMessage);
  handleExceptionEnd
end;

// function
function TMenu_HandleAllocated(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionID := 2704}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// function
function TMenu_IsRightToLeft(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionID := 2705}
  handleExceptionBegin
  Result := AObj.IsRightToLeft();
  handleExceptionEnd
end;

// function
function TMenu_UseRightToLeftAlignment(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionID := 2706}
  handleExceptionBegin
  Result := AObj.UseRightToLeftAlignment();
  handleExceptionEnd
end;

// function
function TMenu_UseRightToLeftReading(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionID := 2707}
  handleExceptionBegin
  Result := AObj.UseRightToLeftReading();
  handleExceptionEnd
end;

// function
function TMenu_DispatchCommand(AObj: TMenu; ACommand: Word): LongBool; extdecl;
begin
  {$define handleExceptionID := 2708}
  handleExceptionBegin
  Result := AObj.DispatchCommand(ACommand);
  handleExceptionEnd
end;

// procedure
procedure TMenu_DestroyHandle(AObj: TMenu); extdecl;
begin
  {$define handleExceptionID := 2709}
  handleExceptionBegin
  AObj.DestroyHandle();
  handleExceptionEnd
end;

// procedure
procedure TMenu_HandleNeeded(AObj: TMenu); extdecl;
begin
  {$define handleExceptionID := 2710}
  handleExceptionBegin
  AObj.HandleNeeded();
  handleExceptionEnd
end;

// property
function TMenu_Handle(AObj: TMenu): HMenu; extdecl;
begin
  {$define handleExceptionID := 2711}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TMenu_Parent(ASet: LongBool; AObj: TMenu; AValue: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 2712}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Parent := AValue
  end else
    Result := AObj.Parent;
  handleExceptionEnd
end;

// property
function TMenu_ShortcutHandled(ASet: LongBool; AObj: TMenu; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortcutHandled := AValue
  end else
    Result := AObj.ShortcutHandled;
  handleExceptionEnd
end;

// property
function TMenu_AutoLineReduction(ASet: LongBool; AObj: TMenu; AValue: TMenuAutoFlag): TMenuAutoFlag; extdecl;
begin
  {$define handleExceptionID := 2714}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoLineReduction := AValue
  end else
    Result := AObj.AutoLineReduction;
  handleExceptionEnd
end;

// property
function TMenu_BidiMode(ASet: LongBool; AObj: TMenu; AValue: TBidiMode): TBidiMode; extdecl;
begin
  {$define handleExceptionID := 2715}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BidiMode := AValue
  end else
    Result := AObj.BidiMode;
  handleExceptionEnd
end;

// property
function TMenu_ParentBidiMode(ASet: LongBool; AObj: TMenu; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2716}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBidiMode := AValue
  end else
    Result := AObj.ParentBidiMode;
  handleExceptionEnd
end;

// property
function TMenu_Items(AObj: TMenu): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 2717}
  handleExceptionBegin
  Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TMenu_Images(ASet: LongBool; AObj: TMenu; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 2718}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TMenu_ImagesWidth(ASet: LongBool; AObj: TMenu; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2719}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImagesWidth := AValue
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

// property
function TMenu_OwnerDraw(ASet: LongBool; AObj: TMenu; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2720}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OwnerDraw := AValue
  end else
    Result := AObj.OwnerDraw;
  handleExceptionEnd
end;

// event
procedure TMenu_OnDrawItem(AObj: TMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  LCLEventMethodCode
end;

// event
procedure TMenu_OnMeasureItem(AObj: TMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

function TMenu_TClass(): TClass; extdecl;
begin
  Result := TMenu;
end;

exports
  TMenu_Create,
  TMenu_FindItem,
  TMenu_GetHelpContext,
  TMenu_IsShortcut,
  TMenu_HandleAllocated,
  TMenu_IsRightToLeft,
  TMenu_UseRightToLeftAlignment,
  TMenu_UseRightToLeftReading,
  TMenu_DispatchCommand,
  TMenu_DestroyHandle,
  TMenu_HandleNeeded,
  TMenu_Handle,
  TMenu_Parent,
  TMenu_ShortcutHandled,
  TMenu_AutoLineReduction,
  TMenu_BidiMode,
  TMenu_ParentBidiMode,
  TMenu_Items,
  TMenu_Images,
  TMenu_ImagesWidth,
  TMenu_OwnerDraw,
  TMenu_OnDrawItem,
  TMenu_OnMeasureItem,
  TMenu_TClass;