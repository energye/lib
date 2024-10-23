//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

function WinAPI_CreateRectRgn(X1, Y1, X2, Y2 : Integer): HRGN; extdecl;
begin
  Result := CreateRectRgn(X1, Y1, X2, Y2);
end;

function WinAPI_SetRectRgn(aRGN: HRGN; X1, Y1, X2, Y2 : Integer): Longbool; extdecl;
begin
  Result := SetRectRgn(aRGN, X1, Y1, X2, Y2);
end;

function WinAPI_DeleteObject(aRGN: HRGN): Longbool; extdecl;
begin
  Result := DeleteObject(aRGN);
end;

function WinAPI_CombineRgn(Dest, Src1, Src2 : HRGN; fnCombineMode : Longint): Longint; extdecl;
begin
  Result := CombineRgn(Dest, Src1, Src2, fnCombineMode);
end;

function WinAPI_PtInRegion(RGN: HRGN; X, Y: Integer): Longbool; extdecl;
begin
  Result := PtInRegion(RGN, X, Y);
end;

function WinAPI_ScreenToClient(hWnd : HWND; var P : TPoint): Longint; extdecl;
begin
  Result := ScreenToClient(hWnd, p);
end;

function WinAPI_ClientToScreen(hWnd : HWND; var P : TPoint): Longbool; extdecl;
begin
  Result := ClientToScreen(hWnd, p);
end;

function WinAPI_DefWindowProc(hWnd: HWND; Msg: UINT; wParam: WPARAM; lParam: LPARAM): LRESULT; extdecl;
begin
  {$ifdef MSWINDOWS}
  Result := DefWindowProc(hWnd, Msg, wParam, lParam);
  {$else}
  Result := 0;
  {$endif}
end;

function WinAPI_DefSubclassProc(hWnd: HWND; uMsg: UINT; wParam: WPARAM; lParam: LPARAM): LRESULT; extdecl;
begin
  {$ifdef MSWINDOWS}
  Result := DefSubclassProc(hWnd, uMsg, wParam, lParam);
  {$else}
  Result := 0;
  {$endif}
end;

function WinAPI_CreateRoundRectRgn(_para1, _para2, _para3, _para4, _para5, _para6: longint): HRGN; extdecl;
begin
  Result := CreateRoundRectRgn(_para1, _para2, _para3, _para4, _para5, _para6);
end;

function WinAPI_SetWindowRgn(hWnd: HWND; hRgn: HRGN; bRedraw: Longbool):longint; extdecl;
begin
  //Result := SetWindowRgn(hWnd, hRgn, {$ifdef MSWINDOWS}WINBOOL(bRedraw){$else}bRedraw{$endif});
  Result := SetWindowRgn(hWnd, hRgn, bRedraw);
end;

function WinAPI_SetCursor(hCursor: HCursor): HCURSOR; extdecl;
begin
  Result := SetCursor(hCursor);
end;

function WinAPI_LoadCursor(hInstance: THandle; lpCursorName: PChar): HCursor; extdecl;
begin
  Result := LoadCursor(hInstance, lpCursorName);
end;

procedure WinAPI_OnPaint(hWnd : HWND); extdecl;
var
  ps: TPaintStruct;
begin
  BeginPaint(hWnd, ps);
  EndPaint(hWnd, ps);
end;

function WinAPI_EndPaint(Handle : hwnd; var PS : TPaintStruct): Integer; extdecl;
begin
  Result := EndPaint(Handle, PS);
end;

function WinAPI_BeginPaint(Handle : hwnd; var PS : TPaintStruct): HDC; extdecl;
begin
  Result := BeginPaint(Handle, PS);
end;

function WinAPI_Arc(DC: HDC; Left, Top, Right, Bottom, Angle16Deg, Angle16DegLength: Integer): LongBool;  extdecl;
begin
  Result := Arc(DC, Left, Top, Right, Bottom, Angle16Deg, Angle16DegLength);
end;

function WinAPI_AngleChord(DC: HDC; x1, y1, x2, y2, angle1, angle2 : Integer): LongBool;  extdecl;
begin
  Result := AngleChord(DC, x1, y1, x2, y2, angle1, angle2);
end;

function WinAPI_CallNextHookEx(hhk : HHOOK; ncode : Integer; WParam: WParam; LParam: LParam) : Integer; extdecl;
begin
  Result := CallNextHookEx(hhk, ncode, WParam, LParam);
end;

function WinAPI_CallWindowProc(lpPrevWndFunc : TFarProc; Handle : HWND; Msg : UINT; WParam: WParam; LParam: LParam): Integer; extdecl;
begin
  Result := CallWindowProc(lpPrevWndFunc, Handle, Msg, WParam, LParam);
end;

function WinAPI_BitBlt(DestDC: HDC; X, Y, Width, Height: Integer; SrcDC: HDC; XSrc, YSrc: Integer; Rop: DWORD): LongBool; extdecl;
begin
  Result := BitBlt(DestDC,  X, Y, Width, Height, SrcDC, XSrc, YSrc, Rop);
end;

function  WinAPI_CreateBitmap(Width, Height: Integer; Planes, BitCount: Longint; BitmapBits: Pointer): HBITMAP; extdecl;
begin
  Result := CreateBitmap(Width, Height, Planes, BitCount, BitmapBits);
end;

function  WinAPI_CreateBrushIndirect(const LogBrush: TLogBrush): HBRUSH; extdecl;
begin
  Result := CreateBrushIndirect(LogBrush);
end;

function  WinAPI_CreateBrushWithRadialGradient(const LogBrush: TLogRadialGradient): HBRUSH; extdecl;
begin
  Result := CreateBrushWithRadialGradient(LogBrush);
end;

function  WinAPI_CreateCaret(Handle: HWND; Bitmap: HBITMAP; width, Height: Integer):  LongBool; extdecl;
begin
  Result := CreateCaret(Handle, Bitmap, width, Height);
end;

function  WinAPI_CreateCompatibleBitmap(DC: HDC; Width, Height: Integer): HBITMAP; extdecl;
begin
  Result := CreateCompatibleBitmap(DC, Width, Height);
end;

function  WinAPI_CreateCompatibleDC(DC: HDC): HDC; extdecl;
begin
  Result := CreateCompatibleDC(DC);
end;

function  WinAPI_CreateDIBitmap(DC: HDC; var InfoHeader: TBitmapInfoHeader; dwUsage: DWORD; InitBits: PChar; var InitInfo: TBitmapInfo; wUsage: UINT): HBITMAP; extdecl;
begin
  Result := CreateDIBitmap(DC, InfoHeader, dwUsage, InitBits, InitInfo, wUsage);
end;

function  WinAPI_CreateDIBSection(DC: HDC; const BitmapInfo: tagBitmapInfo; Usage: UINT; var Bits: Pointer; SectionHandle: THandle; Offset: DWORD): HBITMAP; extdecl;
begin
  Result := CreateDIBSection(DC, BitmapInfo, Usage, Bits, SectionHandle, Offset);
end;

function  WinAPI_CreateEllipticRgn(X1, Y1, X2, Y2: Integer): HRGN; extdecl;
begin
  Result := CreateEllipticRgn(X1, Y1, X2, Y2);
end;

function  WinAPI_CreateFontIndirect(const LogFont: TLogFont): HFONT; extdecl;
begin
  Result := CreateFontIndirect(LogFont);
end;

function  WinAPI_CreateFontIndirectEx(const LogFont: TLogFont; const LongFontName: PChar): HFONT; extdecl;
begin
  Result := CreateFontIndirectEx(LogFont, StrPas(LongFontName));
end;

function  WinAPI_CreateIconIndirect(IconInfo: PIconInfo): HICON; extdecl;
begin
  Result := CreateIconIndirect(IconInfo);
end;

function  WinAPI_CreatePalette(const LogPalette: TLogPalette): HPalette; extdecl;
begin
  Result := CreatePalette(LogPalette);
end;

function  WinAPI_CreatePatternBrush(ABitmap: HBITMAP): HBRUSH; extdecl;
begin
  Result := CreatePatternBrush(ABitmap);
end;

function  WinAPI_CreatePenIndirect(const LogPen: TLogPen): HPEN; extdecl;
begin
  Result := CreatePenIndirect(LogPen);
end;

function  WinAPI_CreatePolygonRgn(Points: PPoint; NumPts: Integer; FillMode: integer): HRGN; extdecl;
begin
  Result := CreatePolygonRgn(Points, NumPts, FillMode);
end;

procedure WinAPI_DeleteCriticalSection(var CritSection: TCriticalSection); extdecl;
begin
  DeleteCriticalSection(CritSection);
end;

function  WinAPI_DeleteDC(hDC: HDC):  LongBool; extdecl;
begin
  Result := DeleteDC(hDC);
end;

function  WinAPI_DestroyCaret(Handle : HWND):  LongBool; extdecl;
begin
  Result := DestroyCaret(Handle);
end;

function  WinAPI_DestroyCursor(Handle: HCURSOR):  LongBool; extdecl;
begin
  Result := DestroyCursor(Handle);
end;

function  WinAPI_DestroyIcon(Handle: HICON):  LongBool; extdecl;
begin
  Result := DestroyIcon(Handle);
end;

function  WinAPI_DrawFrameControl(DC: HDC; const Rect : TRect; uType, uState : Cardinal) :  LongBool; extdecl;
begin
  Result := DrawFrameControl(DC, Rect, uType, uState);
end;

function  WinAPI_DrawFocusRect(DC: HDC; const Rect: TRect):  LongBool; extdecl;
begin
  Result := DrawFocusRect(DC, Rect);
end;

function  WinAPI_DrawEdge(DC: HDC; var Rect: TRect; edge: Cardinal; grfFlags: Cardinal):  LongBool; extdecl;
begin
  Result := DrawEdge(DC, Rect, edge, grfFlags);
end;

function  WinAPI_DrawText(DC: HDC; Str: PChar; Count: Integer; var Rect: TRect; Flags: Cardinal): Integer; extdecl;
begin
  Result := DrawText(DC, Str, Count, Rect, Flags);
end;

function  WinAPI_EnableScrollBar(Wnd: HWND; wSBflags, wArrows: Cardinal):  LongBool; extdecl;
begin
  Result := EnableScrollBar(Wnd, wSBflags, wArrows);
end;

function  WinAPI_EnableWindow(hWnd: HWND; bEnable:  LongBool):  LongBool; extdecl;
begin
  Result := EnableWindow(hWnd, bEnable);
end;

procedure WinAPI_EnterCriticalSection(var CritSection: TCriticalSection);  extdecl;
begin
  EnterCriticalSection(CritSection);
end;

function  WinAPI_Ellipse(DC: HDC; x1, y1, x2, y2: Integer):  LongBool; extdecl;
begin
  Result := Ellipse(DC,x1, y1, x2, y2);
end;

function  WinAPI_EqualRgn(Rgn1: HRGN; Rgn2: HRGN):  LongBool; extdecl;
begin
  Result := EqualRgn(Rgn1, Rgn2);
end;

function  WinAPI_ExcludeClipRect(dc: hdc; Left, Top, Right, Bottom : Integer) : Integer; extdecl;
begin
  Result := ExcludeClipRect(dc, Left, Top, Right, Bottom);
end;

function  WinAPI_ExtCreatePen(dwPenStyle, dwWidth: DWord; const lplb: TLogBrush; dwStyleCount: DWord; lpStyle: PDWord): HPEN; extdecl;
begin
  Result := ExtCreatePen(dwPenStyle, dwWidth, lplb, dwStyleCount, lpStyle);
end;

function  WinAPI_ExtTextOut(DC: HDC; X, Y: Integer; Options: Longint; Rect: PRect; Str: PChar; Count: Longint; Dx: PInteger):  LongBool;  extdecl;
begin
  Result := ExtTextOut(DC,X , Y, Options, Rect, Str, Count, Dx);
end;

function  WinAPI_ExtSelectClipRGN(dc: hdc; rgn : hrgn; Mode : Longint) : Integer;  extdecl;
begin
  Result := ExtSelectClipRGN(dc, rgn, Mode);
end;

function  WinAPI_FillRect(DC: HDC; const Rect: TRect; Brush: HBRUSH):  LongBool; extdecl;
begin
  Result := FillRect(DC, Rect, Brush);
end;

function  WinAPI_FillRgn(DC: HDC; RegionHnd: HRGN; hbr: HBRUSH): BOOL; extdecl;
begin
  Result := FillRgn(DC, RegionHnd, hbr);
end;

function  WinAPI_FloodFill(DC: HDC; X, Y: Integer; Color: TGraphicsColor; FillStyle: TGraphicsFillStyle; Brush: HBRUSH):  LongBool; extdecl;
begin
  Result := FloodFill(DC, X, Y, Color, FillStyle, Brush);
end;

function  WinAPI_FrameRect(DC: HDC; const ARect: TRect; hBr: HBRUSH): Integer; extdecl;
begin
  Result := FrameRect(DC, ARect, hBr);
end;

function  WinAPI_GetActiveWindow : HWND; extdecl;
begin
  Result := GetActiveWindow();
end;

function  WinAPI_GetBitmapBits(Bitmap: HBITMAP; Count: Longint;  Bits: Pointer): Longint; extdecl;
begin
  Result := GetBitmapBits(Bitmap,Count, Bits);
end;

function  WinAPI_GetBkColor(DC: HDC): TColorRef; extdecl;
begin
  Result := GetBkColor(DC);
end;

function  WinAPI_GetCapture : HWND; extdecl;
begin
  Result := GetCapture();
end;

function  WinAPI_GetCaretPos(var lpPoint: TPoint):  LongBool; extdecl;
begin
  Result := GetCaretPos(lpPoint);
end;

function  WinAPI_GetClientRect(handle : HWND; var Rect: TRect) :  LongBool; extdecl;
begin
  Result := GetClientRect(handle, Rect);
end;

function  WinAPI_GetClipBox(DC : hDC; lpRect : PRect) : Longint; extdecl;
begin
  Result := GetClipBox(DC, lpRect);
end;

function  WinAPI_GetClipRGN(DC : hDC; RGN : hRGN) : Longint; extdecl;
begin
  Result := GetClipRGN(DC, RGN);
end;

function  WinAPI_GetCurrentObject(DC: HDC; uObjectType: UINT): HGDIOBJ; extdecl;
begin
  Result := GetCurrentObject(DC, uObjectType);
end;

function  WinAPI_GetCursorPos(var lpPoint: TPoint):  LongBool; extdecl;
begin
  Result := GetCursorPos(lpPoint);
end;

function  WinAPI_GetDC(hWnd: HWND): HDC; extdecl;
begin
  Result := GetDC(hWnd);
end;

function  WinAPI_GetDeviceCaps(DC: HDC; Index: Integer): Integer; extdecl;
begin
  Result := GetDeviceCaps(DC, Index);
end;

function  WinAPI_GetDIBits(DC: HDC; Bitmap: HBitmap; StartScan, NumScans: UINT; Bits: Pointer; var BitInfo: BitmapInfo; Usage: UINT): Integer; extdecl;
begin
  Result := GetDIBits(DC,Bitmap, StartScan, NumScans, Bits, BitInfo, Usage);
end;

function  WinAPI_GetDoubleClickTime: UINT; extdecl;
begin
  Result := GetDoubleClickTime();
end;

function  WinAPI_GetFocus: HWND; extdecl;
begin
  Result := GetFocus();
end;

function  WinAPI_GetFontLanguageInfo(DC: HDC): DWord; extdecl;
begin
  Result := GetFontLanguageInfo(DC);
end;

function  WinAPI_GetForegroundWindow: HWND; extdecl;
begin
  Result := GetForegroundWindow();
end;

function  WinAPI_GetIconInfo(AIcon: HICON; AIconInfo: PIconInfo):  LongBool; extdecl;
begin
  Result := GetIconInfo(AIcon, AIconInfo);
end;

function  WinAPI_GetKeyState(nVirtKey: Integer): Smallint; extdecl;
begin
  Result := GetKeyState(nVirtKey);
end;

function  WinAPI_GetMapMode(DC: HDC): Integer; extdecl;
begin
  Result := GetMapMode(DC);
end;

function  WinAPI_GetMonitorInfo(hMonitor: HMONITOR; lpmi: PMonitorInfo):  LongBool; extdecl;
begin
  Result := GetMonitorInfo(hMonitor, lpmi);
end;

function  WinAPI_GetDpiForMonitor(hmonitor: HMONITOR; dpiType: TMonitorDpiType; out dpiX: UINT; out dpiY: UINT): HRESULT; extdecl;
begin
  Result := GetDpiForMonitor(hmonitor, dpiType, dpiX, dpiY);
end;

function  WinAPI_GetObject(GDIObject: HGDIOBJ; BufSize: Integer; Buf: Pointer): Integer; extdecl;
begin
  Result := GetObject(GDIObject,BufSize, Buf);
end;

function  WinAPI_GetParent(Handle : HWND): HWND; extdecl;
begin
  Result := GetParent(Handle);
end;

function  WinAPI_GetProp(Handle : hwnd; Str : PChar): Pointer; extdecl;
begin
  Result := GetProp(Handle, Str);
end;

function  WinAPI_GetRgnBox(RGN : HRGN; lpRect : PRect) : Longint; extdecl;
begin
  Result := GetRgnBox(RGN, lpRect);
end;

function  WinAPI_GetROP2(DC: HDC): integer; extdecl;
begin
  Result := GetROP2(DC);
end;

function  WinAPI_GetScrollInfo(Handle: HWND; SBStyle: Integer; var ScrollInfo: TScrollInfo):  LongBool; extdecl;
begin
  Result := GetScrollInfo(Handle, SBStyle, ScrollInfo);
end;

function  WinAPI_GetStockObject(Value: Integer): THandle; extdecl;
begin
  Result := GetStockObject(Value);
end;

function  WinAPI_GetSysColor(nIndex: Integer): DWORD; extdecl;
begin
  Result := GetSysColor(nIndex);
end;

function  WinAPI_GetSysColorBrush(nIndex: Integer): HBrush; extdecl;
begin
  Result := GetSysColorBrush(nIndex);
end;

function  WinAPI_GetSystemMetrics(nIndex: Integer): Integer;  extdecl;
begin
  Result := GetSystemMetrics(nIndex);
end;

function  WinAPI_GetTextColor(DC: HDC) : TColorRef; extdecl;
begin
  Result := GetTextColor(DC);
end;

function  WinAPI_GetTextExtentExPoint(DC: HDC; Str: PChar; Count, MaxWidth: Integer; MaxCount, PartialWidths: Integer; var Size: TSize):  LongBool; extdecl;
begin
  Result := GetTextExtentExPoint(DC,Str, Count, MaxWidth, @MaxCount, @PartialWidths, Size);
end;

function  WinAPI_GetTextExtentPoint(DC: HDC; Str: PChar; Count: Integer; var Size: TSize):  LongBool; extdecl;
begin
  Result := GetTextExtentPoint(DC,Str, Count, Size);
end;

function  WinAPI_GetTextExtentPoint32(DC: HDC; Str: PChar; Count: Integer; var Size: TSize):  LongBool; extdecl;
begin
  Result := GetTextExtentPoint32(DC,Str, Count, Size);
end;

function  WinAPI_GetTextMetrics(DC: HDC; var TM: TTextMetric):  LongBool;  extdecl;
begin
  Result := GetTextMetrics(DC, TM);
end;

function  WinAPI_GetViewPortExtEx(DC: HDC; Size: PSize): Integer; extdecl;
begin
  Result := GetViewPortExtEx(DC, Size);
end;

function  WinAPI_GetViewPortOrgEx(DC: HDC; P: PPoint): Integer; extdecl;
begin
  Result := GetViewPortOrgEx(DC, P);
end;

function  WinAPI_GetWindowExtEx(DC: HDC; Size: PSize): Integer; extdecl;
begin
  Result := GetWindowExtEx(DC, Size);
end;

function  WinAPI_GetWindowLong(Handle : hwnd; int : Integer): PtrInt; extdecl;
begin
  Result := GetWindowLong(Handle, int);
end;

function  WinAPI_GetWindowRect(Handle : hwnd; var Rect : TRect): Integer; extdecl;
begin
  Result := GetWindowRect(Handle, Rect);
end;

function  WinAPI_GetWindowSize(Handle : hwnd; var Width, Height: integer):  LongBool; extdecl;
begin
  Result := GetWindowSize(Handle,Width, Height);
end;

function  WinAPI_GetWindowOrgEx(dc : hdc; var P: TPoint): Integer; extdecl; // because of delphi compatibility
begin
  Result := GetWindowOrgEx(dc, P);
end;

function  WinAPI_GradientFill(DC: HDC; Vertices: PTriVertex; NumVertices: Longint; Meshes: Pointer; NumMeshes: Longint; Mode: Longint):  LongBool; extdecl;
begin
  Result := GradientFill(DC, Vertices, NumVertices, Meshes, NumMeshes, Mode);
end;

function  WinAPI_HideCaret(hWnd: HWND):  LongBool; extdecl;
begin
  Result := HideCaret(hWnd);
end;

procedure WinAPI_InitializeCriticalSection(var CritSection: TCriticalSection); extdecl;
begin
  InitializeCriticalSection(CritSection);
end;

function  WinAPI_IntersectClipRect(dc: hdc; Left, Top, Right,Bottom: Integer): Integer; extdecl;
begin
  Result := IntersectClipRect(dc,Left, Top, Right, Bottom);
end;

function  WinAPI_InvalidateRect(aHandle : HWND; ARect : pRect; bErase :  LongBool) :  LongBool; extdecl;
begin
  Result := InvalidateRect(aHandle, ARect, bErase);
end;

function  WinAPI_InvalidateRgn(Handle: HWND; Rgn: HRGN; Erase:  LongBool):  LongBool; extdecl;
begin
  Result := InvalidateRgn(Handle, Rgn, Erase);
end;

function  WinAPI_IsDBCSLeadByte(TestChar: Byte):  LongBool; extdecl;
begin
  Result := IsDBCSLeadByte(TestChar);
end;

function  WinAPI_IsIconic(handle: HWND):  LongBool; extdecl;
begin
  Result := IsIconic(handle);
end;

function  WinAPI_IsWindow(handle: HWND):  LongBool; extdecl;
begin
  Result := IsWindow(handle);
end;

function  WinAPI_IsWindowEnabled(handle: HWND):  LongBool; extdecl;
begin
  Result := IsWindowEnabled(handle);
end;

function  WinAPI_IsWindowVisible(handle: HWND):  LongBool; extdecl;
begin
  Result := IsWindowVisible(handle);
end;

function  WinAPI_IsZoomed(handle: HWND):  LongBool; extdecl;
begin
  Result := IsZoomed(handle);
end;

procedure WinAPI_LeaveCriticalSection(var CritSection: TCriticalSection);  extdecl;
begin
  LeaveCriticalSection(CritSection);
end;

function  WinAPI_LineTo(DC: HDC; X, Y: Integer):  LongBool; extdecl;
begin
  Result := LineTo(DC, X, Y);
end;

function  WinAPI_LoadBitmap(hInstance: THandle; lpBitmapName: PChar): HBitmap; extdecl;
begin
  Result := LoadBitmap(hInstance, lpBitmapName);
end;

function  WinAPI_LoadIcon(hInstance: THandle; lpIconName: PChar): HIcon; extdecl;
begin
  Result := LoadIcon(hInstance, lpIconName);
end;

function  WinAPI_MaskBltRop(DestDC: HDC; X, Y, Width, Height: Integer; SrcDC: HDC; XSrc, YSrc: Integer; Mask: HBITMAP; XMask, YMask: Integer; Rop: DWORD):  LongBool; extdecl;
begin
  Result := MaskBlt(DestDC, X, Y, Width, Height, SrcDC, XSrc, YSrc, Mask, XMask, YMask, Rop);
end;

function  WinAPI_MaskBlt(DestDC: HDC; X, Y, Width, Height: Integer; SrcDC: HDC; XSrc, YSrc: Integer; Mask: HBITMAP; XMask, YMask: Integer):  LongBool; extdecl;
begin
  Result := MaskBlt(DestDC,X, Y, Width, Height, SrcDC, XSrc, YSrc, Mask, XMask, YMask);
end;

function  WinAPI_MessageBox(hWnd: HWND; lpText, lpCaption: PChar; uType: Cardinal = MB_OK): integer; extdecl;
begin
  Result := MessageBox(hWnd, lpText, lpCaption, uType);
end;

function  WinAPI_MonitorFromPoint(ptScreenCoords: TPoint; dwFlags: DWord): HMONITOR; extdecl;
begin
  Result := MonitorFromPoint(ptScreenCoords, dwFlags);
end;

function  WinAPI_MonitorFromRect(lprcScreenCoords: PRect; dwFlags: DWord): HMONITOR; extdecl;
begin
  Result := MonitorFromRect(lprcScreenCoords, dwFlags);
end;

function  WinAPI_MonitorFromWindow(hWnd: HWND; dwFlags: DWord): HMONITOR; extdecl;
begin
  Result := MonitorFromWindow(hWnd,dwFlags);
end;

function  WinAPI_MoveToEx(DC: HDC; X, Y: Integer; OldPoint: PPoint):  LongBool; extdecl;
begin
  Result := MoveToEx(DC,X, Y, OldPoint);
end;

function  WinAPI_OffsetRgn(RGN: HRGN; nXOffset, nYOffset: Integer): Integer; extdecl;
begin
  Result := OffsetRgn(RGN,nXOffset, nYOffset);
end;

function  WinAPI_PaintRgn(DC: HDC; RGN: HRGN):  LongBool; extdecl;
begin
  Result := PaintRgn(DC,RGN);
end;

//function  WinAPI_PeekMessage(var lpMsg : TMSG; Handle : HWND; wMsgFilterMin, wMsgFilterMax,wRemoveMsg : UINT):  LongBool; extdecl;
//begin
//  Result := PeekMessage(lpMsg, Handle, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
//end;

function  WinAPI_Pie(DC: HDC; x1, y1, x2, y2, sx, sy, ex, ey: Integer):  LongBool; extdecl;
begin
  Result := Pie(DC,x1, y1, x2, y2, sx, sy, ex, ey);
end;

function  WinAPI_PolyBezier(DC: HDC; Points: PPoint;  NumPts: Integer; Filled, Continuous:  LongBool):  LongBool; extdecl;
begin
  Result := PolyBezier(DC,Points, NumPts, Filled, Continuous);
end;

function  WinAPI_Polygon(DC: HDC; Points: PPoint;  NumPts: Integer; Winding:  LongBool):  LongBool; extdecl;
begin
  Result := Polygon(DC, Points, NumPts, Winding);
end;

function  WinAPI_Polyline(DC: HDC; Points: PPoint; NumPts: Integer):  LongBool; extdecl;
begin
  Result := Polyline(DC, Points, NumPts);
end;

function  WinAPI_PostMessage(Handle: HWND; Msg: Cardinal; WParam: WParam; LParam: LParam):  LongBool; extdecl;
begin
  Result := PostMessage(Handle, Msg, WParam, LParam);
end;

function  WinAPI_RealizePalette(DC: HDC): Cardinal; extdecl;
begin
  Result := RealizePalette(DC);
end;

function  WinAPI_Rectangle(DC: HDC; X1, Y1, X2, Y2: Integer):  LongBool; extdecl;
begin
  Result := Rectangle(DC, X1, Y1, X2, Y2);
end;

function  WinAPI_RectInRegion(RGN: HRGN; ARect: TRect):  LongBool; extdecl;
begin
  Result := RectInRegion(RGN,ARect);
end;

function  WinAPI_RectVisible(DC: HDC; const ARect: TRect):  LongBool; extdecl;
begin
  Result := RectVisible(DC,ARect);
end;

function  WinAPI_RedrawWindow(Wnd: HWND; lprcUpdate: PRECT; hrgnUpdate: HRGN; flags: UINT):  LongBool; extdecl;
begin
  Result := RedrawWindow(Wnd, lprcUpdate, hrgnUpdate, flags);
end;

function  WinAPI_ReleaseCapture :  LongBool; extdecl;
begin
  Result := ReleaseCapture ();
end;

function  WinAPI_ReleaseDC(hWnd: HWND; DC: HDC): Integer; extdecl;
begin
  Result := ReleaseDC(hWnd, DC);
end;

function  WinAPI_RemoveProp(Handle: hwnd; Str: PChar): THandle; extdecl;
begin
  Result := RemoveProp(Handle,Str);
end;

function  WinAPI_RestoreDC(DC: HDC; SavedDC: Integer):  LongBool; extdecl;
begin
  Result := RestoreDC(DC, SavedDC);
end;

function  WinAPI_RoundRect(DC : hDC; X1, Y1, X2, Y2: Integer; RX, RY : Integer):  LongBool; extdecl;
begin
  Result := RoundRect(DC, X1, Y1, X2, Y2, RX, RY );
end;

function  WinAPI_SaveDC(DC: HDC): Integer; extdecl;
begin
  Result := SaveDC(DC);
end;

function  WinAPI_ScrollWindowEx(hWnd: HWND; dx, dy: Integer; prcScroll, prcClip: PRect; hrgnUpdate: HRGN; prcUpdate: PRect; flags: UINT):  LongBool; extdecl;
begin
  Result := ScrollWindowEx(hWnd, dx, dy, prcScroll, prcClip, hrgnUpdate, prcUpdate, flags);
end;

function  WinAPI_SelectClipRGN(DC : hDC; RGN : HRGN) : Longint; extdecl;
begin
  Result := SelectClipRGN(DC, RGN);
end;

function  WinAPI_SelectObject(DC: HDC; GDIObj: HGDIOBJ): HGDIOBJ; extdecl;
begin
  Result := SelectObject(DC, GDIObj);
end;

function  WinAPI_SelectPalette(DC: HDC; Palette: HPALETTE; ForceBackground:  LongBool): HPALETTE; extdecl;
begin
  Result := SelectPalette(DC, Palette, ForceBackground);
end;

function  WinAPI_SendMessage(HandleWnd: HWND; Msg: Cardinal; WParam: WParam; LParam: LParam): LResult; extdecl;
begin
  Result := SendMessage(HandleWnd, Msg, WParam, LParam);
end;

function  WinAPI_SetActiveWindow(Handle: HWND): HWND;  extdecl;
begin
  Result := SetActiveWindow(Handle);
end;

function  WinAPI_SetBkColor(DC: HDC; Color: TColorRef): TColorRef; extdecl; //pbd
begin
  Result := SetBkColor(DC, Color);
end;

function  WinAPI_SetBkMode(DC: HDC; bkMode : Integer): Integer; extdecl;
begin
  Result := SetBkMode(DC, bkMode);
end;

function  WinAPI_SetCapture (AHandle: HWND): HWND; extdecl;
begin
  Result := SetCapture(AHandle);
end;

function  WinAPI_SetCaretPos(X, Y: Integer):  LongBool; extdecl;
begin
  Result := SetCaretPos(X, Y);
end;

function  WinAPI_SetCaretPosEx(handle: HWnd; X, Y: Integer):  LongBool; extdecl;
begin
  Result := SetCaretPosEx(handle, X, Y);
end;

function  WinAPI_SetCursorPos(X, Y: Integer):  LongBool; extdecl;
begin
  Result := SetCursorPos(X, Y);
end;

function  WinAPI_SetFocus(hWnd: HWND): HWND; extdecl;
begin
  Result := SetFocus(hWnd);
end;

function  WinAPI_SetForegroundWindow(hWnd : HWND):  LongBool; extdecl;
begin
  Result := SetForegroundWindow(hWnd);
end;

function  WinAPI_SetMapMode(DC: HDC; fnMapMode : Integer): Integer; extdecl;
begin
  Result := SetMapMode(DC, fnMapMode);
end;

function  WinAPI_SetMenu(AWindowHandle: HWND; AMenuHandle: HMENU):  LongBool; extdecl;
begin
  Result := SetMenu(AWindowHandle, AMenuHandle);
end;

function  WinAPI_SetParent(hWndChild: HWND; hWndParent: HWND): HWND; extdecl;
begin
  Result := SetParent(hWndChild, hWndParent);
end;

function  WinAPI_SetProp(Handle: hwnd; Str : PChar; Data : Pointer) :  LongBool; extdecl;
begin
  Result := SetProp(Handle, Str, Data);
end;

function  WinAPI_SetROP2(DC: HDC; Mode: Integer): Integer; extdecl;
begin
  Result := SetROP2(DC, Mode);
end;

function  WinAPI_SetScrollInfo(Handle: HWND; SBStyle: Integer; ScrollInfo: TScrollInfo; Redraw :  LongBool): Integer; extdecl;
begin
  Result := SetScrollInfo(Handle, SBStyle, ScrollInfo, Redraw);
end;

function  WinAPI_SetStretchBltMode(DC: HDC; StretchMode: Integer): Integer; extdecl;
begin
  Result := SetStretchBltMode(DC, StretchMode);
end;

function  WinAPI_SetTextCharacterExtra(_hdc : hdc; nCharExtra : Integer):Integer; extdecl;
begin
  Result := SetTextCharacterExtra(_hdc, nCharExtra);
end;

function  WinAPI_SetTextColor(DC: HDC; Color: TColorRef): TColorRef; extdecl;
begin
  Result := SetTextColor(DC, Color);
end;

function  WinAPI_SetWindowLong(Handle: HWND; Idx: Integer; NewLong : PtrInt): PtrInt; extdecl;
begin
  Result := SetWindowLong(Handle, Idx, NewLong);
end;

function  WinAPI_SetViewPortExtEx(DC: HDC; XExtent, YExtent : Integer; OldSize: PSize):  LongBool; extdecl;
begin
  Result := SetViewPortExtEx(DC,XExtent, YExtent, OldSize);
end;

function  WinAPI_SetViewPortOrgEx(DC: HDC; NewX, NewY: Integer; OldPoint: PPoint):  LongBool; extdecl;
begin
  Result := SetViewPortOrgEx(DC,NewX, NewY, OldPoint);
end;

function  WinAPI_SetWindowExtEx(DC: HDC; XExtent, YExtent: Integer; OldSize: PSize):  LongBool; extdecl;
begin
  Result := SetWindowExtEx(DC,XExtent, YExtent, OldSize);
end;

function  WinAPI_SetWindowOrgEx(dc : hdc; NewX, NewY: Integer; OldPoint: PPoint):  LongBool; extdecl;
begin
  Result := SetWindowOrgEx(dc,NewX, NewY, OldPoint);
end;

function  WinAPI_SetWindowPos(hWnd: HWND; hWndInsertAfter: HWND; X, Y, cx, cy: Integer; uFlags: UINT):  LongBool;  extdecl;
begin
  Result := SetWindowPos(hWnd,hWndInsertAfter, X, Y, cx, cy, uFlags);
end;

function  WinAPI_ShowCaret(hWnd: HWND):  LongBool; extdecl;
begin
  Result := ShowCaret(hWnd);
end;

function  WinAPI_ShowScrollBar(Handle: HWND; wBar: Integer; bShow:  LongBool):  LongBool; extdecl;
begin
  Result := ShowScrollBar(Handle,wBar, bShow);
end;

function  WinAPI_ShowWindow(hWnd: HWND; nCmdShow: Integer):  LongBool; extdecl;
begin
  Result := ShowWindow(hWnd,nCmdShow);
end;

function  WinAPI_StretchBlt(DestDC: HDC; X, Y, Width, Height: Integer; SrcDC: HDC; XSrc, YSrc, SrcWidth, SrcHeight: Integer; Rop: Cardinal):  LongBool; extdecl;
begin
  Result := StretchBlt(DestDC,X, Y, Width, Height, SrcDC, XSrc, YSrc, SrcWidth, SrcHeight, Rop);
end;

function  WinAPI_StretchDIBits(DC: HDC; DestX, DestY, DestWidth, DestHeight, SrcX,SrcY, SrcWidth, SrcHeight: Integer; Bits: Pointer; var BitsInfo: TBitmapInfo;Usage: UINT; Rop: DWORD): Integer; extdecl;
begin
  Result := StretchDIBits(DC, DestX, DestY, DestWidth, DestHeight, SrcX, SrcY, SrcWidth, SrcHeight, Bits, BitsInfo, Usage, Rop);
end;

function  WinAPI_SystemParametersInfo(uiAction: DWord; uiParam: DWord; pvParam: Pointer; fWinIni: DWord): LongBool; extdecl;
begin
  Result := SystemParametersInfo(uiAction, uiParam, pvParam, fWinIni);
end;

function  WinAPI_TextOut(DC: HDC; X,Y : Integer; Str : Pchar; Count: Integer) :  LongBool; extdecl;
begin
  Result := TextOut(DC, X, Y, Str, Count);
end;

function  WinAPI_UpdateWindow(Handle: HWND):  LongBool; extdecl;
begin
  Result := UpdateWindow(Handle);
end;

function  WinAPI_WindowFromPoint(Point : TPoint) : HWND; extdecl;
begin
  Result := WindowFromPoint(Point);
end;

{$ifdef MSWINDOWS}
function WinAPI_GetWindowLongPtr(hWnd: HWND; nIndex: LongInt): LONG_PTR; extdecl;
begin
  Result := GetWindowLongPtr(hWnd, nIndex);
end;

function WinAPI_SetWindowLongPtr(hWnd: HWND; nIndex: LongInt; dwNewLong: LONG_PTR): LONG_PTR; extdecl;
begin
  Result := SetWindowLongPtr(hWnd, nIndex, dwNewLong);
end;

function WinAPI_GetClassLongPtr(hWnd: HWND; nIndex: LongInt): LONG_PTR; extdecl;
begin
  Result := GetClassLongPtr(hWnd, nIndex);
end;

function WinAPI_SetClassLongPtr(hWnd: HWND; nIndex: LongInt; dwNewLong: LONG_PTR): LONG_PTR; extdecl;
begin
  Result := SetClassLongPtr(hWnd, nIndex, dwNewLong);
end;

function WinAPI_FindWindow(lpClassName: PChar; lpWindowName: PChar): HWND; extdecl;
begin
  Result := FindWindow(LPCSTR(lpClassName), LPCSTR(lpWindowName));
end;

function WinAPI_FindWindowEx(_para1: HWND; _para2: HWND; _para3: PChar; _para4: PChar): HWND; extdecl;
begin
  Result := FindWindowEx(_para1,_para2, LPCSTR(_para3), LPCSTR(_para4));
end;

function WinAPI_SetWindowText(hWnd: HWND; lpString: PChar): LongBool; extdecl;
begin
  Result := SetWindowText(hWnd, LPCSTR(lpString));
end;

function WinAPI_GetWindowText(hWnd: HWND; lpString: PChar; nMaxCount: LongInt): LongInt; extdecl;
begin
  Result := GetWindowText(hWnd, LPCSTR(lpString), nMaxCount);
end;

function WinAPI_GetWindowTextLength(hWnd: HWND): LongInt; extdecl;
begin
  Result := GetWindowTextLength(hWnd);
end;
{$endif}

exports
  WinAPI_CreateRectRgn,
  WinAPI_SetRectRgn,
  WinAPI_DeleteObject,
  WinAPI_CombineRgn,
  WinAPI_PtInRegion,
  WinAPI_ScreenToClient,
  WinAPI_ClientToScreen,
  WinAPI_DefWindowProc,
  WinAPI_DefSubclassProc,
  WinAPI_CreateRoundRectRgn,
  WinAPI_SetWindowRgn,
  WinAPI_SetCursor,
  WinAPI_LoadCursor,
  WinAPI_OnPaint,
  WinAPI_EndPaint,
  WinAPI_BeginPaint,
  WinAPI_Arc,
  WinAPI_AngleChord,
  WinAPI_CallNextHookEx,
  WinAPI_CallWindowProc,
  WinAPI_BitBlt,
  WinAPI_CreateBitmap,
  WinAPI_CreateBrushIndirect,
  WinAPI_CreateBrushWithRadialGradient,
  WinAPI_CreateCaret,
  WinAPI_CreateCompatibleBitmap,
  WinAPI_CreateCompatibleDC,
  WinAPI_CreateDIBitmap,
  WinAPI_CreateDIBSection,
  WinAPI_CreateEllipticRgn,
  WinAPI_CreateFontIndirect,
  WinAPI_CreateFontIndirectEx,
  WinAPI_CreateIconIndirect,
  WinAPI_CreatePalette,
  WinAPI_CreatePatternBrush,
  WinAPI_CreatePenIndirect,
  WinAPI_CreatePolygonRgn,
  WinAPI_DeleteCriticalSection,
  WinAPI_DeleteDC,
  WinAPI_DestroyCaret,
  WinAPI_DestroyCursor,
  WinAPI_DestroyIcon,
  WinAPI_DrawFrameControl,
  WinAPI_DrawFocusRect,
  WinAPI_DrawEdge,
  WinAPI_DrawText,
  WinAPI_EnableScrollBar,
  WinAPI_EnableWindow,
  WinAPI_EnterCriticalSection,
  WinAPI_Ellipse,
  WinAPI_EqualRgn,
  WinAPI_ExcludeClipRect,
  WinAPI_ExtCreatePen,
  WinAPI_ExtTextOut,
  WinAPI_ExtSelectClipRGN,
  WinAPI_FillRect,
  WinAPI_FillRgn,
  WinAPI_FloodFill,
  WinAPI_FrameRect,
  WinAPI_GetActiveWindow,
  WinAPI_GetBitmapBits,
  WinAPI_GetBkColor,
  WinAPI_GetCapture,
  WinAPI_GetCaretPos,
  WinAPI_GetClientRect,
  WinAPI_GetClipBox,
  WinAPI_GetClipRGN,
  WinAPI_GetCurrentObject,
  WinAPI_GetCursorPos,
  WinAPI_GetDC,
  WinAPI_GetDeviceCaps,
  WinAPI_GetDIBits,
  WinAPI_GetDoubleClickTime,
  WinAPI_GetFocus,
  WinAPI_GetFontLanguageInfo,
  WinAPI_GetForegroundWindow,
  WinAPI_GetIconInfo,
  WinAPI_GetKeyState,
  WinAPI_GetMapMode,
  WinAPI_GetMonitorInfo,
  WinAPI_GetDpiForMonitor,
  WinAPI_GetObject,
  WinAPI_GetParent,
  WinAPI_GetProp,
  WinAPI_GetRgnBox,
  WinAPI_GetROP2,
  WinAPI_GetScrollInfo,
  WinAPI_GetStockObject,
  WinAPI_GetSysColor,
  WinAPI_GetSysColorBrush,
  WinAPI_GetSystemMetrics,
  WinAPI_GetTextColor,
  WinAPI_GetTextExtentExPoint,
  WinAPI_GetTextExtentPoint,
  WinAPI_GetTextExtentPoint32,
  WinAPI_GetTextMetrics,
  WinAPI_GetViewPortExtEx,
  WinAPI_GetViewPortOrgEx,
  WinAPI_GetWindowExtEx,
  WinAPI_GetWindowLong,
  WinAPI_GetWindowRect,
  WinAPI_GetWindowSize,
  WinAPI_GetWindowOrgEx,
  WinAPI_GradientFill,
  WinAPI_HideCaret,
  WinAPI_InitializeCriticalSection,
  WinAPI_IntersectClipRect,
  WinAPI_InvalidateRect,
  WinAPI_InvalidateRgn,
  WinAPI_IsDBCSLeadByte,
  WinAPI_IsIconic,
  WinAPI_IsWindow,
  WinAPI_IsWindowEnabled,
  WinAPI_IsWindowVisible,
  WinAPI_IsZoomed,
  WinAPI_LeaveCriticalSection,
  WinAPI_LineTo,
  WinAPI_LoadBitmap,
  WinAPI_LoadIcon,
  WinAPI_MaskBltRop,
  WinAPI_MaskBlt,
  WinAPI_MessageBox,
  WinAPI_MonitorFromPoint,
  WinAPI_MonitorFromRect,
  WinAPI_MonitorFromWindow,
  WinAPI_MoveToEx,
  WinAPI_OffsetRgn,
  WinAPI_PaintRgn,
  WinAPI_Pie,
  WinAPI_PolyBezier,
  WinAPI_Polygon,
  WinAPI_Polyline,
  WinAPI_PostMessage,
  WinAPI_RealizePalette,
  WinAPI_Rectangle,
  WinAPI_RectInRegion,
  WinAPI_RectVisible,
  WinAPI_RedrawWindow,
  WinAPI_ReleaseCapture,
  WinAPI_ReleaseDC,
  WinAPI_RemoveProp,
  WinAPI_RestoreDC,
  WinAPI_RoundRect,
  WinAPI_SaveDC,
  WinAPI_ScrollWindowEx,
  WinAPI_SelectClipRGN,
  WinAPI_SelectObject,
  WinAPI_SelectPalette,
  WinAPI_SendMessage,
  WinAPI_SetActiveWindow,
  WinAPI_SetBkColor,
  WinAPI_SetBkMode,
  WinAPI_SetCapture,
  WinAPI_SetCaretPos,
  WinAPI_SetCaretPosEx,
  WinAPI_SetCursorPos,
  WinAPI_SetFocus,
  WinAPI_SetForegroundWindow,
  WinAPI_SetMapMode,
  WinAPI_SetMenu,
  WinAPI_SetParent,
  WinAPI_SetProp,
  WinAPI_SetROP2,
  WinAPI_SetScrollInfo,
  WinAPI_SetStretchBltMode,
  WinAPI_SetTextCharacterExtra,
  WinAPI_SetTextColor,
  WinAPI_SetWindowLong,
  WinAPI_SetViewPortExtEx,
  WinAPI_SetViewPortOrgEx,
  WinAPI_SetWindowExtEx,
  WinAPI_SetWindowOrgEx,
  WinAPI_SetWindowPos,
  WinAPI_ShowCaret,
  WinAPI_ShowScrollBar,
  WinAPI_ShowWindow,
  WinAPI_StretchBlt,
  WinAPI_StretchDIBits,
  WinAPI_SystemParametersInfo,
  WinAPI_TextOut,
  WinAPI_UpdateWindow,
  WinAPI_WindowFromPoint
{$ifdef MSWINDOWS},
  WinAPI_GetWindowLongPtr,
  WinAPI_SetWindowLongPtr,
  WinAPI_GetClassLongPtr,
  WinAPI_SetClassLongPtr,
  WinAPI_FindWindow,
  WinAPI_FindWindowEx,
  WinAPI_SetWindowText,
  WinAPI_GetWindowText,
  WinAPI_GetWindowTextLength
{$endif};
