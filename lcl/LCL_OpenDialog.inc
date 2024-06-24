
//constructor
function OpenDialog_Create(TheOwner: TComponent): TOpenDialog; extdecl;
begin
  handleExceptionBegin
  Result := TOpenDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function OpenDialog_Options(AIsSet: LongBool; AObj: TOpenDialog; AValue: TOpenOptions): TOpenOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//function
function OpenDialog_Class(): TClass; extdecl;
begin
  Result := TOpenDialog;
end;

//procedure
procedure OpenDialog_DoFolderChange(AObj: TOpenDialog); extdecl;
begin
  handleExceptionBegin
  AObj.DoFolderChange();
  handleExceptionEnd
end;

//procedure
procedure OpenDialog_DoSelectionChange(AObj: TOpenDialog); extdecl;
begin
  handleExceptionBegin
  AObj.DoSelectionChange();
  handleExceptionEnd
end;

//procedure
procedure OpenDialog_IntfSetOption(AObj: TOpenDialog; const AOption: TOpenOption; const AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.IntfSetOption(AOption, AValue);
  handleExceptionEnd
end;

//property event
procedure OpenDialog_SetOnFolderChange(AObj: TOpenDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnFolderChange}
  EventMethodCode
end;

//property event
procedure OpenDialog_SetOnSelectionChange(AObj: TOpenDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelectionChange}
  EventMethodCode
end;


exports
  OpenDialog_Create,
  OpenDialog_Options,
  OpenDialog_Class,
  OpenDialog_DoFolderChange,
  OpenDialog_DoSelectionChange,
  OpenDialog_IntfSetOption,
  OpenDialog_SetOnFolderChange,
  OpenDialog_SetOnSelectionChange;