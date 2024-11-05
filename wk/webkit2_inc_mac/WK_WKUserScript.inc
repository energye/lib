
//constructor
function WKUserScript_Create(): TWKUserScript; extdecl;
begin
  handleExceptionBegin
  Result := TWKUserScript.Create();
  handleExceptionEnd
end;

//constructor
function WKUserScript_Create1(aData: WKUserScript): TWKUserScript; extdecl;
begin
  handleExceptionBegin
  Result := TWKUserScript.Create(aData);
  handleExceptionEnd
end;

//function
function WKUserScript_InitWithSourceInjectionTimeForMainFrameOnly(aSource: PChar; var aInjectionTime: int64; aForMainFrameOnly: LongBool): TWKUserScript; extdecl;
begin
  Result := TWKUserScript.InitWithSourceInjectionTimeForMainFrameOnly(aSource, aInjectionTime, aForMainFrameOnly);
end;

//function
function WKUserScript_Data(AObj: TWKUserScript): WKUserScript; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKUserScript_Source(AObj: TWKUserScript): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Source());
  handleExceptionEnd
end;

//function
procedure WKUserScript_InjectionTime(AObj: TWKUserScript; var Result: int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.InjectionTime();
  handleExceptionEnd
end;

//function
function WKUserScript_IsForMainFrameOnly(AObj: TWKUserScript): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsForMainFrameOnly();
  handleExceptionEnd
end;


exports
  WKUserScript_Create,
  WKUserScript_Create1,
  WKUserScript_InitWithSourceInjectionTimeForMainFrameOnly,
  WKUserScript_Data,
  WKUserScript_Source,
  WKUserScript_InjectionTime,
  WKUserScript_IsForMainFrameOnly;