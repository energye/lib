
//constructor
function NSMutableURLRequest_Create(aData: NSMutableURLRequest): TNSMutableURLRequest; extdecl;
begin
  handleExceptionBegin
  Result := TNSMutableURLRequest.Create(aData);
  handleExceptionEnd
end;

//function
function NSMutableURLRequest_New(): TNSMutableURLRequest; extdecl;
begin
  Result := TNSMutableURLRequest.New();
end;

//procedure
procedure NSMutableURLRequest_SetHTTPMethod(AObj: TNSMutableURLRequest; aMethod: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetHTTPMethod(aMethod);
  handleExceptionEnd
end;

//procedure
procedure NSMutableURLRequest_SetAllHTTPHeaderFields(AObj: TNSMutableURLRequest; headerFieldsJSONString: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetAllHTTPHeaderFields(headerFieldsJSONString);
  handleExceptionEnd
end;

//procedure
procedure NSMutableURLRequest_SetValueForHTTPHeaderField(AObj: TNSMutableURLRequest; aValue: PChar; aField: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetValueForHTTPHeaderField(aValue, aField);
  handleExceptionEnd
end;

//procedure
procedure NSMutableURLRequest_AddValueForHTTPHeaderField(AObj: TNSMutableURLRequest; aValue: PChar; aField: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AddValueForHTTPHeaderField(aValue, aField);
  handleExceptionEnd
end;


exports
  NSMutableURLRequest_Create,
  NSMutableURLRequest_New,
  NSMutableURLRequest_SetHTTPMethod,
  NSMutableURLRequest_SetAllHTTPHeaderFields,
  NSMutableURLRequest_SetValueForHTTPHeaderField,
  NSMutableURLRequest_AddValueForHTTPHeaderField;