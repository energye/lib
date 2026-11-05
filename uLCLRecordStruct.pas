unit uLCLRecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses Classes, uTools , Controls, LCLType, Types, LMessages, Graphics,
  FPImage, laz.VirtualTrees, Themes, FPCanvas, Registry, GraphType, ImgList,
  Menus, Printers,
  // 3dr
  {RichMemo,}
  SynEditPointClasses, SynEditMouseCmds, SynEditMarkup, SynEditMiscClasses,
  SynEditHighlighter, SynEditTypes, SynGutterLineNumber, LazSynEditText, SynEditHighlighterFoldBase,
  SynHighlighterMulti,
  uVirtualNodeWrap;

type


  TAlignInfoPtr = record
    AlignList: TFPList; // TFPList
    ControlIndex: Integer; // Integer
    Align: Integer; // TAlign
    Scratch: Integer; // Integer
  end;

  TControlBorderSpacingDefaultPtr = record
    Left: TSpacingSize; // TSpacingSize
    Top: TSpacingSize; // TSpacingSize
    Right: TSpacingSize; // TSpacingSize
    Bottom: TSpacingSize; // TSpacingSize
    Around: TSpacingSize; // TSpacingSize
  end;

  TFontDataPtr = record
    Handle: HFont; // HFont
    Height: Integer; // Integer
    Pitch: Integer; // TFontPitch
    Style: Cardinal; // TFontStylesBase
    CharSet: TFontCharSet; // TFontCharSet
    Quality: Integer; // TFontQuality
    Name: PChar; // TFontDataName
    Orientation: Integer; // Integer
  end;

  TFPColorPtr = record
    Red: word; // word
    Green: word; // word
    Blue: word; // word
    Alpha: word; // word
  end;

  THeaderPaintInfoPtr = record
    TargetCanvas: TCanvas; // TCanvas
    Column: TVirtualTreeColumn; // TVirtualTreeColumn
    PaintRectangle: TRect; // TRect
    TextRectangle: TRect; // TRect
    IsHoverIndex: LongBool; // Boolean
    IsDownIndex: LongBool; // Boolean
    IsEnabled: LongBool; // Boolean
    ShowHeaderGlyph: LongBool; // Boolean
    ShowSortGlyph: LongBool; // Boolean
    ShowRightBorder: LongBool; // Boolean
    DropMark: Integer; // TVTDropMarkMode
    GlyphPos: TPoint; // TPoint
    SortGlyphPos: TPoint; // TPoint
  end;

  THintInfoPtr = record
    HintControl: TControl; // TControl
    HintWindowClass: TWinControlClass; // TWinControlClass
    HintPos: TPoint; // TPoint
    HintMaxWidth: Integer; // Integer
    HintColor: TColor; // TColor
    CursorRect: TRect; // TRect
    CursorPos: TPoint; // TPoint
    ReshowTimeout: Integer; // Integer
    HideTimeout: Integer; // Integer
    HintStr: PChar; // string
    HintData: Pointer; // Pointer
  end;

  THitInfoPtr = record
    HitNode: PVirtualNode; // PVirtualNode
    HitPositions: Cardinal; // THitPositions
    HitColumn: Integer; // TColumnIndex
    HitPoint: TPoint; // TPoint
  end;

  TLazSynDisplayRtlInfoPtr = record
    IsRtl: LongBool; // Boolean
    PhysLeft: integer; // integer
    PhysRight: integer; // integer
    LogFirst: integer; // integer
    LogLast: integer; // integer
  end;

  TLazSynDisplayTokenBoundPtr = record
    Physical: Integer; // Integer
    Logical: Integer; // Integer
    Offset: Integer; // Integer
  end;

  TLazSynDisplayTokenInfoPtr = record
    TokenStart: PChar; // PChar
    TokenLength: integer; // integer
    TokenAttr: TSynHighlighterAttributes; // TSynHighlighterAttributes
  end;

  TLCLTextMetricPtr = record
    Ascender: Integer; // Integer
    Descender: Integer; // Integer
    Height: Integer; // Integer
  end;

  TLineRangePtr = record
    Top: TLineIdx; // TLineIdx
    Bottom: TLineIdx; // TLineIdx
  end;

  TLMKeyPtr = record
    Msg: Cardinal; // Cardinal
  {$IFDEF cpu64}
    UnusedMsg: Cardinal; // Cardinal
  {$ENDIF}
    Unused: Word; // Word
    CharCode: Word; // Word
  {$IFDEF cpu64}
    Unused2: Integer; // Longint
  {$ENDIF}
    KeyData: PtrInt; // PtrInt
    Result: LRESULT; // LRESULT
  end;

  TLogCaretPointPtr = record
    X: Integer; // Integer
    Y: Integer; // Integer
    Offs: Integer; // Integer
  end;

  TMethodPtr = record
    Code: CodePointer; // CodePointer
    Data: Pointer; // Pointer
  end;

  TPaperRectPtr = record
    PhysicalRect: TRect; // TRect
    WorkRect: TRect; // TRect
  end;

  TRawImagePositionPtr = record
    Byte: PtrUInt; // PtrUInt
    Bit: cardinal; // cardinal
  end;

  TRegDataInfoPtr = record
    RegData: Integer; // TRegDataType
    DataSize: Integer; // Integer
  end;

  TRegKeyInfoPtr = record
    NumSubKeys: Integer; // Integer
    MaxSubKeyLen: Integer; // Integer
    NumValues: Integer; // Integer
    MaxValueLen: Integer; // Integer
    MaxDataLen: Integer; // Integer
    FileTime: Double; // TDateTime
  end;

  TStatStgPtr = record
    pwcsName: PChar; // string
    dwType: DWORD; // DWORD
    cbSize: uint64; // uint64
    mtime: PChar; // string
    ctime: PChar; // string
    atime: PChar; // string
    grfMode: DWORD; // DWORD
    grfLocksSupported: DWORD; // DWORD
    clsid: PChar; // string
    grfStateBits: DWORD; // DWORD
    reserved: DWORD; // DWORD
  end;

  TSynDividerDrawConfigSettingPtr = record
    Color: TColor; // TColor
  end;

  TSynEditGutterLineInfoPtr = record
    ShowDot: LongBool; // boolean
    ViewLine: Integer; // Integer
    LineRange: TLineRangePtr; // TLineRange
  end;

  TSynEditMouseActionResultPtr = record
    DoPopUpEvent: LongBool; // Boolean
    PopUpEventX: Integer; // Integer
    PopUpEventY: Integer; // Integer
    PopUpMenu: TPopupMenu; // TPopupMenu
  end;

  TSynEditMouseActionInfoPtr = record
    NewCaret: TSynEditCaret; // TSynEditCaret
    Button: Integer; // TSynMouseButton
    Shift: Cardinal; // TShiftState
    MouseX: Integer; // Integer
    MouseY: Integer; // Integer
    WheelDelta: Integer; // Integer
    CCount: Integer; // TSynMAClickCount
    Dir: Integer; // TSynMAClickDir
    CaretDone: LongBool; // Boolean
    IgnoreUpClick: LongBool; // Boolean
    ActionResult: TSynEditMouseActionResultPtr; // TSynEditMouseActionResult
  end;

  TSynFoldBlockFilterPtr = record
    FoldGroup: integer; // integer
    Flags: Cardinal; // TSynFoldBlockFilterFlags
  end;

  TSynFoldNodeInfoPtr = record
    LineIndex: Integer; // Integer
    NodeIndex: Integer; // Integer
    AllNodeIndex: Integer; // Integer
    LogXStart: Integer; // Integer
    LogXEnd: Integer; // Integer
    FoldLvlStart: Integer; // Integer
    FoldLvlEnd: Integer; // Integer
    NestLvlStart: Integer; // Integer
    NestLvlEnd: Integer; // Integer
    FoldAction: Cardinal; // TSynFoldActions
    FoldType: Pointer; // Pointer
    FoldTypeCompatible: Pointer; // Pointer
    FoldGroup: Integer; // Integer
  end;

  TSynHLightMultiVirtualSectionPtr = record
    StartPos: TPoint; // TPoint
    EndPos: TPoint; // TPoint
    TokenStartPos: Integer; // Integer
    TokenEndPos: Integer; // Integer
    VirtualLine: Integer; // Integer
  end;

  TTextStylePtr = record
    Alignment: Integer; // TAlignment
    Layout: Integer; // TTextLayout
    SingleLine: LongBool; // boolean
    Clipping: LongBool; // boolean
    ExpandTabs: LongBool; // boolean
    ShowPrefix: LongBool; // boolean
    Wordbreak: LongBool; // boolean
    Opaque: LongBool; // boolean
    SystemFont: LongBool; // Boolean
    RightToLeft: LongBool; // Boolean
    EndEllipsis: LongBool; // Boolean
  end;

  TThemedElementDetailsPtr = record
    Element: Integer; // TThemedElement
    Part: Integer; // Integer
    State: Integer; // Integer
  end;

  TViewedXYInfoPtr = record
    CorrectedViewedXY: TPhysPoint; // TPhysPoint
    PhysXY: TPhysPoint; // TPhysPoint
    LogicalXY: TLogCaretPointPtr; // TLogCaretPoint
    PhysBoundOffset: Integer; // Integer
    LogEOLPos: Integer; // Integer
    FirstViewedX: IntPos; // IntPos
  end;

  TVTHeaderHitInfoPtr = record
    X: Integer; // Integer
    Y: Integer; // Integer
    Button: Integer; // TMouseButton
    Shift: Cardinal; // TShiftState
    Column: Integer; // TColumnIndex
    HitPosition: Cardinal; // TVTHeaderHitPositions
  end;

  TVTImageInfoPtr = record
    Index: Integer; // Integer
    XPos: Integer; // Integer
    YPos: Integer; // Integer
    Ghosted: LongBool; // Boolean
    Images: TCustomImageList; // TCustomImageList
  end;

  TVTImageInfoPtrArray = array of TVTImageInfoPtr;
  TVTPaintInfoPtr = record
    Canvas: TCanvas; // TCanvas
    PaintOptions: Cardinal; // TVTInternalPaintOptions
    Node: PVirtualNode; // PVirtualNode
    Column: Integer; // TColumnIndex
    Position: TColumnPosition; // TColumnPosition
    CellRect: TRect; // TRect
    ContentRect: TRect; // TRect
    NodeWidth: Integer; // Integer
    Alignment: Integer; // TAlignment
    CaptionAlignment: Integer; // TAlignment
    BidiMode: Integer; // TBidiMode
    BrushOrigin: TPoint; // TPoint
    ImageInfo: ^TVTImageInfoPtrArray; // array[TVTImageInfoIndex] of TVTImageInfo
    ImageInfoSize: Integer; // 数组长度 
  end;

// TAlignInfo
function TAlignInfoToGo(const AAlignInfo: TAlignInfo): TAlignInfoPtr;
function TAlignInfoToPas(const AAlignInfo: TAlignInfoPtr): TAlignInfo;

// TControlBorderSpacingDefault
function TControlBorderSpacingDefaultToGo(const AControlBorderSpacingDefault: TControlBorderSpacingDefault): TControlBorderSpacingDefaultPtr;
function TControlBorderSpacingDefaultToPas(const AControlBorderSpacingDefault: TControlBorderSpacingDefaultPtr): TControlBorderSpacingDefault;

// TFontData
function TFontDataToGo(const AFontData: TFontData): TFontDataPtr;
function TFontDataToPas(const AFontData: TFontDataPtr): TFontData;

// TFPColor
function TFPColorToGo(const AFPColor: TFPColor): TFPColorPtr;
function TFPColorToPas(const AFPColor: TFPColorPtr): TFPColor;

// THeaderPaintInfo
function THeaderPaintInfoToGo(const AHeaderPaintInfo: THeaderPaintInfo): THeaderPaintInfoPtr;
function THeaderPaintInfoToPas(const AHeaderPaintInfo: THeaderPaintInfoPtr): THeaderPaintInfo;

// THintInfo
function THintInfoToGo(const AHintInfo: THintInfo): THintInfoPtr;
function THintInfoToPas(const AHintInfo: THintInfoPtr): THintInfo;

// THitInfo
function THitInfoToGo(const AHitInfo: THitInfo): THitInfoPtr;
function THitInfoToPas(const AHitInfo: THitInfoPtr): THitInfo;

// TLazSynDisplayRtlInfo
function TLazSynDisplayRtlInfoToGo(const ALazSynDisplayRtlInfo: TLazSynDisplayRtlInfo): TLazSynDisplayRtlInfoPtr;
function TLazSynDisplayRtlInfoToPas(const ALazSynDisplayRtlInfo: TLazSynDisplayRtlInfoPtr): TLazSynDisplayRtlInfo;

// TLazSynDisplayTokenBound
function TLazSynDisplayTokenBoundToGo(const ALazSynDisplayTokenBound: TLazSynDisplayTokenBound): TLazSynDisplayTokenBoundPtr;
function TLazSynDisplayTokenBoundToPas(const ALazSynDisplayTokenBound: TLazSynDisplayTokenBoundPtr): TLazSynDisplayTokenBound;

// TLazSynDisplayTokenInfo
function TLazSynDisplayTokenInfoToGo(const ALazSynDisplayTokenInfo: TLazSynDisplayTokenInfo): TLazSynDisplayTokenInfoPtr;
function TLazSynDisplayTokenInfoToPas(const ALazSynDisplayTokenInfo: TLazSynDisplayTokenInfoPtr): TLazSynDisplayTokenInfo;

// TLCLTextMetric
function TLCLTextMetricToGo(const ALCLTextMetric: TLCLTextMetric): TLCLTextMetricPtr;
function TLCLTextMetricToPas(const ALCLTextMetric: TLCLTextMetricPtr): TLCLTextMetric;

// TLineRange
function TLineRangeToGo(const ALineRange: TLineRange): TLineRangePtr;
function TLineRangeToPas(const ALineRange: TLineRangePtr): TLineRange;

// TLMKey
function TLMKeyToGo(const ALMKey: TLMKey): TLMKeyPtr;
function TLMKeyToPas(const ALMKey: TLMKeyPtr): TLMKey;

// TLogCaretPoint
function TLogCaretPointToGo(const ALogCaretPoint: TLogCaretPoint): TLogCaretPointPtr;
function TLogCaretPointToPas(const ALogCaretPoint: TLogCaretPointPtr): TLogCaretPoint;

// TMethod
function TMethodToGo(const AMethod: TMethod): TMethodPtr;
function TMethodToPas(const AMethod: TMethodPtr): TMethod;

// TPaperRect
function TPaperRectToGo(const APaperRect: TPaperRect): TPaperRectPtr;
function TPaperRectToPas(const APaperRect: TPaperRectPtr): TPaperRect;

// TRawImagePosition
function TRawImagePositionToGo(const ARawImagePosition: TRawImagePosition): TRawImagePositionPtr;
function TRawImagePositionToPas(const ARawImagePosition: TRawImagePositionPtr): TRawImagePosition;

// TRegDataInfo
function TRegDataInfoToGo(const ARegDataInfo: TRegDataInfo): TRegDataInfoPtr;
function TRegDataInfoToPas(const ARegDataInfo: TRegDataInfoPtr): TRegDataInfo;

// TRegKeyInfo
function TRegKeyInfoToGo(const ARegKeyInfo: TRegKeyInfo): TRegKeyInfoPtr;
function TRegKeyInfoToPas(const ARegKeyInfo: TRegKeyInfoPtr): TRegKeyInfo;

// TStatStg
function TStatStgToGo(const AStatStg: TStatStg): TStatStgPtr;

// TSynDividerDrawConfigSetting
function TSynDividerDrawConfigSettingToGo(const ASynDividerDrawConfigSetting: TSynDividerDrawConfigSetting): TSynDividerDrawConfigSettingPtr;
function TSynDividerDrawConfigSettingToPas(const ASynDividerDrawConfigSetting: TSynDividerDrawConfigSettingPtr): TSynDividerDrawConfigSetting;

// TSynEditGutterLineInfo
function TSynEditGutterLineInfoToGo(const ASynEditGutterLineInfo: TSynEditGutterLineInfo): TSynEditGutterLineInfoPtr;
function TSynEditGutterLineInfoToPas(const ASynEditGutterLineInfo: TSynEditGutterLineInfoPtr): TSynEditGutterLineInfo;

// TSynEditMouseActionInfo
function TSynEditMouseActionInfoToGo(const ASynEditMouseActionInfo: TSynEditMouseActionInfo): TSynEditMouseActionInfoPtr;
function TSynEditMouseActionInfoToPas(const ASynEditMouseActionInfo: TSynEditMouseActionInfoPtr): TSynEditMouseActionInfo;

// TSynEditMouseActionResult
function TSynEditMouseActionResultToGo(const ASynEditMouseActionResult: TSynEditMouseActionResult): TSynEditMouseActionResultPtr;
function TSynEditMouseActionResultToPas(const ASynEditMouseActionResult: TSynEditMouseActionResultPtr): TSynEditMouseActionResult;

// TSynFoldBlockFilter
function TSynFoldBlockFilterToGo(const ASynFoldBlockFilter: TSynFoldBlockFilter): TSynFoldBlockFilterPtr;
function TSynFoldBlockFilterToPas(const ASynFoldBlockFilter: TSynFoldBlockFilterPtr): TSynFoldBlockFilter;

// TSynFoldNodeInfo
function TSynFoldNodeInfoToGo(const ASynFoldNodeInfo: TSynFoldNodeInfo): TSynFoldNodeInfoPtr;
function TSynFoldNodeInfoToPas(const ASynFoldNodeInfo: TSynFoldNodeInfoPtr): TSynFoldNodeInfo;

// TSynHLightMultiVirtualSection
function TSynHLightMultiVirtualSectionToGo(const ASynHLightMultiVirtualSection: TSynHLightMultiVirtualSection): TSynHLightMultiVirtualSectionPtr;
function TSynHLightMultiVirtualSectionToPas(const ASynHLightMultiVirtualSection: TSynHLightMultiVirtualSectionPtr): TSynHLightMultiVirtualSection;

// TTextStyle
function TTextStyleToGo(const ATextStyle: TTextStyle): TTextStylePtr;
function TTextStyleToPas(const ATextStyle: TTextStylePtr): TTextStyle;

// TThemedElementDetails
function TThemedElementDetailsToGo(const AThemedElementDetails: TThemedElementDetails): TThemedElementDetailsPtr;
function TThemedElementDetailsToPas(const AThemedElementDetails: TThemedElementDetailsPtr): TThemedElementDetails;

// TViewedXYInfo
function TViewedXYInfoToGo(const AViewedXYInfo: TViewedXYInfo): TViewedXYInfoPtr;
function TViewedXYInfoToPas(const AViewedXYInfo: TViewedXYInfoPtr): TViewedXYInfo;

// TVTHeaderHitInfo
function TVTHeaderHitInfoToGo(const AVTHeaderHitInfo: TVTHeaderHitInfo): TVTHeaderHitInfoPtr;
function TVTHeaderHitInfoToPas(const AVTHeaderHitInfo: TVTHeaderHitInfoPtr): TVTHeaderHitInfo;

// TVTImageInfo
function TVTImageInfoToGo(const AVTImageInfo: TVTImageInfo): TVTImageInfoPtr;
function TVTImageInfoToPas(const AVTImageInfo: TVTImageInfoPtr): TVTImageInfo;

// TVTPaintInfo
function TVTPaintInfoToGo(const AVTPaintInfo: TVTPaintInfo): TVTPaintInfoPtr;
function TVTPaintInfoToPas(const AVTPaintInfo: TVTPaintInfoPtr): TVTPaintInfo;

implementation

// TAlignInfo
function TAlignInfoToGo(const AAlignInfo: TAlignInfo): TAlignInfoPtr;
begin
  Result.AlignList := AAlignInfo.AlignList; // TFPList
  Result.ControlIndex := AAlignInfo.ControlIndex; // Integer
  Result.Align := Integer(AAlignInfo.Align); // TAlign
  Result.Scratch := AAlignInfo.Scratch; // Integer
end;

function TAlignInfoToPas(const AAlignInfo: TAlignInfoPtr): TAlignInfo;
begin
  Result.AlignList := AAlignInfo.AlignList; // TFPList
  Result.ControlIndex := AAlignInfo.ControlIndex; // Integer
  Result.Align := TAlign(AAlignInfo.Align); // TAlign
  Result.Scratch := AAlignInfo.Scratch; // Integer
end;

// TControlBorderSpacingDefault
function TControlBorderSpacingDefaultToGo(const AControlBorderSpacingDefault: TControlBorderSpacingDefault): TControlBorderSpacingDefaultPtr;
begin
  Result.Left := AControlBorderSpacingDefault.Left; // TSpacingSize
  Result.Top := AControlBorderSpacingDefault.Top; // TSpacingSize
  Result.Right := AControlBorderSpacingDefault.Right; // TSpacingSize
  Result.Bottom := AControlBorderSpacingDefault.Bottom; // TSpacingSize
  Result.Around := AControlBorderSpacingDefault.Around; // TSpacingSize
end;

function TControlBorderSpacingDefaultToPas(const AControlBorderSpacingDefault: TControlBorderSpacingDefaultPtr): TControlBorderSpacingDefault;
begin
  Result.Left := AControlBorderSpacingDefault.Left; // TSpacingSize
  Result.Top := AControlBorderSpacingDefault.Top; // TSpacingSize
  Result.Right := AControlBorderSpacingDefault.Right; // TSpacingSize
  Result.Bottom := AControlBorderSpacingDefault.Bottom; // TSpacingSize
  Result.Around := AControlBorderSpacingDefault.Around; // TSpacingSize
end;

// TFontData
function TFontDataToGo(const AFontData: TFontData): TFontDataPtr;
begin
  Result.Handle := AFontData.Handle; // HFont
  Result.Height := AFontData.Height; // Integer
  Result.Pitch := Integer(AFontData.Pitch); // TFontPitch
  Result.Style := PInteger(@AFontData.Style)^; // TFontStylesBase
  Result.CharSet := AFontData.CharSet; // TFontCharSet
  Result.Quality := Integer(AFontData.Quality); // TFontQuality
  Result.Name := ToPChar(AFontData.Name); // TFontDataName
  Result.Orientation := AFontData.Orientation; // Integer
end;

function TFontDataToPas(const AFontData: TFontDataPtr): TFontData;
begin
  Result.Handle := AFontData.Handle; // HFont
  Result.Height := AFontData.Height; // Integer
  Result.Pitch := TFontPitch(AFontData.Pitch); // TFontPitch
  Result.Style := TFontStylesBase(PInteger(@AFontData.Style)^); // TFontStylesBase
  Result.CharSet := AFontData.CharSet; // TFontCharSet
  Result.Quality := TFontQuality(AFontData.Quality); // TFontQuality
  Result.Name := string(AFontData.Name); // TFontDataName
  Result.Orientation := AFontData.Orientation; // Integer
end;

// TFPColor
function TFPColorToGo(const AFPColor: TFPColor): TFPColorPtr;
begin
  Result.Red := AFPColor.Red; // word
  Result.Green := AFPColor.Green; // word
  Result.Blue := AFPColor.Blue; // word
  Result.Alpha := AFPColor.Alpha; // word
end;

function TFPColorToPas(const AFPColor: TFPColorPtr): TFPColor;
begin
  Result.Red := AFPColor.Red; // word
  Result.Green := AFPColor.Green; // word
  Result.Blue := AFPColor.Blue; // word
  Result.Alpha := AFPColor.Alpha; // word
end;

// THeaderPaintInfo
function THeaderPaintInfoToGo(const AHeaderPaintInfo: THeaderPaintInfo): THeaderPaintInfoPtr;
begin
  Result.TargetCanvas := AHeaderPaintInfo.TargetCanvas; // TCanvas
  Result.Column := AHeaderPaintInfo.Column; // TVirtualTreeColumn
  Result.PaintRectangle := AHeaderPaintInfo.PaintRectangle; // TRect
  Result.TextRectangle := AHeaderPaintInfo.TextRectangle; // TRect
  Result.IsHoverIndex := AHeaderPaintInfo.IsHoverIndex; // Boolean
  Result.IsDownIndex := AHeaderPaintInfo.IsDownIndex; // Boolean
  Result.IsEnabled := AHeaderPaintInfo.IsEnabled; // Boolean
  Result.ShowHeaderGlyph := AHeaderPaintInfo.ShowHeaderGlyph; // Boolean
  Result.ShowSortGlyph := AHeaderPaintInfo.ShowSortGlyph; // Boolean
  Result.ShowRightBorder := AHeaderPaintInfo.ShowRightBorder; // Boolean
  Result.DropMark := Integer(AHeaderPaintInfo.DropMark); // TVTDropMarkMode
  Result.GlyphPos := AHeaderPaintInfo.GlyphPos; // TPoint
  Result.SortGlyphPos := AHeaderPaintInfo.SortGlyphPos; // TPoint
end;

function THeaderPaintInfoToPas(const AHeaderPaintInfo: THeaderPaintInfoPtr): THeaderPaintInfo;
begin
  Result.TargetCanvas := AHeaderPaintInfo.TargetCanvas; // TCanvas
  Result.Column := AHeaderPaintInfo.Column; // TVirtualTreeColumn
  Result.PaintRectangle := AHeaderPaintInfo.PaintRectangle; // TRect
  Result.TextRectangle := AHeaderPaintInfo.TextRectangle; // TRect
  Result.IsHoverIndex := AHeaderPaintInfo.IsHoverIndex; // Boolean
  Result.IsDownIndex := AHeaderPaintInfo.IsDownIndex; // Boolean
  Result.IsEnabled := AHeaderPaintInfo.IsEnabled; // Boolean
  Result.ShowHeaderGlyph := AHeaderPaintInfo.ShowHeaderGlyph; // Boolean
  Result.ShowSortGlyph := AHeaderPaintInfo.ShowSortGlyph; // Boolean
  Result.ShowRightBorder := AHeaderPaintInfo.ShowRightBorder; // Boolean
  Result.DropMark := TVTDropMarkMode(AHeaderPaintInfo.DropMark); // TVTDropMarkMode
  Result.GlyphPos := AHeaderPaintInfo.GlyphPos; // TPoint
  Result.SortGlyphPos := AHeaderPaintInfo.SortGlyphPos; // TPoint
end;

// THintInfo
function THintInfoToGo(const AHintInfo: THintInfo): THintInfoPtr;
begin
  Result.HintControl := AHintInfo.HintControl; // TControl
  Result.HintWindowClass := AHintInfo.HintWindowClass; // TWinControlClass
  Result.HintPos := AHintInfo.HintPos; // TPoint
  Result.HintMaxWidth := AHintInfo.HintMaxWidth; // Integer
  Result.HintColor := AHintInfo.HintColor; // TColor
  Result.CursorRect := AHintInfo.CursorRect; // TRect
  Result.CursorPos := AHintInfo.CursorPos; // TPoint
  Result.ReshowTimeout := AHintInfo.ReshowTimeout; // Integer
  Result.HideTimeout := AHintInfo.HideTimeout; // Integer
  Result.HintStr := ToPChar(AHintInfo.HintStr); // string
  Result.HintData := AHintInfo.HintData; // Pointer
end;

function THintInfoToPas(const AHintInfo: THintInfoPtr): THintInfo;
begin
  Result.HintControl := AHintInfo.HintControl; // TControl
  Result.HintWindowClass := AHintInfo.HintWindowClass; // TWinControlClass
  Result.HintPos := AHintInfo.HintPos; // TPoint
  Result.HintMaxWidth := AHintInfo.HintMaxWidth; // Integer
  Result.HintColor := AHintInfo.HintColor; // TColor
  Result.CursorRect := AHintInfo.CursorRect; // TRect
  Result.CursorPos := AHintInfo.CursorPos; // TPoint
  Result.ReshowTimeout := AHintInfo.ReshowTimeout; // Integer
  Result.HideTimeout := AHintInfo.HideTimeout; // Integer
  Result.HintStr := string(AHintInfo.HintStr); // string
  Result.HintData := AHintInfo.HintData; // Pointer
end;

// THitInfo
function THitInfoToGo(const AHitInfo: THitInfo): THitInfoPtr;
begin
  Result.HitNode := AHitInfo.HitNode; // PVirtualNode
  Result.HitPositions := PInteger(@AHitInfo.HitPositions)^; // THitPositions
  Result.HitColumn := AHitInfo.HitColumn; // TColumnIndex
  Result.HitPoint := AHitInfo.HitPoint; // TPoint
end;

function THitInfoToPas(const AHitInfo: THitInfoPtr): THitInfo;
begin
  Result.HitNode := AHitInfo.HitNode; // PVirtualNode
  Result.HitPositions := THitPositions(PInteger(@AHitInfo.HitPositions)^); // THitPositions
  Result.HitColumn := AHitInfo.HitColumn; // TColumnIndex
  Result.HitPoint := AHitInfo.HitPoint; // TPoint
end;

// TLazSynDisplayRtlInfo
function TLazSynDisplayRtlInfoToGo(const ALazSynDisplayRtlInfo: TLazSynDisplayRtlInfo): TLazSynDisplayRtlInfoPtr;
begin
  Result.IsRtl := ALazSynDisplayRtlInfo.IsRtl; // Boolean
  Result.PhysLeft := ALazSynDisplayRtlInfo.PhysLeft; // integer
  Result.PhysRight := ALazSynDisplayRtlInfo.PhysRight; // integer
  Result.LogFirst := ALazSynDisplayRtlInfo.LogFirst; // integer
  Result.LogLast := ALazSynDisplayRtlInfo.LogLast; // integer
end;

function TLazSynDisplayRtlInfoToPas(const ALazSynDisplayRtlInfo: TLazSynDisplayRtlInfoPtr): TLazSynDisplayRtlInfo;
begin
  Result.IsRtl := ALazSynDisplayRtlInfo.IsRtl; // Boolean
  Result.PhysLeft := ALazSynDisplayRtlInfo.PhysLeft; // integer
  Result.PhysRight := ALazSynDisplayRtlInfo.PhysRight; // integer
  Result.LogFirst := ALazSynDisplayRtlInfo.LogFirst; // integer
  Result.LogLast := ALazSynDisplayRtlInfo.LogLast; // integer
end;

// TLazSynDisplayTokenBound
function TLazSynDisplayTokenBoundToGo(const ALazSynDisplayTokenBound: TLazSynDisplayTokenBound): TLazSynDisplayTokenBoundPtr;
begin
  Result.Physical := ALazSynDisplayTokenBound.Physical; // Integer
  Result.Logical := ALazSynDisplayTokenBound.Logical; // Integer
  Result.Offset := ALazSynDisplayTokenBound.Offset; // Integer
end;

function TLazSynDisplayTokenBoundToPas(const ALazSynDisplayTokenBound: TLazSynDisplayTokenBoundPtr): TLazSynDisplayTokenBound;
begin
  Result.Physical := ALazSynDisplayTokenBound.Physical; // Integer
  Result.Logical := ALazSynDisplayTokenBound.Logical; // Integer
  Result.Offset := ALazSynDisplayTokenBound.Offset; // Integer
end;

// TLazSynDisplayTokenInfo
function TLazSynDisplayTokenInfoToGo(const ALazSynDisplayTokenInfo: TLazSynDisplayTokenInfo): TLazSynDisplayTokenInfoPtr;
begin
  Result.TokenStart := ALazSynDisplayTokenInfo.TokenStart; // PChar
  Result.TokenLength := ALazSynDisplayTokenInfo.TokenLength; // integer
  Result.TokenAttr := ALazSynDisplayTokenInfo.TokenAttr; // TSynHighlighterAttributes
end;

function TLazSynDisplayTokenInfoToPas(const ALazSynDisplayTokenInfo: TLazSynDisplayTokenInfoPtr): TLazSynDisplayTokenInfo;
begin
  Result.TokenStart := ALazSynDisplayTokenInfo.TokenStart; // PChar
  Result.TokenLength := ALazSynDisplayTokenInfo.TokenLength; // integer
  Result.TokenAttr := ALazSynDisplayTokenInfo.TokenAttr; // TSynHighlighterAttributes
end;

// TLCLTextMetric
function TLCLTextMetricToGo(const ALCLTextMetric: TLCLTextMetric): TLCLTextMetricPtr;
begin
  Result.Ascender := ALCLTextMetric.Ascender; // Integer
  Result.Descender := ALCLTextMetric.Descender; // Integer
  Result.Height := ALCLTextMetric.Height; // Integer
end;

function TLCLTextMetricToPas(const ALCLTextMetric: TLCLTextMetricPtr): TLCLTextMetric;
begin
  Result.Ascender := ALCLTextMetric.Ascender; // Integer
  Result.Descender := ALCLTextMetric.Descender; // Integer
  Result.Height := ALCLTextMetric.Height; // Integer
end;

// TLineRange
function TLineRangeToGo(const ALineRange: TLineRange): TLineRangePtr;
begin
  Result.Top := ALineRange.Top; // TLineIdx
  Result.Bottom := ALineRange.Bottom; // TLineIdx
end;

function TLineRangeToPas(const ALineRange: TLineRangePtr): TLineRange;
begin
  Result.Top := ALineRange.Top; // TLineIdx
  Result.Bottom := ALineRange.Bottom; // TLineIdx
end;

// TLMKey
function TLMKeyToGo(const ALMKey: TLMKey): TLMKeyPtr;
begin
  Result.Msg := ALMKey.Msg; // Cardinal
{$IFDEF cpu64}
  Result.UnusedMsg := ALMKey.UnusedMsg; // Cardinal
{$ENDIF}
  Result.Unused := ALMKey.Unused; // Word
  Result.CharCode := ALMKey.CharCode; // Word
{$IFDEF cpu64}
  Result.Unused2 := ALMKey.Unused2; // Longint
{$ENDIF}
  Result.KeyData := ALMKey.KeyData; // PtrInt
  Result.Result := ALMKey.Result; // LRESULT
end;

function TLMKeyToPas(const ALMKey: TLMKeyPtr): TLMKey;
begin
  Result.Msg := ALMKey.Msg; // Cardinal
{$IFDEF cpu64}
  Result.UnusedMsg := ALMKey.UnusedMsg; // Cardinal
{$ENDIF}
  Result.Unused := ALMKey.Unused; // Word
  Result.CharCode := ALMKey.CharCode; // Word
{$IFDEF cpu64}
  Result.Unused2 := ALMKey.Unused2; // Longint
{$ENDIF}
  Result.KeyData := ALMKey.KeyData; // PtrInt
  Result.Result := ALMKey.Result; // LRESULT
end;

// TLogCaretPoint
function TLogCaretPointToGo(const ALogCaretPoint: TLogCaretPoint): TLogCaretPointPtr;
begin
  Result.X := ALogCaretPoint.X; // Integer
  Result.Y := ALogCaretPoint.Y; // Integer
  Result.Offs := ALogCaretPoint.Offs; // Integer
end;

function TLogCaretPointToPas(const ALogCaretPoint: TLogCaretPointPtr): TLogCaretPoint;
begin
  Result.X := ALogCaretPoint.X; // Integer
  Result.Y := ALogCaretPoint.Y; // Integer
  Result.Offs := ALogCaretPoint.Offs; // Integer
end;

// TMethod
function TMethodToGo(const AMethod: TMethod): TMethodPtr;
begin
  Result.Code := AMethod.Code; // CodePointer
  Result.Data := AMethod.Data; // Pointer
end;

function TMethodToPas(const AMethod: TMethodPtr): TMethod;
begin
  Result.Code := AMethod.Code; // CodePointer
  Result.Data := AMethod.Data; // Pointer
end;

// TPaperRect
function TPaperRectToGo(const APaperRect: TPaperRect): TPaperRectPtr;
begin
  Result.PhysicalRect := APaperRect.PhysicalRect; // TRect
  Result.WorkRect := APaperRect.WorkRect; // TRect
end;

function TPaperRectToPas(const APaperRect: TPaperRectPtr): TPaperRect;
begin
  Result.PhysicalRect := APaperRect.PhysicalRect; // TRect
  Result.WorkRect := APaperRect.WorkRect; // TRect
end;

// TRawImagePosition
function TRawImagePositionToGo(const ARawImagePosition: TRawImagePosition): TRawImagePositionPtr;
begin
  Result.Byte := ARawImagePosition.Byte; // PtrUInt
  Result.Bit := ARawImagePosition.Bit; // cardinal
end;

function TRawImagePositionToPas(const ARawImagePosition: TRawImagePositionPtr): TRawImagePosition;
begin
  Result.Byte := ARawImagePosition.Byte; // PtrUInt
  Result.Bit := ARawImagePosition.Bit; // cardinal
end;

// TRegDataInfo
function TRegDataInfoToGo(const ARegDataInfo: TRegDataInfo): TRegDataInfoPtr;
begin
  Result.RegData := Integer(ARegDataInfo.RegData); // TRegDataType
  Result.DataSize := ARegDataInfo.DataSize; // Integer
end;

function TRegDataInfoToPas(const ARegDataInfo: TRegDataInfoPtr): TRegDataInfo;
begin
  Result.RegData := TRegDataType(ARegDataInfo.RegData); // TRegDataType
  Result.DataSize := ARegDataInfo.DataSize; // Integer
end;

// TRegKeyInfo
function TRegKeyInfoToGo(const ARegKeyInfo: TRegKeyInfo): TRegKeyInfoPtr;
begin
  Result.NumSubKeys := ARegKeyInfo.NumSubKeys; // Integer
  Result.MaxSubKeyLen := ARegKeyInfo.MaxSubKeyLen; // Integer
  Result.NumValues := ARegKeyInfo.NumValues; // Integer
  Result.MaxValueLen := ARegKeyInfo.MaxValueLen; // Integer
  Result.MaxDataLen := ARegKeyInfo.MaxDataLen; // Integer
  Result.FileTime := ARegKeyInfo.FileTime; // TDateTime
end;

function TRegKeyInfoToPas(const ARegKeyInfo: TRegKeyInfoPtr): TRegKeyInfo;
begin
  Result.NumSubKeys := ARegKeyInfo.NumSubKeys; // Integer
  Result.MaxSubKeyLen := ARegKeyInfo.MaxSubKeyLen; // Integer
  Result.NumValues := ARegKeyInfo.NumValues; // Integer
  Result.MaxValueLen := ARegKeyInfo.MaxValueLen; // Integer
  Result.MaxDataLen := ARegKeyInfo.MaxDataLen; // Integer
  Result.FileTime := ARegKeyInfo.FileTime; // TDateTime
end;

// TStatStg
function TStatStgToGo(const AStatStg: TStatStg): TStatStgPtr;
begin
  Result.pwcsName := ToPChar(AStatStg.pwcsName); // string
  Result.dwType := AStatStg.dwType; // DWORD
  Result.cbSize := AStatStg.cbSize; // uint64
  Result.mtime := ToPChar(AStatStg.mtime); // string
  Result.ctime := ToPChar(AStatStg.ctime); // string
  Result.atime := ToPChar(AStatStg.atime); // string
  Result.grfMode := AStatStg.grfMode; // DWORD
  Result.grfLocksSupported := AStatStg.grfLocksSupported; // DWORD
  Result.clsid := ToPChar(AStatStg.clsid); // string
  Result.grfStateBits := AStatStg.grfStateBits; // DWORD
  Result.reserved := AStatStg.reserved; // DWORD
end;

// TSynDividerDrawConfigSetting
function TSynDividerDrawConfigSettingToGo(const ASynDividerDrawConfigSetting: TSynDividerDrawConfigSetting): TSynDividerDrawConfigSettingPtr;
begin
  Result.Color := ASynDividerDrawConfigSetting.Color; // TColor
end;

function TSynDividerDrawConfigSettingToPas(const ASynDividerDrawConfigSetting: TSynDividerDrawConfigSettingPtr): TSynDividerDrawConfigSetting;
begin
  Result.Color := ASynDividerDrawConfigSetting.Color; // TColor
end;

// TSynEditGutterLineInfo
function TSynEditGutterLineInfoToGo(const ASynEditGutterLineInfo: TSynEditGutterLineInfo): TSynEditGutterLineInfoPtr;
begin
  Result.ShowDot := ASynEditGutterLineInfo.ShowDot; // boolean
  Result.ViewLine := ASynEditGutterLineInfo.ViewLine; // Integer
  Result.LineRange := TLineRangeToGo(ASynEditGutterLineInfo.LineRange); // TLineRange
end;

function TSynEditGutterLineInfoToPas(const ASynEditGutterLineInfo: TSynEditGutterLineInfoPtr): TSynEditGutterLineInfo;
begin
  Result.ShowDot := ASynEditGutterLineInfo.ShowDot; // boolean
  Result.ViewLine := ASynEditGutterLineInfo.ViewLine; // Integer
  Result.LineRange := TLineRangeToPas(ASynEditGutterLineInfo.LineRange); // TLineRange
end;

// TSynEditMouseActionInfo
function TSynEditMouseActionInfoToGo(const ASynEditMouseActionInfo: TSynEditMouseActionInfo): TSynEditMouseActionInfoPtr;
begin
  Result.NewCaret := ASynEditMouseActionInfo.NewCaret; // TSynEditCaret
  Result.Button := Integer(ASynEditMouseActionInfo.Button); // TSynMouseButton
  Result.Shift := PInteger(@ASynEditMouseActionInfo.Shift)^; // TShiftState
  Result.MouseX := ASynEditMouseActionInfo.MouseX; // Integer
  Result.MouseY := ASynEditMouseActionInfo.MouseY; // Integer
  Result.WheelDelta := ASynEditMouseActionInfo.WheelDelta; // Integer
  Result.CCount := Integer(ASynEditMouseActionInfo.CCount); // TSynMAClickCount
  Result.Dir := Integer(ASynEditMouseActionInfo.Dir); // TSynMAClickDir
  Result.CaretDone := ASynEditMouseActionInfo.CaretDone; // Boolean
  Result.IgnoreUpClick := ASynEditMouseActionInfo.IgnoreUpClick; // Boolean
  Result.ActionResult := TSynEditMouseActionResultToGo(ASynEditMouseActionInfo.ActionResult); // TSynEditMouseActionResult
end;

function TSynEditMouseActionInfoToPas(const ASynEditMouseActionInfo: TSynEditMouseActionInfoPtr): TSynEditMouseActionInfo;
begin
  Result.NewCaret := ASynEditMouseActionInfo.NewCaret; // TSynEditCaret
  Result.Button := TSynMouseButton(ASynEditMouseActionInfo.Button); // TSynMouseButton
  Result.Shift := TShiftState(PInteger(@ASynEditMouseActionInfo.Shift)^); // TShiftState
  Result.MouseX := ASynEditMouseActionInfo.MouseX; // Integer
  Result.MouseY := ASynEditMouseActionInfo.MouseY; // Integer
  Result.WheelDelta := ASynEditMouseActionInfo.WheelDelta; // Integer
  Result.CCount := TSynMAClickCount(ASynEditMouseActionInfo.CCount); // TSynMAClickCount
  Result.Dir := TSynMAClickDir(ASynEditMouseActionInfo.Dir); // TSynMAClickDir
  Result.CaretDone := ASynEditMouseActionInfo.CaretDone; // Boolean
  Result.IgnoreUpClick := ASynEditMouseActionInfo.IgnoreUpClick; // Boolean
  Result.ActionResult := TSynEditMouseActionResultToPas(ASynEditMouseActionInfo.ActionResult); // TSynEditMouseActionResult
end;

// TSynEditMouseActionResult
function TSynEditMouseActionResultToGo(const ASynEditMouseActionResult: TSynEditMouseActionResult): TSynEditMouseActionResultPtr;
begin
  Result.DoPopUpEvent := ASynEditMouseActionResult.DoPopUpEvent; // Boolean
  Result.PopUpEventX := ASynEditMouseActionResult.PopUpEventX; // Integer
  Result.PopUpEventY := ASynEditMouseActionResult.PopUpEventY; // Integer
  Result.PopUpMenu := ASynEditMouseActionResult.PopUpMenu; // TPopupMenu
end;

function TSynEditMouseActionResultToPas(const ASynEditMouseActionResult: TSynEditMouseActionResultPtr): TSynEditMouseActionResult;
begin
  Result.DoPopUpEvent := ASynEditMouseActionResult.DoPopUpEvent; // Boolean
  Result.PopUpEventX := ASynEditMouseActionResult.PopUpEventX; // Integer
  Result.PopUpEventY := ASynEditMouseActionResult.PopUpEventY; // Integer
  Result.PopUpMenu := ASynEditMouseActionResult.PopUpMenu; // TPopupMenu
end;

// TSynFoldBlockFilter
function TSynFoldBlockFilterToGo(const ASynFoldBlockFilter: TSynFoldBlockFilter): TSynFoldBlockFilterPtr;
begin
  Result.FoldGroup := ASynFoldBlockFilter.FoldGroup; // integer
  Result.Flags := PByte(@ASynFoldBlockFilter.Flags)^; // TSynFoldBlockFilterFlags
end;

function TSynFoldBlockFilterToPas(const ASynFoldBlockFilter: TSynFoldBlockFilterPtr): TSynFoldBlockFilter;
begin
  Result.FoldGroup := ASynFoldBlockFilter.FoldGroup; // integer
  Result.Flags := TSynFoldBlockFilterFlags(ASynFoldBlockFilter.Flags); // TSynFoldBlockFilterFlags
end;

// TSynFoldNodeInfo
function TSynFoldNodeInfoToGo(const ASynFoldNodeInfo: TSynFoldNodeInfo): TSynFoldNodeInfoPtr;
begin
  Result.LineIndex := ASynFoldNodeInfo.LineIndex; // Integer
  Result.NodeIndex := ASynFoldNodeInfo.NodeIndex; // Integer
  Result.AllNodeIndex := ASynFoldNodeInfo.AllNodeIndex; // Integer
  Result.LogXStart := ASynFoldNodeInfo.LogXStart; // Integer
  Result.LogXEnd := ASynFoldNodeInfo.LogXEnd; // Integer
  Result.FoldLvlStart := ASynFoldNodeInfo.FoldLvlStart; // Integer
  Result.FoldLvlEnd := ASynFoldNodeInfo.FoldLvlEnd; // Integer
  Result.NestLvlStart := ASynFoldNodeInfo.NestLvlStart; // Integer
  Result.NestLvlEnd := ASynFoldNodeInfo.NestLvlEnd; // Integer
  Result.FoldAction := PInteger(@ASynFoldNodeInfo.FoldAction)^; // TSynFoldActions
  Result.FoldType := ASynFoldNodeInfo.FoldType; // Pointer
  Result.FoldTypeCompatible := ASynFoldNodeInfo.FoldTypeCompatible; // Pointer
  Result.FoldGroup := ASynFoldNodeInfo.FoldGroup; // Integer
end;

function TSynFoldNodeInfoToPas(const ASynFoldNodeInfo: TSynFoldNodeInfoPtr): TSynFoldNodeInfo;
begin
  Result.LineIndex := ASynFoldNodeInfo.LineIndex; // Integer
  Result.NodeIndex := ASynFoldNodeInfo.NodeIndex; // Integer
  Result.AllNodeIndex := ASynFoldNodeInfo.AllNodeIndex; // Integer
  Result.LogXStart := ASynFoldNodeInfo.LogXStart; // Integer
  Result.LogXEnd := ASynFoldNodeInfo.LogXEnd; // Integer
  Result.FoldLvlStart := ASynFoldNodeInfo.FoldLvlStart; // Integer
  Result.FoldLvlEnd := ASynFoldNodeInfo.FoldLvlEnd; // Integer
  Result.NestLvlStart := ASynFoldNodeInfo.NestLvlStart; // Integer
  Result.NestLvlEnd := ASynFoldNodeInfo.NestLvlEnd; // Integer
  Result.FoldAction := TSynFoldActions(PInteger(@ASynFoldNodeInfo.FoldAction)^); // TSynFoldActions
  Result.FoldType := ASynFoldNodeInfo.FoldType; // Pointer
  Result.FoldTypeCompatible := ASynFoldNodeInfo.FoldTypeCompatible; // Pointer
  Result.FoldGroup := ASynFoldNodeInfo.FoldGroup; // Integer
end;

// TSynHLightMultiVirtualSection
function TSynHLightMultiVirtualSectionToGo(const ASynHLightMultiVirtualSection: TSynHLightMultiVirtualSection): TSynHLightMultiVirtualSectionPtr;
begin
  Result.StartPos := ASynHLightMultiVirtualSection.StartPos; // TPoint
  Result.EndPos := ASynHLightMultiVirtualSection.EndPos; // TPoint
  Result.TokenStartPos := ASynHLightMultiVirtualSection.TokenStartPos; // Integer
  Result.TokenEndPos := ASynHLightMultiVirtualSection.TokenEndPos; // Integer
  Result.VirtualLine := ASynHLightMultiVirtualSection.VirtualLine; // Integer
end;

function TSynHLightMultiVirtualSectionToPas(const ASynHLightMultiVirtualSection: TSynHLightMultiVirtualSectionPtr): TSynHLightMultiVirtualSection;
begin
  Result.StartPos := ASynHLightMultiVirtualSection.StartPos; // TPoint
  Result.EndPos := ASynHLightMultiVirtualSection.EndPos; // TPoint
  Result.TokenStartPos := ASynHLightMultiVirtualSection.TokenStartPos; // Integer
  Result.TokenEndPos := ASynHLightMultiVirtualSection.TokenEndPos; // Integer
  Result.VirtualLine := ASynHLightMultiVirtualSection.VirtualLine; // Integer
end;

// TTextStyle
function TTextStyleToGo(const ATextStyle: TTextStyle): TTextStylePtr;
begin
  Result.Alignment := Integer(ATextStyle.Alignment); // TAlignment
  Result.Layout := Integer(ATextStyle.Layout); // TTextLayout
  Result.SingleLine := ATextStyle.SingleLine; // boolean
  Result.Clipping := ATextStyle.Clipping; // boolean
  Result.ExpandTabs := ATextStyle.ExpandTabs; // boolean
  Result.ShowPrefix := ATextStyle.ShowPrefix; // boolean
  Result.Wordbreak := ATextStyle.Wordbreak; // boolean
  Result.Opaque := ATextStyle.Opaque; // boolean
  Result.SystemFont := ATextStyle.SystemFont; // Boolean
  Result.RightToLeft := ATextStyle.RightToLeft; // Boolean
  Result.EndEllipsis := ATextStyle.EndEllipsis; // Boolean
end;

function TTextStyleToPas(const ATextStyle: TTextStylePtr): TTextStyle;
begin
  Result.Alignment := TAlignment(ATextStyle.Alignment); // TAlignment
  Result.Layout := TTextLayout(ATextStyle.Layout); // TTextLayout
  Result.SingleLine := ATextStyle.SingleLine; // boolean
  Result.Clipping := ATextStyle.Clipping; // boolean
  Result.ExpandTabs := ATextStyle.ExpandTabs; // boolean
  Result.ShowPrefix := ATextStyle.ShowPrefix; // boolean
  Result.Wordbreak := ATextStyle.Wordbreak; // boolean
  Result.Opaque := ATextStyle.Opaque; // boolean
  Result.SystemFont := ATextStyle.SystemFont; // Boolean
  Result.RightToLeft := ATextStyle.RightToLeft; // Boolean
  Result.EndEllipsis := ATextStyle.EndEllipsis; // Boolean
end;

// TThemedElementDetails
function TThemedElementDetailsToGo(const AThemedElementDetails: TThemedElementDetails): TThemedElementDetailsPtr;
begin
  Result.Element := Integer(AThemedElementDetails.Element); // TThemedElement
  Result.Part := AThemedElementDetails.Part; // Integer
  Result.State := AThemedElementDetails.State; // Integer
end;

function TThemedElementDetailsToPas(const AThemedElementDetails: TThemedElementDetailsPtr): TThemedElementDetails;
begin
  Result.Element := TThemedElement(AThemedElementDetails.Element); // TThemedElement
  Result.Part := AThemedElementDetails.Part; // Integer
  Result.State := AThemedElementDetails.State; // Integer
end;

// TViewedXYInfo
function TViewedXYInfoToGo(const AViewedXYInfo: TViewedXYInfo): TViewedXYInfoPtr;
begin
  Result.CorrectedViewedXY := AViewedXYInfo.CorrectedViewedXY; // TPhysPoint
  Result.PhysXY := AViewedXYInfo.PhysXY; // TPhysPoint
  Result.LogicalXY := TLogCaretPointToGo(AViewedXYInfo.LogicalXY); // TLogCaretPoint
  Result.PhysBoundOffset := AViewedXYInfo.PhysBoundOffset; // Integer
  Result.LogEOLPos := AViewedXYInfo.LogEOLPos; // Integer
  Result.FirstViewedX := AViewedXYInfo.FirstViewedX; // IntPos
end;

function TViewedXYInfoToPas(const AViewedXYInfo: TViewedXYInfoPtr): TViewedXYInfo;
begin
  Result.CorrectedViewedXY := AViewedXYInfo.CorrectedViewedXY; // TPhysPoint
  Result.PhysXY := AViewedXYInfo.PhysXY; // TPhysPoint
  Result.LogicalXY := TLogCaretPointToPas(AViewedXYInfo.LogicalXY); // TLogCaretPoint
  Result.PhysBoundOffset := AViewedXYInfo.PhysBoundOffset; // Integer
  Result.LogEOLPos := AViewedXYInfo.LogEOLPos; // Integer
  Result.FirstViewedX := AViewedXYInfo.FirstViewedX; // IntPos
end;

// TVTHeaderHitInfo
function TVTHeaderHitInfoToGo(const AVTHeaderHitInfo: TVTHeaderHitInfo): TVTHeaderHitInfoPtr;
begin
  Result.X := AVTHeaderHitInfo.X; // Integer
  Result.Y := AVTHeaderHitInfo.Y; // Integer
  Result.Button := Integer(AVTHeaderHitInfo.Button); // TMouseButton
  Result.Shift := PInteger(@AVTHeaderHitInfo.Shift)^; // TShiftState
  Result.Column := AVTHeaderHitInfo.Column; // TColumnIndex
  Result.HitPosition := PByte(@AVTHeaderHitInfo.HitPosition)^; // TVTHeaderHitPositions
end;

function TVTHeaderHitInfoToPas(const AVTHeaderHitInfo: TVTHeaderHitInfoPtr): TVTHeaderHitInfo;
begin
  Result.X := AVTHeaderHitInfo.X; // Integer
  Result.Y := AVTHeaderHitInfo.Y; // Integer
  Result.Button := TMouseButton(AVTHeaderHitInfo.Button); // TMouseButton
  Result.Shift := TShiftState(PInteger(@AVTHeaderHitInfo.Shift)^); // TShiftState
  Result.Column := AVTHeaderHitInfo.Column; // TColumnIndex
  Result.HitPosition := TVTHeaderHitPositions(PByte(@AVTHeaderHitInfo.HitPosition)^); // TVTHeaderHitPositions
end;

// TVTImageInfo
function TVTImageInfoToGo(const AVTImageInfo: TVTImageInfo): TVTImageInfoPtr;
begin
  Result.Index := AVTImageInfo.Index; // Integer
  Result.XPos := AVTImageInfo.XPos; // Integer
  Result.YPos := AVTImageInfo.YPos; // Integer
  Result.Ghosted := AVTImageInfo.Ghosted; // Boolean
  Result.Images := AVTImageInfo.Images; // TCustomImageList
end;

function TVTImageInfoToPas(const AVTImageInfo: TVTImageInfoPtr): TVTImageInfo;
begin
  Result.Index := AVTImageInfo.Index; // Integer
  Result.XPos := AVTImageInfo.XPos; // Integer
  Result.YPos := AVTImageInfo.YPos; // Integer
  Result.Ghosted := AVTImageInfo.Ghosted; // Boolean
  Result.Images := AVTImageInfo.Images; // TCustomImageList
end;

// TVTPaintInfo
function TVTPaintInfoToGo(const AVTPaintInfo: TVTPaintInfo): TVTPaintInfoPtr;
begin
  Result.Canvas := AVTPaintInfo.Canvas; // TCanvas
  Result.PaintOptions := PWord(@AVTPaintInfo.PaintOptions)^; // TVTInternalPaintOptions
  Result.Node := AVTPaintInfo.Node; // PVirtualNode
  Result.Column := AVTPaintInfo.Column; // TColumnIndex
  Result.Position := AVTPaintInfo.Position; // TColumnPosition
  Result.CellRect := AVTPaintInfo.CellRect; // TRect
  Result.ContentRect := AVTPaintInfo.ContentRect; // TRect
  Result.NodeWidth := AVTPaintInfo.NodeWidth; // Integer
  Result.Alignment := Integer(AVTPaintInfo.Alignment); // TAlignment
  Result.CaptionAlignment := Integer(AVTPaintInfo.CaptionAlignment); // TAlignment
  Result.BidiMode := Integer(AVTPaintInfo.BidiMode); // TBidiMode
  Result.BrushOrigin := AVTPaintInfo.BrushOrigin; // TPoint
  Result.ImageInfoSize := Length(AVTPaintInfo.ImageInfo); // array[TVTImageInfoIndex] of TVTImageInfo
  if length(AVTPaintInfo.ImageInfo) > 0 then
    Result.ImageInfo := @AVTPaintInfo.ImageInfo[TVTImageInfoIndex(0)]; // array[TVTImageInfoIndex] of TVTImageInfo
end;

function TVTPaintInfoToPas(const AVTPaintInfo: TVTPaintInfoPtr): TVTPaintInfo;
var
  ImageInfoIdx: Integer;
begin
  Result.Canvas := AVTPaintInfo.Canvas; // TCanvas
  Result.PaintOptions := TVTInternalPaintOptions(PWord(@AVTPaintInfo.PaintOptions)^); // TVTInternalPaintOptions
  Result.Node := AVTPaintInfo.Node; // PVirtualNode
  Result.Column := AVTPaintInfo.Column; // TColumnIndex
  Result.Position := AVTPaintInfo.Position; // TColumnPosition
  Result.CellRect := AVTPaintInfo.CellRect; // TRect
  Result.ContentRect := AVTPaintInfo.ContentRect; // TRect
  Result.NodeWidth := AVTPaintInfo.NodeWidth; // Integer
  Result.Alignment := TAlignment(AVTPaintInfo.Alignment); // TAlignment
  Result.CaptionAlignment := TAlignment(AVTPaintInfo.CaptionAlignment); // TAlignment
  Result.BidiMode := TBidiMode(AVTPaintInfo.BidiMode); // TBidiMode
  Result.BrushOrigin := AVTPaintInfo.BrushOrigin; // TPoint
  for ImageInfoIdx := 0 to AVTPaintInfo.ImageInfoSize - 1 do
    Result.ImageInfo[TVTImageInfoIndex(ImageInfoIdx)] := TVTImageInfoToPas(AVTPaintInfo.ImageInfo^[ImageInfoIdx]); // array[TVTImageInfoIndex] of TVTImageInfo
end;


end.
