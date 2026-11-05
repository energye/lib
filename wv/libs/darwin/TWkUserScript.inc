// constructor
function TWkUserScript_Create(AData: WKUserScript): TWkUserScript; extdecl;
begin
  {$define handleExceptionID := 3000}
  handleExceptionBegin
  Result := TWkUserScript.Create(AData);
  handleExceptionEnd
end;

// function
function TWkUserScript_Data(AObj: TWkUserScript): WKUserScript; extdecl;
begin
  {$define handleExceptionID := 3001}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkUserScript_New(): TWkUserScript; extdecl;
begin
  Result := TWkUserScript.New();
end;

// function
procedure TWkUserScript_Source(AObj: TWkUserScript;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3002}
  handleExceptionBegin
  StringBufferCreate(AObj.Source(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkUserScript_InjectionTime(AObj: TWkUserScript; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 3003}
  handleExceptionBegin
  Result := AObj.InjectionTime();
  handleExceptionEnd
end;

// function
function TWkUserScript_IsForMainFrameOnly(AObj: TWkUserScript): LongBool; extdecl;
begin
  {$define handleExceptionID := 3004}
  handleExceptionBegin
  Result := AObj.IsForMainFrameOnly();
  handleExceptionEnd
end;

// function static
function TWkUserScript_InitWithSourceInjectionTimeForMainFrameOnly(ASource: PChar; var AInjectionTime: int64; AForMainFrameOnly: LongBool): TWkUserScript; extdecl;
begin
  Result := TWkUserScript.InitWithSourceInjectionTimeForMainFrameOnly(ASource, AInjectionTime, AForMainFrameOnly);
end;

// procedure
procedure TWkUserScript_Release(AObj: TWkUserScript); extdecl;
begin
  {$define handleExceptionID := 3005}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkUserScript_Create,
  TWkUserScript_Data,
  TWkUserScript_New,
  TWkUserScript_Source,
  TWkUserScript_InjectionTime,
  TWkUserScript_IsForMainFrameOnly,
  TWkUserScript_InitWithSourceInjectionTimeForMainFrameOnly,
  TWkUserScript_Release;