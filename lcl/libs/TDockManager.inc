// function
function TDockManager_GetDockEdge(AObj: TDockManager; ADockObject: TDragDockObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 23300}
  handleExceptionBegin
  Result := AObj.GetDockEdge(ADockObject);
  handleExceptionEnd
end;

// function
function TDockManager_AutoFreeByControl(AObj: TDockManager): LongBool; extdecl;
begin
  {$define handleExceptionID := 23301}
  handleExceptionBegin
  Result := AObj.AutoFreeByControl();
  handleExceptionEnd
end;

// function
function TDockManager_IsEnabledControl(AObj: TDockManager; Control: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 23302}
  handleExceptionBegin
  Result := AObj.IsEnabledControl(Control);
  handleExceptionEnd
end;

// function
function TDockManager_CanBeDoubleDocked(AObj: TDockManager): LongBool; extdecl;
begin
  {$define handleExceptionID := 23303}
  handleExceptionBegin
  Result := AObj.CanBeDoubleDocked();
  handleExceptionEnd
end;

// procedure
procedure TDockManager_BeginUpdate(AObj: TDockManager); extdecl;
begin
  {$define handleExceptionID := 23304}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TDockManager_EndUpdate(AObj: TDockManager); extdecl;
begin
  {$define handleExceptionID := 23305}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TDockManager_GetControlBounds(AObj: TDockManager; Control: TControl; var AControlBounds: TRect); extdecl;
var
  OutAControlBounds: TRect;
begin
  {$define handleExceptionID := 23306}
  handleExceptionBegin
  AObj.GetControlBounds(Control, OutAControlBounds);
  AControlBounds := OutAControlBounds;
  handleExceptionEnd
end;

// procedure
procedure TDockManager_InsertControlWithDragDockObject(AObj: TDockManager; ADockObject: TDragDockObject); extdecl;
begin
  {$define handleExceptionID := 23307}
  handleExceptionBegin
  AObj.InsertControl(ADockObject);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_InsertControlWithControlX2Align(AObj: TDockManager; Control: TControl; InsertAt: TAlign; DropCtl: TControl); extdecl;
begin
  {$define handleExceptionID := 23308}
  handleExceptionBegin
  AObj.InsertControl(Control, InsertAt, DropCtl);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_LoadFromStream(AObj: TDockManager; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 23309}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_PaintSite(AObj: TDockManager; DC: HDC); extdecl;
begin
  {$define handleExceptionID := 23310}
  handleExceptionBegin
  AObj.PaintSite(DC);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_MessageHandler(AObj: TDockManager; Sender: TControl; var Message: TLMessage); extdecl;
var
  OutMessage: TLMessage;
begin
  {$define handleExceptionID := 23311}
  handleExceptionBegin
  OutMessage := Message;
  AObj.MessageHandler(Sender, OutMessage);
  Message := OutMessage;
  handleExceptionEnd
end;

// procedure
procedure TDockManager_PositionDockRectWithDragDockObject(AObj: TDockManager; ADockObject: TDragDockObject); extdecl;
begin
  {$define handleExceptionID := 23312}
  handleExceptionBegin
  AObj.PositionDockRect(ADockObject);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_PositionDockRectWithControlX2AlignRect(AObj: TDockManager; Client: TControl; DropCtl: TControl; DropAlign: TAlign; var DockRect: TRect); extdecl;
var
  OutDockRect: TRect;
begin
  {$define handleExceptionID := 23313}
  handleExceptionBegin
  OutDockRect := DockRect;
  AObj.PositionDockRect(Client, DropCtl, DropAlign, OutDockRect);
  DockRect := OutDockRect;
  handleExceptionEnd
end;

// procedure
procedure TDockManager_RemoveControl(AObj: TDockManager; Control: TControl); extdecl;
begin
  {$define handleExceptionID := 23314}
  handleExceptionBegin
  AObj.RemoveControl(Control);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_ResetBounds(AObj: TDockManager; Force: LongBool); extdecl;
begin
  {$define handleExceptionID := 23315}
  handleExceptionBegin
  AObj.ResetBounds(Force);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_SaveToStream(AObj: TDockManager; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 23316}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TDockManager_SetReplacingControl(AObj: TDockManager; Control: TControl); extdecl;
begin
  {$define handleExceptionID := 23317}
  handleExceptionBegin
  AObj.SetReplacingControl(Control);
  handleExceptionEnd
end;

exports
  TDockManager_GetDockEdge,
  TDockManager_AutoFreeByControl,
  TDockManager_IsEnabledControl,
  TDockManager_CanBeDoubleDocked,
  TDockManager_BeginUpdate,
  TDockManager_EndUpdate,
  TDockManager_GetControlBounds,
  TDockManager_InsertControlWithDragDockObject,
  TDockManager_InsertControlWithControlX2Align,
  TDockManager_LoadFromStream,
  TDockManager_PaintSite,
  TDockManager_MessageHandler,
  TDockManager_PositionDockRectWithDragDockObject,
  TDockManager_PositionDockRectWithControlX2AlignRect,
  TDockManager_RemoveControl,
  TDockManager_ResetBounds,
  TDockManager_SaveToStream,
  TDockManager_SetReplacingControl;