
//constructor
function FileDialog_Create(TheOwner: TComponent): TFileDialog; extdecl;
begin
  handleExceptionBegin
  Result := TFileDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function FileDialog_Files(AObj: TFileDialog): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Files;
  handleExceptionEnd
end;

//property
function FileDialog_HistoryList(AIsSet: LongBool; AObj: TFileDialog; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HistoryList := AValue;
  end else
    Result := AObj.HistoryList;
  handleExceptionEnd
end;

//property
function FileDialog_DefaultExt(AIsSet: LongBool; AObj: TFileDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultExt := AValue;
  end else
    Result := ToPChar(AObj.DefaultExt);
  handleExceptionEnd
end;

//property
function FileDialog_FileName(AIsSet: LongBool; AObj: TFileDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FileName := AValue;
  end else
    Result := ToPChar(AObj.FileName);
  handleExceptionEnd
end;

//property
function FileDialog_Filter(AIsSet: LongBool; AObj: TFileDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Filter := AValue;
  end else
    Result := ToPChar(AObj.Filter);
  handleExceptionEnd
end;

//property
function FileDialog_FilterIndex(AIsSet: LongBool; AObj: TFileDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FilterIndex := AValue;
  end else
    Result := AObj.FilterIndex;
  handleExceptionEnd
end;

//property
function FileDialog_InitialDir(AIsSet: LongBool; AObj: TFileDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.InitialDir := AValue;
  end else
    Result := ToPChar(AObj.InitialDir);
  handleExceptionEnd
end;

//function
function FileDialog_Class(): TClass; extdecl;
begin
  Result := TFileDialog;
end;

//procedure
procedure FileDialog_DoTypeChange(AObj: TFileDialog); extdecl;
begin
  handleExceptionBegin
  AObj.DoTypeChange();
  handleExceptionEnd
end;

//procedure
procedure FileDialog_IntfFileTypeChanged(AObj: TFileDialog; NewFilterIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.IntfFileTypeChanged(NewFilterIndex);
  handleExceptionEnd
end;

//property event
procedure FileDialog_SetOnHelpClicked(AObj: TFileDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHelpClicked}
  EventMethodCode
end;

//property event
procedure FileDialog_SetOnTypeChange(AObj: TFileDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTypeChange}
  EventMethodCode
end;


exports
  FileDialog_Create,
  FileDialog_Files,
  FileDialog_HistoryList,
  FileDialog_DefaultExt,
  FileDialog_FileName,
  FileDialog_Filter,
  FileDialog_FilterIndex,
  FileDialog_InitialDir,
  FileDialog_Class,
  FileDialog_DoTypeChange,
  FileDialog_IntfFileTypeChanged,
  FileDialog_SetOnHelpClicked,
  FileDialog_SetOnTypeChange;