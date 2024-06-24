
//constructor
function Persistent_Create(): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result := TPersistent.Create();
  handleExceptionEnd
end;

//function
function Persistent_GetNamePath(AObj: TPersistent): PChar; extdecl;
begin
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
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//procedure
procedure Persistent_FPOAttachObserver(AObj: TPersistent; AObserver: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.FPOAttachObserver(AObserver);
  handleExceptionEnd
end;

//procedure
procedure Persistent_FPODetachObserver(AObj: TPersistent; AObserver: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.FPODetachObserver(AObserver);
  handleExceptionEnd
end;

//procedure
procedure Persistent_FPONotifyObservers(AObj: TPersistent; ASender: TObject; AOperation: TFPObservedOperation; Data: Pointer); extdecl;
begin
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