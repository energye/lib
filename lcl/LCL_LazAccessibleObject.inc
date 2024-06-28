
//constructor
function LazAccessibleObject_Create(AOwner: TControl): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLazAccessibleObject.Create(AOwner);
  handleExceptionEnd
end;

//property
function LazAccessibleObject_AccessibleName(AIsSet: LongBool; AObj: TLazAccessibleObject; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AccessibleName'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleName := AValue;
  end else
    Result := ToPChar(AObj.AccessibleName);
  handleExceptionEnd
end;

//property
function LazAccessibleObject_AccessibleDescription(AIsSet: LongBool; AObj: TLazAccessibleObject; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AccessibleDescription'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleDescription := AValue;
  end else
    Result := ToPChar(AObj.AccessibleDescription);
  handleExceptionEnd
end;

//property
function LazAccessibleObject_AccessibleValue(AIsSet: LongBool; AObj: TLazAccessibleObject; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AccessibleValue'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleValue := AValue;
  end else
    Result := ToPChar(AObj.AccessibleValue);
  handleExceptionEnd
end;

//property
function LazAccessibleObject_AccessibleRole(AIsSet: LongBool; AObj: TLazAccessibleObject; AValue: TLazAccessibilityRole): TLazAccessibilityRole; extdecl;
begin
  {$define handleExceptionFuncName :='AccessibleRole'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleRole := AValue;
  end else
    Result := AObj.AccessibleRole;
  handleExceptionEnd
end;

//property
procedure LazAccessibleObject_Position(AIsSet: LongBool; AObj: TLazAccessibleObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='Position'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
procedure LazAccessibleObject_Size(AIsSet: LongBool; AObj: TLazAccessibleObject; var AValue: TSize; var Result: TSize); extdecl;
begin
  {$define handleExceptionFuncName :='Size'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Size := AValue;
  end else
    Result := AObj.Size;
  handleExceptionEnd
end;

//property
function LazAccessibleObject_Handle(AIsSet: LongBool; AObj: TLazAccessibleObject; AValue: NativeInt): NativeInt; extdecl;
begin
  {$define handleExceptionFuncName :='Handle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//function
function LazAccessibleObject_HandleAllocated(AObj: TLazAccessibleObject): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HandleAllocated'}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function LazAccessibleObject_FindOwnerWinControl(AObj: TLazAccessibleObject): TWinControl; extdecl;
begin
  {$define handleExceptionFuncName :='FindOwnerWinControl'}
  handleExceptionBegin
  Result := AObj.FindOwnerWinControl();
  handleExceptionEnd
end;

//function
function LazAccessibleObject_AddChildAccessibleObject(AObj: TLazAccessibleObject; ADataObject: TObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='AddChildAccessibleObject'}
  handleExceptionBegin
  Result := AObj.AddChildAccessibleObject(ADataObject);
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetChildAccessibleObjectWithDataObject(AObj: TLazAccessibleObject; ADataObject: TObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='GetChildAccessibleObjectWithDataObject'}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectWithDataObject(ADataObject);
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetChildAccessibleObjectsCount(AObj: TLazAccessibleObject): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetChildAccessibleObjectsCount'}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectsCount();
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetChildAccessibleObject(AObj: TLazAccessibleObject; AIndex: Integer): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='GetChildAccessibleObject'}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObject(AIndex);
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetFirstChildAccessibleObject(AObj: TLazAccessibleObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstChildAccessibleObject'}
  handleExceptionBegin
  Result := AObj.GetFirstChildAccessibleObject();
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetNextChildAccessibleObject(AObj: TLazAccessibleObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextChildAccessibleObject'}
  handleExceptionBegin
  Result := AObj.GetNextChildAccessibleObject();
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetSelectedChildAccessibleObject(AObj: TLazAccessibleObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='GetSelectedChildAccessibleObject'}
  handleExceptionBegin
  Result := AObj.GetSelectedChildAccessibleObject();
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetChildAccessibleObjectAtPos(AObj: TLazAccessibleObject; var APos: TPoint): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionFuncName :='GetChildAccessibleObjectAtPos'}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectAtPos(APos);
  handleExceptionEnd
end;

//function
function LazAccessibleObject_GetEnumerator(AObj: TLazAccessibleObject): TLazAccessibleObjectEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function LazAccessibleObject_Class(): TClass; extdecl;
begin
  Result := TLazAccessibleObject;
end;

//procedure
procedure LazAccessibleObject_InitializeHandle(AObj: TLazAccessibleObject); extdecl;
begin
  {$define handleExceptionFuncName :='InitializeHandle'}
  handleExceptionBegin
  AObj.InitializeHandle();
  handleExceptionEnd
end;

//procedure
procedure LazAccessibleObject_SetAccessibleName1(AObj: TLazAccessibleObject; const AName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibleName1'}
  handleExceptionBegin
  AObj.SetAccessibleName(AName);
  handleExceptionEnd
end;

//procedure
procedure LazAccessibleObject_SetAccessibleDescription1(AObj: TLazAccessibleObject; const ADescription: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibleDescription1'}
  handleExceptionBegin
  AObj.SetAccessibleDescription(ADescription);
  handleExceptionEnd
end;

//procedure
procedure LazAccessibleObject_SetAccessibleValue1(AObj: TLazAccessibleObject; const AValue: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibleValue1'}
  handleExceptionBegin
  AObj.SetAccessibleValue(AValue);
  handleExceptionEnd
end;

//procedure
procedure LazAccessibleObject_SetAccessibleRole1(AObj: TLazAccessibleObject; const ARole: TLazAccessibilityRole); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibleRole1'}
  handleExceptionBegin
  AObj.SetAccessibleRole(ARole);
  handleExceptionEnd
end;

//procedure
procedure LazAccessibleObject_InsertChildAccessibleObject(AObj: TLazAccessibleObject; AObject: TLazAccessibleObject); extdecl;
begin
  {$define handleExceptionFuncName :='InsertChildAccessibleObject'}
  handleExceptionBegin
  AObj.InsertChildAccessibleObject(AObject);
  handleExceptionEnd
end;

//procedure
procedure LazAccessibleObject_ClearChildAccessibleObjects(AObj: TLazAccessibleObject); extdecl;
begin
  {$define handleExceptionFuncName :='ClearChildAccessibleObjects'}
  handleExceptionBegin
  AObj.ClearChildAccessibleObjects();
  handleExceptionEnd
end;

//procedure
procedure LazAccessibleObject_RemoveChildAccessibleObject(AObj: TLazAccessibleObject; AObject: TLazAccessibleObject; AFreeObject: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveChildAccessibleObject'}
  handleExceptionBegin
  AObj.RemoveChildAccessibleObject(AObject, AFreeObject);
  handleExceptionEnd
end;


exports
  LazAccessibleObject_Create,
  LazAccessibleObject_AccessibleName,
  LazAccessibleObject_AccessibleDescription,
  LazAccessibleObject_AccessibleValue,
  LazAccessibleObject_AccessibleRole,
  LazAccessibleObject_Position,
  LazAccessibleObject_Size,
  LazAccessibleObject_Handle,
  LazAccessibleObject_HandleAllocated,
  LazAccessibleObject_FindOwnerWinControl,
  LazAccessibleObject_AddChildAccessibleObject,
  LazAccessibleObject_GetChildAccessibleObjectWithDataObject,
  LazAccessibleObject_GetChildAccessibleObjectsCount,
  LazAccessibleObject_GetChildAccessibleObject,
  LazAccessibleObject_GetFirstChildAccessibleObject,
  LazAccessibleObject_GetNextChildAccessibleObject,
  LazAccessibleObject_GetSelectedChildAccessibleObject,
  LazAccessibleObject_GetChildAccessibleObjectAtPos,
  LazAccessibleObject_GetEnumerator,
  LazAccessibleObject_Class,
  LazAccessibleObject_InitializeHandle,
  LazAccessibleObject_SetAccessibleName1,
  LazAccessibleObject_SetAccessibleDescription1,
  LazAccessibleObject_SetAccessibleValue1,
  LazAccessibleObject_SetAccessibleRole1,
  LazAccessibleObject_InsertChildAccessibleObject,
  LazAccessibleObject_ClearChildAccessibleObjects,
  LazAccessibleObject_RemoveChildAccessibleObject;