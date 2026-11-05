// constructor
function TWVCustomSchemeInfoArrayWrap_CreateWithInt(ASize: integer): TWVCustomSchemeInfoArrayWrap; extdecl;
begin
  {$define handleExceptionID := 8500}
  handleExceptionBegin
  Result := TWVCustomSchemeInfoArrayWrap.Create(ASize);
  handleExceptionEnd
end;

// function
function TWVCustomSchemeInfoArrayWrap_WVCustomSchemeInfoArrayData(AObj: TWVCustomSchemeInfoArrayWrap): PWVCustomSchemeInfoArray; extdecl;
begin
  {$define handleExceptionID := 8501}
  handleExceptionBegin
  Result := AObj.WVCustomSchemeInfoArrayData();
  handleExceptionEnd
end;

// function
function TWVCustomSchemeInfoArrayWrap_Size(AObj: TWVCustomSchemeInfoArrayWrap): integer; extdecl;
begin
  {$define handleExceptionID := 8502}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
procedure TWVCustomSchemeInfoArrayWrap_GetValue(AObj: TWVCustomSchemeInfoArrayWrap; AIndex: integer; var Result: TWVCustomSchemeInfoPtr); extdecl;
begin
  {$define handleExceptionID := 8503}
  handleExceptionBegin
  Result := TWVCustomSchemeInfoToGo(AObj.GetValue(AIndex));
  handleExceptionEnd
end;

// procedure
procedure TWVCustomSchemeInfoArrayWrap_SetValue(AObj: TWVCustomSchemeInfoArrayWrap; AIndex: integer; var AValue: TWVCustomSchemeInfoPtr); extdecl;
var
  InAValue: TWVCustomSchemeInfo;
begin
  {$define handleExceptionID := 8504}
  handleExceptionBegin
  InAValue := TWVCustomSchemeInfoToPas(AValue);
  AObj.SetValue(AIndex, InAValue);
  handleExceptionEnd
end;

// procedure
procedure TWVCustomSchemeInfoArrayWrap_AddValue(AObj: TWVCustomSchemeInfoArrayWrap; var AValue: TWVCustomSchemeInfoPtr); extdecl;
var
  InAValue: TWVCustomSchemeInfo;
begin
  {$define handleExceptionID := 8505}
  handleExceptionBegin
  InAValue := TWVCustomSchemeInfoToPas(AValue);
  AObj.AddValue(InAValue);
  handleExceptionEnd
end;

exports
  TWVCustomSchemeInfoArrayWrap_CreateWithInt,
  TWVCustomSchemeInfoArrayWrap_WVCustomSchemeInfoArrayData,
  TWVCustomSchemeInfoArrayWrap_Size,
  TWVCustomSchemeInfoArrayWrap_GetValue,
  TWVCustomSchemeInfoArrayWrap_SetValue,
  TWVCustomSchemeInfoArrayWrap_AddValue;