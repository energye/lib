// constructor
function TChromium_Create(AOwner: TComponent; out IntfChromiumEvents: IChromiumEvents): TChromium; extdecl;
begin
  {$define handleExceptionID := 5700}
  handleExceptionBegin
  Result := TChromium.Create(AOwner);
  IntfChromiumEvents := Result as IChromiumEvents;
  handleExceptionEnd
end;

// function
function TChromium_CreateBrowserWithWControlStrRContextDValue(AObj: TChromium; const aBrowserParent: TWinControl; const aWindowName: PChar; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue): LongBool; extdecl;
begin
  {$define handleExceptionID := 5701}
  handleExceptionBegin
  Result := AObj.CreateBrowser(aBrowserParent, PCharToUStr(aWindowName), aContext, aExtraInfo);
  handleExceptionEnd
end;

// function
function TChromium_SaveAsBitmapStream(AObj: TChromium; const aStream: TStream): LongBool; extdecl;
begin
  {$define handleExceptionID := 5702}
  handleExceptionBegin
  Result := AObj.SaveAsBitmapStream(aStream);
  handleExceptionEnd
end;

// function
function TChromium_TakeSnapshot(AObj: TChromium; var aBitmap: TBitmap): LongBool; extdecl;
var
  OutaBitmap: TBitmap;
begin
  {$define handleExceptionID := 5703}
  handleExceptionBegin
  OutaBitmap := aBitmap;
  Result := AObj.TakeSnapshot(OutaBitmap);
  aBitmap := OutaBitmap;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// procedure
procedure TChromium_InitializeDragAndDropWithWinControl(AObj: TChromium; const aDropTargetCtrl: TWinControl); extdecl;
begin
  {$define handleExceptionID := 5704}
  handleExceptionBegin
  AObj.InitializeDragAndDrop(aDropTargetCtrl);
  handleExceptionEnd
end;
{$ENDIF MSWINDOWS}

// procedure
procedure TChromium_ShowDevToolsWithPointWinControl(AObj: TChromium; var inspectElementAt: TPoint; const aDevTools: TWinControl); extdecl;
begin
  {$define handleExceptionID := 5705}
  handleExceptionBegin
  AObj.ShowDevTools(inspectElementAt, aDevTools);
  handleExceptionEnd
end;

// procedure
procedure TChromium_CloseDevToolsWithWinControl(AObj: TChromium; const aDevTools: TWinControl); extdecl;
begin
  {$define handleExceptionID := 5706}
  handleExceptionBegin
  AObj.CloseDevTools(aDevTools);
  handleExceptionEnd
end;

// procedure
procedure TChromium_MoveFormTo(AObj: TChromium; const x: Integer; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 5707}
  handleExceptionBegin
  AObj.MoveFormTo(x, y);
  handleExceptionEnd
end;

// procedure
procedure TChromium_MoveFormBy(AObj: TChromium; const x: Integer; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 5708}
  handleExceptionBegin
  AObj.MoveFormBy(x, y);
  handleExceptionEnd
end;

// procedure
procedure TChromium_ResizeFormWidthTo(AObj: TChromium; const x: Integer); extdecl;
begin
  {$define handleExceptionID := 5709}
  handleExceptionBegin
  AObj.ResizeFormWidthTo(x);
  handleExceptionEnd
end;

// procedure
procedure TChromium_ResizeFormHeightTo(AObj: TChromium; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 5710}
  handleExceptionBegin
  AObj.ResizeFormHeightTo(y);
  handleExceptionEnd
end;

// procedure
procedure TChromium_SetFormLeftTo(AObj: TChromium; const x: Integer); extdecl;
begin
  {$define handleExceptionID := 5711}
  handleExceptionBegin
  AObj.SetFormLeftTo(x);
  handleExceptionEnd
end;

// procedure
procedure TChromium_SetFormTopTo(AObj: TChromium; const y: Integer); extdecl;
begin
  {$define handleExceptionID := 5712}
  handleExceptionBegin
  AObj.SetFormTopTo(y);
  handleExceptionEnd
end;

exports
  TChromium_Create,
  TChromium_CreateBrowserWithWControlStrRContextDValue,
  TChromium_SaveAsBitmapStream,
  TChromium_TakeSnapshot,
{$IFDEF MSWINDOWS}
  TChromium_InitializeDragAndDropWithWinControl,
{$ENDIF MSWINDOWS}
  TChromium_ShowDevToolsWithPointWinControl,
  TChromium_CloseDevToolsWithWinControl,
  TChromium_MoveFormTo,
  TChromium_MoveFormBy,
  TChromium_ResizeFormWidthTo,
  TChromium_ResizeFormHeightTo,
  TChromium_SetFormLeftTo,
  TChromium_SetFormTopTo;