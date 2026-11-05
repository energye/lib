// constructor
function TSynPluginCustomSyncroEdit_Create(AOwner: TComponent): TSynPluginCustomSyncroEdit; extdecl;
begin
  {$define handleExceptionID := 42700}
  handleExceptionBegin
  Result := TSynPluginCustomSyncroEdit.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TSynPluginCustomSyncroEdit_IncExternalEditLock(AObj: TSynPluginCustomSyncroEdit); extdecl;
begin
  {$define handleExceptionID := 42701}
  handleExceptionBegin
  AObj.IncExternalEditLock();
  handleExceptionEnd
end;

// procedure
procedure TSynPluginCustomSyncroEdit_DecExternalEditLock(AObj: TSynPluginCustomSyncroEdit); extdecl;
begin
  {$define handleExceptionID := 42702}
  handleExceptionBegin
  AObj.DecExternalEditLock();
  handleExceptionEnd
end;

function TSynPluginCustomSyncroEdit_TClass(): TClass; extdecl;
begin
  Result := TSynPluginCustomSyncroEdit;
end;

exports
  TSynPluginCustomSyncroEdit_Create,
  TSynPluginCustomSyncroEdit_IncExternalEditLock,
  TSynPluginCustomSyncroEdit_DecExternalEditLock,
  TSynPluginCustomSyncroEdit_TClass;