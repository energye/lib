// constructor
function TCoreWebView2ContextMenuRequestedEventArgs_Create(const aArgs: ICoreWebView2ContextMenuRequestedEventArgs): TCoreWebView2ContextMenuRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 3400}
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuRequestedEventArgs_Initialized(AObj: TCoreWebView2ContextMenuRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3401}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuRequestedEventArgs_BaseIntf(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2ContextMenuRequestedEventArgs); extdecl;
begin
  {$define handleExceptionID := 3402}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuRequestedEventArgs_MenuItems(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2ContextMenuItemCollection); extdecl;
begin
  {$define handleExceptionID := 3403}
  handleExceptionBegin
  Result := AObj.MenuItems;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuRequestedEventArgs_ContextMenuTarget(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2ContextMenuTarget); extdecl;
begin
  {$define handleExceptionID := 3404}
  handleExceptionBegin
  Result := AObj.ContextMenuTarget;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuRequestedEventArgs_Location(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 3405}
  handleExceptionBegin
  Result := AObj.Location;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuRequestedEventArgs_SelectedCommandId(ASet: LongBool; AObj: TCoreWebView2ContextMenuRequestedEventArgs; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 3406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedCommandId := AValue
  end else
    Result := AObj.SelectedCommandId;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuRequestedEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2ContextMenuRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuRequestedEventArgs_Deferral(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 3408}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2ContextMenuRequestedEventArgs_Create,
  TCoreWebView2ContextMenuRequestedEventArgs_Initialized,
  TCoreWebView2ContextMenuRequestedEventArgs_BaseIntf,
  TCoreWebView2ContextMenuRequestedEventArgs_MenuItems,
  TCoreWebView2ContextMenuRequestedEventArgs_ContextMenuTarget,
  TCoreWebView2ContextMenuRequestedEventArgs_Location,
  TCoreWebView2ContextMenuRequestedEventArgs_SelectedCommandId,
  TCoreWebView2ContextMenuRequestedEventArgs_Handled,
  TCoreWebView2ContextMenuRequestedEventArgs_Deferral;