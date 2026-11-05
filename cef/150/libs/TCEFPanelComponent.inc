// constructor
function TCEFPanelComponent_Create(AOwner: TComponent; out IntfPanelDelegateEvents: ICefPanelDelegateEvents; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFPanelComponent; extdecl;
begin
  {$define handleExceptionID := 9200}
  handleExceptionBegin
  Result := TCEFPanelComponent.Create(AOwner);
  IntfPanelDelegateEvents := Result as ICefPanelDelegateEvents;
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// function
procedure TCEFPanelComponent_SetToFillLayout(AObj: TCEFPanelComponent; var Result: ICefFillLayout); extdecl;
begin
  {$define handleExceptionID := 9201}
  handleExceptionBegin
  Result := AObj.SetToFillLayout();
  handleExceptionEnd
end;

// function
procedure TCEFPanelComponent_SetToBoxLayout(AObj: TCEFPanelComponent; var settings: TCefBoxLayoutSettingsPtr; var Result: ICefBoxLayout); extdecl;
var
  Insettings: TCefBoxLayoutSettings;
begin
  {$define handleExceptionID := 9202}
  handleExceptionBegin
  Insettings := TCefBoxLayoutSettingsToPas(settings);
  Result := AObj.SetToBoxLayout(Insettings);
  handleExceptionEnd
end;

// function
procedure TCEFPanelComponent_GetLayout(AObj: TCEFPanelComponent; var Result: ICefLayout); extdecl;
begin
  {$define handleExceptionID := 9203}
  handleExceptionBegin
  Result := AObj.GetLayout();
  handleExceptionEnd
end;

// function
procedure TCEFPanelComponent_GetChildViewAt(AObj: TCEFPanelComponent; index: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 9204}
  handleExceptionBegin
  Result := AObj.GetChildViewAt(index);
  handleExceptionEnd
end;

// procedure
procedure TCEFPanelComponent_CreatePanel(AObj: TCEFPanelComponent); extdecl;
begin
  {$define handleExceptionID := 9205}
  handleExceptionBegin
  AObj.CreatePanel();
  handleExceptionEnd
end;

// procedure
procedure TCEFPanelComponent_Layout(AObj: TCEFPanelComponent); extdecl;
begin
  {$define handleExceptionID := 9206}
  handleExceptionBegin
  AObj.Layout();
  handleExceptionEnd
end;

// procedure
procedure TCEFPanelComponent_AddChildView(AObj: TCEFPanelComponent; const view: ICefView); extdecl;
begin
  {$define handleExceptionID := 9207}
  handleExceptionBegin
  AObj.AddChildView(view);
  handleExceptionEnd
end;

// procedure
procedure TCEFPanelComponent_AddChildViewAt(AObj: TCEFPanelComponent; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionID := 9208}
  handleExceptionBegin
  AObj.AddChildViewAt(view, index);
  handleExceptionEnd
end;

// procedure
procedure TCEFPanelComponent_ReorderChildView(AObj: TCEFPanelComponent; const view: ICefView; index: Integer); extdecl;
begin
  {$define handleExceptionID := 9209}
  handleExceptionBegin
  AObj.ReorderChildView(view, index);
  handleExceptionEnd
end;

// procedure
procedure TCEFPanelComponent_RemoveChildView(AObj: TCEFPanelComponent; const view: ICefView); extdecl;
begin
  {$define handleExceptionID := 9210}
  handleExceptionBegin
  AObj.RemoveChildView(view);
  handleExceptionEnd
end;

// procedure
procedure TCEFPanelComponent_RemoveAllChildViews(AObj: TCEFPanelComponent); extdecl;
begin
  {$define handleExceptionID := 9211}
  handleExceptionBegin
  AObj.RemoveAllChildViews();
  handleExceptionEnd
end;

// property
procedure TCEFPanelComponent_AsWindow(AObj: TCEFPanelComponent; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 9212}
  handleExceptionBegin
  Result := AObj.AsWindow;
  handleExceptionEnd
end;

// property
function TCEFPanelComponent_ChildViewCount(AObj: TCEFPanelComponent): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 9213}
  handleExceptionBegin
  Result := AObj.ChildViewCount;
  handleExceptionEnd
end;

exports
  TCEFPanelComponent_Create,
  TCEFPanelComponent_SetToFillLayout,
  TCEFPanelComponent_SetToBoxLayout,
  TCEFPanelComponent_GetLayout,
  TCEFPanelComponent_GetChildViewAt,
  TCEFPanelComponent_CreatePanel,
  TCEFPanelComponent_Layout,
  TCEFPanelComponent_AddChildView,
  TCEFPanelComponent_AddChildViewAt,
  TCEFPanelComponent_ReorderChildView,
  TCEFPanelComponent_RemoveChildView,
  TCEFPanelComponent_RemoveAllChildViews,
  TCEFPanelComponent_AsWindow,
  TCEFPanelComponent_ChildViewCount;