
//constructor
function WkWebviewParent_Create(aOwner: TComponent): TWkWebviewParent; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebviewParent.Create(aOwner);
  handleExceptionEnd
end;

//property
function WkWebviewParent_ScrolledWindow(AIsSet: LongBool; AObj: TWkWebviewParent; AValue: TScrolledWindow): TScrolledWindow; extdecl;
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
function WkWebviewParent_WebView(AIsSet: LongBool; AObj: TWkWebviewParent; AValue: TWkWebview): TWkWebview; extdecl;
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
procedure WkWebviewParent_FreeChild(AObj: TWkWebviewParent); extdecl;
begin
  handleExceptionBegin
  AObj.FreeChild();
  handleExceptionEnd
end;


exports
  WkWebviewParent_Create,
  WkWebviewParent_ScrolledWindow,
  WkWebviewParent_WebView,
  WkWebviewParent_FreeChild;