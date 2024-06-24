
//constructor
function CustomPrinterSetupDialog_Create(TheOwner: TComponent): TCustomPrinterSetupDialog; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPrinterSetupDialog.Create(TheOwner);
  handleExceptionEnd
end;

//function
function CustomPrinterSetupDialog_Class(): TClass; extdecl;
begin
  Result := TCustomPrinterSetupDialog;
end;


exports
  CustomPrinterSetupDialog_Create,
  CustomPrinterSetupDialog_Class;