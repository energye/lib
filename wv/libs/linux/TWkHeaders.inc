// constructor
function TWkHeaders_Create(aMessageHeaders: PSoupMessageHeaders): TWkHeaders; extdecl;
begin
  {$define handleExceptionID := 2300}
  handleExceptionBegin
  Result := TWkHeaders.Create(aMessageHeaders);
  handleExceptionEnd
end;

// function
function TWkHeaders_Data(AObj: TWkHeaders): PSoupMessageHeaders; extdecl;
begin
  {$define handleExceptionID := 2301}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkHeaders_List(AObj: TWkHeaders): TStrings; extdecl;
begin
  {$define handleExceptionID := 2302}
  handleExceptionBegin
  Result := AObj.List();
  handleExceptionEnd
end;

// function static
function TWkHeaders_NewMessageHeadersType(type_: TSoupMessageHeadersType): TWkHeaders; extdecl;
begin
  Result := TWkHeaders.NewMessageHeadersType(type_);
end;

// procedure
procedure TWkHeaders_Append(AObj: TWkHeaders; aName: PChar; aValue: PChar); extdecl;
begin
  {$define handleExceptionID := 2303}
  handleExceptionBegin
  AObj.Append(aName, aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkHeaders_Clear(AObj: TWkHeaders); extdecl;
begin
  {$define handleExceptionID := 2304}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TWkHeaders_Remove(AObj: TWkHeaders; aName: PChar); extdecl;
begin
  {$define handleExceptionID := 2305}
  handleExceptionBegin
  AObj.Remove(aName);
  handleExceptionEnd
end;

// procedure
procedure TWkHeaders_Replace(AObj: TWkHeaders; aName: PChar; aValue: PChar); extdecl;
begin
  {$define handleExceptionID := 2306}
  handleExceptionBegin
  AObj.Replace(aName, aValue);
  handleExceptionEnd
end;

exports
  TWkHeaders_Create,
  TWkHeaders_Data,
  TWkHeaders_List,
  TWkHeaders_NewMessageHeadersType,
  TWkHeaders_Append,
  TWkHeaders_Clear,
  TWkHeaders_Remove,
  TWkHeaders_Replace;