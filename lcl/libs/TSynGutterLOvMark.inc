// constructor manually create
function TSynGutterLOvMark_Create(): TSynGutterLOvMark; extdecl;
begin
  {$define handleExceptionID := 40800}
  handleExceptionBegin
  Result := TSynGutterLOvMark.Create();
  handleExceptionEnd
end;

// property
function TSynGutterLOvMark_Line(AObj: TSynGutterLOvMark): Integer; extdecl;
begin
  {$define handleExceptionID := 40801}
  handleExceptionBegin
  Result := AObj.Line;
  handleExceptionEnd
end;

// property
function TSynGutterLOvMark_Column(AObj: TSynGutterLOvMark): Integer; extdecl;
begin
  {$define handleExceptionID := 40802}
  handleExceptionBegin
  Result := AObj.Column;
  handleExceptionEnd
end;

// property
function TSynGutterLOvMark_Color(AObj: TSynGutterLOvMark): TColor; extdecl;
begin
  {$define handleExceptionID := 40803}
  handleExceptionBegin
  Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TSynGutterLOvMark_Priority(AObj: TSynGutterLOvMark): Integer; extdecl;
begin
  {$define handleExceptionID := 40804}
  handleExceptionBegin
  Result := AObj.Priority;
  handleExceptionEnd
end;

// event
procedure TSynGutterLOvMark_OnChange(AObj: TSynGutterLOvMark; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TSynGutterLOvMark_OnDestroy(AObj: TSynGutterLOvMark; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  LCLEventMethodCode
end;

exports
  TSynGutterLOvMark_Create,
  TSynGutterLOvMark_Line,
  TSynGutterLOvMark_Column,
  TSynGutterLOvMark_Color,
  TSynGutterLOvMark_Priority,
  TSynGutterLOvMark_OnChange,
  TSynGutterLOvMark_OnDestroy;