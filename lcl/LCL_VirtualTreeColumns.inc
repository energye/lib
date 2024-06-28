
//constructor
function VirtualTreeColumns_Create(AOwner: TVTHeader): TVirtualTreeColumns; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TVirtualTreeColumns.Create(AOwner);
  handleExceptionEnd
end;

//property
function VirtualTreeColumns_ClickIndex(AObj: TVirtualTreeColumns): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ClickIndex'}
  handleExceptionBegin
  Result := AObj.ClickIndex;
  handleExceptionEnd
end;

//property
function VirtualTreeColumns_DefaultWidth(AIsSet: LongBool; AObj: TVirtualTreeColumns; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultWidth := AValue;
  end else
    Result := AObj.DefaultWidth;
  handleExceptionEnd
end;

//property
function VirtualTreeColumns_ItemsForVirtualTreeColumn(AIsSet: LongBool; AObj: TVirtualTreeColumns; Index: TColumnIndex; AValue: TVirtualTreeColumn): TVirtualTreeColumn; extdecl;
begin
  {$define handleExceptionFuncName :='ItemsForVirtualTreeColumn'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//property
function VirtualTreeColumns_Header(AObj: TVirtualTreeColumns): TVTHeader; extdecl;
begin
  {$define handleExceptionFuncName :='Header'}
  handleExceptionBegin
  Result := AObj.Header;
  handleExceptionEnd
end;

//property
function VirtualTreeColumns_TrackIndex(AObj: TVirtualTreeColumns): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='TrackIndex'}
  handleExceptionBegin
  Result := AObj.TrackIndex;
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_AddForVirtualTreeColumn(AObj: TVirtualTreeColumns): TVirtualTreeColumn; extdecl;
begin
  {$define handleExceptionFuncName :='AddForVirtualTreeColumn'}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_ColumnFromPosition(AObj: TVirtualTreeColumns; var P: TPoint; Relative: LongBool): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ColumnFromPosition'}
  handleExceptionBegin
  Result := AObj.ColumnFromPosition(P, Relative);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_ColumnFromPosition1(AObj: TVirtualTreeColumns; PositionIndex: TColumnPosition): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ColumnFromPosition1'}
  handleExceptionBegin
  Result := AObj.ColumnFromPosition(PositionIndex);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetFirstVisibleColumn(AObj: TVirtualTreeColumns; ConsiderAllowFocus: LongBool): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstVisibleColumn'}
  handleExceptionBegin
  Result := AObj.GetFirstVisibleColumn(ConsiderAllowFocus);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetLastVisibleColumn(AObj: TVirtualTreeColumns; ConsiderAllowFocus: LongBool): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastVisibleColumn'}
  handleExceptionBegin
  Result := AObj.GetLastVisibleColumn(ConsiderAllowFocus);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetFirstColumn(AObj: TVirtualTreeColumns): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstColumn'}
  handleExceptionBegin
  Result := AObj.GetFirstColumn();
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetNextColumn(AObj: TVirtualTreeColumns; Column: TColumnIndex): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextColumn'}
  handleExceptionBegin
  Result := AObj.GetNextColumn(Column);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetNextVisibleColumn(AObj: TVirtualTreeColumns; Column: TColumnIndex; ConsiderAllowFocus: LongBool): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisibleColumn'}
  handleExceptionBegin
  Result := AObj.GetNextVisibleColumn(Column, ConsiderAllowFocus);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetPreviousColumn(AObj: TVirtualTreeColumns; Column: TColumnIndex): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousColumn'}
  handleExceptionBegin
  Result := AObj.GetPreviousColumn(Column);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetPreviousVisibleColumn(AObj: TVirtualTreeColumns; Column: TColumnIndex; ConsiderAllowFocus: LongBool): TColumnIndex; extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousVisibleColumn'}
  handleExceptionBegin
  Result := AObj.GetPreviousVisibleColumn(Column, ConsiderAllowFocus);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetScrollWidth(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetScrollWidth'}
  handleExceptionBegin
  Result := AObj.GetScrollWidth();
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_GetVisibleFixedWidth(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetVisibleFixedWidth'}
  handleExceptionBegin
  Result := AObj.GetVisibleFixedWidth();
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_IsValidColumn(AObj: TVirtualTreeColumns; Column: TColumnIndex): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValidColumn'}
  handleExceptionBegin
  Result := AObj.IsValidColumn(Column);
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_TotalWidth(AObj: TVirtualTreeColumns): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='TotalWidth'}
  handleExceptionBegin
  Result := AObj.TotalWidth();
  handleExceptionEnd
end;

//function
function VirtualTreeColumns_Class(): TClass; extdecl;
begin
  Result := TVirtualTreeColumns;
end;

//procedure
procedure VirtualTreeColumns_AnimatedResize(AObj: TVirtualTreeColumns; Column: TColumnIndex; NewWidth: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='AnimatedResize'}
  handleExceptionBegin
  AObj.AnimatedResize(Column, NewWidth);
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumns_GetColumnBounds(AObj: TVirtualTreeColumns; Column: TColumnIndex; out OutLeft, OutRight: Integer); extdecl;
var
  RetOutLeft: Integer;
  RetOutRight: Integer;
begin
  {$define handleExceptionFuncName :='GetColumnBounds'}
  handleExceptionBegin
  RetOutLeft := OutLeft;
  RetOutRight := OutRight;
  AObj.GetColumnBounds(Column, RetOutLeft, RetOutRight);
  OutLeft := RetOutLeft;
  OutRight := RetOutRight;
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumns_LoadFromStream(AObj: TVirtualTreeColumns; const Stream: TStream; Version: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStream'}
  handleExceptionBegin
  AObj.LoadFromStream(Stream, Version);
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumns_PaintHeader(AObj: TVirtualTreeColumns; DC: HDC; var R: TRect; HOffset: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='PaintHeader'}
  handleExceptionBegin
  AObj.PaintHeader(DC, R, HOffset);
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumns_PaintHeader1(AObj: TVirtualTreeColumns; TargetCanvas: TCanvas; var R: TRect; var Target: TPoint; RTLOffset: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='PaintHeader1'}
  handleExceptionBegin
  AObj.PaintHeader(TargetCanvas, R, Target, RTLOffset);
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumns_SaveToStream(AObj: TVirtualTreeColumns; const Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToStream'}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;


exports
  VirtualTreeColumns_Create,
  VirtualTreeColumns_ClickIndex,
  VirtualTreeColumns_DefaultWidth,
  VirtualTreeColumns_ItemsForVirtualTreeColumn,
  VirtualTreeColumns_Header,
  VirtualTreeColumns_TrackIndex,
  VirtualTreeColumns_AddForVirtualTreeColumn,
  VirtualTreeColumns_ColumnFromPosition,
  VirtualTreeColumns_ColumnFromPosition1,
  VirtualTreeColumns_GetFirstVisibleColumn,
  VirtualTreeColumns_GetLastVisibleColumn,
  VirtualTreeColumns_GetFirstColumn,
  VirtualTreeColumns_GetNextColumn,
  VirtualTreeColumns_GetNextVisibleColumn,
  VirtualTreeColumns_GetPreviousColumn,
  VirtualTreeColumns_GetPreviousVisibleColumn,
  VirtualTreeColumns_GetScrollWidth,
  VirtualTreeColumns_GetVisibleFixedWidth,
  VirtualTreeColumns_IsValidColumn,
  VirtualTreeColumns_TotalWidth,
  VirtualTreeColumns_Class,
  VirtualTreeColumns_AnimatedResize,
  VirtualTreeColumns_GetColumnBounds,
  VirtualTreeColumns_LoadFromStream,
  VirtualTreeColumns_PaintHeader,
  VirtualTreeColumns_PaintHeader1,
  VirtualTreeColumns_SaveToStream;