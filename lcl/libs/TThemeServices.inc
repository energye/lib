// constructor
function TThemeServices_Create(): TThemeServices; extdecl;
begin
  {$define handleExceptionID := 28300}
  handleExceptionBegin
  Result := TThemeServices.Create();
  handleExceptionEnd
end;

// function
function TThemeServices_IsDisabled(AObj: TThemeServices; var Details: TThemedElementDetailsPtr): LongBool; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28301}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.IsDisabled(InDetails);
  handleExceptionEnd
end;

// function
function TThemeServices_IsPushed(AObj: TThemeServices; var Details: TThemedElementDetailsPtr): LongBool; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28302}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.IsPushed(InDetails);
  handleExceptionEnd
end;

// function
function TThemeServices_IsHot(AObj: TThemeServices; var Details: TThemedElementDetailsPtr): LongBool; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28303}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.IsHot(InDetails);
  handleExceptionEnd
end;

// function
function TThemeServices_IsChecked(AObj: TThemeServices; var Details: TThemedElementDetailsPtr): LongBool; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28304}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.IsChecked(InDetails);
  handleExceptionEnd
end;

// function
function TThemeServices_IsMixed(AObj: TThemeServices; var Details: TThemedElementDetailsPtr): LongBool; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28305}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.IsMixed(InDetails);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedButton(AObj: TThemeServices; Detail: TThemedButton; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28306}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedClock(AObj: TThemeServices; Detail: TThemedClock; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28307}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedComboBox(AObj: TThemeServices; Detail: TThemedComboBox; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28308}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedEdit(AObj: TThemeServices; Detail: TThemedEdit; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28309}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedExplorerBar(AObj: TThemeServices; Detail: TThemedExplorerBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28310}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedHeader(AObj: TThemeServices; Detail: TThemedHeader; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28311}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedListView(AObj: TThemeServices; Detail: TThemedListView; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28312}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedMenu(AObj: TThemeServices; Detail: TThemedMenu; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28313}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedPage(AObj: TThemeServices; Detail: TThemedPage; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28314}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedProgress(AObj: TThemeServices; Detail: TThemedProgress; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28315}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedRebar(AObj: TThemeServices; Detail: TThemedRebar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28316}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedScrollBar(AObj: TThemeServices; Detail: TThemedScrollBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28317}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedSpin(AObj: TThemeServices; Detail: TThemedSpin; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28318}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedStartPanel(AObj: TThemeServices; Detail: TThemedStartPanel; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28319}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedStatus(AObj: TThemeServices; Detail: TThemedStatus; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28320}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedTab(AObj: TThemeServices; Detail: TThemedTab; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28321}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedTaskBand(AObj: TThemeServices; Detail: TThemedTaskBand; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28322}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedTaskBar(AObj: TThemeServices; Detail: TThemedTaskBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28323}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedToolBar(AObj: TThemeServices; Detail: TThemedToolBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28324}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedToolTip(AObj: TThemeServices; Detail: TThemedToolTip; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28325}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedTrackBar(AObj: TThemeServices; Detail: TThemedTrackBar; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28326}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedTrayNotify(AObj: TThemeServices; Detail: TThemedTrayNotify; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28327}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedTreeview(AObj: TThemeServices; Detail: TThemedTreeview; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28328}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetElementDetailsWithThemedWindow(AObj: TThemeServices; Detail: TThemedWindow; var Result: TThemedElementDetails); extdecl;
begin
  {$define handleExceptionID := 28329}
  handleExceptionBegin
  Result := AObj.GetElementDetails(Detail);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetDetailSizeForWindow(AObj: TThemeServices; var Details: TThemedElementDetailsPtr; const AWindow: HWND; var Result: TSize); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28330}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.GetDetailSizeForWindow(InDetails, AWindow);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetDetailSizeForPPI(AObj: TThemeServices; var Details: TThemedElementDetailsPtr; PPI: Integer; var Result: TSize); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28331}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.GetDetailSizeForPPI(InDetails, PPI);
  handleExceptionEnd
end;

// function
function TThemeServices_GetDetailRegion(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetailsPtr; var R: TRect): HRGN; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28332}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.GetDetailRegion(DC, InDetails, R);
  handleExceptionEnd
end;

// function
function TThemeServices_GetStockImageWithIntHBitmapX2(AObj: TThemeServices; StockID: Integer; var Image: HBitmap; var Mask: HBitmap): LongBool; extdecl;
var
  OutImage: HBitmap;
  OutMask: HBitmap;
begin
  {$define handleExceptionID := 28333}
  handleExceptionBegin
  Result := AObj.GetStockImage(StockID, OutImage, OutMask);
  Image := OutImage;
  Mask := OutMask;
  handleExceptionEnd
end;

// function
function TThemeServices_GetStockImageWithIntX3HBitmapX2(AObj: TThemeServices; StockID: Integer; const AWidth: Integer; const AHeight: Integer; var Image: HBitmap; var Mask: HBitmap): LongBool; extdecl;
var
  OutImage: HBitmap;
  OutMask: HBitmap;
begin
  {$define handleExceptionID := 28334}
  handleExceptionBegin
  Result := AObj.GetStockImage(StockID, AWidth, AHeight, OutImage, OutMask);
  Image := OutImage;
  Mask := OutMask;
  handleExceptionEnd
end;

// function
function TThemeServices_GetOption(AObj: TThemeServices; AOption: TThemeOption): Integer; extdecl;
begin
  {$define handleExceptionID := 28335}
  handleExceptionBegin
  Result := AObj.GetOption(AOption);
  handleExceptionEnd
end;

// function
procedure TThemeServices_GetTextExtent(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetailsPtr; const S: PChar; Flags: Cardinal; var BoundingRect: PRect; var Result: TRect); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28336}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.GetTextExtent(DC, InDetails, S, Flags, BoundingRect);
  handleExceptionEnd
end;

// function
function TThemeServices_ColorToRGB(AObj: TThemeServices; Color: Integer; Details: TThemedElementDetailsPtr): COLORREF; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28337}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.ColorToRGB(Color, @InDetails);
  handleExceptionEnd
end;

// function
procedure TThemeServices_ContentRect(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetailsPtr; var BoundingRect: TRect; var Result: TRect); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28338}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.ContentRect(DC, InDetails, BoundingRect);
  handleExceptionEnd
end;

// function
function TThemeServices_HasTransparentParts(AObj: TThemeServices; var Details: TThemedElementDetailsPtr): LongBool; extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28339}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  Result := AObj.HasTransparentParts(InDetails);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_IntfDoOnThemeChange(AObj: TThemeServices); extdecl;
begin
  {$define handleExceptionID := 28340}
  handleExceptionBegin
  AObj.IntfDoOnThemeChange();
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_DrawEdge(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetailsPtr; var R: TRect; Edge: Cardinal; Flags: Cardinal; var AContentRect: PRect); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28341}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  AObj.DrawEdge(DC, InDetails, R, Edge, Flags, AContentRect);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_DrawElement(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetailsPtr; var R: TRect; var ClipRect: PRect); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28342}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  AObj.DrawElement(DC, InDetails, R, ClipRect);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_DrawIconWithHDCTEDetailsRectHIMAGELISTInt(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetailsPtr; var R: TRect; himl: HIMAGELIST; Index: Integer); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28343}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  AObj.DrawIcon(DC, InDetails, R, himl, Index);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_DrawIconWithPersistentX3TEDetailsPointIntX2(AObj: TThemeServices; ACanvas: TPersistent; var Details: TThemedElementDetailsPtr; var P: TPoint; AImageList: TPersistent; Index: Integer; AImageWidth: Integer; ARefControl: TPersistent); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28344}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  AObj.DrawIcon(ACanvas, InDetails, P, AImageList, Index, AImageWidth, ARefControl);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_DrawParentBackground(AObj: TThemeServices; Window: HWND; Target: HDC; Details: TThemedElementDetailsPtr; OnlyIfTransparent: LongBool; var Bounds: PRect); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28345}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  AObj.DrawParentBackground(Window, Target, @InDetails, OnlyIfTransparent, Bounds);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_DrawTextWithHDCTEDetailsStrRectCardinalX2(AObj: TThemeServices; DC: HDC; var Details: TThemedElementDetailsPtr; const S: PChar; var R: TRect; Flags: Cardinal; Flags2: Cardinal); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28346}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  AObj.DrawText(DC, InDetails, S, R, Flags, Flags2);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_DrawTextWithPersistentTEDetailsStrRectCardinalX2(AObj: TThemeServices; ACanvas: TPersistent; var Details: TThemedElementDetailsPtr; const S: PChar; var R: TRect; Flags: Cardinal; Flags2: Cardinal); extdecl;
var
  InDetails: TThemedElementDetails;
begin
  {$define handleExceptionID := 28347}
  handleExceptionBegin
  InDetails := TThemedElementDetailsToPas(Details);
  AObj.DrawText(ACanvas, InDetails, S, R, Flags, Flags2);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_PaintBorder(AObj: TThemeServices; Control: TObject; EraseLRCorner: LongBool); extdecl;
begin
  {$define handleExceptionID := 28348}
  handleExceptionBegin
  AObj.PaintBorder(Control, EraseLRCorner);
  handleExceptionEnd
end;

// procedure
procedure TThemeServices_UpdateThemes(AObj: TThemeServices); extdecl;
begin
  {$define handleExceptionID := 28349}
  handleExceptionBegin
  AObj.UpdateThemes();
  handleExceptionEnd
end;

// property
function TThemeServices_DottedBrush(AObj: TThemeServices): HBRUSH; extdecl;
begin
  {$define handleExceptionID := 28350}
  handleExceptionBegin
  Result := AObj.DottedBrush;
  handleExceptionEnd
end;

// property
function TThemeServices_ThemesAvailable(AObj: TThemeServices): LongBool; extdecl;
begin
  {$define handleExceptionID := 28351}
  handleExceptionBegin
  Result := AObj.ThemesAvailable;
  handleExceptionEnd
end;

// property
function TThemeServices_ThemesEnabled(AObj: TThemeServices): LongBool; extdecl;
begin
  {$define handleExceptionID := 28352}
  handleExceptionBegin
  Result := AObj.ThemesEnabled;
  handleExceptionEnd
end;

// event
procedure TThemeServices_OnThemeChange(AObj: TThemeServices; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnThemeChange}
  LCLEventMethodCode
end;

exports
  TThemeServices_Create,
  TThemeServices_IsDisabled,
  TThemeServices_IsPushed,
  TThemeServices_IsHot,
  TThemeServices_IsChecked,
  TThemeServices_IsMixed,
  TThemeServices_GetElementDetailsWithThemedButton,
  TThemeServices_GetElementDetailsWithThemedClock,
  TThemeServices_GetElementDetailsWithThemedComboBox,
  TThemeServices_GetElementDetailsWithThemedEdit,
  TThemeServices_GetElementDetailsWithThemedExplorerBar,
  TThemeServices_GetElementDetailsWithThemedHeader,
  TThemeServices_GetElementDetailsWithThemedListView,
  TThemeServices_GetElementDetailsWithThemedMenu,
  TThemeServices_GetElementDetailsWithThemedPage,
  TThemeServices_GetElementDetailsWithThemedProgress,
  TThemeServices_GetElementDetailsWithThemedRebar,
  TThemeServices_GetElementDetailsWithThemedScrollBar,
  TThemeServices_GetElementDetailsWithThemedSpin,
  TThemeServices_GetElementDetailsWithThemedStartPanel,
  TThemeServices_GetElementDetailsWithThemedStatus,
  TThemeServices_GetElementDetailsWithThemedTab,
  TThemeServices_GetElementDetailsWithThemedTaskBand,
  TThemeServices_GetElementDetailsWithThemedTaskBar,
  TThemeServices_GetElementDetailsWithThemedToolBar,
  TThemeServices_GetElementDetailsWithThemedToolTip,
  TThemeServices_GetElementDetailsWithThemedTrackBar,
  TThemeServices_GetElementDetailsWithThemedTrayNotify,
  TThemeServices_GetElementDetailsWithThemedTreeview,
  TThemeServices_GetElementDetailsWithThemedWindow,
  TThemeServices_GetDetailSizeForWindow,
  TThemeServices_GetDetailSizeForPPI,
  TThemeServices_GetDetailRegion,
  TThemeServices_GetStockImageWithIntHBitmapX2,
  TThemeServices_GetStockImageWithIntX3HBitmapX2,
  TThemeServices_GetOption,
  TThemeServices_GetTextExtent,
  TThemeServices_ColorToRGB,
  TThemeServices_ContentRect,
  TThemeServices_HasTransparentParts,
  TThemeServices_IntfDoOnThemeChange,
  TThemeServices_DrawEdge,
  TThemeServices_DrawElement,
  TThemeServices_DrawIconWithHDCTEDetailsRectHIMAGELISTInt,
  TThemeServices_DrawIconWithPersistentX3TEDetailsPointIntX2,
  TThemeServices_DrawParentBackground,
  TThemeServices_DrawTextWithHDCTEDetailsStrRectCardinalX2,
  TThemeServices_DrawTextWithPersistentTEDetailsStrRectCardinalX2,
  TThemeServices_PaintBorder,
  TThemeServices_UpdateThemes,
  TThemeServices_DottedBrush,
  TThemeServices_ThemesAvailable,
  TThemeServices_ThemesEnabled,
  TThemeServices_OnThemeChange;