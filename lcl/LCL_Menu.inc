
//constructor
function Menu_Create(AOwner: TComponent): TMenu; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TMenu.Create(AOwner);
  handleExceptionEnd
end;

//property
function Menu_Handle(AObj: TMenu): HMenu; extdecl;
begin
  {$define handleExceptionFuncName :='Handle'}
  handleExceptionBegin
  Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function Menu_Parent(AIsSet: LongBool; AObj: TMenu; AValue: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Parent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Parent := AValue;
  end else
    Result := AObj.Parent;
  handleExceptionEnd
end;

//property
function Menu_ShortcutHandled(AIsSet: LongBool; AObj: TMenu; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShortcutHandled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShortcutHandled := AValue;
  end else
    Result := AObj.ShortcutHandled;
  handleExceptionEnd
end;

//property
function Menu_BidiMode(AIsSet: LongBool; AObj: TMenu; AValue: TBidiMode): TBidiMode; extdecl;
begin
  {$define handleExceptionFuncName :='BidiMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BidiMode := AValue;
  end else
    Result := AObj.BidiMode;
  handleExceptionEnd
end;

//property
function Menu_ParentBidiMode(AIsSet: LongBool; AObj: TMenu; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentBidiMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBidiMode := AValue;
  end else
    Result := AObj.ParentBidiMode;
  handleExceptionEnd
end;

//property
function Menu_Items(AObj: TMenu): TMenuItem; extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  Result := AObj.Items;
  handleExceptionEnd
end;

//property
function Menu_Images(AIsSet: LongBool; AObj: TMenu; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Images'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function Menu_ImagesWidth(AIsSet: LongBool; AObj: TMenu; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImagesWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function Menu_OwnerDraw(AIsSet: LongBool; AObj: TMenu; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OwnerDraw'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OwnerDraw := AValue;
  end else
    Result := AObj.OwnerDraw;
  handleExceptionEnd
end;

//function
function Menu_FindItem(AObj: TMenu; AValue: NativeInt; Kind: TFindItemKind): TMenuItem; extdecl;
begin
  {$define handleExceptionFuncName :='FindItem'}
  handleExceptionBegin
  Result := AObj.FindItem(AValue, Kind);
  handleExceptionEnd
end;

//function
function Menu_GetHelpContext(AObj: TMenu; AValue: NativeInt; ByCommand: LongBool): THelpContext; extdecl;
begin
  {$define handleExceptionFuncName :='GetHelpContext'}
  handleExceptionBegin
  Result := AObj.GetHelpContext(AValue, ByCommand);
  handleExceptionEnd
end;

//function
function Menu_IsShortcut(AObj: TMenu; var Message: TLMKey): LongBool; extdecl;
var
  RetMessage: TLMKey;
begin
  {$define handleExceptionFuncName :='IsShortcut'}
  handleExceptionBegin
  RetMessage := Message;
  Result := AObj.IsShortcut(RetMessage);
  Message := RetMessage;
  handleExceptionEnd
end;

//function
function Menu_HandleAllocated(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HandleAllocated'}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function Menu_IsRightToLeft(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsRightToLeft'}
  handleExceptionBegin
  Result := AObj.IsRightToLeft();
  handleExceptionEnd
end;

//function
function Menu_UseRightToLeftAlignment(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='UseRightToLeftAlignment'}
  handleExceptionBegin
  Result := AObj.UseRightToLeftAlignment();
  handleExceptionEnd
end;

//function
function Menu_UseRightToLeftReading(AObj: TMenu): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='UseRightToLeftReading'}
  handleExceptionBegin
  Result := AObj.UseRightToLeftReading();
  handleExceptionEnd
end;

//function
function Menu_DispatchCommand(AObj: TMenu; ACommand: Word): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DispatchCommand'}
  handleExceptionBegin
  Result := AObj.DispatchCommand(ACommand);
  handleExceptionEnd
end;

//function
function Menu_Class(): TClass; extdecl;
begin
  Result := TMenu;
end;

//procedure
procedure Menu_DestroyHandle(AObj: TMenu); extdecl;
begin
  {$define handleExceptionFuncName :='DestroyHandle'}
  handleExceptionBegin
  AObj.DestroyHandle();
  handleExceptionEnd
end;

//procedure
procedure Menu_HandleNeeded(AObj: TMenu); extdecl;
begin
  {$define handleExceptionFuncName :='HandleNeeded'}
  handleExceptionBegin
  AObj.HandleNeeded();
  handleExceptionEnd
end;

//property event
procedure Menu_SetOnDrawItem(AObj: TMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  EventMethodCode
end;

//property event
procedure Menu_SetOnMeasureItem(AObj: TMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  EventMethodCode
end;


exports
  Menu_Create,
  Menu_Handle,
  Menu_Parent,
  Menu_ShortcutHandled,
  Menu_BidiMode,
  Menu_ParentBidiMode,
  Menu_Items,
  Menu_Images,
  Menu_ImagesWidth,
  Menu_OwnerDraw,
  Menu_FindItem,
  Menu_GetHelpContext,
  Menu_IsShortcut,
  Menu_HandleAllocated,
  Menu_IsRightToLeft,
  Menu_UseRightToLeftAlignment,
  Menu_UseRightToLeftReading,
  Menu_DispatchCommand,
  Menu_Class,
  Menu_DestroyHandle,
  Menu_HandleNeeded,
  Menu_SetOnDrawItem,
  Menu_SetOnMeasureItem;