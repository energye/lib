// constructor
function TStatusPanels_Create(AStatusBar: TStatusBar): TStatusPanels; extdecl;
begin
  {$define handleExceptionID := 13600}
  handleExceptionBegin
  Result := TStatusPanels.Create(AStatusBar);
  handleExceptionEnd
end;

// function
function TStatusPanels_AddToStatusPanel(AObj: TStatusPanels): TStatusPanel; extdecl;
begin
  {$define handleExceptionID := 13601}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// property
function TStatusPanels_ItemsWithIntToStatusPanel(ASet: LongBool; AObj: TStatusPanels; Index: Integer; AValue: TStatusPanel): TStatusPanel; extdecl;
begin
  {$define handleExceptionID := 13602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TStatusPanels_StatusBar(AObj: TStatusPanels): TStatusBar; extdecl;
begin
  {$define handleExceptionID := 13603}
  handleExceptionBegin
  Result := AObj.StatusBar;
  handleExceptionEnd
end;

exports
  TStatusPanels_Create,
  TStatusPanels_AddToStatusPanel,
  TStatusPanels_ItemsWithIntToStatusPanel,
  TStatusPanels_StatusBar;