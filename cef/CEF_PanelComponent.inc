
//constructor
function CEFPanelComponent_Create(aOwner: TComponent): TCEFPanelComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFPanelComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
procedure CEFPanelComponent_AsWindow(AObj: TCEFPanelComponent; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionFuncName :='AsWindow'}
  handleExceptionBegin
  Result := AObj.AsWindow;
  handleExceptionEnd
end;

//property
function CEFPanelComponent_ChildViewCount(AObj: TCEFPanelComponent): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='ChildViewCount'}
  handleExceptionBegin
  Result := AObj.ChildViewCount;
  handleExceptionEnd
end;

//function
procedure CEFPanelComponent_SetToFillLayout(AObj: TCEFPanelComponent; var Result: ICefFillLayout); extdecl;
begin
  {$define handleExceptionFuncName :='SetToFillLayout'}
  handleExceptionBegin
  Result := AObj.SetToFillLayout();
  handleExceptionEnd
end;

//function
procedure CEFPanelComponent_SetToBoxLayout(AObj: TCEFPanelComponent; const settings: TCefBoxLayoutSettings; var Result: ICefBoxLayout); extdecl;
begin
  {$define handleExceptionFuncName :='SetToBoxLayout'}
  handleExceptionBegin
  Result := AObj.SetToBoxLayout(settings);
  handleExceptionEnd
end;

//function
procedure CEFPanelComponent_GetLayout(AObj: TCEFPanelComponent; var Result: ICefLayout); extdecl;
begin
  {$define handleExceptionFuncName :='GetLayout'}
  handleExceptionBegin
  Result := AObj.GetLayout();
  handleExceptionEnd
end;

//function
procedure CEFPanelComponent_GetChildViewAt(AObj: TCEFPanelComponent; index: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='GetChildViewAt'}
  handleExceptionBegin
  Result := AObj.GetChildViewAt(index);
  handleExceptionEnd
end;

//procedure
procedure CEFPanelComponent_CreatePanel(AObj: TCEFPanelComponent); extdecl;
begin
  {$define handleExceptionFuncName :='CreatePanel'}
  handleExceptionBegin
  AObj.CreatePanel();
  handleExceptionEnd
end;

//procedure
procedure CEFPanelComponent_Layout(AObj: TCEFPanelComponent); extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  AObj.Layout();
  handleExceptionEnd
end;

//procedure
procedure CEFPanelComponent_AddChildView(AObj: TCEFPanelComponent; const view: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='AddChildView'}
  handleExceptionBegin
  AObj.AddChildView(view);
  handleExceptionEnd
end;

//procedure
procedure CEFPanelComponent_AddChildViewAt(AObj: TCEFPanelComponent; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='AddChildViewAt'}
  handleExceptionBegin
  AObj.AddChildViewAt(view, index);
  handleExceptionEnd
end;

//procedure
procedure CEFPanelComponent_ReorderChildView(AObj: TCEFPanelComponent; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='ReorderChildView'}
  handleExceptionBegin
  AObj.ReorderChildView(view, index);
  handleExceptionEnd
end;

//procedure
procedure CEFPanelComponent_RemoveChildView(AObj: TCEFPanelComponent; const view: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveChildView'}
  handleExceptionBegin
  AObj.RemoveChildView(view);
  handleExceptionEnd
end;

//procedure
procedure CEFPanelComponent_RemoveAllChildViews(AObj: TCEFPanelComponent); extdecl;
begin
  {$define handleExceptionFuncName :='RemoveAllChildViews'}
  handleExceptionBegin
  AObj.RemoveAllChildViews();
  handleExceptionEnd
end;


exports
  CEFPanelComponent_Create,
  CEFPanelComponent_AsWindow,
  CEFPanelComponent_ChildViewCount,
  CEFPanelComponent_SetToFillLayout,
  CEFPanelComponent_SetToBoxLayout,
  CEFPanelComponent_GetLayout,
  CEFPanelComponent_GetChildViewAt,
  CEFPanelComponent_CreatePanel,
  CEFPanelComponent_Layout,
  CEFPanelComponent_AddChildView,
  CEFPanelComponent_AddChildViewAt,
  CEFPanelComponent_ReorderChildView,
  CEFPanelComponent_RemoveChildView,
  CEFPanelComponent_RemoveAllChildViews;