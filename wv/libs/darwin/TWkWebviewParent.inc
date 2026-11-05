// constructor
function TWkWebviewParent_Create(AOwner: TComponent): TWkWebviewParent; extdecl;
begin
  {$define handleExceptionID := 3400}
  handleExceptionBegin
  Result := TWkWebviewParent.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TWkWebviewParent_Resize(AObj: TWkWebviewParent); extdecl;
begin
  {$define handleExceptionID := 3401}
  handleExceptionBegin
  AObj.Resize();
  handleExceptionEnd
end;

// procedure
procedure TWkWebviewParent_SetWebview(AObj: TWkWebviewParent; AWebview: WKWebView); extdecl;
begin
  {$define handleExceptionID := 3402}
  handleExceptionBegin
  AObj.SetWebview(AWebview);
  handleExceptionEnd
end;

exports
  TWkWebviewParent_Create,
  TWkWebviewParent_Resize,
  TWkWebviewParent_SetWebview;