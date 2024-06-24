
//constructor
function ToolWindow_Create(TheOwner: TComponent): TToolWindow; extdecl;
begin
  handleExceptionBegin
  Result := TToolWindow.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ToolWindow_EdgeBorders(AIsSet: LongBool; AObj: TToolWindow; AValue: TEdgeBorders): TEdgeBorders; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EdgeBorders := AValue;
  end else
    Result := AObj.EdgeBorders;
  handleExceptionEnd
end;

//property
function ToolWindow_EdgeInner(AIsSet: LongBool; AObj: TToolWindow; AValue: TEdgeStyle): TEdgeStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EdgeInner := AValue;
  end else
    Result := AObj.EdgeInner;
  handleExceptionEnd
end;

//property
function ToolWindow_EdgeOuter(AIsSet: LongBool; AObj: TToolWindow; AValue: TEdgeStyle): TEdgeStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EdgeOuter := AValue;
  end else
    Result := AObj.EdgeOuter;
  handleExceptionEnd
end;

//function
function ToolWindow_Class(): TClass; extdecl;
begin
  Result := TToolWindow;
end;

//procedure
procedure ToolWindow_BeginUpdate(AObj: TToolWindow); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure ToolWindow_EndUpdate(AObj: TToolWindow); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;


exports
  ToolWindow_Create,
  ToolWindow_EdgeBorders,
  ToolWindow_EdgeInner,
  ToolWindow_EdgeOuter,
  ToolWindow_Class,
  ToolWindow_BeginUpdate,
  ToolWindow_EndUpdate;