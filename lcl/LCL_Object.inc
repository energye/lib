
//constructor
function Object_Create(): TObject; extdecl;
begin
  handleExceptionBegin
  Result := TObject.Create();
  handleExceptionEnd
end;

//function
function Object_Equals(AObj: TObject; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Equals(Obj);
  handleExceptionEnd
end;

//function
function Object_GetHashCode(AObj: TObject): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHashCode();
  handleExceptionEnd
end;

//function
function Object_Class(): TClass; extdecl;
begin
  Result := TObject;
end;

//function
function Object_ToString(AObj: TObject): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ToString());
  handleExceptionEnd
end;

//function
function Object_InheritsFrom(AObj: TObject; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//function
function Object_ClassType(AObj: TObject): TClass; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClassType();
  handleExceptionEnd
end;

//function
function Object_ClassName(AObj: TObject): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ClassName());
  handleExceptionEnd
end;

//function
function Object_ClassParent(AObj: TObject): TClass; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClassParent();
  handleExceptionEnd
end;

//function
procedure Object_InstanceSize(AObj: TObject; var Result: int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.InstanceSize();
  handleExceptionEnd
end;

//procedure
procedure Object_Free(AObj: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.Free();
  handleExceptionEnd
end;


exports
  Object_Create,
  Object_Equals,
  Object_GetHashCode,
  Object_Class,
  Object_ToString,
  Object_InheritsFrom,
  Object_ClassType,
  Object_ClassName,
  Object_ClassParent,
  Object_InstanceSize,
  Object_Free;