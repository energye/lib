// constructor
function TToolWindow_Create(TheOwner: TComponent): TToolWindow; extdecl;
begin
  {$define handleExceptionID := 10000}
  handleExceptionBegin
  Result := TToolWindow.Create(TheOwner);
  handleExceptionEnd
end;

// procedure
procedure TToolWindow_BeginUpdate(AObj: TToolWindow); extdecl;
begin
  {$define handleExceptionID := 10001}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TToolWindow_EndUpdate(AObj: TToolWindow); extdecl;
begin
  {$define handleExceptionID := 10002}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// property
function TToolWindow_EdgeBorders(ASet: LongBool; AObj: TToolWindow; AValue: TEdgeBorders): TEdgeBorders; extdecl;
begin
  {$define handleExceptionID := 10003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EdgeBorders := AValue
  end else
    Result := AObj.EdgeBorders;
  handleExceptionEnd
end;

// property
function TToolWindow_EdgeInner(ASet: LongBool; AObj: TToolWindow; AValue: TEdgeStyle): TEdgeStyle; extdecl;
begin
  {$define handleExceptionID := 10004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EdgeInner := AValue
  end else
    Result := AObj.EdgeInner;
  handleExceptionEnd
end;

// property
function TToolWindow_EdgeOuter(ASet: LongBool; AObj: TToolWindow; AValue: TEdgeStyle): TEdgeStyle; extdecl;
begin
  {$define handleExceptionID := 10005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EdgeOuter := AValue
  end else
    Result := AObj.EdgeOuter;
  handleExceptionEnd
end;

function TToolWindow_TClass(): TClass; extdecl;
begin
  Result := TToolWindow;
end;

exports
  TToolWindow_Create,
  TToolWindow_BeginUpdate,
  TToolWindow_EndUpdate,
  TToolWindow_EdgeBorders,
  TToolWindow_EdgeInner,
  TToolWindow_EdgeOuter,
  TToolWindow_TClass;