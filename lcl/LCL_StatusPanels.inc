
//constructor
function StatusPanels_Create(AStatusBar: TStatusBar): TStatusPanels; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TStatusPanels.Create(AStatusBar);
  handleExceptionEnd
end;

//property
function StatusPanels_ItemsForStatusPanel(AIsSet: LongBool; AObj: TStatusPanels; Index: Integer; AValue: TStatusPanel): TStatusPanel; extdecl;
begin
  {$define handleExceptionFuncName :='ItemsForStatusPanel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//property
function StatusPanels_StatusBar(AObj: TStatusPanels): TStatusBar; extdecl;
begin
  {$define handleExceptionFuncName :='StatusBar'}
  handleExceptionBegin
  Result := AObj.StatusBar;
  handleExceptionEnd
end;

//function
function StatusPanels_AddForStatusPanel(AObj: TStatusPanels): TStatusPanel; extdecl;
begin
  {$define handleExceptionFuncName :='AddForStatusPanel'}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function StatusPanels_Class(): TClass; extdecl;
begin
  Result := TStatusPanels;
end;


exports
  StatusPanels_Create,
  StatusPanels_ItemsForStatusPanel,
  StatusPanels_StatusBar,
  StatusPanels_AddForStatusPanel,
  StatusPanels_Class;