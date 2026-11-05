// constructor
function TVTHeader_Create(AOwner: TBaseVirtualTree): TVTHeader; extdecl;
begin
  {$define handleExceptionID := 29500}
  handleExceptionBegin
  Result := TVTHeader.Create(AOwner);
  handleExceptionEnd
end;

// function
function TVTHeader_AllowFocus(AObj: TVTHeader; ColumnIndex: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 29501}
  handleExceptionBegin
  Result := AObj.AllowFocus(ColumnIndex);
  handleExceptionEnd
end;

// function
function TVTHeader_InHeader(AObj: TVTHeader; var P: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 29502}
  handleExceptionBegin
  Result := AObj.InHeader(P);
  handleExceptionEnd
end;

// function
function TVTHeader_InHeaderSplitterArea(AObj: TVTHeader; var P: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 29503}
  handleExceptionBegin
  Result := AObj.InHeaderSplitterArea(P);
  handleExceptionEnd
end;

// function
function TVTHeader_ResizeColumns(AObj: TVTHeader; ChangeBy: Integer; RangeStartCol: Integer; RangeEndCol: Integer; Options: TVTColumnOptions): Integer; extdecl;
begin
  {$define handleExceptionID := 29504}
  handleExceptionBegin
  Result := AObj.ResizeColumns(ChangeBy, RangeStartCol, RangeEndCol, Options);
  handleExceptionEnd
end;

// procedure
procedure TVTHeader_AutoFitColumns(AObj: TVTHeader; Animated: LongBool; SmartAutoFitType: TSmartAutoFitType; RangeStartCol: Integer; RangeEndCol: Integer); extdecl;
begin
  {$define handleExceptionID := 29505}
  handleExceptionBegin
  AObj.AutoFitColumns(Animated, SmartAutoFitType, RangeStartCol, RangeEndCol);
  handleExceptionEnd
end;

// procedure
procedure TVTHeader_Invalidate(AObj: TVTHeader; Column: TVirtualTreeColumn; ExpandToBorder: LongBool); extdecl;
begin
  {$define handleExceptionID := 29506}
  handleExceptionBegin
  AObj.Invalidate(Column, ExpandToBorder);
  handleExceptionEnd
end;

// procedure
procedure TVTHeader_LoadFromStream(AObj: TVTHeader; const Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 29507}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TVTHeader_RestoreColumns(AObj: TVTHeader); extdecl;
begin
  {$define handleExceptionID := 29508}
  handleExceptionBegin
  AObj.RestoreColumns();
  handleExceptionEnd
end;

// procedure
procedure TVTHeader_SaveToStream(AObj: TVTHeader; const Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 29509}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// property
function TVTHeader_DragImage(AObj: TVTHeader): TVTDragImage; extdecl;
begin
  {$define handleExceptionID := 29510}
  handleExceptionBegin
  Result := AObj.DragImage;
  handleExceptionEnd
end;

// property
function TVTHeader_States(AObj: TVTHeader): THeaderStates; extdecl;
begin
  {$define handleExceptionID := 29511}
  handleExceptionBegin
  Result := AObj.States;
  handleExceptionEnd
end;

// property
function TVTHeader_Treeview(AObj: TVTHeader): TBaseVirtualTree; extdecl;
begin
  {$define handleExceptionID := 29512}
  handleExceptionBegin
  Result := AObj.Treeview;
  handleExceptionEnd
end;

// property
function TVTHeader_UseColumns(AObj: TVTHeader): LongBool; extdecl;
begin
  {$define handleExceptionID := 29513}
  handleExceptionBegin
  Result := AObj.UseColumns;
  handleExceptionEnd
end;

// property
function TVTHeader_AutoSizeIndex(ASet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29514}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSizeIndex := AValue
  end else
    Result := AObj.AutoSizeIndex;
  handleExceptionEnd
end;

// property
function TVTHeader_Background(ASet: LongBool; AObj: TVTHeader; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 29515}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Background := AValue
  end else
    Result := AObj.Background;
  handleExceptionEnd
end;

// property
function TVTHeader_Columns(ASet: LongBool; AObj: TVTHeader; AValue: TVirtualTreeColumns): TVirtualTreeColumns; extdecl;
begin
  {$define handleExceptionID := 29516}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Columns := AValue
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

// property
function TVTHeader_DefaultHeight(ASet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29517}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultHeight := AValue
  end else
    Result := AObj.DefaultHeight;
  handleExceptionEnd
end;

// property
function TVTHeader_Font(ASet: LongBool; AObj: TVTHeader; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 29518}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Font := AValue
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

// property
function TVTHeader_FixedAreaConstraints(ASet: LongBool; AObj: TVTHeader; AValue: TVTFixedAreaConstraints): TVTFixedAreaConstraints; extdecl;
begin
  {$define handleExceptionID := 29519}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FixedAreaConstraints := AValue
  end else
    Result := AObj.FixedAreaConstraints;
  handleExceptionEnd
end;

// property
function TVTHeader_Height(ASet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29520}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TVTHeader_Images(ASet: LongBool; AObj: TVTHeader; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 29521}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TVTHeader_MainColumn(ASet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29522}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MainColumn := AValue
  end else
    Result := AObj.MainColumn;
  handleExceptionEnd
end;

// property
function TVTHeader_MaxHeight(ASet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29523}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxHeight := AValue
  end else
    Result := AObj.MaxHeight;
  handleExceptionEnd
end;

// property
function TVTHeader_MinHeight(ASet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29524}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinHeight := AValue
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;

// property
function TVTHeader_Options(ASet: LongBool; AObj: TVTHeader; AValue: TVTHeaderOptions): TVTHeaderOptions; extdecl;
begin
  {$define handleExceptionID := 29525}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TVTHeader_ParentFont(ASet: LongBool; AObj: TVTHeader; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29526}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TVTHeader_PopupMenu(ASet: LongBool; AObj: TVTHeader; AValue: TPopupMenu): TPopupMenu; extdecl;
begin
  {$define handleExceptionID := 29527}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PopupMenu := AValue
  end else
    Result := AObj.PopupMenu;
  handleExceptionEnd
end;

// property
function TVTHeader_SortColumn(ASet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29528}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortColumn := AValue
  end else
    Result := AObj.SortColumn;
  handleExceptionEnd
end;

// property
function TVTHeader_SortDirection(ASet: LongBool; AObj: TVTHeader; AValue: laz.VirtualTrees.TSortDirection): laz.VirtualTrees.TSortDirection; extdecl;
begin
  {$define handleExceptionID := 29529}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortDirection := AValue
  end else
    Result := AObj.SortDirection;
  handleExceptionEnd
end;

// property
function TVTHeader_Style(ASet: LongBool; AObj: TVTHeader; AValue: TVTHeaderStyle): TVTHeaderStyle; extdecl;
begin
  {$define handleExceptionID := 29530}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

exports
  TVTHeader_Create,
  TVTHeader_AllowFocus,
  TVTHeader_InHeader,
  TVTHeader_InHeaderSplitterArea,
  TVTHeader_ResizeColumns,
  TVTHeader_AutoFitColumns,
  TVTHeader_Invalidate,
  TVTHeader_LoadFromStream,
  TVTHeader_RestoreColumns,
  TVTHeader_SaveToStream,
  TVTHeader_DragImage,
  TVTHeader_States,
  TVTHeader_Treeview,
  TVTHeader_UseColumns,
  TVTHeader_AutoSizeIndex,
  TVTHeader_Background,
  TVTHeader_Columns,
  TVTHeader_DefaultHeight,
  TVTHeader_Font,
  TVTHeader_FixedAreaConstraints,
  TVTHeader_Height,
  TVTHeader_Images,
  TVTHeader_MainColumn,
  TVTHeader_MaxHeight,
  TVTHeader_MinHeight,
  TVTHeader_Options,
  TVTHeader_ParentFont,
  TVTHeader_PopupMenu,
  TVTHeader_SortColumn,
  TVTHeader_SortDirection,
  TVTHeader_Style;