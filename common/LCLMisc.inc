//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function LCLMisc_DCClipRegionValid(DC: HDC): boolean; extdecl;
begin
  Result := LCLIntf.DCClipRegionValid(DC);
end;

procedure LCLMisc_DeallocateHWnd(Wnd: HWND); extdecl;
begin
  LCLIntf.DeallocateHWnd(Wnd);
end;

procedure LCLMisc_DestroyRubberBand(ARubberBand: HWND); extdecl;
begin
  LCLIntf.DestroyRubberBand(ARubberBand);
end;

procedure LCLMisc_DrawDefaultDockImage(AOldRect, ANewRect: TRect; AOperation: TDockImageOperation); extdecl;
begin
  LCLIntf.DrawDefaultDockImage(AOldRect, ANewRect, AOperation);
end;

procedure LCLMisc_DrawGrid(DC: HDC; const R: TRect; DX, DY: Integer); extdecl;
begin
  LCLIntf.DrawGrid(DC, R, DX, DY);
end;

function LCLMisc_Frame3d(DC: HDC; var ARect: TRect; const FrameWidth: integer; const Style: TGraphicsBevelCut): Boolean; extdecl;
begin
  Result := LCLIntf.Frame3d(DC, ARect, FrameWidth, Style);
end;

// tray icon

function TTrayIcon_Handle(aTrayIcon: TTrayIcon): HWND; extdecl;
begin
  Result := aTrayIcon.Handle;
end;


exports
  LCLMisc_DCClipRegionValid,
  LCLMisc_DeallocateHWnd,
  LCLMisc_DestroyRubberBand,
  LCLMisc_DrawDefaultDockImage,
  LCLMisc_DrawGrid,
  LCLMisc_Frame3d,
  TTrayIcon_Handle
;
