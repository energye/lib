// constructor manually create
function TMouse_Create(): TMouse; extdecl;
begin
  {$define handleExceptionID := 13300}
  handleExceptionBegin
  Result := TMouse.Create();
  handleExceptionEnd
end;

// property
function TMouse_Capture(ASet: LongBool; AObj: TMouse; AValue: HWND): HWND; extdecl;
begin
  {$define handleExceptionID := 13301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Capture := AValue
  end else
    Result := AObj.Capture;
  handleExceptionEnd
end;

// property
procedure TMouse_CursorPos(ASet: LongBool; AObj: TMouse; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 13302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CursorPos := AValue
  end else
    Result := AObj.CursorPos;
  handleExceptionEnd
end;

// property
function TMouse_IsDragging(AObj: TMouse): LongBool; extdecl;
begin
  {$define handleExceptionID := 13303}
  handleExceptionBegin
  Result := AObj.IsDragging;
  handleExceptionEnd
end;

// property
function TMouse_WheelScrollLines(AObj: TMouse): Integer; extdecl;
begin
  {$define handleExceptionID := 13304}
  handleExceptionBegin
  Result := AObj.WheelScrollLines;
  handleExceptionEnd
end;

// property
function TMouse_DragImmediate(ASet: LongBool; AObj: TMouse; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragImmediate := AValue
  end else
    Result := AObj.DragImmediate;
  handleExceptionEnd
end;

// property
function TMouse_DragThreshold(ASet: LongBool; AObj: TMouse; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 13306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragThreshold := AValue
  end else
    Result := AObj.DragThreshold;
  handleExceptionEnd
end;

exports
  TMouse_Create,
  TMouse_Capture,
  TMouse_CursorPos,
  TMouse_IsDragging,
  TMouse_WheelScrollLines,
  TMouse_DragImmediate,
  TMouse_DragThreshold;