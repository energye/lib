// constructor
function TFileDialog_Create(TheOwner: TComponent): TFileDialog; extdecl;
begin
  {$define handleExceptionID := 6700}
  handleExceptionBegin
  Result := TFileDialog.Create(TheOwner);
  handleExceptionEnd
end;

// function static
function TFileDialog_FindMaskInFilter(aFilter: PChar; aMask: PChar): Integer; extdecl;
begin
  Result := TFileDialog.FindMaskInFilter(aFilter, aMask);
end;

// function static
function TFileDialog_ExtractAllFilterMasks(aFilter: PChar; SkipAllFilesMask: LongBool): PChar; extdecl;
begin
  Result := ToPChar(TFileDialog.ExtractAllFilterMasks(aFilter, SkipAllFilesMask));
end;

// procedure
procedure TFileDialog_DoTypeChange(AObj: TFileDialog); extdecl;
begin
  {$define handleExceptionID := 6701}
  handleExceptionBegin
  AObj.DoTypeChange();
  handleExceptionEnd
end;

// procedure
procedure TFileDialog_IntfFileTypeChanged(AObj: TFileDialog; NewFilterIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 6702}
  handleExceptionBegin
  AObj.IntfFileTypeChanged(NewFilterIndex);
  handleExceptionEnd
end;

// property
function TFileDialog_Files(AObj: TFileDialog): TStrings; extdecl;
begin
  {$define handleExceptionID := 6703}
  handleExceptionBegin
  Result := AObj.Files;
  handleExceptionEnd
end;

// property
function TFileDialog_HistoryList(ASet: LongBool; AObj: TFileDialog; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 6704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HistoryList := AValue
  end else
    Result := AObj.HistoryList;
  handleExceptionEnd
end;

// property
procedure TFileDialog_DefaultExt(ASet: LongBool; AObj: TFileDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultExt := AValue
  end else
    StringBufferCreate(AObj.DefaultExt, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TFileDialog_FileName(ASet: LongBool; AObj: TFileDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FileName := AValue
  end else
    StringBufferCreate(AObj.FileName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TFileDialog_Filter(ASet: LongBool; AObj: TFileDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Filter := AValue
  end else
    StringBufferCreate(AObj.Filter, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFileDialog_FilterIndex(ASet: LongBool; AObj: TFileDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FilterIndex := AValue
  end else
    Result := AObj.FilterIndex;
  handleExceptionEnd
end;

// property
procedure TFileDialog_InitialDir(ASet: LongBool; AObj: TFileDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InitialDir := AValue
  end else
    StringBufferCreate(AObj.InitialDir, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TFileDialog_OnHelpClicked(AObj: TFileDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHelpClicked}
  LCLEventMethodCode
end;

// event
procedure TFileDialog_OnTypeChange(AObj: TFileDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTypeChange}
  LCLEventMethodCode
end;

function TFileDialog_TClass(): TClass; extdecl;
begin
  Result := TFileDialog;
end;

exports
  TFileDialog_Create,
  TFileDialog_FindMaskInFilter,
  TFileDialog_ExtractAllFilterMasks,
  TFileDialog_DoTypeChange,
  TFileDialog_IntfFileTypeChanged,
  TFileDialog_Files,
  TFileDialog_HistoryList,
  TFileDialog_DefaultExt,
  TFileDialog_FileName,
  TFileDialog_Filter,
  TFileDialog_FilterIndex,
  TFileDialog_InitialDir,
  TFileDialog_OnHelpClicked,
  TFileDialog_OnTypeChange,
  TFileDialog_TClass;