
//constructor
function Mouse_Create(): TMouse; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TMouse.Create();
  handleExceptionEnd
end;

//property
function Mouse_Capture(AIsSet: LongBool; AObj: TMouse; AValue: HWND): HWND; extdecl;
begin
  {$define handleExceptionFuncName :='Capture'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Capture := AValue;
  end else
    Result := AObj.Capture;
  handleExceptionEnd
end;

//property
procedure Mouse_CursorPos(AIsSet: LongBool; AObj: TMouse; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='CursorPos'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CursorPos := AValue;
  end else
    Result := AObj.CursorPos;
  handleExceptionEnd
end;

//property
function Mouse_IsDragging(AObj: TMouse): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDragging'}
  handleExceptionBegin
  Result := AObj.IsDragging;
  handleExceptionEnd
end;

//property
function Mouse_WheelScrollLines(AObj: TMouse): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='WheelScrollLines'}
  handleExceptionBegin
  Result := AObj.WheelScrollLines;
  handleExceptionEnd
end;

//property
function Mouse_DragImmediate(AIsSet: LongBool; AObj: TMouse; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DragImmediate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragImmediate := AValue;
  end else
    Result := AObj.DragImmediate;
  handleExceptionEnd
end;

//property
function Mouse_DragThreshold(AIsSet: LongBool; AObj: TMouse; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DragThreshold'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragThreshold := AValue;
  end else
    Result := AObj.DragThreshold;
  handleExceptionEnd
end;

//function
function Mouse_Class(): TClass; extdecl;
begin
  Result := TMouse;
end;


exports
  Mouse_Create,
  Mouse_Capture,
  Mouse_CursorPos,
  Mouse_IsDragging,
  Mouse_WheelScrollLines,
  Mouse_DragImmediate,
  Mouse_DragThreshold,
  Mouse_Class;