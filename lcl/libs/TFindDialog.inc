// constructor
function TFindDialog_Create(AOwner: TComponent): TFindDialog; extdecl;
begin
  {$define handleExceptionID := 17800}
  handleExceptionBegin
  Result := TFindDialog.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TFindDialog_CloseDialog(AObj: TFindDialog); extdecl;
begin
  {$define handleExceptionID := 17801}
  handleExceptionBegin
  AObj.CloseDialog();
  handleExceptionEnd
end;

// property
function TFindDialog_Left(ASet: LongBool; AObj: TFindDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 17802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Left := AValue
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

// property
procedure TFindDialog_Position(ASet: LongBool; AObj: TFindDialog; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 17803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TFindDialog_Top(ASet: LongBool; AObj: TFindDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 17804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Top := AValue
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

// property
procedure TFindDialog_FindText(ASet: LongBool; AObj: TFindDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FindText := AValue
  end else
    StringBufferCreate(AObj.FindText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFindDialog_Options(ASet: LongBool; AObj: TFindDialog; AValue: TFindOptions): TFindOptions; extdecl;
begin
  {$define handleExceptionID := 17806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// event
procedure TFindDialog_OnFind(AObj: TFindDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnFind}
  LCLEventMethodCode
end;

// event
procedure TFindDialog_OnHelpClicked(AObj: TFindDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHelpClicked}
  LCLEventMethodCode
end;

function TFindDialog_TClass(): TClass; extdecl;
begin
  Result := TFindDialog;
end;

exports
  TFindDialog_Create,
  TFindDialog_CloseDialog,
  TFindDialog_Left,
  TFindDialog_Position,
  TFindDialog_Top,
  TFindDialog_FindText,
  TFindDialog_Options,
  TFindDialog_OnFind,
  TFindDialog_OnHelpClicked,
  TFindDialog_TClass;