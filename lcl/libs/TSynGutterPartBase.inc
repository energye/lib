// function
function TSynGutterPartBase_HasCustomPopupMenu(AObj: TSynGutterPartBase; var PopMenu: TPopupMenu): LongBool; extdecl;
var
  OutPopMenu: TPopupMenu;
begin
  {$define handleExceptionID := 38800}
  handleExceptionBegin
  Result := AObj.HasCustomPopupMenu(OutPopMenu);
  PopMenu := OutPopMenu;
  handleExceptionEnd
end;

// function
function TSynGutterPartBase_DoHandleMouseAction(AObj: TSynGutterPartBase; AnAction: TSynEditMouseAction; var AnInfo: TSynEditMouseActionInfoPtr): LongBool; extdecl;
var
  OutAnInfo: TSynEditMouseActionInfo;
begin
  {$define handleExceptionID := 38801}
  handleExceptionBegin
  OutAnInfo := TSynEditMouseActionInfoToPas(AnInfo);
  Result := AObj.DoHandleMouseAction(AnAction, OutAnInfo);
  AnInfo := TSynEditMouseActionInfoToGo(OutAnInfo);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_PaintAll(AObj: TSynGutterPartBase; Canvas: TCanvas; var AClip: TRect; FirstLine: integer; LastLine: integer); extdecl;
begin
  {$define handleExceptionID := 38802}
  handleExceptionBegin
  AObj.PaintAll(Canvas, AClip, FirstLine, LastLine);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_Paint(AObj: TSynGutterPartBase; Canvas: TCanvas; var AClip: TRect; FirstLine: integer; LastLine: integer); extdecl;
begin
  {$define handleExceptionID := 38803}
  handleExceptionBegin
  AObj.Paint(Canvas, AClip, FirstLine, LastLine);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_ScalePPI(AObj: TSynGutterPartBase; var AScaleFactor: Double); extdecl;
begin
  {$define handleExceptionID := 38804}
  handleExceptionBegin
  AObj.ScalePPI(AScaleFactor);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_MouseDown(AObj: TSynGutterPartBase; Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 38805}
  handleExceptionBegin
  AObj.MouseDown(Button, Shift, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_MouseMove(AObj: TSynGutterPartBase; Shift: TShiftState; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 38806}
  handleExceptionBegin
  AObj.MouseMove(Shift, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_MouseUp(AObj: TSynGutterPartBase; Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 38807}
  handleExceptionBegin
  AObj.MouseUp(Button, Shift, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_ResetMouseActions(AObj: TSynGutterPartBase); extdecl;
begin
  {$define handleExceptionID := 38808}
  handleExceptionBegin
  AObj.ResetMouseActions();
  handleExceptionEnd
end;

// procedure
procedure TSynGutterPartBase_DoOnGutterClick(AObj: TSynGutterPartBase; X: integer; Y: integer); extdecl;
begin
  {$define handleExceptionID := 38809}
  handleExceptionBegin
  AObj.DoOnGutterClick(X, Y);
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_Left(AObj: TSynGutterPartBase): Integer; extdecl;
begin
  {$define handleExceptionID := 38810}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_Top(AObj: TSynGutterPartBase): Integer; extdecl;
begin
  {$define handleExceptionID := 38811}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_Height(AObj: TSynGutterPartBase): Integer; extdecl;
begin
  {$define handleExceptionID := 38812}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_Cursor(ASet: LongBool; AObj: TSynGutterPartBase; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 38813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cursor := AValue
  end else
    Result := AObj.Cursor;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_MarkupInfo(ASet: LongBool; AObj: TSynGutterPartBase; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 38814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupInfo := AValue
  end else
    Result := AObj.MarkupInfo;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_MarkupInfoCurrentLine(ASet: LongBool; AObj: TSynGutterPartBase; AValue: TSynHighlighterAttributesModifier): TSynHighlighterAttributesModifier; extdecl;
begin
  {$define handleExceptionID := 38815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupInfoCurrentLine := AValue
  end else
    Result := AObj.MarkupInfoCurrentLine;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_AutoSize(ASet: LongBool; AObj: TSynGutterPartBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 38816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSize := AValue
  end else
    Result := AObj.AutoSize;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_Width(ASet: LongBool; AObj: TSynGutterPartBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 38817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_FullWidth(AObj: TSynGutterPartBase): integer; extdecl;
begin
  {$define handleExceptionID := 38818}
  handleExceptionBegin
  Result := AObj.FullWidth;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_LeftOffset(ASet: LongBool; AObj: TSynGutterPartBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 38819}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftOffset := AValue
  end else
    Result := AObj.LeftOffset;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_RightOffset(ASet: LongBool; AObj: TSynGutterPartBase; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 38820}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightOffset := AValue
  end else
    Result := AObj.RightOffset;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_Visible(ASet: LongBool; AObj: TSynGutterPartBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 38821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TSynGutterPartBase_MouseActions(ASet: LongBool; AObj: TSynGutterPartBase; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 38822}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseActions := AValue
  end else
    Result := AObj.MouseActions;
  handleExceptionEnd
end;

// event
procedure TSynGutterPartBase_OnGutterClick(AObj: TSynGutterPartBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGutterClickEvent}
  {$DEFINE EventName := OnGutterClick}
  LCLEventMethodCode
end;

// event
procedure TSynGutterPartBase_OnChange(AObj: TSynGutterPartBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSynGutterPartBase_HasCustomPopupMenu,
  TSynGutterPartBase_DoHandleMouseAction,
  TSynGutterPartBase_PaintAll,
  TSynGutterPartBase_Paint,
  TSynGutterPartBase_ScalePPI,
  TSynGutterPartBase_MouseDown,
  TSynGutterPartBase_MouseMove,
  TSynGutterPartBase_MouseUp,
  TSynGutterPartBase_ResetMouseActions,
  TSynGutterPartBase_DoOnGutterClick,
  TSynGutterPartBase_Left,
  TSynGutterPartBase_Top,
  TSynGutterPartBase_Height,
  TSynGutterPartBase_Cursor,
  TSynGutterPartBase_MarkupInfo,
  TSynGutterPartBase_MarkupInfoCurrentLine,
  TSynGutterPartBase_AutoSize,
  TSynGutterPartBase_Width,
  TSynGutterPartBase_FullWidth,
  TSynGutterPartBase_LeftOffset,
  TSynGutterPartBase_RightOffset,
  TSynGutterPartBase_Visible,
  TSynGutterPartBase_MouseActions,
  TSynGutterPartBase_OnGutterClick,
  TSynGutterPartBase_OnChange;