// constructor
function TCoreWebView2ContextMenuItem_Create(const aBaseIntf: ICoreWebView2ContextMenuItem): TCoreWebView2ContextMenuItem; extdecl;
begin
  {$define handleExceptionID := 5800}
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuItem.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2ContextMenuItem_AddAllBrowserEvents(AObj: TCoreWebView2ContextMenuItem; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 5801}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuItem_Initialized(AObj: TCoreWebView2ContextMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 5802}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItem_BaseIntf(ASet: LongBool; AObj: TCoreWebView2ContextMenuItem; AValue: ICoreWebView2ContextMenuItem; var Result: ICoreWebView2ContextMenuItem); extdecl;
begin
  {$define handleExceptionID := 5803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItem_Name(AObj: TCoreWebView2ContextMenuItem; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5804}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItem_Label_(AObj: TCoreWebView2ContextMenuItem; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5805}
  handleExceptionBegin
  StringBufferCreate(AObj.Label_, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuItem_CommandId(AObj: TCoreWebView2ContextMenuItem): integer; extdecl;
begin
  {$define handleExceptionID := 5806}
  handleExceptionBegin
  Result := AObj.CommandId;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItem_ShortcutKeyDescription(AObj: TCoreWebView2ContextMenuItem; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5807}
  handleExceptionBegin
  StringBufferCreate(AObj.ShortcutKeyDescription, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItem_Icon(AObj: TCoreWebView2ContextMenuItem; var Result: IStream); extdecl;
begin
  {$define handleExceptionID := 5808}
  handleExceptionBegin
  Result := AObj.Icon;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuItem_Kind(AObj: TCoreWebView2ContextMenuItem): TWVMenuItemKind; extdecl;
begin
  {$define handleExceptionID := 5809}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuItem_IsEnabled(ASet: LongBool; AObj: TCoreWebView2ContextMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsEnabled := AValue
  end else
    Result := AObj.IsEnabled;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuItem_IsChecked(ASet: LongBool; AObj: TCoreWebView2ContextMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5811}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsChecked := AValue
  end else
    Result := AObj.IsChecked;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuItem_Children(AObj: TCoreWebView2ContextMenuItem; var Result: ICoreWebView2ContextMenuItemCollection); extdecl;
begin
  {$define handleExceptionID := 5812}
  handleExceptionBegin
  Result := AObj.Children;
  handleExceptionEnd
end;

exports
  TCoreWebView2ContextMenuItem_Create,
  TCoreWebView2ContextMenuItem_AddAllBrowserEvents,
  TCoreWebView2ContextMenuItem_Initialized,
  TCoreWebView2ContextMenuItem_BaseIntf,
  TCoreWebView2ContextMenuItem_Name,
  TCoreWebView2ContextMenuItem_Label_,
  TCoreWebView2ContextMenuItem_CommandId,
  TCoreWebView2ContextMenuItem_ShortcutKeyDescription,
  TCoreWebView2ContextMenuItem_Icon,
  TCoreWebView2ContextMenuItem_Kind,
  TCoreWebView2ContextMenuItem_IsEnabled,
  TCoreWebView2ContextMenuItem_IsChecked,
  TCoreWebView2ContextMenuItem_Children;