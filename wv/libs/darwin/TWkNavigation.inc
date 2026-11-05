// constructor
function TWkNavigation_Create(AData: WKNavigation): TWkNavigation; extdecl;
begin
  {$define handleExceptionID := 2000}
  handleExceptionBegin
  Result := TWkNavigation.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNavigation_Data(AObj: TWkNavigation): WKNavigation; extdecl;
begin
  {$define handleExceptionID := 2001}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkNavigation_EffectiveContentMode(AObj: TWkNavigation): WKContentMode; extdecl;
begin
  {$define handleExceptionID := 2002}
  handleExceptionBegin
  Result := AObj.EffectiveContentMode();
  handleExceptionEnd
end;

// procedure
procedure TWkNavigation_Release(AObj: TWkNavigation); extdecl;
begin
  {$define handleExceptionID := 2003}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNavigation_Create,
  TWkNavigation_Data,
  TWkNavigation_EffectiveContentMode,
  TWkNavigation_Release;