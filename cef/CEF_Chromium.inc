
//constructor
function Chromium_Create(aOwner: TComponent): TChromium; extdecl;
begin
  handleExceptionBegin
  Result := TChromium.Create(aOwner);
  handleExceptionEnd
end;

//function
function Chromium_CreateBrowserByWinControl(AObj: TChromium; const aBrowserParent: TWinControl; const aWindowName: PChar; const aContext: ICefRequestContext; const aExtraInfo: ICefDictionaryValue): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateBrowser(aBrowserParent, aWindowName, aContext, aExtraInfo);
  handleExceptionEnd
end;

//function
function Chromium_SaveAsBitmapStream(AObj: TChromium; const aStream: TStream): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveAsBitmapStream(aStream);
  handleExceptionEnd
end;

//function
function Chromium_TakeSnapshot(AObj: TChromium; var aBitmap: TBitmap): LongBool; extdecl;
var
  RetaBitmap: TBitmap;
begin
  handleExceptionBegin
  RetaBitmap := aBitmap;
  Result := AObj.TakeSnapshot(RetaBitmap);
  aBitmap := RetaBitmap;
  handleExceptionEnd
end;

//procedure
procedure Chromium_InitializeDragAndDropForIWinControl(AObj: TChromium; const aDropTargetCtrl: TWinControl); extdecl;
begin
{$IFDEF MSWINDOWS}
  handleExceptionBegin
  AObj.InitializeDragAndDrop(aDropTargetCtrl);
  handleExceptionEnd
{$ENDIF}
end;

//procedure
procedure Chromium_ShowDevToolsForIWinControl(AObj: TChromium; var inspectElementAt: TPoint; const aDevTools: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDevTools(inspectElementAt, aDevTools);
  handleExceptionEnd
end;

//procedure
procedure Chromium_CloseDevToolsForIWinControl(AObj: TChromium; const aDevTools: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.CloseDevTools(aDevTools);
  handleExceptionEnd
end;

//procedure
procedure Chromium_MoveFormTo(AObj: TChromium; const x,  y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MoveFormTo(x,  y);
  handleExceptionEnd
end;

//procedure
procedure Chromium_MoveFormBy(AObj: TChromium; const x,  y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MoveFormBy(x,  y);
  handleExceptionEnd
end;

//procedure
procedure Chromium_ResizeFormWidthTo(AObj: TChromium; const x: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ResizeFormWidthTo(x);
  handleExceptionEnd
end;

//procedure
procedure Chromium_ResizeFormHeightTo(AObj: TChromium; const y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ResizeFormHeightTo(y);
  handleExceptionEnd
end;

//procedure
procedure Chromium_SetFormLeftTo(AObj: TChromium; const x: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetFormLeftTo(x);
  handleExceptionEnd
end;

//procedure
procedure Chromium_SetFormTopTo(AObj: TChromium; const y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetFormTopTo(y);
  handleExceptionEnd
end;


exports
  Chromium_Create,
  Chromium_CreateBrowserByWinControl,
  Chromium_SaveAsBitmapStream,
  Chromium_TakeSnapshot,
  Chromium_InitializeDragAndDropForIWinControl,
  Chromium_ShowDevToolsForIWinControl,
  Chromium_CloseDevToolsForIWinControl,
  Chromium_MoveFormTo,
  Chromium_MoveFormBy,
  Chromium_ResizeFormWidthTo,
  Chromium_ResizeFormHeightTo,
  Chromium_SetFormLeftTo,
  Chromium_SetFormTopTo;