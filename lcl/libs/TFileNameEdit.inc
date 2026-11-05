// constructor
function TFileNameEdit_Create(AOwner: TComponent): TFileNameEdit; extdecl;
begin
  {$define handleExceptionID := 9200}
  handleExceptionBegin
  Result := TFileNameEdit.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TFileNameEdit_RunDialog(AObj: TFileNameEdit); extdecl;
begin
  {$define handleExceptionID := 9201}
  handleExceptionBegin
  AObj.RunDialog();
  handleExceptionEnd
end;

// property
function TFileNameEdit_AutoSelected(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelected := AValue
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

// property
function TFileNameEdit_DialogFiles(AObj: TFileNameEdit): TStrings; extdecl;
begin
  {$define handleExceptionID := 9203}
  handleExceptionBegin
  Result := AObj.DialogFiles;
  handleExceptionEnd
end;

// property
procedure TFileNameEdit_FileName(ASet: LongBool; AObj: TFileNameEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FileName := AValue
  end else
    StringBufferCreate(AObj.FileName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TFileNameEdit_InitialDir(ASet: LongBool; AObj: TFileNameEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InitialDir := AValue
  end else
    StringBufferCreate(AObj.InitialDir, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFileNameEdit_DialogKind(ASet: LongBool; AObj: TFileNameEdit; AValue: TDialogKind): TDialogKind; extdecl;
begin
  {$define handleExceptionID := 9206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DialogKind := AValue
  end else
    Result := AObj.DialogKind;
  handleExceptionEnd
end;

// property
procedure TFileNameEdit_DialogTitle(ASet: LongBool; AObj: TFileNameEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DialogTitle := AValue
  end else
    StringBufferCreate(AObj.DialogTitle, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFileNameEdit_DialogOptions(ASet: LongBool; AObj: TFileNameEdit; AValue: TOpenOptions): TOpenOptions; extdecl;
begin
  {$define handleExceptionID := 9208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DialogOptions := AValue
  end else
    Result := AObj.DialogOptions;
  handleExceptionEnd
end;

// property
procedure TFileNameEdit_Filter(ASet: LongBool; AObj: TFileNameEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Filter := AValue
  end else
    StringBufferCreate(AObj.Filter, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFileNameEdit_FilterIndex(ASet: LongBool; AObj: TFileNameEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FilterIndex := AValue
  end else
    Result := AObj.FilterIndex;
  handleExceptionEnd
end;

// property
procedure TFileNameEdit_DefaultExt(ASet: LongBool; AObj: TFileNameEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultExt := AValue
  end else
    StringBufferCreate(AObj.DefaultExt, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFileNameEdit_HideDirectories(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9212}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideDirectories := AValue
  end else
    Result := AObj.HideDirectories;
  handleExceptionEnd
end;

// property
procedure TFileNameEdit_ButtonCaption(ASet: LongBool; AObj: TFileNameEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9213}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCaption := AValue
  end else
    StringBufferCreate(AObj.ButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFileNameEdit_ButtonCursor(ASet: LongBool; AObj: TFileNameEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 9214}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCursor := AValue
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

// property
procedure TFileNameEdit_ButtonHint(ASet: LongBool; AObj: TFileNameEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9215}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonHint := AValue
  end else
    StringBufferCreate(AObj.ButtonHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFileNameEdit_ButtonOnlyWhenFocused(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9216}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

// property
function TFileNameEdit_ButtonWidth(ASet: LongBool; AObj: TFileNameEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9217}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonWidth := AValue
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

// property
function TFileNameEdit_DirectInput(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9218}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DirectInput := AValue
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

// property
function TFileNameEdit_Glyph(ASet: LongBool; AObj: TFileNameEdit; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 9219}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TFileNameEdit_NumGlyphs(ASet: LongBool; AObj: TFileNameEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9220}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TFileNameEdit_Images(ASet: LongBool; AObj: TFileNameEdit; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 9221}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TFileNameEdit_ImageIndex(ASet: LongBool; AObj: TFileNameEdit; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 9222}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TFileNameEdit_ImageWidth(ASet: LongBool; AObj: TFileNameEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9223}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TFileNameEdit_Flat(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9224}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TFileNameEdit_FocusOnButtonClick(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9225}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusOnButtonClick := AValue
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

// property
function TFileNameEdit_AutoSelect(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9226}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TFileNameEdit_DragCursor(ASet: LongBool; AObj: TFileNameEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 9227}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TFileNameEdit_DragMode(ASet: LongBool; AObj: TFileNameEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 9228}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TFileNameEdit_Layout(ASet: LongBool; AObj: TFileNameEdit; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionID := 9229}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TFileNameEdit_ParentFont(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9230}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TFileNameEdit_ParentShowHint(ASet: LongBool; AObj: TFileNameEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9231}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TFileNameEdit_Spacing(ASet: LongBool; AObj: TFileNameEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9232}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// event
procedure TFileNameEdit_OnAcceptFileName(AObj: TFileNameEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAcceptFileNameEvent}
  {$DEFINE EventName := OnAcceptFileName}
  LCLEventMethodCode
end;

// event
procedure TFileNameEdit_OnFolderChange(AObj: TFileNameEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnFolderChange}
  LCLEventMethodCode
end;

// event
procedure TFileNameEdit_OnButtonClick(AObj: TFileNameEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  LCLEventMethodCode
end;

function TFileNameEdit_TClass(): TClass; extdecl;
begin
  Result := TFileNameEdit;
end;

exports
  TFileNameEdit_Create,
  TFileNameEdit_RunDialog,
  TFileNameEdit_AutoSelected,
  TFileNameEdit_DialogFiles,
  TFileNameEdit_FileName,
  TFileNameEdit_InitialDir,
  TFileNameEdit_DialogKind,
  TFileNameEdit_DialogTitle,
  TFileNameEdit_DialogOptions,
  TFileNameEdit_Filter,
  TFileNameEdit_FilterIndex,
  TFileNameEdit_DefaultExt,
  TFileNameEdit_HideDirectories,
  TFileNameEdit_ButtonCaption,
  TFileNameEdit_ButtonCursor,
  TFileNameEdit_ButtonHint,
  TFileNameEdit_ButtonOnlyWhenFocused,
  TFileNameEdit_ButtonWidth,
  TFileNameEdit_DirectInput,
  TFileNameEdit_Glyph,
  TFileNameEdit_NumGlyphs,
  TFileNameEdit_Images,
  TFileNameEdit_ImageIndex,
  TFileNameEdit_ImageWidth,
  TFileNameEdit_Flat,
  TFileNameEdit_FocusOnButtonClick,
  TFileNameEdit_AutoSelect,
  TFileNameEdit_DragCursor,
  TFileNameEdit_DragMode,
  TFileNameEdit_Layout,
  TFileNameEdit_ParentFont,
  TFileNameEdit_ParentShowHint,
  TFileNameEdit_Spacing,
  TFileNameEdit_OnAcceptFileName,
  TFileNameEdit_OnFolderChange,
  TFileNameEdit_OnButtonClick,
  TFileNameEdit_TClass;