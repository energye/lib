
//constructor
function DirectoryEdit_Create(AOwner: TComponent): TDirectoryEdit; extdecl;
begin
  handleExceptionBegin
  Result := TDirectoryEdit.Create(AOwner);
  handleExceptionEnd
end;

//property
function DirectoryEdit_AutoSelected(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelected := AValue;
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

//property
function DirectoryEdit_Directory(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Directory := AValue;
  end else
    Result := ToPChar(AObj.Directory);
  handleExceptionEnd
end;

//property
function DirectoryEdit_RootDir(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootDir := AValue;
  end else
    Result := ToPChar(AObj.RootDir);
  handleExceptionEnd
end;

//property
function DirectoryEdit_DialogTitle(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DialogTitle := AValue;
  end else
    Result := ToPChar(AObj.DialogTitle);
  handleExceptionEnd
end;

//property
function DirectoryEdit_DialogOptions(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TOpenOptions): TOpenOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DialogOptions := AValue;
  end else
    Result := AObj.DialogOptions;
  handleExceptionEnd
end;

//property
function DirectoryEdit_ShowHidden(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowHidden := AValue;
  end else
    Result := AObj.ShowHidden;
  handleExceptionEnd
end;

//property
function DirectoryEdit_ButtonCaption(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonCaption := AValue;
  end else
    Result := ToPChar(AObj.ButtonCaption);
  handleExceptionEnd
end;

//property
function DirectoryEdit_ButtonCursor(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonCursor := AValue;
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

//property
function DirectoryEdit_ButtonHint(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonHint := AValue;
  end else
    Result := ToPChar(AObj.ButtonHint);
  handleExceptionEnd
end;

//property
function DirectoryEdit_ButtonOnlyWhenFocused(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue;
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

//property
function DirectoryEdit_ButtonWidth(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonWidth := AValue;
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

//property
function DirectoryEdit_DirectInput(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DirectInput := AValue;
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

//property
function DirectoryEdit_Glyph(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TBitmap): TBitmap; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Glyph := AValue;
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

//property
function DirectoryEdit_NumGlyphs(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NumGlyphs := AValue;
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

//property
function DirectoryEdit_Images(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TCustomImageList): TCustomImageList; extdecl;
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
function DirectoryEdit_ImageIndex(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function DirectoryEdit_ImageWidth(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageWidth := AValue;
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

//property
function DirectoryEdit_Flat(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Flat := AValue;
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

//property
function DirectoryEdit_FocusOnButtonClick(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusOnButtonClick := AValue;
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

//property
function DirectoryEdit_AutoSelect(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelect := AValue;
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

//property
function DirectoryEdit_DragCursor(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function DirectoryEdit_DragMode(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function DirectoryEdit_Layout(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: TLeftRight): TLeftRight; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function DirectoryEdit_ParentFont(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
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
function DirectoryEdit_ParentShowHint(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function DirectoryEdit_Spacing(AIsSet: LongBool; AObj: TDirectoryEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Spacing := AValue;
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

//function
function DirectoryEdit_Class(): TClass; extdecl;
begin
  Result := TDirectoryEdit;
end;

//procedure
procedure DirectoryEdit_RunDialog(AObj: TDirectoryEdit); extdecl;
begin
  handleExceptionBegin
  AObj.RunDialog();
  handleExceptionEnd
end;

//property event
procedure DirectoryEdit_SetOnAcceptDirectory(AObj: TDirectoryEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAcceptFileNameEvent}
  {$DEFINE EventName := OnAcceptDirectory}
  EventMethodCode
end;

//property event
procedure DirectoryEdit_SetOnButtonClick(AObj: TDirectoryEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  EventMethodCode
end;


exports
  DirectoryEdit_Create,
  DirectoryEdit_AutoSelected,
  DirectoryEdit_Directory,
  DirectoryEdit_RootDir,
  DirectoryEdit_DialogTitle,
  DirectoryEdit_DialogOptions,
  DirectoryEdit_ShowHidden,
  DirectoryEdit_ButtonCaption,
  DirectoryEdit_ButtonCursor,
  DirectoryEdit_ButtonHint,
  DirectoryEdit_ButtonOnlyWhenFocused,
  DirectoryEdit_ButtonWidth,
  DirectoryEdit_DirectInput,
  DirectoryEdit_Glyph,
  DirectoryEdit_NumGlyphs,
  DirectoryEdit_Images,
  DirectoryEdit_ImageIndex,
  DirectoryEdit_ImageWidth,
  DirectoryEdit_Flat,
  DirectoryEdit_FocusOnButtonClick,
  DirectoryEdit_AutoSelect,
  DirectoryEdit_DragCursor,
  DirectoryEdit_DragMode,
  DirectoryEdit_Layout,
  DirectoryEdit_ParentFont,
  DirectoryEdit_ParentShowHint,
  DirectoryEdit_Spacing,
  DirectoryEdit_Class,
  DirectoryEdit_RunDialog,
  DirectoryEdit_SetOnAcceptDirectory,
  DirectoryEdit_SetOnButtonClick;