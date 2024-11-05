
//constructor
function WkWebViewParent_Create(aOwner: TComponent): TWkWebViewParent; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebViewParent.Create(aOwner);
  handleExceptionEnd
end;

//property
function WkWebViewParent_ScrolledWindow(AIsSet: LongBool; AObj: TWkWebViewParent; AValue: TScrolledWindow): TScrolledWindow; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrolledWindow := AValue;
  end else
    Result := AObj.ScrolledWindow;
  handleExceptionEnd
end;

//property
function WkWebViewParent_WebView(AIsSet: LongBool; AObj: TWkWebViewParent; AValue: TWkWebview): TWkWebview; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WebView := AValue;
  end else
    Result := AObj.WebView;
  handleExceptionEnd
end;

//procedure
procedure WkWebViewParent_FreeChild(AObj: TWkWebViewParent); extdecl;
begin
  handleExceptionBegin
  AObj.FreeChild();
  handleExceptionEnd
end;


exports
  WkWebViewParent_Create,
  WkWebViewParent_ScrolledWindow,
  WkWebViewParent_WebView,
  WkWebViewParent_FreeChild;