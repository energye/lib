// constructor
function TCoreWebView2NonClientRegionChangedEventArgs_Create(const aArgs: ICoreWebView2NonClientRegionChangedEventArgs): TCoreWebView2NonClientRegionChangedEventArgs; extdecl;
begin
  {$define handleExceptionID := 8100}
  handleExceptionBegin
  Result := TCoreWebView2NonClientRegionChangedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2NonClientRegionChangedEventArgs_Initialized(AObj: TCoreWebView2NonClientRegionChangedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 8101}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NonClientRegionChangedEventArgs_BaseIntf(AObj: TCoreWebView2NonClientRegionChangedEventArgs; var Result: ICoreWebView2NonClientRegionChangedEventArgs); extdecl;
begin
  {$define handleExceptionID := 8102}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2NonClientRegionChangedEventArgs_RegionKind(AObj: TCoreWebView2NonClientRegionChangedEventArgs): TWVNonClientRegionKind; extdecl;
begin
  {$define handleExceptionID := 8103}
  handleExceptionBegin
  Result := AObj.RegionKind;
  handleExceptionEnd
end;

exports
  TCoreWebView2NonClientRegionChangedEventArgs_Create,
  TCoreWebView2NonClientRegionChangedEventArgs_Initialized,
  TCoreWebView2NonClientRegionChangedEventArgs_BaseIntf,
  TCoreWebView2NonClientRegionChangedEventArgs_RegionKind;