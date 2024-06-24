
//function
function DockManager_GetDockEdge(AObj: TDockManager; ADockObject: TDragDockObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDockEdge(ADockObject);
  handleExceptionEnd
end;

//function
function DockManager_AutoFreeByControl(AObj: TDockManager): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoFreeByControl();
  handleExceptionEnd
end;

//function
function DockManager_IsEnabledControl(AObj: TDockManager; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEnabledControl(Control);
  handleExceptionEnd
end;

//function
function DockManager_CanBeDoubleDocked(AObj: TDockManager): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanBeDoubleDocked();
  handleExceptionEnd
end;

//function
function DockManager_Class(): TClass; extdecl;
begin
  Result := TDockManager;
end;

//procedure
procedure DockManager_BeginUpdate(AObj: TDockManager); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure DockManager_EndUpdate(AObj: TDockManager); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure DockManager_GetControlBounds(AObj: TDockManager; Control: TControl; var OutControlBounds: TRect); extdecl;
var
  RetOutControlBounds: TRect;
begin
  handleExceptionBegin
  RetOutControlBounds := OutControlBounds;
  AObj.GetControlBounds(Control, RetOutControlBounds);
  OutControlBounds := RetOutControlBounds;
  handleExceptionEnd
end;

//procedure
procedure DockManager_InsertControl(AObj: TDockManager; ADockObject: TDragDockObject); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(ADockObject);
  handleExceptionEnd
end;

//procedure
procedure DockManager_InsertControl1(AObj: TDockManager; Control: TControl; InsertAt: TAlign; DropCtl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(Control, InsertAt, DropCtl);
  handleExceptionEnd
end;

//procedure
procedure DockManager_LoadFromStream(AObj: TDockManager; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure DockManager_PaintSite(AObj: TDockManager; DC: HDC); extdecl;
begin
  handleExceptionBegin
  AObj.PaintSite(DC);
  handleExceptionEnd
end;

//procedure
procedure DockManager_MessageHandler(AObj: TDockManager; Sender: TControl; var Message: TLMessage); extdecl;
var
  RetMessage: TLMessage;
begin
  handleExceptionBegin
  RetMessage := Message;
  AObj.MessageHandler(Sender, RetMessage);
  Message := RetMessage;
  handleExceptionEnd
end;

//procedure
procedure DockManager_PositionDockRect(AObj: TDockManager; ADockObject: TDragDockObject); extdecl;
begin
  handleExceptionBegin
  AObj.PositionDockRect(ADockObject);
  handleExceptionEnd
end;

//procedure
procedure DockManager_PositionDockRect1(AObj: TDockManager; Client, DropCtl: TControl; DropAlign: TAlign; var DockRect: TRect); extdecl;
var
  RetDockRect: TRect;
begin
  handleExceptionBegin
  RetDockRect := DockRect;
  AObj.PositionDockRect(Client, DropCtl, DropAlign, RetDockRect);
  DockRect := RetDockRect;
  handleExceptionEnd
end;

//procedure
procedure DockManager_RemoveControl(AObj: TDockManager; Control: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(Control);
  handleExceptionEnd
end;

//procedure
procedure DockManager_ResetBounds(AObj: TDockManager; Force: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ResetBounds(Force);
  handleExceptionEnd
end;

//procedure
procedure DockManager_SaveToStream(AObj: TDockManager; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure DockManager_SetReplacingControl(AObj: TDockManager; Control: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.SetReplacingControl(Control);
  handleExceptionEnd
end;


exports
  DockManager_GetDockEdge,
  DockManager_AutoFreeByControl,
  DockManager_IsEnabledControl,
  DockManager_CanBeDoubleDocked,
  DockManager_Class,
  DockManager_BeginUpdate,
  DockManager_EndUpdate,
  DockManager_GetControlBounds,
  DockManager_InsertControl,
  DockManager_InsertControl1,
  DockManager_LoadFromStream,
  DockManager_PaintSite,
  DockManager_MessageHandler,
  DockManager_PositionDockRect,
  DockManager_PositionDockRect1,
  DockManager_RemoveControl,
  DockManager_ResetBounds,
  DockManager_SaveToStream,
  DockManager_SetReplacingControl;