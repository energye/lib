
//constructor
function PrinterSetupDialog_Create(TheOwner: TComponent): TPrinterSetupDialog; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPrinterSetupDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function PrinterSetupDialog_AttachTo(AIsSet: LongBool; AObj: TPrinterSetupDialog; AValue: TCustomForm): TCustomForm; extdecl;
begin
  {$define handleExceptionFuncName :='AttachTo'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AttachTo := AValue;
  end else
    Result := AObj.AttachTo;
  handleExceptionEnd
end;

//function
function PrinterSetupDialog_Class(): TClass; extdecl;
begin
  Result := TPrinterSetupDialog;
end;

//property event
procedure PrinterSetupDialog_SetOnDialogResult(AObj: TPrinterSetupDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDialogResultEvent}
  {$DEFINE EventName := OnDialogResult}
  EventMethodCode
end;


exports
  PrinterSetupDialog_Create,
  PrinterSetupDialog_AttachTo,
  PrinterSetupDialog_Class,
  PrinterSetupDialog_SetOnDialogResult;