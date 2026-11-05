// constructor
function TVirtualNodeWrap_Create(): TVirtualNodeWrap; extdecl;
begin
  {$define handleExceptionID := 31000}
  handleExceptionBegin
  Result := TVirtualNodeWrap.Create();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_Data(AObj: TVirtualNodeWrap): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 31001}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_Index(AObj: TVirtualNodeWrap): cardinal; extdecl;
begin
  {$define handleExceptionID := 31002}
  handleExceptionBegin
  Result := AObj.Index();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_ChildCount(AObj: TVirtualNodeWrap): cardinal; extdecl;
begin
  {$define handleExceptionID := 31003}
  handleExceptionBegin
  Result := AObj.ChildCount();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_NodeHeight(AObj: TVirtualNodeWrap): word; extdecl;
begin
  {$define handleExceptionID := 31004}
  handleExceptionBegin
  Result := AObj.NodeHeight();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_States(AObj: TVirtualNodeWrap): TVirtualNodeStates; extdecl;
begin
  {$define handleExceptionID := 31005}
  handleExceptionBegin
  Result := AObj.States();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_Align(AObj: TVirtualNodeWrap): byte; extdecl;
begin
  {$define handleExceptionID := 31006}
  handleExceptionBegin
  Result := AObj.Align();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_CheckState(AObj: TVirtualNodeWrap): TCheckState; extdecl;
begin
  {$define handleExceptionID := 31007}
  handleExceptionBegin
  Result := AObj.CheckState();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_CheckType(AObj: TVirtualNodeWrap): TCheckType; extdecl;
begin
  {$define handleExceptionID := 31008}
  handleExceptionBegin
  Result := AObj.CheckType();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_Dummy(AObj: TVirtualNodeWrap): byte; extdecl;
begin
  {$define handleExceptionID := 31009}
  handleExceptionBegin
  Result := AObj.Dummy();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_TotalCount(AObj: TVirtualNodeWrap): cardinal; extdecl;
begin
  {$define handleExceptionID := 31010}
  handleExceptionBegin
  Result := AObj.TotalCount();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_TotalHeight(AObj: TVirtualNodeWrap): cardinal; extdecl;
begin
  {$define handleExceptionID := 31011}
  handleExceptionBegin
  Result := AObj.TotalHeight();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_Parent(AObj: TVirtualNodeWrap): TVirtualNodeWrap; extdecl;
begin
  {$define handleExceptionID := 31012}
  handleExceptionBegin
  Result := AObj.Parent();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_PrevSibling(AObj: TVirtualNodeWrap): TVirtualNodeWrap; extdecl;
begin
  {$define handleExceptionID := 31013}
  handleExceptionBegin
  Result := AObj.PrevSibling();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_NextSibling(AObj: TVirtualNodeWrap): TVirtualNodeWrap; extdecl;
begin
  {$define handleExceptionID := 31014}
  handleExceptionBegin
  Result := AObj.NextSibling();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_FirstChild(AObj: TVirtualNodeWrap): TVirtualNodeWrap; extdecl;
begin
  {$define handleExceptionID := 31015}
  handleExceptionBegin
  Result := AObj.FirstChild();
  handleExceptionEnd
end;

// function
function TVirtualNodeWrap_LastChild(AObj: TVirtualNodeWrap): TVirtualNodeWrap; extdecl;
begin
  {$define handleExceptionID := 31016}
  handleExceptionBegin
  Result := AObj.LastChild();
  handleExceptionEnd
end;

// function static
function TVirtualNodeWrap_UnWrap(const AData: PVirtualNode): TVirtualNodeWrap; extdecl;
begin
  Result := TVirtualNodeWrap.UnWrap(AData);
end;

exports
  TVirtualNodeWrap_Create,
  TVirtualNodeWrap_Data,
  TVirtualNodeWrap_Index,
  TVirtualNodeWrap_ChildCount,
  TVirtualNodeWrap_NodeHeight,
  TVirtualNodeWrap_States,
  TVirtualNodeWrap_Align,
  TVirtualNodeWrap_CheckState,
  TVirtualNodeWrap_CheckType,
  TVirtualNodeWrap_Dummy,
  TVirtualNodeWrap_TotalCount,
  TVirtualNodeWrap_TotalHeight,
  TVirtualNodeWrap_Parent,
  TVirtualNodeWrap_PrevSibling,
  TVirtualNodeWrap_NextSibling,
  TVirtualNodeWrap_FirstChild,
  TVirtualNodeWrap_LastChild,
  TVirtualNodeWrap_UnWrap;