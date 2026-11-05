// constructor
function TCoreWebView2ProcessExtendedInfoCollection_Create(const aBaseIntf: ICoreWebView2ProcessExtendedInfoCollection): TCoreWebView2ProcessExtendedInfoCollection; extdecl;
begin
  {$define handleExceptionID := 4300}
  handleExceptionBegin
  Result := TCoreWebView2ProcessExtendedInfoCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessExtendedInfoCollection_Initialized(AObj: TCoreWebView2ProcessExtendedInfoCollection): LongBool; extdecl;
begin
  {$define handleExceptionID := 4301}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessExtendedInfoCollection_BaseIntf(AObj: TCoreWebView2ProcessExtendedInfoCollection; var Result: ICoreWebView2ProcessExtendedInfoCollection); extdecl;
begin
  {$define handleExceptionID := 4302}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessExtendedInfoCollection_Count(AObj: TCoreWebView2ProcessExtendedInfoCollection): cardinal; extdecl;
begin
  {$define handleExceptionID := 4303}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessExtendedInfoCollection_Items(AObj: TCoreWebView2ProcessExtendedInfoCollection; idx: cardinal; var Result: ICoreWebView2ProcessExtendedInfo); extdecl;
begin
  {$define handleExceptionID := 4304}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2ProcessExtendedInfoCollection_Create,
  TCoreWebView2ProcessExtendedInfoCollection_Initialized,
  TCoreWebView2ProcessExtendedInfoCollection_BaseIntf,
  TCoreWebView2ProcessExtendedInfoCollection_Count,
  TCoreWebView2ProcessExtendedInfoCollection_Items;