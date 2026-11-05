// constructor
function TWkNSMutableURLRequest_Create(AData: NSMutableURLRequest): TWkNSMutableURLRequest; extdecl;
begin
  {$define handleExceptionID := 1400}
  handleExceptionBegin
  Result := TWkNSMutableURLRequest.Create(AData);
  handleExceptionEnd
end;

// function static
function TWkNSMutableURLRequest_NewToWkNSMutableURLRequest(): TWkNSMutableURLRequest; extdecl;
begin
  Result := TWkNSMutableURLRequest.New();
end;

// procedure
procedure TWkNSMutableURLRequest_Release(AObj: TWkNSMutableURLRequest); extdecl;
begin
  {$define handleExceptionID := 1401}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkNSMutableURLRequest_SetHTTPMethod(AObj: TWkNSMutableURLRequest; aMethod: PChar); extdecl;
begin
  {$define handleExceptionID := 1402}
  handleExceptionBegin
  AObj.SetHTTPMethod(aMethod);
  handleExceptionEnd
end;

// procedure
procedure TWkNSMutableURLRequest_SetAllHTTPHeaderFields(AObj: TWkNSMutableURLRequest; headerFieldsJSONString: PChar); extdecl;
begin
  {$define handleExceptionID := 1403}
  handleExceptionBegin
  AObj.SetAllHTTPHeaderFields(headerFieldsJSONString);
  handleExceptionEnd
end;

// procedure
procedure TWkNSMutableURLRequest_SetValueForHTTPHeaderField(AObj: TWkNSMutableURLRequest; aValue: PChar; aField: PChar); extdecl;
begin
  {$define handleExceptionID := 1404}
  handleExceptionBegin
  AObj.SetValueForHTTPHeaderField(aValue, aField);
  handleExceptionEnd
end;

// procedure
procedure TWkNSMutableURLRequest_AddValueForHTTPHeaderField(AObj: TWkNSMutableURLRequest; aValue: PChar; aField: PChar); extdecl;
begin
  {$define handleExceptionID := 1405}
  handleExceptionBegin
  AObj.AddValueForHTTPHeaderField(aValue, aField);
  handleExceptionEnd
end;

exports
  TWkNSMutableURLRequest_Create,
  TWkNSMutableURLRequest_NewToWkNSMutableURLRequest,
  TWkNSMutableURLRequest_Release,
  TWkNSMutableURLRequest_SetHTTPMethod,
  TWkNSMutableURLRequest_SetAllHTTPHeaderFields,
  TWkNSMutableURLRequest_SetValueForHTTPHeaderField,
  TWkNSMutableURLRequest_AddValueForHTTPHeaderField;