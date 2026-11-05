// constructor
function TPrintDialog_Create(TheOwner: TComponent): TPrintDialog; extdecl;
begin
  {$define handleExceptionID := 7300}
  handleExceptionBegin
  Result := TPrintDialog.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPrintDialog_AttachTo(ASet: LongBool; AObj: TPrintDialog; AValue: TCustomForm): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 7301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AttachTo := AValue
  end else
    Result := AObj.AttachTo;
  handleExceptionEnd
end;

// event
procedure TPrintDialog_OnDialogResult(AObj: TPrintDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDialogResultEvent}
  {$DEFINE EventName := OnDialogResult}
  LCLEventMethodCode
end;

function TPrintDialog_TClass(): TClass; extdecl;
begin
  Result := TPrintDialog;
end;

exports
  TPrintDialog_Create,
  TPrintDialog_AttachTo,
  TPrintDialog_OnDialogResult,
  TPrintDialog_TClass;