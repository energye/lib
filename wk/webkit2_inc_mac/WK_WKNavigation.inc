
//constructor
function WKNavigation_Create(aData: WKNavigation): TWKNavigation; extdecl;
begin
  handleExceptionBegin
  Result := TWKNavigation.Create(aData);
  handleExceptionEnd
end;

//function
function WKNavigation_Data(AObj: TWKNavigation): WKNavigation; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKNavigation_EffectiveContentMode(AObj: TWKNavigation): WKContentMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EffectiveContentMode();
  handleExceptionEnd
end;

//procedure
procedure WKNavigation_Release(AObj: TWKNavigation); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  WKNavigation_Create,
  WKNavigation_Data,
  WKNavigation_EffectiveContentMode,
  WKNavigation_Release;