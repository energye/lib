// constructor
function TCustomPrintDialog_Create(TheOwner: TComponent): TCustomPrintDialog; extdecl;
begin
  {$define handleExceptionID := 7200}
  handleExceptionBegin
  Result := TCustomPrintDialog.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_Collate(ASet: LongBool; AObj: TCustomPrintDialog; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 7201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Collate := AValue
  end else
    Result := AObj.Collate;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_Copies(ASet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Copies := AValue
  end else
    Result := AObj.Copies;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_FromPage(ASet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FromPage := AValue
  end else
    Result := AObj.FromPage;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_MinPage(ASet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinPage := AValue
  end else
    Result := AObj.MinPage;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_MaxPage(ASet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxPage := AValue
  end else
    Result := AObj.MaxPage;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_Options(ASet: LongBool; AObj: TCustomPrintDialog; AValue: TPrintDialogOptions): TPrintDialogOptions; extdecl;
begin
  {$define handleExceptionID := 7206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_PrintToFile(ASet: LongBool; AObj: TCustomPrintDialog; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 7207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrintToFile := AValue
  end else
    Result := AObj.PrintToFile;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_PrintRange(ASet: LongBool; AObj: TCustomPrintDialog; AValue: TPrintRange): TPrintRange; extdecl;
begin
  {$define handleExceptionID := 7208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PrintRange := AValue
  end else
    Result := AObj.PrintRange;
  handleExceptionEnd
end;

// property
function TCustomPrintDialog_ToPage(ASet: LongBool; AObj: TCustomPrintDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ToPage := AValue
  end else
    Result := AObj.ToPage;
  handleExceptionEnd
end;

function TCustomPrintDialog_TClass(): TClass; extdecl;
begin
  Result := TCustomPrintDialog;
end;

exports
  TCustomPrintDialog_Create,
  TCustomPrintDialog_Collate,
  TCustomPrintDialog_Copies,
  TCustomPrintDialog_FromPage,
  TCustomPrintDialog_MinPage,
  TCustomPrintDialog_MaxPage,
  TCustomPrintDialog_Options,
  TCustomPrintDialog_PrintToFile,
  TCustomPrintDialog_PrintRange,
  TCustomPrintDialog_ToPage,
  TCustomPrintDialog_TClass;