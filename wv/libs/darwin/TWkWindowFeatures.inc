// constructor
function TWkWindowFeatures_Create(AData: WKWindowFeatures): TWkWindowFeatures; extdecl;
begin
  {$define handleExceptionID := 3500}
  handleExceptionBegin
  Result := TWkWindowFeatures.Create(AData);
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_Data(AObj: TWkWindowFeatures): WKWindowFeatures; extdecl;
begin
  {$define handleExceptionID := 3501}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_MenuBarVisibility(AObj: TWkWindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 3502}
  handleExceptionBegin
  Result := AObj.MenuBarVisibility();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_StatusBarVisibility(AObj: TWkWindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 3503}
  handleExceptionBegin
  Result := AObj.StatusBarVisibility();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_ToolbarsVisibility(AObj: TWkWindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 3504}
  handleExceptionBegin
  Result := AObj.ToolbarsVisibility();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_AllowsResizing(AObj: TWkWindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 3505}
  handleExceptionBegin
  Result := AObj.AllowsResizing();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_X(AObj: TWkWindowFeatures): Integer; extdecl;
begin
  {$define handleExceptionID := 3506}
  handleExceptionBegin
  Result := AObj.X();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_Y(AObj: TWkWindowFeatures): Integer; extdecl;
begin
  {$define handleExceptionID := 3507}
  handleExceptionBegin
  Result := AObj.Y();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_Width(AObj: TWkWindowFeatures): Integer; extdecl;
begin
  {$define handleExceptionID := 3508}
  handleExceptionBegin
  Result := AObj.Width();
  handleExceptionEnd
end;

// function
function TWkWindowFeatures_Height(AObj: TWkWindowFeatures): Integer; extdecl;
begin
  {$define handleExceptionID := 3509}
  handleExceptionBegin
  Result := AObj.Height();
  handleExceptionEnd
end;

// procedure
procedure TWkWindowFeatures_Release(AObj: TWkWindowFeatures); extdecl;
begin
  {$define handleExceptionID := 3510}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkWindowFeatures_Create,
  TWkWindowFeatures_Data,
  TWkWindowFeatures_MenuBarVisibility,
  TWkWindowFeatures_StatusBarVisibility,
  TWkWindowFeatures_ToolbarsVisibility,
  TWkWindowFeatures_AllowsResizing,
  TWkWindowFeatures_X,
  TWkWindowFeatures_Y,
  TWkWindowFeatures_Width,
  TWkWindowFeatures_Height,
  TWkWindowFeatures_Release;