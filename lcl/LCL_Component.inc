
//constructor
function Component_Create(AOwner: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TComponent.Create(AOwner);
  handleExceptionEnd
end;

//property
function Component_Components(AObj: TComponent; Index: Integer): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Components'}
  handleExceptionBegin
  Result := AObj.Components[Index];
  handleExceptionEnd
end;

//property
function Component_ComponentCount(AObj: TComponent): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ComponentCount'}
  handleExceptionBegin
  Result := AObj.ComponentCount;
  handleExceptionEnd
end;

//property
function Component_ComponentIndex(AIsSet: LongBool; AObj: TComponent; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ComponentIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ComponentIndex := AValue;
  end else
    Result := AObj.ComponentIndex;
  handleExceptionEnd
end;

//property
function Component_ComponentState(AObj: TComponent): TComponentState; extdecl;
begin
  {$define handleExceptionFuncName :='ComponentState'}
  handleExceptionBegin
  Result := AObj.ComponentState;
  handleExceptionEnd
end;

//property
function Component_ComponentStyle(AObj: TComponent): TComponentStyle; extdecl;
begin
  {$define handleExceptionFuncName :='ComponentStyle'}
  handleExceptionBegin
  Result := AObj.ComponentStyle;
  handleExceptionEnd
end;

//property
function Component_DesignInfo(AIsSet: LongBool; AObj: TComponent; AValue: LongInt): LongInt; extdecl;
begin
  {$define handleExceptionFuncName :='DesignInfo'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DesignInfo := AValue;
  end else
    Result := AObj.DesignInfo;
  handleExceptionEnd
end;

//property
function Component_Owner(AObj: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function Component_VCLComObject(AIsSet: LongBool; AObj: TComponent; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='VCLComObject'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VCLComObject := AValue;
  end else
    Result := AObj.VCLComObject;
  handleExceptionEnd
end;

//property
function Component_Name(AIsSet: LongBool; AObj: TComponent; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Name'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Name := AValue;
  end else
    Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function Component_Tag(AIsSet: LongBool; AObj: TComponent; AValue: NativeInt): NativeInt; extdecl;
begin
  {$define handleExceptionFuncName :='Tag'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Tag := AValue;
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

//function
function Component_ExecuteAction(AObj: TComponent; Action: TBasicAction): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteAction'}
  handleExceptionBegin
  Result := AObj.ExecuteAction(Action);
  handleExceptionEnd
end;

//function
function Component_FindComponent(AObj: TComponent; const AName: PChar): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='FindComponent'}
  handleExceptionBegin
  Result := AObj.FindComponent(AName);
  handleExceptionEnd
end;

//function
function Component_GetEnumerator(AObj: TComponent): TComponentEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function Component_GetParentComponent(AObj: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='GetParentComponent'}
  handleExceptionBegin
  Result := AObj.GetParentComponent();
  handleExceptionEnd
end;

//function
function Component_HasParent(AObj: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasParent'}
  handleExceptionBegin
  Result := AObj.HasParent();
  handleExceptionEnd
end;

//function
function Component_UpdateAction(AObj: TComponent; Action: TBasicAction): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='UpdateAction'}
  handleExceptionBegin
  Result := AObj.UpdateAction(Action);
  handleExceptionEnd
end;

//function
function Component_Class(): TClass; extdecl;
begin
  Result := TComponent;
end;

//procedure
procedure Component_DestroyComponents(AObj: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='DestroyComponents'}
  handleExceptionBegin
  AObj.DestroyComponents();
  handleExceptionEnd
end;

//procedure
procedure Component_Destroying(AObj: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Destroying'}
  handleExceptionBegin
  AObj.Destroying();
  handleExceptionEnd
end;

//procedure
procedure Component_FreeNotification(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='FreeNotification'}
  handleExceptionBegin
  AObj.FreeNotification(AComponent);
  handleExceptionEnd
end;

//procedure
procedure Component_RemoveFreeNotification(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveFreeNotification'}
  handleExceptionBegin
  AObj.RemoveFreeNotification(AComponent);
  handleExceptionEnd
end;

//procedure
procedure Component_FreeOnRelease(AObj: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='FreeOnRelease'}
  handleExceptionBegin
  AObj.FreeOnRelease();
  handleExceptionEnd
end;

//procedure
procedure Component_InsertComponent(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='InsertComponent'}
  handleExceptionBegin
  AObj.InsertComponent(AComponent);
  handleExceptionEnd
end;

//procedure
procedure Component_RemoveComponent(AObj: TComponent; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveComponent'}
  handleExceptionBegin
  AObj.RemoveComponent(AComponent);
  handleExceptionEnd
end;

//procedure
procedure Component_SetSubComponent(AObj: TComponent; ASubComponent: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetSubComponent'}
  handleExceptionBegin
  AObj.SetSubComponent(ASubComponent);
  handleExceptionEnd
end;


exports
  Component_Create,
  Component_Components,
  Component_ComponentCount,
  Component_ComponentIndex,
  Component_ComponentState,
  Component_ComponentStyle,
  Component_DesignInfo,
  Component_Owner,
  Component_VCLComObject,
  Component_Name,
  Component_Tag,
  Component_ExecuteAction,
  Component_FindComponent,
  Component_GetEnumerator,
  Component_GetParentComponent,
  Component_HasParent,
  Component_UpdateAction,
  Component_Class,
  Component_DestroyComponents,
  Component_Destroying,
  Component_FreeNotification,
  Component_RemoveFreeNotification,
  Component_FreeOnRelease,
  Component_InsertComponent,
  Component_RemoveComponent,
  Component_SetSubComponent;