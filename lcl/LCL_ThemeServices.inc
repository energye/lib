
//constructor
function ThemeServices_Create(): TThemeServices; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TThemeServices.Create();
  handleExceptionEnd
end;

//property
function ThemeServices_DottedBrush(AObj: TThemeServices): HBRUSH; extdecl;
begin
  {$define handleExceptionFuncName :='DottedBrush'}
  handleExceptionBegin
  Result := AObj.DottedBrush;
  handleExceptionEnd
end;

//property
function ThemeServices_ThemesAvailable(AObj: TThemeServices): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ThemesAvailable'}
  handleExceptionBegin
  Result := AObj.ThemesAvailable;
  handleExceptionEnd
end;

//property
function ThemeServices_ThemesEnabled(AObj: TThemeServices): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ThemesEnabled'}
  handleExceptionBegin
  Result := AObj.ThemesEnabled;
  handleExceptionEnd
end;

//function
function ThemeServices_IsDisabled(AObj: TThemeServices; var Details: TThemedElementDetails): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDisabled'}
  handleExceptionBegin
  Result := AObj.IsDisabled(Details);
  handleExceptionEnd
end;

//function
function ThemeServices_IsPushed(AObj: TThemeServices; var Details: TThemedElementDetails): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsPushed'}
  handleExceptionBegin
  Result := AObj.IsPushed(Details);
  handleExceptionEnd
end;

//function
function ThemeServices_IsHot(AObj: TThemeServices; var Details: TThemedElementDetails): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsHot'}
  handleExceptionBegin
  Result := AObj.IsHot(Details);
  handleExceptionEnd
end;

//function
function ThemeServices_IsChecked(AObj: TThemeServices; var Details: TThemedElementDetails): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsChecked'}
  handleExceptionBegin
  Result := AObj.IsChecked(Details);
  handleExceptionEnd
end;

//function
function ThemeServices_IsMixed(AObj: TThemeServices; var Details: TThemedElementDetails): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsMixed'}
  handleExceptionBegin
  Result := AObj.IsMixed(Details);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails(AObj: TThemeServices; Detail: TThemedButton; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails1(AObj: TThemeServices; Detail: TThemedClock; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails1'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails2(AObj: TThemeServices; Detail: TThemedComboBox; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails2'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails3(AObj: TThemeServices; Detail: TThemedEdit; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails3'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails4(AObj: TThemeServices; Detail: TThemedExplorerBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails4'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails5(AObj: TThemeServices; Detail: TThemedHeader; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails5'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails6(AObj: TThemeServices; Detail: TThemedListView; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails6'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails7(AObj: TThemeServices; Detail: TThemedMenu; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails7'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails8(AObj: TThemeServices; Detail: TThemedPage; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails8'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails9(AObj: TThemeServices; Detail: TThemedProgress; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails9'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails10(AObj: TThemeServices; Detail: TThemedRebar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails10'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails11(AObj: TThemeServices; Detail: TThemedScrollBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails11'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails12(AObj: TThemeServices; Detail: TThemedSpin; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails12'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails13(AObj: TThemeServices; Detail: TThemedStartPanel; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails13'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails14(AObj: TThemeServices; Detail: TThemedStatus; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails14'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails15(AObj: TThemeServices; Detail: TThemedTab; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails15'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails16(AObj: TThemeServices; Detail: TThemedTaskBand; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails16'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails17(AObj: TThemeServices; Detail: TThemedTaskBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails17'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails18(AObj: TThemeServices; Detail: TThemedToolBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails18'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails19(AObj: TThemeServices; Detail: TThemedToolTip; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails19'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails20(AObj: TThemeServices; Detail: TThemedTrackBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails20'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails21(AObj: TThemeServices; Detail: TThemedTrayNotify; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails21'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails22(AObj: TThemeServices; Detail: TThemedTreeview; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails22'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetElementDetails23(AObj: TThemeServices; Detail: TThemedWindow; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementDetails23'}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetDetailSizeForWindow(AObj: TThemeServices; var Details: TThemedElementDetails; const AWindow: HWND; var Result: TSize); extdecl;
begin
  {$define handleExceptionFuncName :='GetDetailSizeForWindow'}
  handleExceptionBegin
  Result := AObj.GetDetailSizeForWindow(Details, AWindow);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetDetailSizeForPPI(AObj: TThemeServices; var Details: TThemedElementDetails; PPI: Integer; var Result: TSize); extdecl;
begin
  {$define handleExceptionFuncName :='GetDetailSizeForPPI'}
  handleExceptionBegin
  Result := AObj.GetDetailSizeForPPI(Details, PPI);
  handleExceptionEnd
end;

//function
function ThemeServices_GetDetailRegion(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetails; var R: TRect): HRGN; extdecl;
begin
  {$define handleExceptionFuncName :='GetDetailRegion'}
  handleExceptionBegin
  Result := AObj.GetDetailRegion(DC, Details, R);
  handleExceptionEnd
end;

//function
function ThemeServices_GetStockImage(AObj: TThemeServices; StockID: LongInt; out OutImage, OutMask: HBitmap): LongBool; extdecl;
var
  RetOutImage: HBitmap;
  RetOutMask: HBitmap;
begin
  {$define handleExceptionFuncName :='GetStockImage'}
  handleExceptionBegin
  RetOutImage := OutImage;
  RetOutMask := OutMask;
  Result := AObj.GetStockImage(StockID, RetOutImage, RetOutMask);
  OutImage := RetOutImage;
  OutMask := RetOutMask;
  handleExceptionEnd
end;

//function
function ThemeServices_GetStockImage1(AObj: TThemeServices; StockID: LongInt; const AWidth, AHeight: Integer; out OutImage, OutMask: HBitmap): LongBool; extdecl;
var
  RetOutImage: HBitmap;
  RetOutMask: HBitmap;
begin
  {$define handleExceptionFuncName :='GetStockImage1'}
  handleExceptionBegin
  RetOutImage := OutImage;
  RetOutMask := OutMask;
  Result := AObj.GetStockImage(StockID, AWidth, AHeight, RetOutImage, RetOutMask);
  OutImage := RetOutImage;
  OutMask := RetOutMask;
  handleExceptionEnd
end;

//function
function ThemeServices_GetOption(AObj: TThemeServices; AOption: TThemeOption): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetOption'}
  handleExceptionBegin
  Result := AObj.GetOption(AOption);
  handleExceptionEnd
end;

//function
procedure ThemeServices_GetTextExtent(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetails; const S: PChar; Flags: uint32; BoundingRect: PRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetTextExtent'}
  handleExceptionBegin
  Result := AObj.GetTextExtent(DC, Details, S, Flags, BoundingRect);
  handleExceptionEnd
end;

//function
function ThemeServices_ColorToRGB(AObj: TThemeServices; Color: LongInt; Details: PThemedElementDetails): COLORREF; extdecl;
begin
  {$define handleExceptionFuncName :='ColorToRGB'}
  handleExceptionBegin
  Result := AObj.ColorToRGB(Color, Details);
  handleExceptionEnd
end;

//function
procedure ThemeServices_ContentRect(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetails; var BoundingRect: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='ContentRect'}
  handleExceptionBegin
  Result := AObj.ContentRect(DC, Details, BoundingRect);
  handleExceptionEnd
end;

//function
function ThemeServices_HasTransparentParts(AObj: TThemeServices; var Details: TThemedElementDetails): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasTransparentParts'}
  handleExceptionBegin
  Result := AObj.HasTransparentParts(Details);
  handleExceptionEnd
end;

//function
function ThemeServices_Class(): TClass; extdecl;
begin
  Result := TThemeServices;
end;

//procedure
procedure ThemeServices_IntfDoOnThemeChange(AObj: TThemeServices); extdecl;
begin
  {$define handleExceptionFuncName :='IntfDoOnThemeChange'}
  handleExceptionBegin
  AObj.IntfDoOnThemeChange();
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_DrawEdge(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetails; var R: TRect; Edge, Flags: uint32; AContentRect: PRect); extdecl;
begin
  {$define handleExceptionFuncName :='DrawEdge'}
  handleExceptionBegin
  AObj.DrawEdge(DC, Details, R, Edge, Flags, AContentRect);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_DrawElement(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetails; var R: TRect; ClipRect: PRect); extdecl;
begin
  {$define handleExceptionFuncName :='DrawElement'}
  handleExceptionBegin
  AObj.DrawElement(DC, Details, R, ClipRect);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_DrawIcon(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetails; var R: TRect; himl: HIMAGELIST; Index: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='DrawIcon'}
  handleExceptionBegin
  AObj.DrawIcon(DC, Details, R, himl, Index);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_DrawIcon1(AObj: TThemeServices; ACanvas: TPersistent; var Details: TThemedElementDetails; var P: TPoint; AImageList: TPersistent; Index: Integer; AImageWidth: Integer; ARefControl: TPersistent); extdecl;
begin
  {$define handleExceptionFuncName :='DrawIcon1'}
  handleExceptionBegin
  AObj.DrawIcon(ACanvas, Details, P, AImageList, Index, AImageWidth, ARefControl);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_DrawParentBackground(AObj: TThemeServices; Window: HWND; Target: HDC; Details: PThemedElementDetails; OnlyIfTransparent: LongBool; Bounds: PRect); extdecl;
begin
  {$define handleExceptionFuncName :='DrawParentBackground'}
  handleExceptionBegin
  AObj.DrawParentBackground(Window, Target, Details, OnlyIfTransparent, Bounds);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_DrawText(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetails; const S: PChar; var R: TRect; Flags, Flags2: uint32); extdecl;
begin
  {$define handleExceptionFuncName :='DrawText'}
  handleExceptionBegin
  AObj.DrawText(DC, Details, S, R, Flags, Flags2);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_DrawText1(AObj: TThemeServices; ACanvas: TPersistent; var Details: TThemedElementDetails; const S: PChar; var R: TRect; Flags, Flags2: uint32); extdecl;
begin
  {$define handleExceptionFuncName :='DrawText1'}
  handleExceptionBegin
  AObj.DrawText(ACanvas, Details, S, R, Flags, Flags2);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_PaintBorder(AObj: TThemeServices; Control: TObject; EraseLRCorner: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='PaintBorder'}
  handleExceptionBegin
  AObj.PaintBorder(Control, EraseLRCorner);
  handleExceptionEnd
end;

//procedure
procedure ThemeServices_UpdateThemes(AObj: TThemeServices); extdecl;
begin
  {$define handleExceptionFuncName :='UpdateThemes'}
  handleExceptionBegin
  AObj.UpdateThemes();
  handleExceptionEnd
end;

//property event
procedure ThemeServices_SetOnThemeChange(AObj: TThemeServices; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnThemeChange}
  EventMethodCode
end;


exports
  ThemeServices_Create,
  ThemeServices_DottedBrush,
  ThemeServices_ThemesAvailable,
  ThemeServices_ThemesEnabled,
  ThemeServices_IsDisabled,
  ThemeServices_IsPushed,
  ThemeServices_IsHot,
  ThemeServices_IsChecked,
  ThemeServices_IsMixed,
  ThemeServices_GetElementDetails,
  ThemeServices_GetElementDetails1,
  ThemeServices_GetElementDetails2,
  ThemeServices_GetElementDetails3,
  ThemeServices_GetElementDetails4,
  ThemeServices_GetElementDetails5,
  ThemeServices_GetElementDetails6,
  ThemeServices_GetElementDetails7,
  ThemeServices_GetElementDetails8,
  ThemeServices_GetElementDetails9,
  ThemeServices_GetElementDetails10,
  ThemeServices_GetElementDetails11,
  ThemeServices_GetElementDetails12,
  ThemeServices_GetElementDetails13,
  ThemeServices_GetElementDetails14,
  ThemeServices_GetElementDetails15,
  ThemeServices_GetElementDetails16,
  ThemeServices_GetElementDetails17,
  ThemeServices_GetElementDetails18,
  ThemeServices_GetElementDetails19,
  ThemeServices_GetElementDetails20,
  ThemeServices_GetElementDetails21,
  ThemeServices_GetElementDetails22,
  ThemeServices_GetElementDetails23,
  ThemeServices_GetDetailSizeForWindow,
  ThemeServices_GetDetailSizeForPPI,
  ThemeServices_GetDetailRegion,
  ThemeServices_GetStockImage,
  ThemeServices_GetStockImage1,
  ThemeServices_GetOption,
  ThemeServices_GetTextExtent,
  ThemeServices_ColorToRGB,
  ThemeServices_ContentRect,
  ThemeServices_HasTransparentParts,
  ThemeServices_Class,
  ThemeServices_IntfDoOnThemeChange,
  ThemeServices_DrawEdge,
  ThemeServices_DrawElement,
  ThemeServices_DrawIcon,
  ThemeServices_DrawIcon1,
  ThemeServices_DrawParentBackground,
  ThemeServices_DrawText,
  ThemeServices_DrawText1,
  ThemeServices_PaintBorder,
  ThemeServices_UpdateThemes,
  ThemeServices_SetOnThemeChange;