// constructor
function TSynGutter_Create(AOwner: TSynEditBase; ASide: TSynGutterSide; ATextDrawer: TheTextDrawer): TSynGutter; extdecl;
begin
  {$define handleExceptionID := 37200}
  handleExceptionBegin
  Result := TSynGutter.Create(AOwner, ASide, ATextDrawer);
  handleExceptionEnd
end;

// function
function TSynGutter_HasCustomPopupMenu(AObj: TSynGutter; var PopMenu: TPopupMenu): LongBool; extdecl;
var
  OutPopMenu: TPopupMenu;
begin
  {$define handleExceptionID := 37201}
  handleExceptionBegin
  Result := AObj.HasCustomPopupMenu(OutPopMenu);
  PopMenu := OutPopMenu;
  handleExceptionEnd
end;

// function
function TSynGutter_DoHandleMouseAction(AObj: TSynGutter; AnAction: TSynEditMouseAction; var AnInfo: TSynEditMouseActionInfoPtr): LongBool; extdecl;
var
  OutAnInfo: TSynEditMouseActionInfo;
begin
  {$define handleExceptionID := 37202}
  handleExceptionBegin
  OutAnInfo := TSynEditMouseActionInfoToPas(AnInfo);
  Result := AObj.DoHandleMouseAction(AnAction, OutAnInfo);
  AnInfo := TSynEditMouseActionInfoToGo(OutAnInfo);
  handleExceptionEnd
end;

// function
function TSynGutter_LineNumberPart(AObj: TSynGutter; Index: Integer): TSynGutterLineNumber; extdecl;
begin
  {$define handleExceptionID := 37203}
  handleExceptionBegin
  Result := AObj.LineNumberPart(Index);
  handleExceptionEnd
end;

// function
function TSynGutter_CodeFoldPart(AObj: TSynGutter; Index: Integer): TSynGutterCodeFolding; extdecl;
begin
  {$define handleExceptionID := 37204}
  handleExceptionBegin
  Result := AObj.CodeFoldPart(Index);
  handleExceptionEnd
end;

// function
function TSynGutter_ChangesPart(AObj: TSynGutter; Index: Integer): TSynGutterChanges; extdecl;
begin
  {$define handleExceptionID := 37205}
  handleExceptionBegin
  Result := AObj.ChangesPart(Index);
  handleExceptionEnd
end;

// function
function TSynGutter_MarksPart(AObj: TSynGutter; Index: Integer): TSynGutterMarks; extdecl;
begin
  {$define handleExceptionID := 37206}
  handleExceptionBegin
  Result := AObj.MarksPart(Index);
  handleExceptionEnd
end;

// function
function TSynGutter_SeparatorPart(AObj: TSynGutter; Index: Integer): TSynGutterSeparator; extdecl;
begin
  {$define handleExceptionID := 37207}
  handleExceptionBegin
  Result := AObj.SeparatorPart(Index);
  handleExceptionEnd
end;

// function
function TSynGutter_LineOverviewPart(AObj: TSynGutter; Index: Integer): TSynGutterLineOverview; extdecl;
begin
  {$define handleExceptionID := 37208}
  handleExceptionBegin
  Result := AObj.LineOverviewPart(Index);
  handleExceptionEnd
end;

// procedure
procedure TSynGutter_Paint(AObj: TSynGutter; Canvas: TCanvas; Surface: TLazSynGutterArea; var AClip: TRect; FirstLine: integer; LastLine: integer); extdecl;
begin
  {$define handleExceptionID := 37209}
  handleExceptionBegin
  AObj.Paint(Canvas, Surface, AClip, FirstLine, LastLine);
  handleExceptionEnd
end;

// procedure
procedure TSynGutter_MouseDown(AObj: TSynGutter; Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 37210}
  handleExceptionBegin
  AObj.MouseDown(Button, Shift, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TSynGutter_MouseMove(AObj: TSynGutter; Shift: TShiftState; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 37211}
  handleExceptionBegin
  AObj.MouseMove(Shift, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TSynGutter_MouseUp(AObj: TSynGutter; Button: TMouseButton; Shift: TShiftState; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 37212}
  handleExceptionBegin
  AObj.MouseUp(Button, Shift, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TSynGutter_DoOnGutterClick(AObj: TSynGutter; X: integer; Y: integer); extdecl;
begin
  {$define handleExceptionID := 37213}
  handleExceptionBegin
  AObj.DoOnGutterClick(X, Y);
  handleExceptionEnd
end;

// property
function TSynGutter_Cursor(ASet: LongBool; AObj: TSynGutter; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 37214}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cursor := AValue
  end else
    Result := AObj.Cursor;
  handleExceptionEnd
end;

// event
procedure TSynGutter_OnGutterClick(AObj: TSynGutter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGutterClickEvent}
  {$DEFINE EventName := OnGutterClick}
  LCLEventMethodCode
end;

exports
  TSynGutter_Create,
  TSynGutter_HasCustomPopupMenu,
  TSynGutter_DoHandleMouseAction,
  TSynGutter_LineNumberPart,
  TSynGutter_CodeFoldPart,
  TSynGutter_ChangesPart,
  TSynGutter_MarksPart,
  TSynGutter_SeparatorPart,
  TSynGutter_LineOverviewPart,
  TSynGutter_Paint,
  TSynGutter_MouseDown,
  TSynGutter_MouseMove,
  TSynGutter_MouseUp,
  TSynGutter_DoOnGutterClick,
  TSynGutter_Cursor,
  TSynGutter_OnGutterClick;