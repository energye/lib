// constructor
function TCustomVirtualTreeOptions_Create(AOwner: TBaseVirtualTree): TCustomVirtualTreeOptions; extdecl;
begin
  {$define handleExceptionID := 29700}
  handleExceptionBegin
  Result := TCustomVirtualTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomVirtualTreeOptions_AssignTo(AObj: TCustomVirtualTreeOptions; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionID := 29701}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

// property
function TCustomVirtualTreeOptions_Owner(AObj: TCustomVirtualTreeOptions): TBaseVirtualTree; extdecl;
begin
  {$define handleExceptionID := 29702}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

exports
  TCustomVirtualTreeOptions_Create,
  TCustomVirtualTreeOptions_AssignTo,
  TCustomVirtualTreeOptions_Owner;