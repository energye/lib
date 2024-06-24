
//constructor
function CoreWebView2ProcessInfoCollection_Create(const aBaseIntf: ICoreWebView2ProcessInfoCollection): TCoreWebView2ProcessInfoCollection; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ProcessInfoCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessInfoCollection_Initialized(AObj: TCoreWebView2ProcessInfoCollection): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessInfoCollection_BaseIntf(AObj: TCoreWebView2ProcessInfoCollection; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessInfoCollection_Count(AObj: TCoreWebView2ProcessInfoCollection): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessInfoCollection_Items(AObj: TCoreWebView2ProcessInfoCollection; idx: uint32; var Result: ICoreWebView2ProcessInfo); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;


exports
  CoreWebView2ProcessInfoCollection_Create,
  CoreWebView2ProcessInfoCollection_Initialized,
  CoreWebView2ProcessInfoCollection_BaseIntf,
  CoreWebView2ProcessInfoCollection_Count,
  CoreWebView2ProcessInfoCollection_Items;