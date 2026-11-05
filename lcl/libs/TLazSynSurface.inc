// procedure
procedure TLazSynSurface_Assign(AObj: TLazSynSurface; Src: TLazSynSurface); extdecl;
begin
  {$define handleExceptionID := 40500}
  handleExceptionBegin
  AObj.Assign(Src);
  handleExceptionEnd
end;

// procedure
procedure TLazSynSurface_Paint(AObj: TLazSynSurface; ACanvas: TCanvas; var AClip: TRect); extdecl;
begin
  {$define handleExceptionID := 40501}
  handleExceptionBegin
  AObj.Paint(ACanvas, AClip);
  handleExceptionEnd
end;

// procedure
procedure TLazSynSurface_InvalidateLines(AObj: TLazSynSurface; FirstTextLine: TLineIdx; LastTextLine: TLineIdx; AScreenLineOffset: Integer); extdecl;
begin
  {$define handleExceptionID := 40502}
  handleExceptionBegin
  AObj.InvalidateLines(FirstTextLine, LastTextLine, AScreenLineOffset);
  handleExceptionEnd
end;

// procedure
procedure TLazSynSurface_SetBounds(AObj: TLazSynSurface; ATop: Integer; ALeft: Integer; ABottom: Integer; ARight: Integer); extdecl;
begin
  {$define handleExceptionID := 40503}
  handleExceptionBegin
  AObj.SetBounds(ATop, ALeft, ABottom, ARight);
  handleExceptionEnd
end;

// property
function TLazSynSurface_Left(AObj: TLazSynSurface): Integer; extdecl;
begin
  {$define handleExceptionID := 40504}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TLazSynSurface_Top(AObj: TLazSynSurface): Integer; extdecl;
begin
  {$define handleExceptionID := 40505}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TLazSynSurface_Right(AObj: TLazSynSurface): Integer; extdecl;
begin
  {$define handleExceptionID := 40506}
  handleExceptionBegin
  Result := AObj.Right;
  handleExceptionEnd
end;

// property
function TLazSynSurface_Bottom(AObj: TLazSynSurface): integer; extdecl;
begin
  {$define handleExceptionID := 40507}
  handleExceptionBegin
  Result := AObj.Bottom;
  handleExceptionEnd
end;

// property
procedure TLazSynSurface_Bounds(AObj: TLazSynSurface; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 40508}
  handleExceptionBegin
  Result := AObj.Bounds;
  handleExceptionEnd
end;

// property
function TLazSynSurface_DisplayView(ASet: LongBool; AObj: TLazSynSurface; AValue: TLazSynDisplayView): TLazSynDisplayView; extdecl;
begin
  {$define handleExceptionID := 40509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisplayView := AValue
  end else
    Result := AObj.DisplayView;
  handleExceptionEnd
end;

exports
  TLazSynSurface_Assign,
  TLazSynSurface_Paint,
  TLazSynSurface_InvalidateLines,
  TLazSynSurface_SetBounds,
  TLazSynSurface_Left,
  TLazSynSurface_Top,
  TLazSynSurface_Right,
  TLazSynSurface_Bottom,
  TLazSynSurface_Bounds,
  TLazSynSurface_DisplayView;