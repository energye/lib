// constructor
function TCefPanelRef_Create(data: Pointer; out IntfPanel: ICefPanel; out IntfView: ICefView): TCefPanelRef; extdecl;
begin
  {$define handleExceptionID := 24300}
  handleExceptionBegin
  Result := TCefPanelRef.Create(data);
  IntfPanel := Result as ICefPanel;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
procedure TCefPanelRef_GetAsWindow(AObj: ICefPanel; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 24301}
  handleExceptionBegin
  Result := AObj.GetAsWindow();
  handleExceptionEnd
end;

// function
procedure TCefPanelRef_SetToFillLayout(AObj: ICefPanel; var Result: ICefFillLayout); extdecl;
begin
  {$define handleExceptionID := 24302}
  handleExceptionBegin
  Result := AObj.SetToFillLayout();
  handleExceptionEnd
end;

// function
procedure TCefPanelRef_SetToBoxLayout(AObj: ICefPanel; var settings: TCefBoxLayoutSettingsPtr; var Result: ICefBoxLayout); extdecl;
var
  Insettings: TCefBoxLayoutSettings;
begin
  {$define handleExceptionID := 24303}
  handleExceptionBegin
  Insettings := TCefBoxLayoutSettingsToPas(settings);
  Result := AObj.SetToBoxLayout(Insettings);
  handleExceptionEnd
end;

// function
procedure TCefPanelRef_GetLayout(AObj: ICefPanel; var Result: ICefLayout); extdecl;
begin
  {$define handleExceptionID := 24304}
  handleExceptionBegin
  Result := AObj.GetLayout();
  handleExceptionEnd
end;

// function
function TCefPanelRef_GetChildViewCount(AObj: ICefPanel): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 24305}
  handleExceptionBegin
  Result := AObj.GetChildViewCount();
  handleExceptionEnd
end;

// function
procedure TCefPanelRef_GetChildViewAt(AObj: ICefPanel; index: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 24306}
  handleExceptionBegin
  Result := AObj.GetChildViewAt(index);
  handleExceptionEnd
end;

// function static
procedure TCefPanelRef_UnWrapWithPointer(data: Pointer; var Result: ICefPanel); extdecl;
begin
  Result := TCefPanelRef.UnWrap(data);
end;

// function static
procedure TCefPanelRef_CreatePanel(const delegate: ICefPanelDelegate; var Result: ICefPanel); extdecl;
begin
  Result := TCefPanelRef.CreatePanel(delegate);
end;

// procedure
procedure TCefPanelRef_Layout(AObj: ICefPanel); extdecl;
begin
  {$define handleExceptionID := 24307}
  handleExceptionBegin
  AObj.Layout();
  handleExceptionEnd
end;

// procedure
procedure TCefPanelRef_AddChildView(AObj: ICefPanel; const view: ICefView); extdecl;
begin
  {$define handleExceptionID := 24308}
  handleExceptionBegin
  AObj.AddChildView(view);
  handleExceptionEnd
end;

// procedure
procedure TCefPanelRef_AddChildViewAt(AObj: ICefPanel; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionID := 24309}
  handleExceptionBegin
  AObj.AddChildViewAt(view, index);
  handleExceptionEnd
end;

// procedure
procedure TCefPanelRef_ReorderChildView(AObj: ICefPanel; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionID := 24310}
  handleExceptionBegin
  AObj.ReorderChildView(view, index);
  handleExceptionEnd
end;

// procedure
procedure TCefPanelRef_RemoveChildView(AObj: ICefPanel; const view: ICefView); extdecl;
begin
  {$define handleExceptionID := 24311}
  handleExceptionBegin
  AObj.RemoveChildView(view);
  handleExceptionEnd
end;

// procedure
procedure TCefPanelRef_RemoveAllChildViews(AObj: ICefPanel); extdecl;
begin
  {$define handleExceptionID := 24312}
  handleExceptionBegin
  AObj.RemoveAllChildViews();
  handleExceptionEnd
end;

exports
  TCefPanelRef_Create,
  TCefPanelRef_GetAsWindow,
  TCefPanelRef_SetToFillLayout,
  TCefPanelRef_SetToBoxLayout,
  TCefPanelRef_GetLayout,
  TCefPanelRef_GetChildViewCount,
  TCefPanelRef_GetChildViewAt,
  TCefPanelRef_UnWrapWithPointer,
  TCefPanelRef_CreatePanel,
  TCefPanelRef_Layout,
  TCefPanelRef_AddChildView,
  TCefPanelRef_AddChildViewAt,
  TCefPanelRef_ReorderChildView,
  TCefPanelRef_RemoveChildView,
  TCefPanelRef_RemoveAllChildViews;