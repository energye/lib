// constructor
function TTaskDialogBaseButtonItem_Create(ACollection: TCollection): TTaskDialogBaseButtonItem; extdecl;
begin
  {$define handleExceptionID := 20800}
  handleExceptionBegin
  Result := TTaskDialogBaseButtonItem.Create(ACollection);
  handleExceptionEnd
end;

// property
function TTaskDialogBaseButtonItem_ModalResult(ASet: LongBool; AObj: TTaskDialogBaseButtonItem; AValue: TModalResult): TModalResult; extdecl;
begin
  {$define handleExceptionID := 20801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ModalResult := AValue
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

// property
procedure TTaskDialogBaseButtonItem_CommandLinkHint(ASet: LongBool; AObj: TTaskDialogBaseButtonItem; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommandLinkHint := AValue
  end else
    StringBufferCreate(AObj.CommandLinkHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TTaskDialogBaseButtonItem_Caption(ASet: LongBool; AObj: TTaskDialogBaseButtonItem; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TTaskDialogBaseButtonItem_Default(ASet: LongBool; AObj: TTaskDialogBaseButtonItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Default := AValue
  end else
    Result := AObj.Default;
  handleExceptionEnd
end;

exports
  TTaskDialogBaseButtonItem_Create,
  TTaskDialogBaseButtonItem_ModalResult,
  TTaskDialogBaseButtonItem_CommandLinkHint,
  TTaskDialogBaseButtonItem_Caption,
  TTaskDialogBaseButtonItem_Default;