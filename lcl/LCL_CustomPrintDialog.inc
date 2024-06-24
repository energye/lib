
//constructor
function CustomPrintDialog_Create(TheOwner: TComponent): TCustomPrintDialog; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPrintDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomPrintDialog_Collate(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Collate := AValue;
  end else
    Result := AObj.Collate;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_Copies(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Copies := AValue;
  end else
    Result := AObj.Copies;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_FromPage(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FromPage := AValue;
  end else
    Result := AObj.FromPage;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_MinPage(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinPage := AValue;
  end else
    Result := AObj.MinPage;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_MaxPage(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxPage := AValue;
  end else
    Result := AObj.MaxPage;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_Options(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: TPrintDialogOptions): TPrintDialogOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_PrintToFile(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrintToFile := AValue;
  end else
    Result := AObj.PrintToFile;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_PrintRange(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: TPrintRange): TPrintRange; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrintRange := AValue;
  end else
    Result := AObj.PrintRange;
  handleExceptionEnd
end;

//property
function CustomPrintDialog_ToPage(AIsSet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ToPage := AValue;
  end else
    Result := AObj.ToPage;
  handleExceptionEnd
end;

//function
function CustomPrintDialog_Class(): TClass; extdecl;
begin
  Result := TCustomPrintDialog;
end;


exports
  CustomPrintDialog_Create,
  CustomPrintDialog_Collate,
  CustomPrintDialog_Copies,
  CustomPrintDialog_FromPage,
  CustomPrintDialog_MinPage,
  CustomPrintDialog_MaxPage,
  CustomPrintDialog_Options,
  CustomPrintDialog_PrintToFile,
  CustomPrintDialog_PrintRange,
  CustomPrintDialog_ToPage,
  CustomPrintDialog_Class;