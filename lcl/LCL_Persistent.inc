
//constructor
function Persistent_Create(): TPersistent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPersistent.Create();
  handleExceptionEnd
end;

//function
function Persistent_GetNamePath(AObj: TPersistent): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetNamePath'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetNamePath());
  handleExceptionEnd
end;

//function
function Persistent_Class(): TClass; extdecl;
begin
  Result := TPersistent;
end;

//procedure
procedure Persistent_Assign(AObj: TPersistent; Source: TPersistent); extdecl;
begin
  {$define handleExceptionFuncName :='Assign'}
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//procedure
procedure Persistent_FPOAttachObserver(AObj: TPersistent; AObserver: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='FPOAttachObserver'}
  handleExceptionBegin
  AObj.FPOAttachObserver(AObserver);
  handleExceptionEnd
end;

//procedure
procedure Persistent_FPODetachObserver(AObj: TPersistent; AObserver: TObject); extdecl;
begin
  {$define handleExceptionFuncName :='FPODetachObserver'}
  handleExceptionBegin
  AObj.FPODetachObserver(AObserver);
  handleExceptionEnd
end;

//procedure
procedure Persistent_FPONotifyObservers(AObj: TPersistent; ASender: TObject; AOperation: TFPObservedOperation; Data: Pointer); extdecl;
begin
  {$define handleExceptionFuncName :='FPONotifyObservers'}
  handleExceptionBegin
  AObj.FPONotifyObservers(ASender, AOperation, Data);
  handleExceptionEnd
end;


exports
  Persistent_Create,
  Persistent_GetNamePath,
  Persistent_Class,
  Persistent_Assign,
  Persistent_FPOAttachObserver,
  Persistent_FPODetachObserver,
  Persistent_FPONotifyObservers;