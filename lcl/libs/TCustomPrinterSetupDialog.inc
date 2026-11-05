// constructor
function TCustomPrinterSetupDialog_Create(TheOwner: TComponent): TCustomPrinterSetupDialog; extdecl;
begin
  {$define handleExceptionID := 18000}
  handleExceptionBegin
  Result := TCustomPrinterSetupDialog.Create(TheOwner);
  handleExceptionEnd
end;

function TCustomPrinterSetupDialog_TClass(): TClass; extdecl;
begin
  Result := TCustomPrinterSetupDialog;
end;

exports
  TCustomPrinterSetupDialog_Create,
  TCustomPrinterSetupDialog_TClass;