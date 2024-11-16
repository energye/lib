
//function
procedure CefPanel_UnWrap(data: Pointer; var Result: ICefPanel); extdecl;
begin
  Result := TCefPanelRef.UnWrap(data);
end;

//function
procedure CefPanel_CreatePanel(const delegate: ICefPanelDelegate; var Result: ICefPanel); extdecl;
begin
  Result := TCefPanelRef.CreatePanel(delegate);
end;

//function
procedure CefPanel_GetAsWindow(AObj: ICefPanel; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionFuncName :='GetAsWindow'}
  handleExceptionBegin
  Result := AObj.GetAsWindow();
  handleExceptionEnd
end;

//function
procedure CefPanel_SetToFillLayout(AObj: ICefPanel; var Result: ICefFillLayout); extdecl;
begin
  {$define handleExceptionFuncName :='SetToFillLayout'}
  handleExceptionBegin
  Result := AObj.SetToFillLayout();
  handleExceptionEnd
end;

//function
procedure CefPanel_SetToBoxLayout(AObj: ICefPanel; const settings: TCefBoxLayoutSettings; var Result: ICefBoxLayout); extdecl;
begin
  {$define handleExceptionFuncName :='SetToBoxLayout'}
  handleExceptionBegin
  Result := AObj.SetToBoxLayout(settings);
  handleExceptionEnd
end;

//function
procedure CefPanel_GetLayout(AObj: ICefPanel; var Result: ICefLayout); extdecl;
begin
  {$define handleExceptionFuncName :='GetLayout'}
  handleExceptionBegin
  Result := AObj.GetLayout();
  handleExceptionEnd
end;

//function
function CefPanel_GetChildViewCount(AObj: ICefPanel): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetChildViewCount'}
  handleExceptionBegin
  Result := AObj.GetChildViewCount();
  handleExceptionEnd
end;

//function
procedure CefPanel_GetChildViewAt(AObj: ICefPanel; index: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='GetChildViewAt'}
  handleExceptionBegin
  Result := AObj.GetChildViewAt(index);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_Layout(AObj: ICefPanel); extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  AObj.Layout();
  handleExceptionEnd
end;

//procedure
procedure CefPanel_AddChildView(AObj: ICefPanel; const view: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='AddChildView'}
  handleExceptionBegin
  AObj.AddChildView(view);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_AddChildViewAt(AObj: ICefPanel; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='AddChildViewAt'}
  handleExceptionBegin
  AObj.AddChildViewAt(view, index);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_ReorderChildView(AObj: ICefPanel; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='ReorderChildView'}
  handleExceptionBegin
  AObj.ReorderChildView(view, index);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_RemoveChildView(AObj: ICefPanel; const view: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveChildView'}
  handleExceptionBegin
  AObj.RemoveChildView(view);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_RemoveAllChildViews(AObj: ICefPanel); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAllChildViews'}
  handleExceptionBegin
  AObj.RemoveAllChildViews();
  handleExceptionEnd
end;


exports
  CefPanel_UnWrap,
  CefPanel_CreatePanel,
  CefPanel_GetAsWindow,
  CefPanel_SetToFillLayout,
  CefPanel_SetToBoxLayout,
  CefPanel_GetLayout,
  CefPanel_GetChildViewCount,
  CefPanel_GetChildViewAt,
  CefPanel_Layout,
  CefPanel_AddChildView,
  CefPanel_AddChildViewAt,
  CefPanel_ReorderChildView,
  CefPanel_RemoveChildView,
  CefPanel_RemoveAllChildViews;