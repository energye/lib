// constructor
function TComponent_Create(AOwner: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 300}
  handleExceptionBegin
  Result := TComponent.Create(AOwner);
  handleExceptionEnd
end;

// function
function TComponent_ExecuteAction(AObj: TComponent; Action: TBasicAction): LongBool; extdecl;
begin
  {$define handleExceptionID := 301}
  handleExceptionBegin
  Result := AObj.ExecuteAction(Action);
  handleExceptionEnd
end;

// function
function TComponent_FindComponent(AObj: TComponent; const AName: PChar): TComponent; extdecl;
begin
  {$define handleExceptionID := 302}
  handleExceptionBegin
  Result := AObj.FindComponent(AName);
  handleExceptionEnd
end;

// function
function TComponent_GetEnumerator(AObj: TComponent): TComponentEnumerator; extdecl;
begin
  {$define handleExceptionID := 303}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TComponent_GetParentComponent(AObj: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 304}
  handleExceptionBegin
  Result := AObj.GetParentComponent();
  handleExceptionEnd
end;

// function
function TComponent_HasParent(AObj: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 305}
  handleExceptionBegin
  Result := AObj.HasParent();
  handleExceptionEnd
end;

// function
function TComponent_UpdateAction(AObj: TComponent; Action: TBasicAction): LongBool; extdecl;
begin
  {$define handleExceptionID := 306}
  handleExceptionBegin
  Result := AObj.UpdateAction(Action);
  handleExceptionEnd
end;

// procedure
procedure TComponent_DestroyComponents(AObj: TComponent); extdecl;
begin
  {$define handleExceptionID := 307}
  handleExceptionBegin
  AObj.DestroyComponents();
  handleExceptionEnd
end;

// procedure
procedure TComponent_Destroying(AObj: TComponent); extdecl;
begin
  {$define handleExceptionID := 308}
  handleExceptionBegin
  AObj.Destroying();
  handleExceptionEnd
end;

// procedure
procedure TComponent_FreeNotification(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionID := 309}
  handleExceptionBegin
  AObj.FreeNotification(AComponent);
  handleExceptionEnd
end;

// procedure
procedure TComponent_RemoveFreeNotification(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionID := 310}
  handleExceptionBegin
  AObj.RemoveFreeNotification(AComponent);
  handleExceptionEnd
end;

// procedure
procedure TComponent_FreeOnRelease(AObj: TComponent); extdecl;
begin
  {$define handleExceptionID := 311}
  handleExceptionBegin
  AObj.FreeOnRelease();
  handleExceptionEnd
end;

// procedure
procedure TComponent_InsertComponent(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionID := 312}
  handleExceptionBegin
  AObj.InsertComponent(AComponent);
  handleExceptionEnd
end;

// procedure
procedure TComponent_RemoveComponent(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionID := 313}
  handleExceptionBegin
  AObj.RemoveComponent(AComponent);
  handleExceptionEnd
end;

// procedure
procedure TComponent_SetSubComponent(AObj: TComponent; ASubComponent: LongBool); extdecl;
begin
  {$define handleExceptionID := 314}
  handleExceptionBegin
  AObj.SetSubComponent(ASubComponent);
  handleExceptionEnd
end;

// property
procedure TComponent_ComObject(AObj: TComponent; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionID := 315}
  handleExceptionBegin
  Result := AObj.ComObject;
  handleExceptionEnd
end;

// property
function TComponent_Components(AObj: TComponent; Index: Integer): TComponent; extdecl;
begin
  {$define handleExceptionID := 316}
  handleExceptionBegin
  Result := AObj.Components[Index];
  handleExceptionEnd
end;

// property
function TComponent_ComponentCount(AObj: TComponent): Integer; extdecl;
begin
  {$define handleExceptionID := 317}
  handleExceptionBegin
  Result := AObj.ComponentCount;
  handleExceptionEnd
end;

// property
function TComponent_ComponentIndex(ASet: LongBool; AObj: TComponent; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 318}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ComponentIndex := AValue
  end else
    Result := AObj.ComponentIndex;
  handleExceptionEnd
end;

// property
function TComponent_ComponentState(AObj: TComponent): TComponentState; extdecl;
begin
  {$define handleExceptionID := 319}
  handleExceptionBegin
  Result := AObj.ComponentState;
  handleExceptionEnd
end;

// property
function TComponent_ComponentStyle(AObj: TComponent): TComponentStyle; extdecl;
begin
  {$define handleExceptionID := 320}
  handleExceptionBegin
  Result := AObj.ComponentStyle;
  handleExceptionEnd
end;

// property
function TComponent_DesignInfo(ASet: LongBool; AObj: TComponent; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 321}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DesignInfo := AValue
  end else
    Result := AObj.DesignInfo;
  handleExceptionEnd
end;

// property
function TComponent_Owner(AObj: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 322}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
function TComponent_VCLComObject(ASet: LongBool; AObj: TComponent; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 323}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VCLComObject := AValue
  end else
    Result := AObj.VCLComObject;
  handleExceptionEnd
end;

// property
procedure TComponent_Name(ASet: LongBool; AObj: TComponent; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 324}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Name := AValue
  end else
    StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TComponent_Tag(ASet: LongBool; AObj: TComponent; AValue: PtrInt): PtrInt; extdecl;
begin
  {$define handleExceptionID := 325}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Tag := AValue
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

exports
  TComponent_Create,
  TComponent_ExecuteAction,
  TComponent_FindComponent,
  TComponent_GetEnumerator,
  TComponent_GetParentComponent,
  TComponent_HasParent,
  TComponent_UpdateAction,
  TComponent_DestroyComponents,
  TComponent_Destroying,
  TComponent_FreeNotification,
  TComponent_RemoveFreeNotification,
  TComponent_FreeOnRelease,
  TComponent_InsertComponent,
  TComponent_RemoveComponent,
  TComponent_SetSubComponent,
  TComponent_ComObject,
  TComponent_Components,
  TComponent_ComponentCount,
  TComponent_ComponentIndex,
  TComponent_ComponentState,
  TComponent_ComponentStyle,
  TComponent_DesignInfo,
  TComponent_Owner,
  TComponent_VCLComObject,
  TComponent_Name,
  TComponent_Tag;