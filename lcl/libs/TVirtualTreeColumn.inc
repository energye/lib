// constructor
function TVirtualTreeColumn_Create(Collection: TCollection): TVirtualTreeColumn; extdecl;
begin
  {$define handleExceptionID := 30500}
  handleExceptionBegin
  Result := TVirtualTreeColumn.Create(Collection);
  handleExceptionEnd
end;

// function
procedure TVirtualTreeColumn_GetRect(AObj: TVirtualTreeColumn; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 30501}
  handleExceptionBegin
  Result := AObj.GetRect();
  handleExceptionEnd
end;

// function
function TVirtualTreeColumn_UseRightToLeftReading(AObj: TVirtualTreeColumn): LongBool; extdecl;
begin
  {$define handleExceptionID := 30502}
  handleExceptionBegin
  Result := AObj.UseRightToLeftReading();
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumn_LoadFromStream(AObj: TVirtualTreeColumn; const Stream: TStream; Version: Integer); extdecl;
begin
  {$define handleExceptionID := 30503}
  handleExceptionBegin
  AObj.LoadFromStream(Stream, Version);
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumn_ParentBiDiModeChanged(AObj: TVirtualTreeColumn); extdecl;
begin
  {$define handleExceptionID := 30504}
  handleExceptionBegin
  AObj.ParentBiDiModeChanged();
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumn_ParentColorChanged(AObj: TVirtualTreeColumn); extdecl;
begin
  {$define handleExceptionID := 30505}
  handleExceptionBegin
  AObj.ParentColorChanged();
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumn_RestoreLastWidth(AObj: TVirtualTreeColumn); extdecl;
begin
  {$define handleExceptionID := 30506}
  handleExceptionBegin
  AObj.RestoreLastWidth();
  handleExceptionEnd
end;

// procedure
procedure TVirtualTreeColumn_SaveToStream(AObj: TVirtualTreeColumn; const Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 30507}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Left(AObj: TVirtualTreeColumn): Integer; extdecl;
begin
  {$define handleExceptionID := 30508}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Owner(AObj: TVirtualTreeColumn): TVirtualTreeColumns; extdecl;
begin
  {$define handleExceptionID := 30509}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Alignment(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 30510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_BiDiMode(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  {$define handleExceptionID := 30511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BiDiMode := AValue
  end else
    Result := AObj.BiDiMode;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_CaptionAlignment(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 30512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaptionAlignment := AValue
  end else
    Result := AObj.CaptionAlignment;
  handleExceptionEnd
end;

// property
procedure TVirtualTreeColumn_CaptionText(AObj: TVirtualTreeColumn; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 30513}
  handleExceptionBegin
  StringBufferCreate(AObj.CaptionText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_CheckType(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TCheckType): TCheckType; extdecl;
begin
  {$define handleExceptionID := 30514}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckType := AValue
  end else
    Result := AObj.CheckType;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_CheckState(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TCheckState): TCheckState; extdecl;
begin
  {$define handleExceptionID := 30515}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckState := AValue
  end else
    Result := AObj.CheckState;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_CheckBox(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 30516}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckBox := AValue
  end else
    Result := AObj.CheckBox;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Color(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 30517}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_DefaultSortDirection(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: laz.VirtualTrees.TSortDirection): laz.VirtualTrees.TSortDirection; extdecl;
begin
  {$define handleExceptionID := 30518}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultSortDirection := AValue
  end else
    Result := AObj.DefaultSortDirection;
  handleExceptionEnd
end;

// property
procedure TVirtualTreeColumn_Hint(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 30519}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Hint := AValue
  end else
    StringBufferCreate(AObj.Hint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_ImageIndex(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 30520}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Layout(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TVTHeaderColumnLayout): TVTHeaderColumnLayout; extdecl;
begin
  {$define handleExceptionID := 30521}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Margin(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30522}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Margin := AValue
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_MaxWidth(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30523}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxWidth := AValue
  end else
    Result := AObj.MaxWidth;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_MinWidth(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30524}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinWidth := AValue
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Options(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TVTColumnOptions): TVTColumnOptions; extdecl;
begin
  {$define handleExceptionID := 30525}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Position(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TColumnPosition): TColumnPosition; extdecl;
begin
  {$define handleExceptionID := 30526}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Spacing(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30527}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Style(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: TVirtualTreeColumnStyle): TVirtualTreeColumnStyle; extdecl;
begin
  {$define handleExceptionID := 30528}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Tag(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: NativeInt): NativeInt; extdecl;
begin
  {$define handleExceptionID := 30529}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Tag := AValue
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

// property
procedure TVirtualTreeColumn_Text(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 30530}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TVirtualTreeColumn_Width(ASet: LongBool; AObj: TVirtualTreeColumn; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 30531}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

exports
  TVirtualTreeColumn_Create,
  TVirtualTreeColumn_GetRect,
  TVirtualTreeColumn_UseRightToLeftReading,
  TVirtualTreeColumn_LoadFromStream,
  TVirtualTreeColumn_ParentBiDiModeChanged,
  TVirtualTreeColumn_ParentColorChanged,
  TVirtualTreeColumn_RestoreLastWidth,
  TVirtualTreeColumn_SaveToStream,
  TVirtualTreeColumn_Left,
  TVirtualTreeColumn_Owner,
  TVirtualTreeColumn_Alignment,
  TVirtualTreeColumn_BiDiMode,
  TVirtualTreeColumn_CaptionAlignment,
  TVirtualTreeColumn_CaptionText,
  TVirtualTreeColumn_CheckType,
  TVirtualTreeColumn_CheckState,
  TVirtualTreeColumn_CheckBox,
  TVirtualTreeColumn_Color,
  TVirtualTreeColumn_DefaultSortDirection,
  TVirtualTreeColumn_Hint,
  TVirtualTreeColumn_ImageIndex,
  TVirtualTreeColumn_Layout,
  TVirtualTreeColumn_Margin,
  TVirtualTreeColumn_MaxWidth,
  TVirtualTreeColumn_MinWidth,
  TVirtualTreeColumn_Options,
  TVirtualTreeColumn_Position,
  TVirtualTreeColumn_Spacing,
  TVirtualTreeColumn_Style,
  TVirtualTreeColumn_Tag,
  TVirtualTreeColumn_Text,
  TVirtualTreeColumn_Width;