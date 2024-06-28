
//constructor
function VirtualTreeColumn_Create(Collection: TCollection): TVirtualTreeColumn; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TVirtualTreeColumn.Create(Collection);
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Left(AObj: TVirtualTreeColumn): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Left'}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Owner(AObj: TVirtualTreeColumn): TVirtualTreeColumns; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Alignment(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_BiDiMode(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  {$define handleExceptionFuncName :='BiDiMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BiDiMode := AValue;
  end else
    Result := AObj.BiDiMode;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_CaptionAlignment(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='CaptionAlignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaptionAlignment := AValue;
  end else
    Result := AObj.CaptionAlignment;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_CaptionText(AObj: TVirtualTreeColumn): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='CaptionText'}
  handleExceptionBegin
  Result := ToPChar(AObj.CaptionText);
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_CheckType(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TCheckType): TCheckType; extdecl;
begin
  {$define handleExceptionFuncName :='CheckType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckType := AValue;
  end else
    Result := AObj.CheckType;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_CheckState(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TCheckState): TCheckState; extdecl;
begin
  {$define handleExceptionFuncName :='CheckState'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckState := AValue;
  end else
    Result := AObj.CheckState;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_CheckBox(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CheckBox'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckBox := AValue;
  end else
    Result := AObj.CheckBox;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Color(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='Color'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_DefaultSortDirection(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TSortDirection): TSortDirection; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultSortDirection'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultSortDirection := AValue;
  end else
    Result := AObj.DefaultSortDirection;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Hint(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Hint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Hint := AValue;
  end else
    Result := ToPChar(AObj.Hint);
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_ImageIndex(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Layout(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TVTHeaderColumnLayout): TVTHeaderColumnLayout; extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Margin(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Margin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Margin := AValue;
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_MaxWidth(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MaxWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxWidth := AValue;
  end else
    Result := AObj.MaxWidth;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_MinWidth(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MinWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinWidth := AValue;
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Options(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TVTColumnOptions): TVTColumnOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Options'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Position(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TColumnPosition): TColumnPosition; extdecl;
begin
  {$define handleExceptionFuncName :='Position'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Spacing(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Spacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Spacing := AValue;
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Style(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: TVirtualTreeColumnStyle): TVirtualTreeColumnStyle; extdecl;
begin
  {$define handleExceptionFuncName :='Style'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Tag(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: NativeInt): NativeInt; extdecl;
begin
  {$define handleExceptionFuncName :='Tag'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Tag := AValue;
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Text(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Text'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function VirtualTreeColumn_Width(AIsSet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//function
procedure VirtualTreeColumn_GetRect(AObj: TVirtualTreeColumn; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetRect'}
  handleExceptionBegin
  Result := AObj.GetRect();
  handleExceptionEnd
end;

//function
function VirtualTreeColumn_UseRightToLeftReading(AObj: TVirtualTreeColumn): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='UseRightToLeftReading'}
  handleExceptionBegin
  Result := AObj.UseRightToLeftReading();
  handleExceptionEnd
end;

//function
function VirtualTreeColumn_Class(): TClass; extdecl;
begin
  Result := TVirtualTreeColumn;
end;

//procedure
procedure VirtualTreeColumn_LoadFromStream(AObj: TVirtualTreeColumn; const Stream: TStream; Version: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStream'}
  handleExceptionBegin
  AObj.LoadFromStream(Stream, Version);
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumn_ParentBiDiModeChanged(AObj: TVirtualTreeColumn); extdecl;
begin
  {$define handleExceptionFuncName :='ParentBiDiModeChanged'}
  handleExceptionBegin
  AObj.ParentBiDiModeChanged();
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumn_ParentColorChanged(AObj: TVirtualTreeColumn); extdecl;
begin
  {$define handleExceptionFuncName :='ParentColorChanged'}
  handleExceptionBegin
  AObj.ParentColorChanged();
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumn_RestoreLastWidth(AObj: TVirtualTreeColumn); extdecl;
begin
  {$define handleExceptionFuncName :='RestoreLastWidth'}
  handleExceptionBegin
  AObj.RestoreLastWidth();
  handleExceptionEnd
end;

//procedure
procedure VirtualTreeColumn_SaveToStream(AObj: TVirtualTreeColumn; const Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToStream'}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;


exports
  VirtualTreeColumn_Create,
  VirtualTreeColumn_Left,
  VirtualTreeColumn_Owner,
  VirtualTreeColumn_Alignment,
  VirtualTreeColumn_BiDiMode,
  VirtualTreeColumn_CaptionAlignment,
  VirtualTreeColumn_CaptionText,
  VirtualTreeColumn_CheckType,
  VirtualTreeColumn_CheckState,
  VirtualTreeColumn_CheckBox,
  VirtualTreeColumn_Color,
  VirtualTreeColumn_DefaultSortDirection,
  VirtualTreeColumn_Hint,
  VirtualTreeColumn_ImageIndex,
  VirtualTreeColumn_Layout,
  VirtualTreeColumn_Margin,
  VirtualTreeColumn_MaxWidth,
  VirtualTreeColumn_MinWidth,
  VirtualTreeColumn_Options,
  VirtualTreeColumn_Position,
  VirtualTreeColumn_Spacing,
  VirtualTreeColumn_Style,
  VirtualTreeColumn_Tag,
  VirtualTreeColumn_Text,
  VirtualTreeColumn_Width,
  VirtualTreeColumn_GetRect,
  VirtualTreeColumn_UseRightToLeftReading,
  VirtualTreeColumn_Class,
  VirtualTreeColumn_LoadFromStream,
  VirtualTreeColumn_ParentBiDiModeChanged,
  VirtualTreeColumn_ParentColorChanged,
  VirtualTreeColumn_RestoreLastWidth,
  VirtualTreeColumn_SaveToStream;