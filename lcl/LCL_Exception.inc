
//constructor
function Exception_Create(const msg: PChar): Exception; extdecl;
begin
  handleExceptionBegin
  Result := Exception.Create(msg);
  handleExceptionEnd
end;

//constructor
function Exception_CreateHelp(const Msg: PChar; AHelpContext: LongInt): Exception; extdecl;
begin
  handleExceptionBegin
  Result := Exception.CreateHelp(Msg, AHelpContext);
  handleExceptionEnd
end;

//property
function Exception_HelpContext(AIsSet: LongBool; AObj: Exception; AValue: LongInt): LongInt; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpContext := AValue;
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

//property
function Exception_Message(AIsSet: LongBool; AObj: Exception; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Message := AValue;
  end else
    Result := ToPChar(AObj.Message);
  handleExceptionEnd
end;

//function
function Exception_Class(): TClass; extdecl;
begin
  Result := Exception;
end;


exports
  Exception_Create,
  Exception_CreateHelp,
  Exception_HelpContext,
  Exception_Message,
  Exception_Class;