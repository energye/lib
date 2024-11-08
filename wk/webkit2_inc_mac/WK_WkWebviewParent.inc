
//constructor
function WkWebviewParent_Create(aOwner: TComponent): TWkWebviewParent; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebviewParent.Create(aOwner);
  handleExceptionEnd
end;

//procedure
procedure WkWebviewParent_UpdateBounds(AObj: TWkWebviewParent); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBounds();
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
procedure WkWebviewParent_SetWebview(AObj: TWkWebviewParent; aWebview: WkWebview); extdecl;
begin
  handleExceptionBegin
  AObj.SetWebview(aWebview);
  handleExceptionEnd
end;


exports
  WkWebviewParent_Create,
  WkWebviewParent_UpdateBounds,
  WkWebviewParent_Resize,
  WkWebviewParent_SetWebview;
