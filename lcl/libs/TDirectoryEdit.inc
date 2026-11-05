// constructor
function TDirectoryEdit_Create(AOwner: TComponent): TDirectoryEdit; extdecl;
begin
  {$define handleExceptionID := 14000}
  handleExceptionBegin
  Result := TDirectoryEdit.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TDirectoryEdit_RunDialog(AObj: TDirectoryEdit); extdecl;
begin
  {$define handleExceptionID := 14001}
  handleExceptionBegin
  AObj.RunDialog();
  handleExceptionEnd
end;

// property
function TDirectoryEdit_AutoSelected(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
procedure TDirectoryEdit_Directory(ASet: LongBool; AObj: TDirectoryEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 14003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Directory := AValue
  end else
    StringBufferCreate(AObj.Directory, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TDirectoryEdit_RootDir(ASet: LongBool; AObj: TDirectoryEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 14004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RootDir := AValue
  end else
    StringBufferCreate(AObj.RootDir, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TDirectoryEdit_DialogTitle(ASet: LongBool; AObj: TDirectoryEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 14005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DialogTitle := AValue
  end else
    StringBufferCreate(AObj.DialogTitle, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDirectoryEdit_DialogOptions(ASet: LongBool; AObj: TDirectoryEdit; AValue: TOpenOptions): TOpenOptions; extdecl;
begin
  {$define handleExceptionID := 14006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DialogOptions := AValue
  end else
    Result := AObj.DialogOptions;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ShowHidden(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowHidden := AValue
  end else
    Result := AObj.ShowHidden;
  handleExceptionEnd
end;

// property
procedure TDirectoryEdit_ButtonCaption(ASet: LongBool; AObj: TDirectoryEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 14008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCaption := AValue
  end else
    StringBufferCreate(AObj.ButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ButtonCursor(ASet: LongBool; AObj: TDirectoryEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 14009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCursor := AValue
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

// property
procedure TDirectoryEdit_ButtonHint(ASet: LongBool; AObj: TDirectoryEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 14010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonHint := AValue
  end else
    StringBufferCreate(AObj.ButtonHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ButtonOnlyWhenFocused(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ButtonWidth(ASet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonWidth := AValue
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_DirectInput(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DirectInput := AValue
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_Glyph(ASet: LongBool; AObj: TDirectoryEdit; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 14014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_NumGlyphs(ASet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_Images(ASet: LongBool; AObj: TDirectoryEdit; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 14016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ImageIndex(ASet: LongBool; AObj: TDirectoryEdit; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 14017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ImageWidth(ASet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14018}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_Flat(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14019}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_FocusOnButtonClick(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14020}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusOnButtonClick := AValue
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_AutoSelect(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14021}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_DragCursor(ASet: LongBool; AObj: TDirectoryEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 14022}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_DragMode(ASet: LongBool; AObj: TDirectoryEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 14023}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_Layout(ASet: LongBool; AObj: TDirectoryEdit; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionID := 14024}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ParentFont(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14025}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_ParentShowHint(ASet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 14026}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TDirectoryEdit_Spacing(ASet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 14027}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// event
procedure TDirectoryEdit_OnAcceptDirectory(AObj: TDirectoryEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAcceptFileNameEvent}
  {$DEFINE EventName := OnAcceptDirectory}
  LCLEventMethodCode
end;

// event
procedure TDirectoryEdit_OnButtonClick(AObj: TDirectoryEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  LCLEventMethodCode
end;

function TDirectoryEdit_TClass(): TClass; extdecl;
begin
  Result := TDirectoryEdit;
end;

exports
  TDirectoryEdit_Create,
  TDirectoryEdit_RunDialog,
  TDirectoryEdit_AutoSelected,
  TDirectoryEdit_Directory,
  TDirectoryEdit_RootDir,
  TDirectoryEdit_DialogTitle,
  TDirectoryEdit_DialogOptions,
  TDirectoryEdit_ShowHidden,
  TDirectoryEdit_ButtonCaption,
  TDirectoryEdit_ButtonCursor,
  TDirectoryEdit_ButtonHint,
  TDirectoryEdit_ButtonOnlyWhenFocused,
  TDirectoryEdit_ButtonWidth,
  TDirectoryEdit_DirectInput,
  TDirectoryEdit_Glyph,
  TDirectoryEdit_NumGlyphs,
  TDirectoryEdit_Images,
  TDirectoryEdit_ImageIndex,
  TDirectoryEdit_ImageWidth,
  TDirectoryEdit_Flat,
  TDirectoryEdit_FocusOnButtonClick,
  TDirectoryEdit_AutoSelect,
  TDirectoryEdit_DragCursor,
  TDirectoryEdit_DragMode,
  TDirectoryEdit_Layout,
  TDirectoryEdit_ParentFont,
  TDirectoryEdit_ParentShowHint,
  TDirectoryEdit_Spacing,
  TDirectoryEdit_OnAcceptDirectory,
  TDirectoryEdit_OnButtonClick,
  TDirectoryEdit_TClass;