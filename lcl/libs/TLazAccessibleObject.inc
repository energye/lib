// constructor
function TLazAccessibleObject_Create(AOwner: TControl): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28200}
  handleExceptionBegin
  Result := TLazAccessibleObject.Create(AOwner);
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_HandleAllocated(AObj: TLazAccessibleObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 28201}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_FindOwnerWinControl(AObj: TLazAccessibleObject): TWinControl; extdecl;
begin
  {$define handleExceptionID := 28202}
  handleExceptionBegin
  Result := AObj.FindOwnerWinControl();
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_AddChildAccessibleObject(AObj: TLazAccessibleObject; ADataObject: TObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28203}
  handleExceptionBegin
  Result := AObj.AddChildAccessibleObject(ADataObject);
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetChildAccessibleObjectWithDataObject(AObj: TLazAccessibleObject; ADataObject: TObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28204}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectWithDataObject(ADataObject);
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetChildAccessibleObjectsCount(AObj: TLazAccessibleObject): Integer; extdecl;
begin
  {$define handleExceptionID := 28205}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectsCount();
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetChildAccessibleObject(AObj: TLazAccessibleObject; AIndex: Integer): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28206}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObject(AIndex);
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetFirstChildAccessibleObject(AObj: TLazAccessibleObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28207}
  handleExceptionBegin
  Result := AObj.GetFirstChildAccessibleObject();
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetNextChildAccessibleObject(AObj: TLazAccessibleObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28208}
  handleExceptionBegin
  Result := AObj.GetNextChildAccessibleObject();
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetSelectedChildAccessibleObject(AObj: TLazAccessibleObject): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28209}
  handleExceptionBegin
  Result := AObj.GetSelectedChildAccessibleObject();
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetChildAccessibleObjectAtPos(AObj: TLazAccessibleObject; var APos: TPoint): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 28210}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectAtPos(APos);
  handleExceptionEnd
end;

// function
function TLazAccessibleObject_GetEnumerator(AObj: TLazAccessibleObject): TLazAccessibleObjectEnumerator; extdecl;
begin
  {$define handleExceptionID := 28211}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_InitializeHandle(AObj: TLazAccessibleObject); extdecl;
begin
  {$define handleExceptionID := 28212}
  handleExceptionBegin
  AObj.InitializeHandle();
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_SetAccessibleNameWithStr(AObj: TLazAccessibleObject; const AName: PChar); extdecl;
begin
  {$define handleExceptionID := 28213}
  handleExceptionBegin
  AObj.SetAccessibleName(AName);
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_SetAccessibleDescriptionWithStr(AObj: TLazAccessibleObject; const ADescription: PChar); extdecl;
begin
  {$define handleExceptionID := 28214}
  handleExceptionBegin
  AObj.SetAccessibleDescription(ADescription);
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_SetAccessibleValueWithStr(AObj: TLazAccessibleObject; const AValue: PChar); extdecl;
begin
  {$define handleExceptionID := 28215}
  handleExceptionBegin
  AObj.SetAccessibleValue(AValue);
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_SetAccessibleRoleWithLazAccessibilityRole(AObj: TLazAccessibleObject; const ARole: TLazAccessibilityRole); extdecl;
begin
  {$define handleExceptionID := 28216}
  handleExceptionBegin
  AObj.SetAccessibleRole(ARole);
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_InsertChildAccessibleObject(AObj: TLazAccessibleObject; AObject: TLazAccessibleObject); extdecl;
begin
  {$define handleExceptionID := 28217}
  handleExceptionBegin
  AObj.InsertChildAccessibleObject(AObject);
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_ClearChildAccessibleObjects(AObj: TLazAccessibleObject); extdecl;
begin
  {$define handleExceptionID := 28218}
  handleExceptionBegin
  AObj.ClearChildAccessibleObjects();
  handleExceptionEnd
end;

// procedure
procedure TLazAccessibleObject_RemoveChildAccessibleObject(AObj: TLazAccessibleObject; AObject: TLazAccessibleObject; AFreeObject: LongBool); extdecl;
begin
  {$define handleExceptionID := 28219}
  handleExceptionBegin
  AObj.RemoveChildAccessibleObject(AObject, AFreeObject);
  handleExceptionEnd
end;

// property
procedure TLazAccessibleObject_AccessibleName(ASet: LongBool; AObj: TLazAccessibleObject; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 28220}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleName := AValue
  end else
    StringBufferCreate(AObj.AccessibleName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TLazAccessibleObject_AccessibleDescription(ASet: LongBool; AObj: TLazAccessibleObject; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 28221}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleDescription := AValue
  end else
    StringBufferCreate(AObj.AccessibleDescription, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TLazAccessibleObject_AccessibleValue(ASet: LongBool; AObj: TLazAccessibleObject; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 28222}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleValue := AValue
  end else
    StringBufferCreate(AObj.AccessibleValue, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TLazAccessibleObject_AccessibleRole(ASet: LongBool; AObj: TLazAccessibleObject; AValue: TLazAccessibilityRole): TLazAccessibilityRole; extdecl;
begin
  {$define handleExceptionID := 28223}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleRole := AValue
  end else
    Result := AObj.AccessibleRole;
  handleExceptionEnd
end;

// property
procedure TLazAccessibleObject_Position(ASet: LongBool; AObj: TLazAccessibleObject; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 28224}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
procedure TLazAccessibleObject_Size(ASet: LongBool; AObj: TLazAccessibleObject; var AValue: TSize; var Result: TSize); extdecl;
begin
  {$define handleExceptionID := 28225}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Size := AValue
  end else
    Result := AObj.Size;
  handleExceptionEnd
end;

// property
function TLazAccessibleObject_Handle(ASet: LongBool; AObj: TLazAccessibleObject; AValue: PtrInt): PtrInt; extdecl;
begin
  {$define handleExceptionID := 28226}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

exports
  TLazAccessibleObject_Create,
  TLazAccessibleObject_HandleAllocated,
  TLazAccessibleObject_FindOwnerWinControl,
  TLazAccessibleObject_AddChildAccessibleObject,
  TLazAccessibleObject_GetChildAccessibleObjectWithDataObject,
  TLazAccessibleObject_GetChildAccessibleObjectsCount,
  TLazAccessibleObject_GetChildAccessibleObject,
  TLazAccessibleObject_GetFirstChildAccessibleObject,
  TLazAccessibleObject_GetNextChildAccessibleObject,
  TLazAccessibleObject_GetSelectedChildAccessibleObject,
  TLazAccessibleObject_GetChildAccessibleObjectAtPos,
  TLazAccessibleObject_GetEnumerator,
  TLazAccessibleObject_InitializeHandle,
  TLazAccessibleObject_SetAccessibleNameWithStr,
  TLazAccessibleObject_SetAccessibleDescriptionWithStr,
  TLazAccessibleObject_SetAccessibleValueWithStr,
  TLazAccessibleObject_SetAccessibleRoleWithLazAccessibilityRole,
  TLazAccessibleObject_InsertChildAccessibleObject,
  TLazAccessibleObject_ClearChildAccessibleObjects,
  TLazAccessibleObject_RemoveChildAccessibleObject,
  TLazAccessibleObject_AccessibleName,
  TLazAccessibleObject_AccessibleDescription,
  TLazAccessibleObject_AccessibleValue,
  TLazAccessibleObject_AccessibleRole,
  TLazAccessibleObject_Position,
  TLazAccessibleObject_Size,
  TLazAccessibleObject_Handle;