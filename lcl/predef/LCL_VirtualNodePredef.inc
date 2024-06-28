
procedure VirtualNode_Create(out Result: PVirtualNode); extdecl;
var
  RetNode: TVirtualNode;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := @RetNode;
  handleExceptionEnd
end;

function VirtualNode_Index(AIsSet: LongBool; AObj: PVirtualNode; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionFuncName :='Index'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Index := AValue;
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

function VirtualNode_ChildCount(AIsSet: LongBool; AObj: PVirtualNode; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionFuncName :='ChildCount'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChildCount := AValue;
  end else
    Result := AObj.ChildCount;
  handleExceptionEnd
end;

function VirtualNode_NodeHeight(AIsSet: LongBool; AObj: PVirtualNode; AValue: Word): Word; extdecl;
begin
  {$define handleExceptionFuncName :='NodeHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeHeight := AValue;
  end else
    Result := AObj.NodeHeight;
  handleExceptionEnd
end;

function VirtualNode_States(AIsSet: LongBool; AObj: PVirtualNode; AValue: TVirtualNodeStates): TVirtualNodeStates; extdecl;
begin
  {$define handleExceptionFuncName :='States'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.States := AValue;
  end else
    Result := AObj.States;
  handleExceptionEnd
end;

function VirtualNode_Align(AIsSet: LongBool; AObj: PVirtualNode; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionFuncName :='Align'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Align := AValue;
  end else
    Result := AObj.Align;
  handleExceptionEnd
end;

function VirtualNode_CheckState(AIsSet: LongBool; AObj: PVirtualNode; AValue: TCheckState): TCheckState; extdecl;
begin
  {$define handleExceptionFuncName :='CheckState'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckState := AValue;
  end else
    Result := AObj.CheckState;
  handleExceptionEnd
end;

function VirtualNode_CheckType(AIsSet: LongBool; AObj: PVirtualNode; AValue: TCheckType): TCheckType; extdecl;
begin
  {$define handleExceptionFuncName :='CheckType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckType := AValue;
  end else
    Result := AObj.CheckType;
  handleExceptionEnd
end;

function VirtualNode_Dummy(AIsSet: LongBool; AObj: PVirtualNode; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionFuncName :='Dummy'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Dummy := AValue;
  end else
    Result := AObj.Dummy;
  handleExceptionEnd
end;

function VirtualNode_TotalCount(AIsSet: LongBool; AObj: PVirtualNode; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionFuncName :='TotalCount'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TotalCount := AValue;
  end else
    Result := AObj.TotalCount;
  handleExceptionEnd
end;

function VirtualNode_TotalHeight(AIsSet: LongBool; AObj: PVirtualNode; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionFuncName :='TotalHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TotalHeight := AValue;
  end else
    Result := AObj.TotalHeight;
  handleExceptionEnd
end;

procedure VirtualNode_Parent(AIsSet: LongBool; AObj: PVirtualNode; AValue: PVirtualNode; out Result: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='Parent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Parent := AValue;
  end else
    Result := AObj.Parent;
  handleExceptionEnd
end;

procedure VirtualNode_PrevSibling(AIsSet: LongBool; AObj: PVirtualNode; AValue: PVirtualNode; out Result: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='PrevSibling'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PrevSibling := AValue;
  end else
    Result := AObj.PrevSibling;
  handleExceptionEnd
end;

procedure VirtualNode_NextSibling(AIsSet: LongBool; AObj: PVirtualNode; AValue: PVirtualNode; out Result: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='NextSibling'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NextSibling := AValue;
  end else
    Result := AObj.NextSibling;
  handleExceptionEnd
end;

procedure VirtualNode_FirstChild(AIsSet: LongBool; AObj: PVirtualNode; AValue: PVirtualNode; out Result: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='FirstChild'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FirstChild := AValue;
  end else
    Result := AObj.FirstChild;
  handleExceptionEnd
end;

procedure VirtualNode_LastChild(AIsSet: LongBool; AObj: PVirtualNode; AValue: PVirtualNode; out Result: PVirtualNode); extdecl;
begin
  {$define handleExceptionFuncName :='LastChild'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LastChild := AValue;
  end else
    Result := AObj.LastChild;
  handleExceptionEnd
end;

procedure VirtualNode_Data(AIsSet: LongBool; AObj: PVirtualNode; AValue: Pointer; ATotalInternalDataSize: Cardinal; out Result: Pointer); extdecl;
var
  Data: ^Pointer;
begin
  {$define handleExceptionFuncName :='Data'}
  handleExceptionBegin
  if AIsSet then
  begin
    Data := Pointer(PByte(@AObj.Data) + ATotalInternalDataSize);
    Data^ := AValue;
  end else
  begin
    Data := Pointer(PByte(@AObj.Data));
    Result := Data^;
  end;
  handleExceptionEnd
end;

exports
  VirtualNode_Create,
  VirtualNode_Index,
  VirtualNode_ChildCount,
  VirtualNode_NodeHeight,
  VirtualNode_States,
  VirtualNode_Align,
  VirtualNode_CheckState,
  VirtualNode_CheckType,
  VirtualNode_Dummy,
  VirtualNode_TotalCount,
  VirtualNode_TotalHeight,
  VirtualNode_Parent,
  VirtualNode_PrevSibling,
  VirtualNode_NextSibling,
  VirtualNode_FirstChild,
  VirtualNode_LastChild,
  VirtualNode_Data;
