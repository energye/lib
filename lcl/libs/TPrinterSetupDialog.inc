// constructor
function TPrinterSetupDialog_Create(TheOwner: TComponent): TPrinterSetupDialog; extdecl;
begin
  {$define handleExceptionID := 18100}
  handleExceptionBegin
  Result := TPrinterSetupDialog.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPrinterSetupDialog_AttachTo(ASet: LongBool; AObj: TPrinterSetupDialog; AValue: TCustomForm): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 18101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AttachTo := AValue
  end else
    Result := AObj.AttachTo;
  handleExceptionEnd
end;

// event
procedure TPrinterSetupDialog_OnDialogResult(AObj: TPrinterSetupDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDialogResultEvent}
  {$DEFINE EventName := OnDialogResult}
  LCLEventMethodCode
end;

function TPrinterSetupDialog_TClass(): TClass; extdecl;
begin
  Result := TPrinterSetupDialog;
end;

exports
  TPrinterSetupDialog_Create,
  TPrinterSetupDialog_AttachTo,
  TPrinterSetupDialog_OnDialogResult,
  TPrinterSetupDialog_TClass;