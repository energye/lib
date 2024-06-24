
//constructor
function CoreWebView2ContextMenuRequestedEventArgs_Create(const aArgs: ICoreWebView2ContextMenuRequestedEventArgs): TCoreWebView2ContextMenuRequestedEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuRequestedEventArgs_Initialized(AObj: TCoreWebView2ContextMenuRequestedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuRequestedEventArgs_BaseIntf(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2ContextMenuRequestedEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuRequestedEventArgs_MenuItems(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2ContextMenuItemCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.MenuItems;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuRequestedEventArgs_ContextMenuTarget(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2ContextMenuTarget); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ContextMenuTarget;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuRequestedEventArgs_Location(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Location;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuRequestedEventArgs_SelectedCommandId(AIsSet: LongBool; AObj: TCoreWebView2ContextMenuRequestedEventArgs; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedCommandId := AValue;
  end else
    Result := AObj.SelectedCommandId;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuRequestedEventArgs_Handled(AIsSet: LongBool; AObj: TCoreWebView2ContextMenuRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handled := AValue;
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuRequestedEventArgs_Deferral(AObj: TCoreWebView2ContextMenuRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;


exports
  CoreWebView2ContextMenuRequestedEventArgs_Create,
  CoreWebView2ContextMenuRequestedEventArgs_Initialized,
  CoreWebView2ContextMenuRequestedEventArgs_BaseIntf,
  CoreWebView2ContextMenuRequestedEventArgs_MenuItems,
  CoreWebView2ContextMenuRequestedEventArgs_ContextMenuTarget,
  CoreWebView2ContextMenuRequestedEventArgs_Location,
  CoreWebView2ContextMenuRequestedEventArgs_SelectedCommandId,
  CoreWebView2ContextMenuRequestedEventArgs_Handled,
  CoreWebView2ContextMenuRequestedEventArgs_Deferral;