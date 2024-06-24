
//constructor
function CoreWebView2ProcessExtendedInfoCollection_Create(const aBaseIntf: ICoreWebView2ProcessExtendedInfoCollection): TCoreWebView2ProcessExtendedInfoCollection; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ProcessExtendedInfoCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessExtendedInfoCollection_Initialized(AObj: TCoreWebView2ProcessExtendedInfoCollection): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessExtendedInfoCollection_BaseIntf(AObj: TCoreWebView2ProcessExtendedInfoCollection; var Result: ICoreWebView2ProcessExtendedInfoCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessExtendedInfoCollection_Count(AObj: TCoreWebView2ProcessExtendedInfoCollection): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessExtendedInfoCollection_Items(AObj: TCoreWebView2ProcessExtendedInfoCollection; idx: uint32; var Result: ICoreWebView2ProcessExtendedInfo); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;


exports
  CoreWebView2ProcessExtendedInfoCollection_Create,
  CoreWebView2ProcessExtendedInfoCollection_Initialized,
  CoreWebView2ProcessExtendedInfoCollection_BaseIntf,
  CoreWebView2ProcessExtendedInfoCollection_Count,
  CoreWebView2ProcessExtendedInfoCollection_Items;