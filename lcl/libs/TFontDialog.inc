// constructor
function TFontDialog_Create(AOwner: TComponent): TFontDialog; extdecl;
begin
  {$define handleExceptionID := 7100}
  handleExceptionBegin
  Result := TFontDialog.Create (AOwner);
  handleExceptionEnd
end;

// procedure
procedure TFontDialog_ApplyClicked(AObj: TFontDialog); extdecl;
begin
  {$define handleExceptionID := 7101}
  handleExceptionBegin
  AObj.ApplyClicked();
  handleExceptionEnd
end;

// property
function TFontDialog_Font(ASet: LongBool; AObj: TFontDialog; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 7102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Font := AValue
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

// property
function TFontDialog_MinFontSize(ASet: LongBool; AObj: TFontDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinFontSize := AValue
  end else
    Result := AObj.MinFontSize;
  handleExceptionEnd
end;

// property
function TFontDialog_MaxFontSize(ASet: LongBool; AObj: TFontDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxFontSize := AValue
  end else
    Result := AObj.MaxFontSize;
  handleExceptionEnd
end;

// property
function TFontDialog_Options(ASet: LongBool; AObj: TFontDialog; AValue: TFontDialogOptions): TFontDialogOptions; extdecl;
begin
  {$define handleExceptionID := 7105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
procedure TFontDialog_PreviewText(ASet: LongBool; AObj: TFontDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreviewText := AValue
  end else
    StringBufferCreate(AObj.PreviewText, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TFontDialog_OnApplyClicked(AObj: TFontDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnApplyClicked}
  LCLEventMethodCode
end;

function TFontDialog_TClass(): TClass; extdecl;
begin
  Result := TFontDialog;
end;

exports
  TFontDialog_Create,
  TFontDialog_ApplyClicked,
  TFontDialog_Font,
  TFontDialog_MinFontSize,
  TFontDialog_MaxFontSize,
  TFontDialog_Options,
  TFontDialog_PreviewText,
  TFontDialog_OnApplyClicked,
  TFontDialog_TClass;