// constructor
function TSynGutterCodeFolding_Create(AOwner: TComponent): TSynGutterCodeFolding; extdecl;
begin
  {$define handleExceptionID := 39000}
  handleExceptionBegin
  Result := TSynGutterCodeFolding.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterCodeFolding_PaintWithCanvasRectIntX2(AObj: TSynGutterCodeFolding; Canvas: TCanvas; var AClip: TRect; FirstLine: integer; LastLine: integer); extdecl;
begin
  {$define handleExceptionID := 39001}
  handleExceptionBegin
  AObj.Paint(Canvas, AClip, FirstLine, LastLine);
  handleExceptionEnd
end;

// property
function TSynGutterCodeFolding_MarkupInfoCurrentFold(ASet: LongBool; AObj: TSynGutterCodeFolding; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 39002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupInfoCurrentFold := AValue
  end else
    Result := AObj.MarkupInfoCurrentFold;
  handleExceptionEnd
end;

// property
function TSynGutterCodeFolding_MouseActionsExpanded(ASet: LongBool; AObj: TSynGutterCodeFolding; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 39003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseActionsExpanded := AValue
  end else
    Result := AObj.MouseActionsExpanded;
  handleExceptionEnd
end;

// property
function TSynGutterCodeFolding_MouseActionsCollapsed(ASet: LongBool; AObj: TSynGutterCodeFolding; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 39004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseActionsCollapsed := AValue
  end else
    Result := AObj.MouseActionsCollapsed;
  handleExceptionEnd
end;

// property
function TSynGutterCodeFolding_ReversePopMenuOrder(ASet: LongBool; AObj: TSynGutterCodeFolding; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 39005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReversePopMenuOrder := AValue
  end else
    Result := AObj.ReversePopMenuOrder;
  handleExceptionEnd
end;

function TSynGutterCodeFolding_TClass(): TClass; extdecl;
begin
  Result := TSynGutterCodeFolding;
end;

exports
  TSynGutterCodeFolding_Create,
  TSynGutterCodeFolding_PaintWithCanvasRectIntX2,
  TSynGutterCodeFolding_MarkupInfoCurrentFold,
  TSynGutterCodeFolding_MouseActionsExpanded,
  TSynGutterCodeFolding_MouseActionsCollapsed,
  TSynGutterCodeFolding_ReversePopMenuOrder,
  TSynGutterCodeFolding_TClass;