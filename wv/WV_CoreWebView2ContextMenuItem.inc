
//constructor
function CoreWebView2ContextMenuItem_Create(const aBaseIntf: ICoreWebView2ContextMenuItem): TCoreWebView2ContextMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuItem.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_Initialized(AObj: TCoreWebView2ContextMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuItem_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2ContextMenuItem; AValue: ICoreWebView2ContextMenuItem; var Result: ICoreWebView2ContextMenuItem); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_Name(AObj: TCoreWebView2ContextMenuItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_Label(AObj: TCoreWebView2ContextMenuItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Label_);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_CommandId(AObj: TCoreWebView2ContextMenuItem): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CommandId;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_ShortcutKeyDescription(AObj: TCoreWebView2ContextMenuItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ShortcutKeyDescription);
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuItem_Icon(AObj: TCoreWebView2ContextMenuItem; var Result: IStream); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Icon;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_Kind(AObj: TCoreWebView2ContextMenuItem): TWVMenuItemKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_IsEnabled(AIsSet: LongBool; AObj: TCoreWebView2ContextMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsEnabled := AValue;
  end else
    Result := AObj.IsEnabled;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuItem_IsChecked(AIsSet: LongBool; AObj: TCoreWebView2ContextMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsChecked := AValue;
  end else
    Result := AObj.IsChecked;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuItem_Children(AObj: TCoreWebView2ContextMenuItem; var Result: ICoreWebView2ContextMenuItemCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Children;
  handleExceptionEnd
end;

//function
function CoreWebView2ContextMenuItem_AddAllBrowserEvents(AObj: TCoreWebView2ContextMenuItem; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;


exports
  CoreWebView2ContextMenuItem_Create,
  CoreWebView2ContextMenuItem_Initialized,
  CoreWebView2ContextMenuItem_BaseIntf,
  CoreWebView2ContextMenuItem_Name,
  CoreWebView2ContextMenuItem_Label,
  CoreWebView2ContextMenuItem_CommandId,
  CoreWebView2ContextMenuItem_ShortcutKeyDescription,
  CoreWebView2ContextMenuItem_Icon,
  CoreWebView2ContextMenuItem_Kind,
  CoreWebView2ContextMenuItem_IsEnabled,
  CoreWebView2ContextMenuItem_IsChecked,
  CoreWebView2ContextMenuItem_Children,
  CoreWebView2ContextMenuItem_AddAllBrowserEvents;