// constructor
function TOpenDialog_Create(TheOwner: TComponent): TOpenDialog; extdecl;
begin
  {$define handleExceptionID := 6800}
  handleExceptionBegin
  Result := TOpenDialog.Create(TheOwner);
  handleExceptionEnd
end;

// procedure
procedure TOpenDialog_DoFolderChange(AObj: TOpenDialog); extdecl;
begin
  {$define handleExceptionID := 6801}
  handleExceptionBegin
  AObj.DoFolderChange();
  handleExceptionEnd
end;

// procedure
procedure TOpenDialog_DoSelectionChange(AObj: TOpenDialog); extdecl;
begin
  {$define handleExceptionID := 6802}
  handleExceptionBegin
  AObj.DoSelectionChange();
  handleExceptionEnd
end;

// procedure
procedure TOpenDialog_IntfSetOption(AObj: TOpenDialog; const AOption: TOpenOption; const AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 6803}
  handleExceptionBegin
  AObj.IntfSetOption(AOption, AValue);
  handleExceptionEnd
end;

// property
function TOpenDialog_Options(ASet: LongBool; AObj: TOpenDialog; AValue: TOpenOptions): TOpenOptions; extdecl;
begin
  {$define handleExceptionID := 6804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TOpenDialog_OptionsEx(ASet: LongBool; AObj: TOpenDialog; AValue: TOpenOptionsEx): TOpenOptionsEx; extdecl;
begin
  {$define handleExceptionID := 6805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OptionsEx := AValue
  end else
    Result := AObj.OptionsEx;
  handleExceptionEnd
end;

// event
procedure TOpenDialog_OnFolderChange(AObj: TOpenDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnFolderChange}
  LCLEventMethodCode
end;

// event
procedure TOpenDialog_OnSelectionChange(AObj: TOpenDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelectionChange}
  LCLEventMethodCode
end;

function TOpenDialog_TClass(): TClass; extdecl;
begin
  Result := TOpenDialog;
end;

exports
  TOpenDialog_Create,
  TOpenDialog_DoFolderChange,
  TOpenDialog_DoSelectionChange,
  TOpenDialog_IntfSetOption,
  TOpenDialog_Options,
  TOpenDialog_OptionsEx,
  TOpenDialog_OnFolderChange,
  TOpenDialog_OnSelectionChange,
  TOpenDialog_TClass;