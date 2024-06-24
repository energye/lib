
//constructor
function VTHeader_Create(AOwner: TBaseVirtualTree): TVTHeader; extdecl;
begin
  handleExceptionBegin
  Result := TVTHeader.Create(AOwner);
  handleExceptionEnd
end;

//property
function VTHeader_DragImage(AObj: TVTHeader): TVTDragImage; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DragImage;
  handleExceptionEnd
end;

//property
function VTHeader_States(AObj: TVTHeader): THeaderStates; extdecl;
begin
  handleExceptionBegin
  Result := AObj.States;
  handleExceptionEnd
end;

//property
function VTHeader_Treeview(AObj: TVTHeader): TBaseVirtualTree; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Treeview;
  handleExceptionEnd
end;

//property
function VTHeader_UseColumns(AObj: TVTHeader): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseColumns;
  handleExceptionEnd
end;

//property
function VTHeader_AutoSizeIndex(AIsSet: LongBool; AObj: TVTHeader; AValue: TColumnIndex): TColumnIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSizeIndex := AValue;
  end else
    Result := AObj.AutoSizeIndex;
  handleExceptionEnd
end;

//property
function VTHeader_Background(AIsSet: LongBool; AObj: TVTHeader; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Background := AValue;
  end else
    Result := AObj.Background;
  handleExceptionEnd
end;

//property
function VTHeader_Columns(AIsSet: LongBool; AObj: TVTHeader; AValue: TVirtualTreeColumns): TVirtualTreeColumns; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Columns := AValue;
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

//property
function VTHeader_DefaultHeight(AIsSet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultHeight := AValue;
  end else
    Result := AObj.DefaultHeight;
  handleExceptionEnd
end;

//property
function VTHeader_Font(AIsSet: LongBool; AObj: TVTHeader; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Font := AValue;
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

//property
function VTHeader_FixedAreaConstraints(AIsSet: LongBool; AObj: TVTHeader; AValue: TVTFixedAreaConstraints): TVTFixedAreaConstraints; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FixedAreaConstraints := AValue;
  end else
    Result := AObj.FixedAreaConstraints;
  handleExceptionEnd
end;

//property
function VTHeader_Height(AIsSet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//property
function VTHeader_Images(AIsSet: LongBool; AObj: TVTHeader; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function VTHeader_ImagesWidth(AIsSet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function VTHeader_MainColumn(AIsSet: LongBool; AObj: TVTHeader; AValue: TColumnIndex): TColumnIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MainColumn := AValue;
  end else
    Result := AObj.MainColumn;
  handleExceptionEnd
end;

//property
function VTHeader_MaxHeight(AIsSet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxHeight := AValue;
  end else
    Result := AObj.MaxHeight;
  handleExceptionEnd
end;

//property
function VTHeader_MinHeight(AIsSet: LongBool; AObj: TVTHeader; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinHeight := AValue;
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;

//property
function VTHeader_Options(AIsSet: LongBool; AObj: TVTHeader; AValue: TVTHeaderOptions): TVTHeaderOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function VTHeader_ParentFont(AIsSet: LongBool; AObj: TVTHeader; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function VTHeader_PopupMenu(AIsSet: LongBool; AObj: TVTHeader; AValue: TPopupMenu): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PopupMenu := AValue;
  end else
    Result := AObj.PopupMenu;
  handleExceptionEnd
end;

//property
function VTHeader_SortColumn(AIsSet: LongBool; AObj: TVTHeader; AValue: TColumnIndex): TColumnIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortColumn := AValue;
  end else
    Result := AObj.SortColumn;
  handleExceptionEnd
end;

//property
function VTHeader_SortDirection(AIsSet: LongBool; AObj: TVTHeader; AValue: TSortDirection): TSortDirection; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortDirection := AValue;
  end else
    Result := AObj.SortDirection;
  handleExceptionEnd
end;

//property
function VTHeader_Style(AIsSet: LongBool; AObj: TVTHeader; AValue: TVTHeaderStyle): TVTHeaderStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//function
function VTHeader_AllowFocus(AObj: TVTHeader; ColumnIndex: TColumnIndex): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowFocus(ColumnIndex);
  handleExceptionEnd
end;

//function
function VTHeader_InHeader(AObj: TVTHeader; var P: TPoint): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InHeader(P);
  handleExceptionEnd
end;

//function
function VTHeader_InHeaderSplitterArea(AObj: TVTHeader; var P: TPoint): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InHeaderSplitterArea(P);
  handleExceptionEnd
end;

//function
function VTHeader_ResizeColumns(AObj: TVTHeader; ChangeBy: Integer; RangeStartCol: TColumnIndex; RangeEndCol: TColumnIndex; Options: TVTColumnOptions): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResizeColumns(ChangeBy, RangeStartCol, RangeEndCol, Options);
  handleExceptionEnd
end;

//function
function VTHeader_Class(): TClass; extdecl;
begin
  Result := TVTHeader;
end;

//procedure
procedure VTHeader_AutoFitColumns(AObj: TVTHeader; Animated: LongBool; SmartAutoFitType: TSmartAutoFitType; RangeStartCol: Integer; RangeEndCol: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoFitColumns(Animated, SmartAutoFitType, RangeStartCol, RangeEndCol);
  handleExceptionEnd
end;

//procedure
procedure VTHeader_FixDesignFontsPPI(AObj: TVTHeader; const ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//procedure
procedure VTHeader_Invalidate(AObj: TVTHeader; Column: TVirtualTreeColumn; ExpandToBorder: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate(Column, ExpandToBorder);
  handleExceptionEnd
end;

//procedure
procedure VTHeader_LoadFromStream(AObj: TVTHeader; const Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure VTHeader_RestoreColumns(AObj: TVTHeader); extdecl;
begin
  handleExceptionBegin
  AObj.RestoreColumns();
  handleExceptionEnd
end;

//procedure
procedure VTHeader_SaveToStream(AObj: TVTHeader; const Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;


exports
  VTHeader_Create,
  VTHeader_DragImage,
  VTHeader_States,
  VTHeader_Treeview,
  VTHeader_UseColumns,
  VTHeader_AutoSizeIndex,
  VTHeader_Background,
  VTHeader_Columns,
  VTHeader_DefaultHeight,
  VTHeader_Font,
  VTHeader_FixedAreaConstraints,
  VTHeader_Height,
  VTHeader_Images,
  VTHeader_ImagesWidth,
  VTHeader_MainColumn,
  VTHeader_MaxHeight,
  VTHeader_MinHeight,
  VTHeader_Options,
  VTHeader_ParentFont,
  VTHeader_PopupMenu,
  VTHeader_SortColumn,
  VTHeader_SortDirection,
  VTHeader_Style,
  VTHeader_AllowFocus,
  VTHeader_InHeader,
  VTHeader_InHeaderSplitterArea,
  VTHeader_ResizeColumns,
  VTHeader_Class,
  VTHeader_AutoFitColumns,
  VTHeader_FixDesignFontsPPI,
  VTHeader_Invalidate,
  VTHeader_LoadFromStream,
  VTHeader_RestoreColumns,
  VTHeader_SaveToStream;