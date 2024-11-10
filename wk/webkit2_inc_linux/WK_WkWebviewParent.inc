
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

//procedure
procedure WkWebviewParent_Resize(AObj: TWkWebviewParent); extdecl;
begin
  handleExceptionBegin
  AObj.Resize();
  handleExceptionEnd
end;

//procedure
procedure WkWebviewParent_SetWebview(AObj: TWkWebviewParent; const aValue: TWkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.SetWebview(aValue);
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
  WkWebviewParent_Resize,
  WkWebviewParent_SetWebview,
  WkWebviewParent_FreeChild;