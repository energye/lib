
//constructor
function WkHeaders_Create(aMessageHeaders: PSoupMessageHeaders): TWkHeaders; extdecl;
begin
  handleExceptionBegin
  Result := TWkHeaders.Create(aMessageHeaders);
  handleExceptionEnd
end;

//constructor
function WkHeaders_Create1(type_: TSoupMessageHeadersType): TWkHeaders; extdecl;
begin
  handleExceptionBegin
  Result := TWkHeaders.Create(type_);
  handleExceptionEnd
end;

//function
procedure WkHeaders_List(AObj: TWkHeaders; var Result: TStrings); extdecl;
begin
  handleExceptionBegin
  Result := AObj.List();
  handleExceptionEnd
end;

//procedure
procedure WkHeaders_Append(AObj: TWkHeaders; aName: PChar; aValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Append(aName, aValue);
  handleExceptionEnd
end;

//procedure
procedure WkHeaders_Clear(AObj: TWkHeaders); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure WkHeaders_Remove(AObj: TWkHeaders; aName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Remove(aName);
  handleExceptionEnd
end;

//procedure
procedure WkHeaders_Replace(AObj: TWkHeaders; aName: PChar; aValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Replace(aName, aValue);
  handleExceptionEnd
end;


exports
  WkHeaders_Create,
  WkHeaders_Create1,
  WkHeaders_List,
  WkHeaders_Append,
  WkHeaders_Clear,
  WkHeaders_Remove,
  WkHeaders_Replace;