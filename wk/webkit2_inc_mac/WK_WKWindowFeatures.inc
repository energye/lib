
//constructor
function WKWindowFeatures_Create(aData: WKWindowFeatures): TWKWindowFeatures; extdecl;
begin
  handleExceptionBegin
  Result := TWKWindowFeatures.Create(aData);
  handleExceptionEnd
end;

//function
function WKWindowFeatures_Data(AObj: TWKWindowFeatures): WKWindowFeatures; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_MenuBarVisibility(AObj: TWKWindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MenuBarVisibility();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_StatusBarVisibility(AObj: TWKWindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StatusBarVisibility();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_ToolbarsVisibility(AObj: TWKWindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ToolbarsVisibility();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_AllowsResizing(AObj: TWKWindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowsResizing();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_X(AObj: TWKWindowFeatures): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.X();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_Y(AObj: TWKWindowFeatures): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Y();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_Width(AObj: TWKWindowFeatures): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width();
  handleExceptionEnd
end;

//function
function WKWindowFeatures_Height(AObj: TWKWindowFeatures): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Height();
  handleExceptionEnd
end;


exports
  WKWindowFeatures_Create,
  WKWindowFeatures_Data,
  WKWindowFeatures_MenuBarVisibility,
  WKWindowFeatures_StatusBarVisibility,
  WKWindowFeatures_ToolbarsVisibility,
  WKWindowFeatures_AllowsResizing,
  WKWindowFeatures_X,
  WKWindowFeatures_Y,
  WKWindowFeatures_Width,
  WKWindowFeatures_Height;