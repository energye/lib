
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
  handleExceptionBegin
  Result := AObj.GetAsWindow();
  handleExceptionEnd
end;

//function
procedure CefPanel_SetToFillLayout(AObj: ICefPanel; var Result: ICefFillLayout); extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetToFillLayout();
  handleExceptionEnd
end;

//function
procedure CefPanel_SetToBoxLayout(AObj: ICefPanel; const settings: TCefBoxLayoutSettings; var Result: ICefBoxLayout); extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetToBoxLayout(settings);
  handleExceptionEnd
end;

//function
procedure CefPanel_GetLayout(AObj: ICefPanel; var Result: ICefLayout); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLayout();
  handleExceptionEnd
end;

//function
function CefPanel_GetChildViewCount(AObj: ICefPanel): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChildViewCount();
  handleExceptionEnd
end;

//function
procedure CefPanel_GetChildViewAt(AObj: ICefPanel; index: Integer; var Result: ICefView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChildViewAt(index);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_Layout(AObj: ICefPanel); extdecl;
begin
  handleExceptionBegin
  AObj.Layout();
  handleExceptionEnd
end;

//procedure
procedure CefPanel_AddChildView(AObj: ICefPanel; const view: ICefView); extdecl;
begin
  handleExceptionBegin
  AObj.AddChildView(view);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_AddChildViewAt(AObj: ICefPanel; const view: ICefView; index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AddChildViewAt(view, index);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_ReorderChildView(AObj: ICefPanel; const view: ICefView; index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ReorderChildView(view, index);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_RemoveChildView(AObj: ICefPanel; const view: ICefView); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveChildView(view);
  handleExceptionEnd
end;

//procedure
procedure CefPanel_RemoveAllChildViews(AObj: ICefPanel); extdecl;
begin
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