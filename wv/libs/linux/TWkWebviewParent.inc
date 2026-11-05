// constructor
function TWkWebviewParent_Create(AOwner: TComponent): TWkWebviewParent; extdecl;
begin
  {$define handleExceptionID := 3700}
  handleExceptionBegin
  Result := TWkWebviewParent.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TWkWebviewParent_UpdateSize(AObj: TWkWebviewParent; aWidth: Integer; aHeight: Integer); extdecl;
begin
  {$define handleExceptionID := 3701}
  handleExceptionBegin
  AObj.UpdateSize(aWidth, aHeight);
  handleExceptionEnd
end;

// procedure
procedure TWkWebviewParent_FreeChild(AObj: TWkWebviewParent); extdecl;
begin
  {$define handleExceptionID := 3702}
  handleExceptionBegin
  AObj.FreeChild();
  handleExceptionEnd
end;

// property
function TWkWebviewParent_Webview(ASet: LongBool; AObj: TWkWebviewParent; AValue: TWkWebview): TWkWebview; extdecl;
begin
  {$define handleExceptionID := 3703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Webview := AValue
  end else
    Result := AObj.Webview;
  handleExceptionEnd
end;

// property
function TWkWebviewParent_ScrolledWindow(ASet: LongBool; AObj: TWkWebviewParent; AValue: TScrolledWindow): TScrolledWindow; extdecl;
begin
  {$define handleExceptionID := 3704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrolledWindow := AValue
  end else
    Result := AObj.ScrolledWindow;
  handleExceptionEnd
end;

exports
  TWkWebviewParent_Create,
  TWkWebviewParent_UpdateSize,
  TWkWebviewParent_FreeChild,
  TWkWebviewParent_Webview,
  TWkWebviewParent_ScrolledWindow;