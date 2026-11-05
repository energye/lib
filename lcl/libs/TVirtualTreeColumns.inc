// constructor
function TVirtualTreeColumns_Create(AOwner: TVTHeader): TVirtualTreeColumns; extdecl;
begin
  {$define handleExceptionID := 30300}
  handleExceptionBegin
  Result := TVirtualTreeColumns.Create(AOwner);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_AddToVirtualTreeColumn(AObj: TVirtualTreeColumns): TVirtualTreeColumn; extdecl;
begin
  {$define handleExceptionID := 30301}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_ColumnFromPositionWithPointBool(AObj: TVirtualTreeColumns; var P: TPoint; Relative: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 30302}
  handleExceptionBegin
  Result := AObj.ColumnFromPosition(P, Relative);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_ColumnFromPositionWithColumnPosition(AObj: TVirtualTreeColumns; PositionIndex: TColumnPosition): Integer; extdecl;
begin
  {$define handleExceptionID := 30303}
  handleExceptionBegin
  Result := AObj.ColumnFromPosition(PositionIndex);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetFirstVisibleColumn(AObj: TVirtualTreeColumns; ConsiderAllowFocus: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 30304}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleColumn(ConsiderAllowFocus);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetLastVisibleColumn(AObj: TVirtualTreeColumns; ConsiderAllowFocus: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 30305}
  handleExceptionBegin
  Result := AObj.GetLastVisibleColumn(ConsiderAllowFocus);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetFirstColumn(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionID := 30306}
  handleExceptionBegin
  Result := AObj.GetFirstColumn();
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetNextColumn(AObj: TVirtualTreeColumns; Column: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30307}
  handleExceptionBegin
  Result := AObj.GetNextColumn(Column);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetNextVisibleColumn(AObj: TVirtualTreeColumns; Column: Integer; ConsiderAllowFocus: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 30308}
  handleExceptionBegin
  Result := AObj.GetNextVisibleColumn(Column, ConsiderAllowFocus);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetPreviousColumn(AObj: TVirtualTreeColumns; Column: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30309}
  handleExceptionBegin
  Result := AObj.GetPreviousColumn(Column);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetPreviousVisibleColumn(AObj: TVirtualTreeColumns; Column: Integer; ConsiderAllowFocus: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 30310}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleColumn(Column, ConsiderAllowFocus);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetScrollWidth(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionID := 30311}
  handleExceptionBegin
  Result := AObj.GetScrollWidth();
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetVisibleColumns(AObj: TVirtualTreeColumns): TColumnsArray; extdecl;
begin
  {$define handleExceptionID := 30312}
  handleExceptionBegin
  Result := AObj.GetVisibleColumns();
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_GetVisibleFixedWidth(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionID := 30313}
  handleExceptionBegin
  Result := AObj.GetVisibleFixedWidth();
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_IsValidColumn(AObj: TVirtualTreeColumns; Column: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 30314}
  handleExceptionBegin
  Result := AObj.IsValidColumn(Column);
  handleExceptionEnd
end;

// function
function TVirtualTreeColumns_TotalWidth(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionID := 30315}
  handleExceptionBegin
  Result := AObj.TotalWidth();
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumns_AnimatedResize(AObj: TVirtualTreeColumns; Column: Integer; NewWidth: Integer); extdecl;
begin
  {$define handleExceptionID := 30316}
  handleExceptionBegin
  AObj.AnimatedResize(Column, NewWidth);
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumns_Clear(AObj: TVirtualTreeColumns); extdecl;
begin
  {$define handleExceptionID := 30317}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumns_GetColumnBounds(AObj: TVirtualTreeColumns; Column: Integer; var Left: Integer; var Right: Integer); extdecl;
var
  OutLeft: Integer;
  OutRight: Integer;
begin
  {$define handleExceptionID := 30318}
  handleExceptionBegin
  AObj.GetColumnBounds(Column, OutLeft, OutRight);
  Left := OutLeft;
  Right := OutRight;
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumns_LoadFromStream(AObj: TVirtualTreeColumns; const Stream: TStream; Version: Integer); extdecl;
begin
  {$define handleExceptionID := 30319}
  handleExceptionBegin
  AObj.LoadFromStream(Stream, Version);
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumns_PaintHeaderWithHDCRectInt(AObj: TVirtualTreeColumns; DC: HDC; var R: TRect; HOffset: Integer); extdecl;
begin
  {$define handleExceptionID := 30320}
  handleExceptionBegin
  AObj.PaintHeader(DC, R, HOffset);
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumns_PaintHeaderWithCanvasRectPointInt(AObj: TVirtualTreeColumns; TargetCanvas: TCanvas; var R: TRect; var Target: TPoint; RTLOffset: Integer); extdecl;
begin
  {$define handleExceptionID := 30321}
  handleExceptionBegin
  AObj.PaintHeader(TargetCanvas, R, Target, RTLOffset);
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumns_SaveToStream(AObj: TVirtualTreeColumns; const Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 30322}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// property
function TVirtualTreeColumns_ClickIndex(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionID := 30323}
  handleExceptionBegin
  Result := AObj.ClickIndex;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumns_DefaultWidth(ASet: LongBool; AObj: TVirtualTreeColumns; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30324}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultWidth := AValue
  end else
    Result := AObj.DefaultWidth;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumns_ItemsWithColumnIndexToVirtualTreeColumn(ASet: LongBool; AObj: TVirtualTreeColumns; Index: Integer; AValue: TVirtualTreeColumn): TVirtualTreeColumn; extdecl;
begin
  {$define handleExceptionID := 30325}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TVirtualTreeColumns_Header(AObj: TVirtualTreeColumns): TVTHeader; extdecl;
begin
  {$define handleExceptionID := 30326}
  handleExceptionBegin
  Result := AObj.Header;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumns_TrackIndex(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionID := 30327}
  handleExceptionBegin
  Result := AObj.TrackIndex;
  handleExceptionEnd
end;

exports
  TVirtualTreeColumns_Create,
  TVirtualTreeColumns_AddToVirtualTreeColumn,
  TVirtualTreeColumns_ColumnFromPositionWithPointBool,
  TVirtualTreeColumns_ColumnFromPositionWithColumnPosition,
  TVirtualTreeColumns_GetFirstVisibleColumn,
  TVirtualTreeColumns_GetLastVisibleColumn,
  TVirtualTreeColumns_GetFirstColumn,
  TVirtualTreeColumns_GetNextColumn,
  TVirtualTreeColumns_GetNextVisibleColumn,
  TVirtualTreeColumns_GetPreviousColumn,
  TVirtualTreeColumns_GetPreviousVisibleColumn,
  TVirtualTreeColumns_GetScrollWidth,
  TVirtualTreeColumns_GetVisibleColumns,
  TVirtualTreeColumns_GetVisibleFixedWidth,
  TVirtualTreeColumns_IsValidColumn,
  TVirtualTreeColumns_TotalWidth,
  TVirtualTreeColumns_AnimatedResize,
  TVirtualTreeColumns_Clear,
  TVirtualTreeColumns_GetColumnBounds,
  TVirtualTreeColumns_LoadFromStream,
  TVirtualTreeColumns_PaintHeaderWithHDCRectInt,
  TVirtualTreeColumns_PaintHeaderWithCanvasRectPointInt,
  TVirtualTreeColumns_SaveToStream,
  TVirtualTreeColumns_ClickIndex,
  TVirtualTreeColumns_DefaultWidth,
  TVirtualTreeColumns_ItemsWithColumnIndexToVirtualTreeColumn,
  TVirtualTreeColumns_Header,
  TVirtualTreeColumns_TrackIndex;