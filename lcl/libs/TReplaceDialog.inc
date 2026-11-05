// constructor
function TReplaceDialog_Create(AOwner: TComponent): TReplaceDialog; extdecl;
begin
  {$define handleExceptionID := 17900}
  handleExceptionBegin
  Result := TReplaceDialog.Create(AOwner);
  handleExceptionEnd
end;

// property
procedure TReplaceDialog_ReplaceText(ASet: LongBool; AObj: TReplaceDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReplaceText := AValue
  end else
    StringBufferCreate(AObj.ReplaceText, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TReplaceDialog_OnReplace(AObj: TReplaceDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnReplace}
  LCLEventMethodCode
end;

function TReplaceDialog_TClass(): TClass; extdecl;
begin
  Result := TReplaceDialog;
end;

exports
  TReplaceDialog_Create,
  TReplaceDialog_ReplaceText,
  TReplaceDialog_OnReplace,
  TReplaceDialog_TClass;