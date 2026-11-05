//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uLCLEventCallback;

{$mode objfpc}{$H+}

{$Z4+}

{$I ExtDecl.inc}

interface

uses
  Controls, Forms, ComCtrls, Menus, ExtCtrls, Classes, SysUtils, Graphics, StdCtrls,
  {$ifdef Windows} ActiveX, {$else} laz.FakeActiveX, {$endif}LCLType,
  LMessages, Grids, uLinkLabel, ColorBox, ImgList, FPImage, ComboEx, WSReferences, fgl,
  laz.VirtualTrees, laz.VTHeaderPopup, GraphType,
  SynEdit, SynEditPointClasses, SynEditMouseCmds, SynEditMarkup, SynEditMiscClasses,
  SynEditMarks, SynEditKeyCmds, SynEditTypes, SynGutterLineNumber, SynEditTextBase, SynBeautifier,
  SynCompletion, SynMacroRecorder, SynEditHighlighter,
  {$ifdef LCLCocoa}
  MacOSAll, // hack: low-level access to Cocoa drawins is going to be used in order to support Cocoa HighDPI implementation
  {$endif}
  // 3dr
  {RichMemo,}
  uTools, uLCLRecordStruct, uArrayWrap, uInjectionCallbackWrap;

const
  // CALL 最长参数数
  CALL_MAX_PARAM = 12;

type
  // 基础事件回调函数
  TLCLEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;
  // 清除事件回调函数
  TLCLRemoveEventCallPtr = function(f: Pointer): Pointer; extdecl;
  // 特殊的消息事件回调
  TLCLMessageCallbackPtr = function(f: Pointer; msg: Pointer): Pointer; extdecl;

var
  GLCLEventCallbackPtr: TLCLEventCallbackPtr;
  GLCLRemoveEventCallbackPtr: TLCLRemoveEventCallPtr;
  GLCLMessageCallbackPtr: TLCLMessageCallbackPtr;

type

  { TLCLEventBase }

  TLCLEventBase = class
  private class var
    FEventObjectsLock: TRtlCriticalSection;
    FEventObjects: TEventObjectList;
  public
    class constructor Create;
    class destructor Destroy;
  private
    // 保存传入的，一个标识吧
    FHostDataPtr: Pointer;
    function GetDataPtr: Pointer;
    // 不单独使用的，配置其他使用
    class procedure CallRemoveEvent(AMethod: TMethod);
  protected
    procedure SendEvent(AArgs: array of const);
    function CheckDataPtr: Boolean;
  public
    constructor Create(AHostDataPtr: Pointer);
    destructor Destroy; override;
    property DataPtr: Pointer read GetDataPtr;

    // 移除事件中的对象
    class procedure Remove(AMethod: TMethod);
    class function CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
  end;

  { TLCLEvent }

  TLCLEvent = class(TLCLEventBase)
  public
    procedure OnTWndMethod(var TheMessage: TLMessage);
    // ----------------- 事件定义 -------------------------------
    procedure OnTAcceptDateEvent(Sender : TObject; var ADate : TDateTime; var AcceptDate: Boolean);
    procedure OnTAcceptFileNameEvent(Sender : TObject; Var Value : String);
    procedure OnTAcceptTimeEvent(Sender : TObject; var ATime : TDateTime; var AcceptTime: Boolean);
    procedure OnTActionEvent(AAction: TBasicAction; var Handled: Boolean);
    procedure OnTAddHeaderPopupItemEvent(const Sender: TBaseVirtualTree; const Column: TColumnIndex; var Cmd: TAddPopupItemType);
    function OnTAlignInsertBeforeEvent(Sender: TWinControl; Control1, Control2: TControl): Boolean;
    procedure OnTAlignPositionEvent(Sender: TWinControl; Control: TControl; var NewLeft, NewTop, NewWidth, NewHeight: Integer; var AlignRect: TRect; AlignInfo: TAlignInfo);
    procedure OnTBandDragEvent(Sender: TObject; Control: TControl; var Drag: Boolean);
    procedure OnTBandInfoEvent(Sender: TObject; Control: TControl; var Insets: TRect; var PreferredSize, RowCount: Integer);
    procedure OnTBandMoveEvent(Sender: TObject; Control: TControl; var ARect: TRect);
    procedure OnTBandPaintEvent(Sender: TObject; Control: TControl; ACanvas: TCanvas; var ARect: TRect; var Options: TBandPaintOptions);
    procedure OnTCanOffsetEvent(Sender: TObject; var NewOffset: Integer; var Accept: Boolean);
    procedure OnTCanResizeEvent(Sender: TObject; var NewSize: Integer; var Accept: Boolean);
    procedure OnTCellProcessEvent(Sender: TObject; aCol, aRow: Integer; processType: TCellProcessType; var aValue: string);
    procedure OnTChangeUpdatingEvent(ASender: TObject; AnUpdating: Boolean);
    procedure OnTCheckGroupClicked(Sender: TObject; Index: integer);
    procedure OnTCheckItemChange(Sender: TObject; AIndex: Integer);
    function OnTCheckItemEvent(Item: TObject): Boolean;
    procedure OnTClipboardRequestEvent(const RequestedFormatID: TClipboardFormat; Data: TStream);
    procedure OnTCloseEvent(Sender: TObject; var CloseAction: TCloseAction);
    procedure OnTCloseQueryEvent(Sender : TObject; var CanClose: Boolean);
    procedure OnTCodeCompletionEvent(var Value: string; SourceValue: string; var SourceStart, SourceEnd: TPoint; KeyChar: TUTF8Char; Shift: TShiftState);
    procedure OnTColumnChangeEvent(const Sender: TBaseVirtualTree; const Column: TColumnIndex; Visible: Boolean);
    procedure OnTConstrainedResizeEvent(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
    procedure OnTContextPopupEvent(Sender: TObject; MousePos: TPoint; var Handled: Boolean);
    procedure OnTControlShowHintEvent(Sender: TObject; HintInfo: PHintInfo);
    procedure OnTCustomDateEvent(Sender : TObject; var ADate : string);
    procedure OnTCustomGraphicNotify();
    procedure OnTCustomHCCreateSectionClassEvent(Sender: TCustomHeaderControl; var SectionClass: THeaderSectionClass);
    procedure OnTCustomImageListGetWidthForPPI(Sender: TCustomImageList; AImageWidth, APPI: Integer; var AResultWidth: Integer);
    procedure OnTCustomSectionNotifyEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection);
    procedure OnTCustomSectionTrackEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection; Width: Integer; State: TSectionTrackState);
    procedure OnTCustomTimeEvent(Sender : TObject; var ATime : TDateTime);
    procedure OnTDateRangeCheckEvent(Sender : TObject; var ADate : TDateTime);
    function OnTDesignerGetShiftStateEvent(): TShiftState;
    function OnTDesignerIsDesignMsgEvent(Sender: TControl; var Message: TLMessage): boolean;
    procedure OnTDesignerModifiedEvent();
    procedure OnTDesignerNotificationEvent(AComponent: TComponent; Operation: TOperation);
    procedure OnTDesignerPaintGridEvent();
    procedure OnTDesignerPrepareFreeDesignerEvent(AFreeComponent: boolean);
    procedure OnTDesignerSelectOnlyThisComponentEvent(AComponent: TComponent);
    procedure OnTDesignerUTF8KeyPressEvent(var UTF8Key: TUTF8Char);
    function OnTDesignerUniqueNameEvent(const BaseName: string): string;
    procedure OnTDesignerValidateRenameEvent(AComponent: TComponent; const CurName, NewName: string);
    procedure OnTDestroyResolutionHandleEvent(Sender: TCustomImageList; AWidth: Integer; AReferenceHandle: TLCLHandle);
    procedure OnTDialogResultEvent(Sender: TObject; Success: Boolean);
    procedure OnTDockDropEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer);
    procedure OnTDockOverEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
    procedure OnTDragDropEvent(Sender, Source: TObject; X,Y: Integer);
    procedure OnTDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
    procedure OnTDrawItemEvent(Control: TWinControl; Index: Integer; ARect: TRect; State: TOwnerDrawState);
    procedure OnTDrawPanelEvent(StatusBar: TStatusBar; Panel: TStatusPanel; const Rect: TRect);
    procedure OnTDropFilesEvent(Sender: TObject; const FileNames: array of string);
    procedure OnTEndDragEvent(Sender, Target: TObject; X,Y: Integer);
    Procedure OnTExceptionEvent(Sender : TObject; E : Exception);
    function OnTFPCanvasCombineColors(const color1, color2: TFPColor): TFPColor;
    procedure OnTFPImgProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect; const Msg: AnsiString; var Continue : Boolean);
    function OnTFilterItemEvent(ItemData: Pointer; out Done: Boolean): Boolean;
    function OnTFilterItemExEvent(const ACaption: string; ItemData: Pointer; out Done: Boolean): Boolean;
    function OnTFilterNodeEvent(ItemNode: TTreeNode; out Done: Boolean): Boolean;
    procedure OnTGetCellHintEvent(Sender: TObject; ACol, ARow: Integer; var HintText: String);
    procedure OnTGetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; var Value: TCheckboxState);
    procedure OnTGetColorsEvent(Sender: TCustomColorBox; Items: TStrings);
    procedure OnTGetDockCaptionEvent(Sender: TObject; AControl: TControl; var ACaption: string);
    procedure OnTGetEditEvent(Sender: TObject; ACol, ARow: Integer; var Value: string);
    procedure OnTGetHandleEvent(var Handle: HWND);
    procedure OnTGetPickListEvent(Sender: TObject; const KeyName: string; Values: TStrings);
    procedure OnTGetSiteInfoEvent(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: Boolean);
    procedure OnTGutterClickEvent(Sender: TObject; X, Y, Line: integer; mark: TSynEditMark);
    procedure OnTHdrEvent(Sender: TObject; IsColumn: Boolean; Index: Integer);
    procedure OnTHeaderSizingEvent(Sender: TObject; const IsColumn: boolean; const aIndex, aSize: Integer);
    function OnTHelpEvent(Command: Word; Data: PtrInt; var CallHelp: Boolean): Boolean;
    procedure OnTHintEvent(var HintStr: string; var CanShow: Boolean);
    procedure OnTIdleEvent(Sender: TObject; var Done: Boolean);
    function OnTImageIndexEvent(Str: String; Data: TObject; var AIsEnabled: Boolean): Integer;
    procedure OnTImagePaintBackgroundEvent(ASender: TObject; ACanvas: TCanvas; ARect: TRect);
    procedure OnTInvalidateLines(FirstLine, LastLine: integer);
    procedure OnTKeyEvent(Sender: TObject; var Key: Word; Shift: TShiftState);
    procedure OnTKeyPressEvent(Sender: TObject; var Key: char);
    procedure OnTLBGetColorsEvent(Sender: TCustomColorListBox; Items: TStrings);
    procedure OnTLVAdvancedCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTLVAdvancedCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTLVAdvancedCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTLVChangeEvent(Sender: TObject; Item: TListItem; Change: TItemChange);
    procedure OnTLVChangingEvent(Sender: TObject; Item: TListItem; Change: TItemChange; var AllowChange: Boolean);
    procedure OnTLVCheckedItemEvent(Sender: TObject; Item: TListItem);
    procedure OnTLVColumnClickEvent(Sender: TObject; Column: TListColumn);
    procedure OnTLVCompareEvent(Sender: TObject; Item1, Item2: TListItem; Data: Integer; var Compare: Integer);
    procedure OnTLVCreateItemClassEvent(Sender: TCustomListView; var ItemClass: TListItemClass);
    procedure OnTLVCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; var DefaultDraw: Boolean);
    procedure OnTLVCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; var DefaultDraw: Boolean);
    procedure OnTLVCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; var DefaultDraw: Boolean);
    procedure OnTLVDataEvent(Sender: TObject; Item: TListItem);
    procedure OnTLVDataFindEvent(Sender: TObject; AFind: TItemFind; const AFindString: string; const AFindPosition: TPoint; AFindData: Pointer; AStartIndex: Integer; ADirection: TSearchDirection; AWrap: Boolean; var AIndex: Integer);
    procedure OnTLVDataHintEvent(Sender: TObject; StartIndex, EndIndex: Integer);
    procedure OnTLVDataStateChangeEvent(Sender: TObject; StartIndex, EndIndex: Integer; OldState, NewState: TListItemStates);
    procedure OnTLVDeletedEvent(Sender: TObject; Item: TListItem);
    procedure OnTLVDrawItemEvent(Sender: TCustomListView; AItem: TListItem; ARect: TRect; AState: TOwnerDrawState);
    procedure OnTLVEditedEvent(Sender: TObject; Item: TListItem; var AValue: string);
    procedure OnTLVEditingEvent(Sender: TObject; Item: TListItem; var AllowEdit: Boolean);
    procedure OnTLVInsertEvent(Sender: TObject; Item: TListItem);
    procedure OnTLVSelectItemEvent(Sender: TObject; Item: TListItem; Selected: Boolean);
    function OnTListCompareEvent(AList: TListControlItems; AItem1, AItem2: TListControlItem): Integer;
    function OnTMaxLeftCharFunc(): Integer;
    procedure OnTMeasureItemEvent(Control: TWinControl; Index: Integer; var AHeight: Integer);
    procedure OnTMenuChangeEvent(Sender: TObject; Source: TMenuItem; Rebuild: Boolean);
    procedure OnTMenuDrawItemEvent(Sender: TObject; ACanvas: TCanvas; ARect: TRect; AState: TOwnerDrawState);
    procedure OnTMenuMeasureItemEvent(Sender: TObject; ACanvas: TCanvas; var AWidth, AHeight: Integer);
    procedure OnTModalDialogFinished(Sender: TObject; AResult: Integer);
    procedure OnTMouseEvent(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure OnTMouseMoveEvent(Sender: TObject; Shift: TShiftState; X, Y: Integer);
    procedure OnTMouseWheelEvent(Sender: TObject; Shift: TShiftState; WheelDelta: Integer; MousePos: TPoint; var Handled: Boolean);
    procedure OnTMouseWheelUpDownEvent(Sender: TObject; Shift: TShiftState; MousePos: TPoint; var Handled: Boolean);
    procedure OnTNotebookTabDragDropEvent(Sender, Source: TObject; OldIndex, NewIndex: Integer; CopyDrag: Boolean; var Done: Boolean);
    procedure OnTNotebookTabDragOverEvent(Sender, Source: TObject; OldIndex, NewIndex: Integer; CopyDrag: Boolean; var Accept: Boolean);
    procedure OnTNotifyEvent(Sender: TObject);
    procedure OnTOnBeforeExecuteEvent( ASender: TSynBaseCompletion; var ACurrentString: String; var APosition: Integer; var AnX, AnY: Integer; var AnResult: TOnBeforeExeucteFlags );
    procedure OnTOnCheckMarker(Sender: TObject; var StartPos, MarkerLen: Integer; var MarkerText: String);
    procedure OnTOnCompareCells(Sender: TObject; ACol, ARow, BCol,BRow: Integer; var Result: integer);
    procedure OnTOnDrawCell(Sender: TObject; aCol, aRow: Integer; aRect: TRect; aState:TGridDrawState);
    procedure OnTOnPrepareCanvasEvent(Sender: TObject; aCol, aRow: Integer; aState: TGridDrawState);
    procedure OnTOnSelectCellEvent(Sender: TObject; aCol, aRow: Integer; var CanSelect: Boolean);
    procedure OnTOnSelectEvent(Sender: TObject; aCol, aRow: Integer);
    procedure OnTOnUserInputEvent(Sender: TObject; Msg: Cardinal);
    procedure OnTOnValidateEvent(Sender: TObject; ACol, ARow: Longint; const KeyName, KeyValue: string);
    procedure OnTOpenGlCtrlMakeCurrentEvent(Sender: TObject; var Allow: boolean);
    procedure OnTPaintEvent(Sender: TObject; ACanvas: TCanvas);
    procedure OnTPlaceMarkEvent(Sender: TObject; var Mark: TSynEditMark);
    procedure OnTProcessCommandEvent(Sender: TObject; var Command: TSynEditorCommand; var AChar: TUTF8Char; Data: pointer);
    procedure OnTProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect; const Msg: AnsiString; var Continue : Boolean);
    procedure OnTQueryEndSessionEvent(var Cancel: Boolean);
    procedure OnTReplaceTextEvent(Sender: TObject; const ASearch, AReplace: string; Line, Column: integer; var ReplaceAction: TSynReplaceAction);
    procedure OnTSBCreatePanelClassEvent(Sender: TStatusBar; var PanelClass: TStatusPanelClass);
    procedure OnTScrollEvent(Sender: TObject; ScrollCode: TScrollCode; var ScrollPos: Integer);
    procedure OnTSectionDragEvent(Sender: TObject; FromSection, ToSection: THeaderSection; var AllowDrag: Boolean);
    procedure OnTSelectEditorEvent(Sender: TObject; aCol, aRow: Integer; var Editor: TWinControl);
    procedure OnTSelectionChangeEvent(Sender: TObject; User: boolean);
    procedure OnTSetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; const Value: TCheckboxState);
    procedure OnTSetEditEvent(Sender: TObject; ACol, ARow: Integer; const Value: string);
    procedure OnTShapePointsEvent(Sender: TObject; var Points: TPointArray; var Winding: Boolean);
    procedure OnTShortcutEvent(var Msg: TLMKey; var Handled: Boolean);
    procedure OnTShowHintEvent(var HintStr: string; var CanShow: Boolean; var HintInfo: THintInfo);
    procedure OnTSpecialLineMarkupEvent(Sender: TObject; Line: integer; var Special: boolean; Markup: TSynSelectedColor);
    procedure OnTStartDockEvent(Sender: TObject; var DragObject: TDragDockObject);
    procedure OnTStartDragEvent(Sender: TObject; var DragObject: TDragObject);
    procedure OnTStatusChangeEvent(Sender: TObject; Changes: TSynStatusChanges);
    function OnTSynBaseCompletionMeasureItem(const AKey: string; ACanvas: TCanvas; Selected: boolean; Index: integer): TPoint;
    function OnTSynBaseCompletionPaintItem(const AKey: string; ACanvas: TCanvas; X, Y: integer; Selected: boolean; Index: integer ): boolean;
    procedure OnTSynBaseCompletionSearchPosition(var APosition :integer);
    procedure OnTSynBaseHighlighterEvent();
    function OnTSynBaseHighlighterIEsbRHrlCharEvent(ALines: TSynEditStringsBase): TSynHighlighterRangeList;
    procedure OnTSynBaseHighlighterIHrlCharEvent(ARangeList: TSynHighlighterRangeList);
    procedure OnTSynBaseHighlighterIIdeCharEvent(AChars: TSynIdentChars);
    function OnTSynBaseHighlighterIIntBoolRIntEvent(startIndex, endIndex: Integer; forceEndIndex: Boolean): Integer;
    procedure OnTSynBaseHighlighterIIntEvent(value: integer);
    function OnTSynBaseHighlighterIIntRBoolEvent(const value: integer): boolean;
    function OnTSynBaseHighlighterIIntRDdcEvent(index: integer): TSynDividerDrawConfig;
    function OnTSynBaseHighlighterIIntRDdcsEvent(index: integer): TSynDividerDrawConfigSetting;
    function OnTSynBaseHighlighterIIntRHAttrEvent(index: integer): TSynHighlighterAttributes;
    procedure OnTSynBaseHighlighterIPtrEvent(Value: Pointer);
    procedure OnTSynBaseHighlighterIStrEvent(value: string);
    procedure OnTSynBaseHighlighterIStrIntEvent(const value: String; lineNumber:Integer);
    function OnTSynBaseHighlighterIStrRBoolEvent(const value: string): boolean;
    procedure OnTSynBaseHighlighterIStrsEvent(strings: TStrings);
    procedure OnTSynBaseHighlighterOStrIntEvent(out TokenStart: string; out TokenLength: integer);
    function OnTSynBaseHighlighterRBoolEvent(): boolean;
    function OnTSynBaseHighlighterRHAttrEvent(): TSynHighlighterAttributes;
    function OnTSynBaseHighlighterRIdeCharEvent(): TSynIdentChars;
    function OnTSynBaseHighlighterRIntEvent(): integer;
    function OnTSynBaseHighlighterRPtrEvent(): Pointer;
    function OnTSynBaseHighlighterRStrEvent(): string;
    function OnTSynBeautifierGetIndentEvent( Sender: TObject; Editor: TObject; LogCaret, OldLogCaret: TPoint; FirstLinePos, LastLinePos: Integer; Reason: TSynEditorCommand; SetIndentProc: TSynBeautifierSetIndentProc ): boolean;
    procedure OnTSynCopyPasteEvent(Sender: TObject; var AText: String; var AMode: TSynSelectionMode; ALogStartPos: TPoint; var AnAction: TSynCopyPasteAction);
    procedure OnTSynDropFilesEvent(Sender: TObject; X, Y: integer; AFiles: TStrings);
    procedure OnTSynEditGetGutterLineTextEvent(Sender: TSynGutterLineNumber; ALine: integer; out AText: string; const ALineInfo: TSynEditGutterLineInfo);
    function OnTSynGetCaretUndoProc(): TSynEditUndoItem;
    function OnTSynMacroReaderEventCommandEvent(): TSynEditorCommand;
    function OnTSynMacroReaderGetParamAsIntEvent(Index: Integer): Integer;
    function OnTSynMacroReaderGetParamAsStringEvent(Index: Integer): string;
    function OnTSynMacroReaderGetParamTypeEvent(Index: Integer): TSynEventParamType;
    function OnTSynMacroReaderParamCountEvent(): Integer;
    procedure OnTSynMacroWriteCommandEvent(const ACmd: TSynEditorCommand);
    procedure OnTSynMacroWriteEventIntEvent(const ACmd: integer);
    procedure OnTSynMacroWriteEventStrEvent(const AParam: string);
    procedure OnTSynMouseLinkEvent( Sender: TObject; X, Y: Integer; var AllowMouseLink: Boolean);
    procedure OnTSynUserCommandEvent(aSender: TCustomSynMacroRecorder; aCmd: TSynEditorCommand; var aEvent: TSynMacroEvent);
    procedure OnTSysLinkEvent(Sender: TObject; const Link: string; LinkType: TSysLinkType);
    procedure OnTTVAdvancedCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTTVAdvancedCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; Stage: TCustomDrawStage; var PaintImages, DefaultDraw: Boolean);
    procedure OnTTVChangedEvent(Sender: TObject; Node: TTreeNode);
    procedure OnTTVChangingEvent(Sender: TObject; Node: TTreeNode; var AllowChange: Boolean);
    procedure OnTTVCollapsingEvent(Sender: TObject; Node: TTreeNode; var AllowCollapse: Boolean);
    procedure OnTTVCompareEvent(Sender: TObject; Node1, Node2: TTreeNode; var Compare: Integer);
    procedure OnTTVCreateNodeClassEvent(Sender: TCustomTreeView; var NodeClass: TTreeNodeClass);
    procedure OnTTVCustomCreateNodeEvent(Sender: TCustomTreeView; var ATreeNode: TTreenode);
    procedure OnTTVCustomDrawArrowEvent(Sender: TCustomTreeView; const ARect: TRect; ACollapsed: Boolean);
    procedure OnTTVCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; var DefaultDraw: Boolean);
    procedure OnTTVCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; var DefaultDraw: Boolean);
    procedure OnTTVEditedEvent(Sender: TObject; Node: TTreeNode; var S: string);
    procedure OnTTVEditingEndEvent(Sender: TObject; Node: TTreeNode; Cancel: Boolean);
    procedure OnTTVEditingEvent(Sender: TObject; Node: TTreeNode; var AllowEdit: Boolean);
    procedure OnTTVExpandedEvent(Sender: TObject; Node: TTreeNode);
    procedure OnTTVExpandingEvent(Sender: TObject; Node: TTreeNode; var AllowExpansion: Boolean);
    function OnTTVHasChildrenEvent(Sender: TCustomTreeView; ANode: TTreeNode): Boolean;
    procedure OnTTVNodeChangedEvent(Sender: TObject; Node: TTreeNode; ChangeReason: TTreeNodeChangeReason);
    procedure OnTTabChangingEvent(Sender: TObject; var AllowChange: Boolean);
    procedure OnTTabGetImageEvent(Sender: TObject; TabIndex: Integer; var ImageIndex: Integer);
    procedure OnTTaskDlgClickEvent(Sender: TObject; AModalResult: TModalResult; var ACanClose: Boolean);
    procedure OnTTaskDlgTimerEvent(Sender: TObject; TickCount: Cardinal; var Reset: Boolean);
    procedure OnTToggledCheckboxEvent(Sender: TObject; aCol, aRow: Integer; aState: TCheckboxState);
    procedure OnTToolBarOnPaintButton(Sender: TToolButton; State: integer);
    procedure OnTUDChangingEvent(Sender: TObject; var AllowChange: Boolean);
    procedure OnTUDChangingEventEx(Sender: TObject; var AllowChange: Boolean; NewValue: SmallInt; Direction: TUpDownDirection);
    procedure OnTUDClickEvent(Sender: TObject; Button: TUDBtnType);
    procedure OnTUTF8KeyPressEvent(Sender: TObject; var UTF8Key: TUTF8Char);
    procedure OnTUnDockEvent(Sender: TObject; Client: TControl; NewTarget: TWinControl; var Allow: Boolean);
    procedure OnTUserCheckBoxImageEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckBoxState; var ImageList: TCustomImageList; var ImageIndex: TImageIndex);
    procedure OnTUserCheckboxBitmapEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckboxState; var ABitmap: TBitmap);
    procedure OnTVSTGetTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType; var CellText: String);
    procedure OnTVSTNewTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const NewText: String);
    procedure OnTVSTShortenStringEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const S: String; TextSpace: Integer; var Result: String; var Done: Boolean);
    procedure OnTVTAddToSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTAdvancedHeaderPaintEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; const Elements: THeaderPaintElements);
    procedure OnTVTAfterAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex);
    procedure OnTVTAfterAutoFitColumnsEvent(Sender: TVTHeader);
    procedure OnTVTAfterCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellRect: TRect);
    procedure OnTVTAfterColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex);
    procedure OnTVTAfterGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var MaxWidth: Integer);
    procedure OnTVTAfterHeaderHeightTrackingEvent(Sender: TVTHeader);
    procedure OnTVTAfterItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
    procedure OnTVTAfterItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
    procedure OnTVTBackgroundPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; const R: TRect; var Handled: Boolean);
    procedure OnTVTBeforeAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex; var SmartAutoFitType: TSmartAutoFitType; var Allowed: Boolean);
    procedure OnTVTBeforeAutoFitColumnsEvent(Sender: TVTHeader; var SmartAutoFitType: TSmartAutoFitType);
    procedure OnTVTBeforeCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; CellPaintMode: TVTCellPaintMode; CellRect: TRect; var ContentRect: TRect);
    procedure OnTVTBeforeColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState);
    procedure OnTVTBeforeDrawLineImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Level: Integer; var PosX: Integer);
    procedure OnTVTBeforeGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var UseSmartColumnWidth: Boolean);
    procedure OnTVTBeforeHeaderHeightTrackingEvent(Sender: TVTHeader; Shift: TShiftState);
    procedure OnTVTBeforeItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var ItemColor: TColor; var EraseAction: TItemEraseAction);
    procedure OnTVTBeforeItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var CustomDraw: Boolean);
    function OnTVTBeginCancelEndEditEvent(): Boolean;
    procedure OnTVTCanSplitterResizeColumnEvent(Sender: TVTHeader; P: TPoint; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTCanSplitterResizeHeaderEvent(Sender: TVTHeader; P: TPoint; var Allowed: Boolean);
    procedure OnTVTCanSplitterResizeNodeEvent(Sender: TBaseVirtualTree; P: TPoint; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var Allowed: Boolean);
    procedure OnTVTCheckChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var NewState: TCheckState; var Allowed: Boolean);
    procedure OnTVTColumnClickEvent(Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
    procedure OnTVTColumnDblClickEvent(Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
    procedure OnTVTColumnExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Column: TVirtualTreeColumn);
    procedure OnTVTColumnWidthDblClickResizeEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
    procedure OnTVTColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
    procedure OnTVTCompareEvent(Sender: TBaseVirtualTree; Node1, Node2: PVirtualNode; Column: TColumnIndex; var Result: Integer);
    procedure OnTVTCreateDataObjectEvent(Sender: TBaseVirtualTree; out IDataObject: IDataObject);
    procedure OnTVTCreateDragManagerEvent(Sender: TBaseVirtualTree; out DragManager: IVTDragManager);
    procedure OnTVTCreateEditorEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; out EditLink: IVTEditLink);
    procedure OnTVTDragAllowedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTDragDropEvent(Sender: TBaseVirtualTree; Source: TObject; DataObject: IDataObject; Formats: TFormatArray; Shift: TShiftState; const Pt: TPoint; var Effect: LongWord; Mode: TDropMode);
    procedure OnTVTDragOverEvent(Sender: TBaseVirtualTree; Source: TObject; Shift: TShiftState; State: TDragState; const Pt: TPoint; Mode: TDropMode; var Effect: LongWord; var Accept: Boolean);
    procedure OnTVTDrawHintEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; R: TRect; Column: TColumnIndex);
    procedure OnTVTDrawNodeEvent(Sender: TBaseVirtualTree; const PaintInfo: TVTPaintInfo);
    procedure OnTVTDrawTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; const CellRect: TRect; var DefaultDraw: Boolean);
    procedure OnTVTEditCancelEvent(Sender: TBaseVirtualTree; Column: TColumnIndex);
    procedure OnTVTEditChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
    procedure OnTVTEditChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTFocusChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
    procedure OnTVTFocusChangingEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode; OldColumn, NewColumn: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTFreeNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    function OnTVTGetBoundsEvent(): TRect;
    procedure OnTVTGetCellIsEmptyEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var IsEmpty: Boolean);
    procedure OnTVTGetCursorEvent(Sender: TBaseVirtualTree; var Cursor: TCursor);
    procedure OnTVTGetHeaderCursorEvent(Sender: TVTHeader; var Cursor: HCURSOR);
    procedure OnTVTGetHintEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var LineBreakStyle: TVTTooltipLineBreakStyle; var HintText: String);
    procedure OnTVTGetHintSizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var R: TRect);
    procedure OnTVTGetImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var Ghosted: Boolean; var ImageIndex: Integer);
    procedure OnTVTGetImageExEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var Ghosted: Boolean; var ImageIndex: Integer; var ImageList: TCustomImageList);
    procedure OnTVTGetImageTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var ImageText: String);
    procedure OnTVTGetLineStyleEvent(Sender: TBaseVirtualTree; var Bits: Pointer);
    procedure OnTVTGetNodeDataSizeEvent(Sender: TBaseVirtualTree; var NodeDataSize: Integer);
    procedure OnTVTGetNodeWidthEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; var NodeWidth: Integer);
    procedure OnTVTGetUserClipboardFormatsEvent(Sender: TBaseVirtualTree; var Formats: TFormatEtcArray);
    procedure OnTVTHeaderClickEvent(Sender: TVTHeader; HitInfo: TVTHeaderHitInfo);
    procedure OnTVTHeaderDraggedEvent(Sender: TVTHeader; Column: TColumnIndex; OldPosition: Integer);
    procedure OnTVTHeaderDraggedOutEvent(Sender: TVTHeader; Column: TColumnIndex; const DropPosition: TPoint);
    procedure OnTVTHeaderDraggingEvent(Sender: TVTHeader; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTHeaderHeightDblClickResizeEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
    procedure OnTVTHeaderHeightTrackingEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
    procedure OnTVTHeaderMouseEvent(Sender: TVTHeader; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure OnTVTHeaderMouseMoveEvent(Sender: TVTHeader; Shift: TShiftState; X, Y: Integer);
    procedure OnTVTHeaderNotifyEvent(Sender: TVTHeader; Column: TColumnIndex);
    procedure OnTVTHeaderPaintEvent(Sender: TVTHeader; HeaderCanvas: TCanvas; Column: TVirtualTreeColumn; const R: TRect; Hover, Pressed: Boolean; DropMark: TVTDropMarkMode);
    procedure OnTVTHeaderPaintQueryElementsEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; var Elements: THeaderPaintElements);
    procedure OnTVTHelpContextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var HelpContext: Integer);
    procedure OnTVTHintKindEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Kind: TVTHintKind);
    procedure OnTVTHotNodeChangeEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode);
    procedure OnTVTIncrementalSearchEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; const SearchText: String; var Result: Integer);
    procedure OnTVTInitChildrenEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var ChildCount: Cardinal);
    procedure OnTVTInitNodeEvent(Sender: TBaseVirtualTree; ParentNode, Node: PVirtualNode; var InitialStates: TVirtualNodeInitStates);
    procedure OnTVTKeyActionEvent(Sender: TBaseVirtualTree; var CharCode: Word; var Shift: TShiftState; var DoDefault: Boolean);
    procedure OnTVTMeasureItemEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; var NodeHeight: Integer);
    procedure OnTVTMeasureTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; var Extent: Integer);
    procedure OnTVTNodeClickEvent(Sender: TBaseVirtualTree; const HitInfo: THitInfo);
    procedure OnTVTNodeCopiedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTNodeCopyingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
    function OnTVTNodeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Node: PVirtualNode): Boolean;
    procedure OnTVTNodeHeightDblClickResizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
    procedure OnTVTNodeHeightTrackingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
    procedure OnTVTNodeMovedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTNodeMovingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
    procedure OnTVTOperationEvent(Sender: TBaseVirtualTree; OperationKind: TVTOperationKind);
    procedure OnTVTPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas);
    procedure OnTVTPaintText(Sender: TBaseVirtualTree; const TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType);
    procedure OnTVTPopupEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const P: TPoint; var AskParent: Boolean; var PopupMenu: TPopupMenu);
    function OnTVTPrepareEditEvent(Tree: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex): Boolean;
    procedure OnTVTProcessMessageEvent(var Msg: TLMessage);
    procedure OnTVTRemoveFromSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTRenderOLEDataEvent(Sender: TBaseVirtualTree; const FormatEtcIn: TFormatEtc; out Medium: TStgMedium; ForClipboard: Boolean; var Result: HRESULT);
    procedure OnTVTSaveNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Stream: TStream);
    procedure OnTVTSaveTreeEvent(Sender: TBaseVirtualTree; Stream: TStream);
    procedure OnTVTScrollBarShowEvent(Sender: TBaseVirtualTree; Bar: Integer; Show: Boolean);
    procedure OnTVTScrollEvent(Sender: TBaseVirtualTree; DeltaX, DeltaY: Integer);
    procedure OnTVTSetBoundsEvent(R: TRect);
    procedure OnTVTStateChangeEvent(Sender: TBaseVirtualTree; Enter, Leave: TVirtualTreeStates);
    procedure OnTVTStructureChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Reason: TChangeReason);
    procedure OnTVTTreeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType);
    procedure OnTVTUpdatingEvent(Sender: TBaseVirtualTree; State: TVTUpdateState);
    procedure OnTValidateEntryEvent(Sender: TObject; aCol, aRow: Integer; const OldValue: string; var NewValue: String);
    procedure OnTValidateEvent(Sender: TObject; KeyChar: TUTF8Char; Shift: TShiftState);
    procedure OnTgridOperationEvent(Sender: TObject; IsColumn:Boolean; sIndex, tIndex: Integer);

  end;

// 公共发送事件函数
procedure LCLSendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

implementation

class constructor TLCLEventBase.Create;
begin
  InitCriticalSection(FEventObjectsLock);
  FEventObjects := TEventObjectList.Create();
end;

class destructor TLCLEventBase.Destroy;
begin
  System.EnterCriticalSection(FEventObjectsLock);
  try
    FEventObjects.Clear;
    FreeAndNil(FEventObjects);
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
    DoneCriticalsection(FEventObjectsLock);
  end;
end;

function TLCLEventBase.CheckDataPtr: Boolean;
begin
  Result := FHostDataPtr <> nil;
end;

function TLCLEventBase.GetDataPtr: Pointer;
begin
  Result := FHostDataPtr;
end;

class procedure TLCLEventBase.CallRemoveEvent(AMethod: TMethod);
begin
  // 通知宿主程序，某个事件要清除了，解除引用。
  if Assigned(GLCLRemoveEventCallbackPtr) then
    GLCLRemoveEventCallbackPtr(TLCLEventBase(AMethod.Data).FHostDataPtr);
end;

procedure TLCLEventBase.SendEvent(AArgs: array of const);
begin
  if Assigned(GLCLEventCallbackPtr) and CheckDataPtr then
  begin
    // 这里要替换为 Pointer
    LCLSendEventByPointer(DataPtr, AArgs);
  end;
end;

procedure LCLSendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);
var
  LParams: array[0..CALL_MAX_PARAM-1] of Pointer;
  LArgLen: Integer;
  LV: TVarRec;
  I: Integer;
begin
  LArgLen := Length(AArgs);
  if LArgLen <= Length(LParams) then
  begin
    for I := 0 to LArgLen - 1 do
    begin
      LV := AArgs[I];
      case LV.VType of
        vtInteger       : LParams[I] := Pointer(LV.VInteger);
        vtBoolean       : LParams[I] := Pointer(Byte(LV.VBoolean));
        vtChar          : LParams[I] := Pointer(Ord(LV.VChar));
        vtExtended      : LParams[I] := LV.VExtended;
        vtString        : LParams[I] := {$IFDEF MSWINDOWS}LV.VString{$ELSE}LV.VAnsiString{$ENDIF};
        vtPointer       : LParams[I] := LV.VPointer;
        vtPChar         : LParams[I] := LV.VPChar;
        vtObject        : LParams[I] := LV.VObject;
        vtClass         : LParams[I] := LV.VClass;
        vtWideChar      : LParams[I] := Pointer(Ord(LV.VWideChar));
        vtPWideChar     : LParams[I] := LV.VPWideChar;
        vtAnsiString    : LParams[I] := LV.VAnsiString;
        vtInterface     : LParams[I] := LV.VInterface;
        vtWideString    : LParams[I] := LV.VWideString;
        vtInt64         : LParams[I] := LV.VInt64;
        vtUnicodeString : LParams[I] := LV.VUnicodeString;
      end;
    end;
    GLCLEventCallbackPtr(EventDataPtr, @LParams[0], LArgLen);
  end;
end;

constructor TLCLEventBase.Create(AHostDataPtr: Pointer);
begin
  inherited Create;
  FHostDataPtr := AHostDataPtr;
  // 并自己添加到对象列表，以便整个程序结束后清理对象
  System.EnterCriticalSection(FEventObjectsLock);
  try
    FEventObjects.AddOrSetData(Pointer(Self), Self);
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
  end;
end;

destructor TLCLEventBase.Destroy;
begin
  inherited Destroy;
end;

// 在设置事件时，如果事件地址为 nil 时调用该函数, 并会触发删除事件回调事件通知Go
class procedure TLCLEventBase.Remove(AMethod: TMethod);
begin
  System.EnterCriticalSection(FEventObjectsLock);
  try
    // 这是一个class，找到后会删除并Free掉这个对象
    if AMethod.Data <> nil then
    begin
      // 通知Go删除当前对象这个事件
      CallRemoveEvent(AMethod);
      // 删除Class对象后自动释放
      FEventObjects.Remove(AMethod.Data);
    end;
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
  end;
end;

// 检查和更新当前对象事件
class function TLCLEventBase.CheckAndUpdate(AMethod: TMethod; AHostDataPtr: Pointer): Boolean;
begin
  Result := False;
  System.EnterCriticalSection(FEventObjectsLock);
   try
     if AMethod.Data <> nil then
     begin
       // 只有当要替换的数据不同时，则更新
       if TLCLEventBase(AMethod.Data).FHostDataPtr <> AHostDataPtr then
       begin
         CallRemoveEvent(AMethod);
         TLCLEventBase(AMethod.Data).FHostDataPtr := AHostDataPtr;
         Result := True;
       end;
     end;
   finally
     System.LeaveCriticalSection(FEventObjectsLock);
   end;
end;

{ TLCLEvent }

// ----------------- 事件定义实现 -------------------------------

procedure TLCLEvent.OnTWndMethod(var TheMessage: TLMessage);
begin
  if Assigned(GLCLMessageCallbackPtr) and CheckDataPtr then
    GLCLMessageCallbackPtr(DataPtr, @TheMessage);
end;

procedure TLCLEvent.OnTAcceptDateEvent(Sender : TObject; var ADate : TDateTime; var AcceptDate: Boolean);
begin
  SendEvent([Sender, @ADate, @AcceptDate]);
end;

procedure TLCLEvent.OnTAcceptFileNameEvent(Sender : TObject; Var Value : String);
var
  RetValue: PChar;
begin
  RetValue := ToPChar(Value);
  SendEvent([Sender, @RetValue]);
  Value := StrPas(RetValue);
end;

procedure TLCLEvent.OnTAcceptTimeEvent(Sender : TObject; var ATime : TDateTime; var AcceptTime: Boolean);
begin
  SendEvent([Sender, @ATime, @AcceptTime]);
end;

procedure TLCLEvent.OnTActionEvent(AAction: TBasicAction; var Handled: Boolean);
begin
  SendEvent([AAction, @Handled]);
end;

procedure TLCLEvent.OnTAddHeaderPopupItemEvent(const Sender: TBaseVirtualTree; const Column: TColumnIndex; var Cmd: TAddPopupItemType);
begin
  SendEvent([Sender, Column, @Cmd]);
end;

function TLCLEvent.OnTAlignInsertBeforeEvent(Sender: TWinControl; Control1, Control2: TControl): Boolean;
begin
  SendEvent([Sender, Control1, Control2, @Result]);
end;

procedure TLCLEvent.OnTAlignPositionEvent(Sender: TWinControl; Control: TControl; var NewLeft, NewTop, NewWidth, NewHeight: Integer; var AlignRect: TRect; AlignInfo: TAlignInfo);
var
  AlignInfoPtr: TAlignInfoPtr;
begin
  AlignInfoPtr := TAlignInfoToGo(AlignInfo);
  SendEvent([Sender, Control, @NewLeft, @NewTop, @NewWidth, @NewHeight, @AlignRect, @AlignInfoPtr]);
end;

procedure TLCLEvent.OnTBandDragEvent(Sender: TObject; Control: TControl; var Drag: Boolean);
begin
  SendEvent([Sender, Control, @Drag]);
end;

procedure TLCLEvent.OnTBandInfoEvent(Sender: TObject; Control: TControl; var Insets: TRect; var PreferredSize, RowCount: Integer);
begin
  SendEvent([Sender, Control, @Insets, @PreferredSize, @RowCount]);
end;

procedure TLCLEvent.OnTBandMoveEvent(Sender: TObject; Control: TControl; var ARect: TRect);
begin
  SendEvent([Sender, Control, @ARect]);
end;

procedure TLCLEvent.OnTBandPaintEvent(Sender: TObject; Control: TControl; ACanvas: TCanvas; var ARect: TRect; var Options: TBandPaintOptions);
begin
  SendEvent([Sender, Control, ACanvas, @ARect, @Options]);
end;

procedure TLCLEvent.OnTCanOffsetEvent(Sender: TObject; var NewOffset: Integer; var Accept: Boolean);
begin
  SendEvent([Sender, @NewOffset, @Accept]);
end;

procedure TLCLEvent.OnTCanResizeEvent(Sender: TObject; var NewSize: Integer; var Accept: Boolean);
begin
  SendEvent([Sender, @NewSize, @Accept]);
end;

procedure TLCLEvent.OnTCellProcessEvent(Sender: TObject; aCol, aRow: Integer; processType: TCellProcessType; var aValue: string);
var
  RetaValue: PChar;
begin
  RetaValue := ToPChar(aValue);
  SendEvent([Sender, aCol, aRow, Integer(processType), @RetaValue]);
  aValue := StrPas(RetaValue);
end;

procedure TLCLEvent.OnTChangeUpdatingEvent(ASender: TObject; AnUpdating: Boolean);
begin
  SendEvent([ASender, AnUpdating]);
end;

procedure TLCLEvent.OnTCheckGroupClicked(Sender: TObject; Index: integer);
begin
  SendEvent([Sender, Index]);
end;

procedure TLCLEvent.OnTCheckItemChange(Sender: TObject; AIndex: Integer);
begin
  SendEvent([Sender, AIndex]);
end;

function TLCLEvent.OnTCheckItemEvent(Item: TObject): Boolean;
begin
  SendEvent([Item, @Result]);
end;

procedure TLCLEvent.OnTClipboardRequestEvent(const RequestedFormatID: TClipboardFormat; Data: TStream);
begin
  SendEvent([RequestedFormatID, Data]);
end;

procedure TLCLEvent.OnTCloseEvent(Sender: TObject; var CloseAction: TCloseAction);
begin
  SendEvent([Sender, @CloseAction]);
end;

procedure TLCLEvent.OnTCloseQueryEvent(Sender : TObject; var CanClose: Boolean);
begin
  SendEvent([Sender, @CanClose]);
end;

procedure TLCLEvent.OnTCodeCompletionEvent(var Value: string; SourceValue: string; var SourceStart, SourceEnd: TPoint; KeyChar: TUTF8Char; Shift: TShiftState);
var
  RetValue: PChar;
begin
  RetValue := ToPChar(Value);
  SendEvent([@RetValue, ToPChar(SourceValue), @SourceStart, @SourceEnd, ToPChar(KeyChar), PInteger(@Shift)^]);
  Value := StrPas(RetValue);
end;

procedure TLCLEvent.OnTColumnChangeEvent(const Sender: TBaseVirtualTree; const Column: TColumnIndex; Visible: Boolean);
begin
  SendEvent([Sender, Column, Visible]);
end;

procedure TLCLEvent.OnTConstrainedResizeEvent(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
begin
  SendEvent([Sender, @MinWidth, @MinHeight, @MaxWidth, @MaxHeight]);
end;

procedure TLCLEvent.OnTContextPopupEvent(Sender: TObject; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, @MousePos, @Handled]);
end;

procedure TLCLEvent.OnTControlShowHintEvent(Sender: TObject; HintInfo: PHintInfo);
var
  HintInfoPtr: THintInfoPtr;
begin
  HintInfoPtr := THintInfoToGo(HintInfo^);
  SendEvent([Sender, @HintInfoPtr]);
end;

procedure TLCLEvent.OnTCustomDateEvent(Sender : TObject; var ADate : string);
var
  RetADate: PChar;
begin
  RetADate := ToPChar(ADate);
  SendEvent([Sender, @RetADate]);
  ADate := StrPas(RetADate);
end;

procedure TLCLEvent.OnTCustomGraphicNotify();
begin
  SendEvent([]);
end;

procedure TLCLEvent.OnTCustomHCCreateSectionClassEvent(Sender: TCustomHeaderControl; var SectionClass: THeaderSectionClass);
begin
  SendEvent([Sender, @SectionClass]);
end;

procedure TLCLEvent.OnTCustomImageListGetWidthForPPI(Sender: TCustomImageList; AImageWidth, APPI: Integer; var AResultWidth: Integer);
begin
  SendEvent([Sender, AImageWidth, APPI, @AResultWidth]);
end;

procedure TLCLEvent.OnTCustomSectionNotifyEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection);
begin
  SendEvent([HeaderControl, Section]);
end;

procedure TLCLEvent.OnTCustomSectionTrackEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection; Width: Integer; State: TSectionTrackState);
begin
  SendEvent([HeaderControl, Section, Width, Integer(State)]);
end;

procedure TLCLEvent.OnTCustomTimeEvent(Sender : TObject; var ATime : TDateTime);
begin
  SendEvent([Sender, @ATime]);
end;

procedure TLCLEvent.OnTDateRangeCheckEvent(Sender : TObject; var ADate : TDateTime);
begin
  SendEvent([Sender, @ADate]);
end;

function TLCLEvent.OnTDesignerGetShiftStateEvent(): TShiftState;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTDesignerIsDesignMsgEvent(Sender: TControl; var Message: TLMessage): boolean;
begin
  SendEvent([Sender, @Message, @Result]);
end;

procedure TLCLEvent.OnTDesignerModifiedEvent();
begin
  SendEvent([]);
end;

procedure TLCLEvent.OnTDesignerNotificationEvent(AComponent: TComponent; Operation: TOperation);
begin
  SendEvent([AComponent, Integer(Operation)]);
end;

procedure TLCLEvent.OnTDesignerPaintGridEvent();
begin
  SendEvent([]);
end;

procedure TLCLEvent.OnTDesignerPrepareFreeDesignerEvent(AFreeComponent: boolean);
begin
  SendEvent([AFreeComponent]);
end;

procedure TLCLEvent.OnTDesignerSelectOnlyThisComponentEvent(AComponent: TComponent);
begin
  SendEvent([AComponent]);
end;

procedure TLCLEvent.OnTDesignerUTF8KeyPressEvent(var UTF8Key: TUTF8Char);
var
  RetUTF8Key: PChar;
begin
  RetUTF8Key := ToPChar(UTF8Key);
  SendEvent([@RetUTF8Key]);
  UTF8Key := StrPas(RetUTF8Key);
end;

function TLCLEvent.OnTDesignerUniqueNameEvent(const BaseName: string): string;
begin
  SendEvent([ToPChar(BaseName), @Result]);
end;

procedure TLCLEvent.OnTDesignerValidateRenameEvent(AComponent: TComponent; const CurName, NewName: string);
begin
  SendEvent([AComponent, ToPChar(CurName), ToPChar(NewName)]);
end;

procedure TLCLEvent.OnTDestroyResolutionHandleEvent(Sender: TCustomImageList; AWidth: Integer; AReferenceHandle: TLCLHandle);
begin
  SendEvent([Sender, AWidth, AReferenceHandle]);
end;

procedure TLCLEvent.OnTDialogResultEvent(Sender: TObject; Success: Boolean);
begin
  SendEvent([Sender, Success]);
end;

procedure TLCLEvent.OnTDockDropEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TLCLEvent.OnTDockOverEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, Integer(State), @Accept]);
end;

procedure TLCLEvent.OnTDragDropEvent(Sender, Source: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TLCLEvent.OnTDragOverEvent(Sender, Source: TObject; X,Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, Integer(State), @Accept]);
end;

procedure TLCLEvent.OnTDrawItemEvent(Control: TWinControl; Index: Integer; ARect: TRect; State: TOwnerDrawState);
begin
  SendEvent([Control, Index, @ARect, PInteger(@State)^]);
end;

procedure TLCLEvent.OnTDrawPanelEvent(StatusBar: TStatusBar; Panel: TStatusPanel; const Rect: TRect);
begin
  SendEvent([StatusBar, Panel, @Rect]);
end;

procedure TLCLEvent.OnTDropFilesEvent(Sender: TObject; const FileNames: array of string);
var
  FileNamesPtr: Pointer = nil;
  FileNamesLen: Integer;
begin
  FileNamesLen := Length(FileNames);
  if FileNamesLen > 0 then
    FileNamesPtr := @FileNames[0];
  SendEvent([Sender, FileNamesPtr, FileNamesLen]);
end;

procedure TLCLEvent.OnTEndDragEvent(Sender, Target: TObject; X,Y: Integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

Procedure TLCLEvent.OnTExceptionEvent(Sender : TObject; E : Exception);
begin
  SendEvent([Sender, E]);
end;

function TLCLEvent.OnTFPCanvasCombineColors(const color1, color2: TFPColor): TFPColor;
var
  color1Ptr: TFPColorPtr;
  color2Ptr: TFPColorPtr;
begin
  color1Ptr := TFPColorToGo(color1);
  color2Ptr := TFPColorToGo(color2);
  SendEvent([@color1Ptr, @color2Ptr, @Result]);
end;

procedure TLCLEvent.OnTFPImgProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect; const Msg: AnsiString; var Continue : Boolean);
begin
  SendEvent([Sender, Integer(Stage), PercentDone, RedrawNow, @R, ToPChar(Msg), @Continue]);
end;

function TLCLEvent.OnTFilterItemEvent(ItemData: Pointer; out Done: Boolean): Boolean;
begin
  SendEvent([ItemData, @Done, @Result]);
end;

function TLCLEvent.OnTFilterItemExEvent(const ACaption: string; ItemData: Pointer; out Done: Boolean): Boolean;
begin
  SendEvent([ToPChar(ACaption), ItemData, @Done, @Result]);
end;

function TLCLEvent.OnTFilterNodeEvent(ItemNode: TTreeNode; out Done: Boolean): Boolean;
begin
  SendEvent([ItemNode, @Done, @Result]);
end;

procedure TLCLEvent.OnTGetCellHintEvent(Sender: TObject; ACol, ARow: Integer; var HintText: String);
var
  RetHintText: PChar;
begin
  RetHintText := ToPChar(HintText);
  SendEvent([Sender, ACol, ARow, @RetHintText]);
  HintText := StrPas(RetHintText);
end;

procedure TLCLEvent.OnTGetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; var Value: TCheckboxState);
begin
  SendEvent([Sender, ACol, ARow, @Value]);
end;

procedure TLCLEvent.OnTGetColorsEvent(Sender: TCustomColorBox; Items: TStrings);
begin
  SendEvent([Sender, Items]);
end;

procedure TLCLEvent.OnTGetDockCaptionEvent(Sender: TObject; AControl: TControl; var ACaption: string);
var
  RetACaption: PChar;
begin
  RetACaption := ToPChar(ACaption);
  SendEvent([Sender, AControl, @RetACaption]);
  ACaption := StrPas(RetACaption);
end;

procedure TLCLEvent.OnTGetEditEvent(Sender: TObject; ACol, ARow: Integer; var Value: string);
var
  RetValue: PChar;
begin
  RetValue := ToPChar(Value);
  SendEvent([Sender, ACol, ARow, @RetValue]);
  Value := StrPas(RetValue);
end;

procedure TLCLEvent.OnTGetHandleEvent(var Handle: HWND);
begin
  SendEvent([@Handle]);
end;

procedure TLCLEvent.OnTGetPickListEvent(Sender: TObject; const KeyName: string; Values: TStrings);
begin
  SendEvent([Sender, ToPChar(KeyName), Values]);
end;

procedure TLCLEvent.OnTGetSiteInfoEvent(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: Boolean);
begin
  SendEvent([Sender, DockClient, @InfluenceRect, @MousePos, @CanDock]);
end;

procedure TLCLEvent.OnTGutterClickEvent(Sender: TObject; X, Y, Line: integer; mark: TSynEditMark);
begin
  SendEvent([Sender, X, Y, Line, mark]);
end;

procedure TLCLEvent.OnTHdrEvent(Sender: TObject; IsColumn: Boolean; Index: Integer);
begin
  SendEvent([Sender, IsColumn, Index]);
end;

procedure TLCLEvent.OnTHeaderSizingEvent(Sender: TObject; const IsColumn: boolean; const aIndex, aSize: Integer);
begin
  SendEvent([Sender, IsColumn, aIndex, aSize]);
end;

function TLCLEvent.OnTHelpEvent(Command: Word; Data: PtrInt; var CallHelp: Boolean): Boolean;
begin
  SendEvent([Command, Data, @CallHelp, @Result]);
end;

procedure TLCLEvent.OnTHintEvent(var HintStr: string; var CanShow: Boolean);
var
  RetHintStr: PChar;
begin
  RetHintStr := ToPChar(HintStr);
  SendEvent([@RetHintStr, @CanShow]);
  HintStr := StrPas(RetHintStr);
end;

procedure TLCLEvent.OnTIdleEvent(Sender: TObject; var Done: Boolean);
begin
  SendEvent([Sender, @Done]);
end;

function TLCLEvent.OnTImageIndexEvent(Str: String; Data: TObject; var AIsEnabled: Boolean): Integer;
begin
  SendEvent([ToPChar(Str), Data, @AIsEnabled, @Result]);
end;

procedure TLCLEvent.OnTImagePaintBackgroundEvent(ASender: TObject; ACanvas: TCanvas; ARect: TRect);
begin
  SendEvent([ASender, ACanvas, @ARect]);
end;

procedure TLCLEvent.OnTInvalidateLines(FirstLine, LastLine: integer);
begin
  SendEvent([FirstLine, LastLine]);
end;

procedure TLCLEvent.OnTKeyEvent(Sender: TObject; var Key: Word; Shift: TShiftState);
begin
  SendEvent([Sender, @Key, PInteger(@Shift)^]);
end;

procedure TLCLEvent.OnTKeyPressEvent(Sender: TObject; var Key: char);
begin
  SendEvent([Sender, @Key]);
end;

procedure TLCLEvent.OnTLBGetColorsEvent(Sender: TCustomColorListBox; Items: TStrings);
begin
  SendEvent([Sender, Items]);
end;

procedure TLCLEvent.OnTLVAdvancedCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, Integer(Stage), @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVAdvancedCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, PInteger(@State)^, Integer(Stage), @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVAdvancedCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, SubItem, PInteger(@State)^, Integer(Stage), @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVChangeEvent(Sender: TObject; Item: TListItem; Change: TItemChange);
begin
  SendEvent([Sender, Item, Integer(Change)]);
end;

procedure TLCLEvent.OnTLVChangingEvent(Sender: TObject; Item: TListItem; Change: TItemChange; var AllowChange: Boolean);
begin
  SendEvent([Sender, Item, Integer(Change), @AllowChange]);
end;

procedure TLCLEvent.OnTLVCheckedItemEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTLVColumnClickEvent(Sender: TObject; Column: TListColumn);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTLVCompareEvent(Sender: TObject; Item1, Item2: TListItem; Data: Integer; var Compare: Integer);
begin
  SendEvent([Sender, Item1, Item2, Data, @Compare]);
end;

procedure TLCLEvent.OnTLVCreateItemClassEvent(Sender: TCustomListView; var ItemClass: TListItemClass);
begin
  SendEvent([Sender, @ItemClass]);
end;

procedure TLCLEvent.OnTLVCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, PInteger(@State)^, @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, SubItem, PInteger(@State)^, @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVDataEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTLVDataFindEvent(Sender: TObject; AFind: TItemFind; const AFindString: string; const AFindPosition: TPoint; AFindData: Pointer; AStartIndex: Integer; ADirection: TSearchDirection; AWrap: Boolean; var AIndex: Integer);
begin
  SendEvent([Sender, Integer(AFind), ToPChar(AFindString), @AFindPosition, AFindData, AStartIndex, Integer(ADirection), AWrap, @AIndex]);
end;

procedure TLCLEvent.OnTLVDataHintEvent(Sender: TObject; StartIndex, EndIndex: Integer);
begin
  SendEvent([Sender, StartIndex, EndIndex]);
end;

procedure TLCLEvent.OnTLVDataStateChangeEvent(Sender: TObject; StartIndex, EndIndex: Integer; OldState, NewState: TListItemStates);
begin
  SendEvent([Sender, StartIndex, EndIndex, PInteger(@OldState)^, PInteger(@NewState)^]);
end;

procedure TLCLEvent.OnTLVDeletedEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTLVDrawItemEvent(Sender: TCustomListView; AItem: TListItem; ARect: TRect; AState: TOwnerDrawState);
begin
  SendEvent([Sender, AItem, @ARect, PInteger(@AState)^]);
end;

procedure TLCLEvent.OnTLVEditedEvent(Sender: TObject; Item: TListItem; var AValue: string);
var
  RetAValue: PChar;
begin
  RetAValue := ToPChar(AValue);
  SendEvent([Sender, Item, @RetAValue]);
  AValue := StrPas(RetAValue);
end;

procedure TLCLEvent.OnTLVEditingEvent(Sender: TObject; Item: TListItem; var AllowEdit: Boolean);
begin
  SendEvent([Sender, Item, @AllowEdit]);
end;

procedure TLCLEvent.OnTLVInsertEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTLVSelectItemEvent(Sender: TObject; Item: TListItem; Selected: Boolean);
begin
  SendEvent([Sender, Item, Selected]);
end;

function TLCLEvent.OnTListCompareEvent(AList: TListControlItems; AItem1, AItem2: TListControlItem): Integer;
begin
  SendEvent([AList, AItem1, AItem2, @Result]);
end;

function TLCLEvent.OnTMaxLeftCharFunc(): Integer;
begin
  SendEvent([@Result]);
end;

procedure TLCLEvent.OnTMeasureItemEvent(Control: TWinControl; Index: Integer; var AHeight: Integer);
begin
  SendEvent([Control, Index, @AHeight]);
end;

procedure TLCLEvent.OnTMenuChangeEvent(Sender: TObject; Source: TMenuItem; Rebuild: Boolean);
begin
  SendEvent([Sender, Source, Rebuild]);
end;

procedure TLCLEvent.OnTMenuDrawItemEvent(Sender: TObject; ACanvas: TCanvas; ARect: TRect; AState: TOwnerDrawState);
begin
  SendEvent([Sender, ACanvas, @ARect, PInteger(@AState)^]);
end;

procedure TLCLEvent.OnTMenuMeasureItemEvent(Sender: TObject; ACanvas: TCanvas; var AWidth, AHeight: Integer);
begin
  SendEvent([Sender, ACanvas, @AWidth, @AHeight]);
end;

procedure TLCLEvent.OnTModalDialogFinished(Sender: TObject; AResult: Integer);
begin
  SendEvent([Sender, AResult]);
end;

procedure TLCLEvent.OnTMouseEvent(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, Integer(Button), PInteger(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTMouseMoveEvent(Sender: TObject; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, PInteger(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTMouseWheelEvent(Sender: TObject; Shift: TShiftState; WheelDelta: Integer; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, PInteger(@Shift)^, WheelDelta, @MousePos, @Handled]);
end;

procedure TLCLEvent.OnTMouseWheelUpDownEvent(Sender: TObject; Shift: TShiftState; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, PInteger(@Shift)^, @MousePos, @Handled]);
end;

procedure TLCLEvent.OnTNotebookTabDragDropEvent(Sender, Source: TObject; OldIndex, NewIndex: Integer; CopyDrag: Boolean; var Done: Boolean);
begin
  SendEvent([Sender, Source, OldIndex, NewIndex, CopyDrag, @Done]);
end;

procedure TLCLEvent.OnTNotebookTabDragOverEvent(Sender, Source: TObject; OldIndex, NewIndex: Integer; CopyDrag: Boolean; var Accept: Boolean);
begin
  SendEvent([Sender, Source, OldIndex, NewIndex, CopyDrag, @Accept]);
end;

procedure TLCLEvent.OnTNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

procedure TLCLEvent.OnTOnBeforeExecuteEvent( ASender: TSynBaseCompletion; var ACurrentString: String; var APosition: Integer; var AnX, AnY: Integer; var AnResult: TOnBeforeExeucteFlags );
var
  RetACurrentString: PChar;
begin
  RetACurrentString := ToPChar(ACurrentString);
  SendEvent([ASender, @RetACurrentString, @APosition, @AnX, @AnY, @AnResult]);
  ACurrentString := StrPas(RetACurrentString);
end;

procedure TLCLEvent.OnTOnCheckMarker(Sender: TObject; var StartPos, MarkerLen: Integer; var MarkerText: String);
var
  RetMarkerText: PChar;
begin
  RetMarkerText := ToPChar(MarkerText);
  SendEvent([Sender, @StartPos, @MarkerLen, @RetMarkerText]);
  MarkerText := StrPas(RetMarkerText);
end;

procedure TLCLEvent.OnTOnCompareCells(Sender: TObject; ACol, ARow, BCol,BRow: Integer; var Result: integer);
begin
  SendEvent([Sender, ACol, ARow, BCol, BRow, @Result]);
end;

procedure TLCLEvent.OnTOnDrawCell(Sender: TObject; aCol, aRow: Integer; aRect: TRect; aState:TGridDrawState);
begin
  SendEvent([Sender, aCol, aRow, @aRect, PInteger(@aState)^]);
end;

procedure TLCLEvent.OnTOnPrepareCanvasEvent(Sender: TObject; aCol, aRow: Integer; aState: TGridDrawState);
begin
  SendEvent([Sender, aCol, aRow, PInteger(@aState)^]);
end;

procedure TLCLEvent.OnTOnSelectCellEvent(Sender: TObject; aCol, aRow: Integer; var CanSelect: Boolean);
begin
  SendEvent([Sender, aCol, aRow, @CanSelect]);
end;

procedure TLCLEvent.OnTOnSelectEvent(Sender: TObject; aCol, aRow: Integer);
begin
  SendEvent([Sender, aCol, aRow]);
end;

procedure TLCLEvent.OnTOnUserInputEvent(Sender: TObject; Msg: Cardinal);
begin
  SendEvent([Sender, Msg]);
end;

procedure TLCLEvent.OnTOnValidateEvent(Sender: TObject; ACol, ARow: Longint; const KeyName, KeyValue: string);
begin
  SendEvent([Sender, ACol, ARow, ToPChar(KeyName), ToPChar(KeyValue)]);
end;

procedure TLCLEvent.OnTOpenGlCtrlMakeCurrentEvent(Sender: TObject; var Allow: boolean);
begin
  SendEvent([Sender, @Allow]);
end;

procedure TLCLEvent.OnTPaintEvent(Sender: TObject; ACanvas: TCanvas);
begin
  SendEvent([Sender, ACanvas]);
end;

procedure TLCLEvent.OnTPlaceMarkEvent(Sender: TObject; var Mark: TSynEditMark);
begin
  SendEvent([Sender, @Mark]);
end;

procedure TLCLEvent.OnTProcessCommandEvent(Sender: TObject; var Command: TSynEditorCommand; var AChar: TUTF8Char; Data: pointer);
var
  RetAChar: PChar;
begin
  RetAChar := ToPChar(AChar);
  SendEvent([Sender, @Command, @RetAChar, Data]);
  AChar := StrPas(RetAChar);
end;

procedure TLCLEvent.OnTProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect; const Msg: AnsiString; var Continue : Boolean);
begin
  SendEvent([Sender, Integer(Stage), PercentDone, RedrawNow, @R, ToPChar(Msg), @Continue]);
end;

procedure TLCLEvent.OnTQueryEndSessionEvent(var Cancel: Boolean);
begin
  SendEvent([@Cancel]);
end;

procedure TLCLEvent.OnTReplaceTextEvent(Sender: TObject; const ASearch, AReplace: string; Line, Column: integer; var ReplaceAction: TSynReplaceAction);
begin
  SendEvent([Sender, ToPChar(ASearch), ToPChar(AReplace), Line, Column, @ReplaceAction]);
end;

procedure TLCLEvent.OnTSBCreatePanelClassEvent(Sender: TStatusBar; var PanelClass: TStatusPanelClass);
begin
  SendEvent([Sender, @PanelClass]);
end;

procedure TLCLEvent.OnTScrollEvent(Sender: TObject; ScrollCode: TScrollCode; var ScrollPos: Integer);
begin
  SendEvent([Sender, Integer(ScrollCode), @ScrollPos]);
end;

procedure TLCLEvent.OnTSectionDragEvent(Sender: TObject; FromSection, ToSection: THeaderSection; var AllowDrag: Boolean);
begin
  SendEvent([Sender, FromSection, ToSection, @AllowDrag]);
end;

procedure TLCLEvent.OnTSelectEditorEvent(Sender: TObject; aCol, aRow: Integer; var Editor: TWinControl);
begin
  SendEvent([Sender, aCol, aRow, @Editor]);
end;

procedure TLCLEvent.OnTSelectionChangeEvent(Sender: TObject; User: boolean);
begin
  SendEvent([Sender, User]);
end;

procedure TLCLEvent.OnTSetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; const Value: TCheckboxState);
begin
  SendEvent([Sender, ACol, ARow, Integer(Value)]);
end;

procedure TLCLEvent.OnTSetEditEvent(Sender: TObject; ACol, ARow: Integer; const Value: string);
begin
  SendEvent([Sender, ACol, ARow, ToPChar(Value)]);
end;

procedure TLCLEvent.OnTShapePointsEvent(Sender: TObject; var Points: TPointArray; var Winding: Boolean);
var
  PointsWrap: TPointArrayWrap;
begin
  PointsWrap := TPointArrayWrap.Create(Points);
  SendEvent([Sender, @PointsWrap, @Winding]);
  if PointsWrap.Size() > 0 then
    Points := PointsWrap.PointArrayData()^;
  PointsWrap.Free();
end;

procedure TLCLEvent.OnTShortcutEvent(var Msg: TLMKey; var Handled: Boolean);
var
  MsgPtr: TLMKeyPtr;
begin
  MsgPtr := TLMKeyToGo(Msg);
  SendEvent([@MsgPtr, @Handled]);
  Msg := TLMKeyToPas(MsgPtr);
end;

procedure TLCLEvent.OnTShowHintEvent(var HintStr: string; var CanShow: Boolean; var HintInfo: THintInfo);
var
  RetHintStr: PChar;
  HintInfoPtr: THintInfoPtr;
begin
  RetHintStr := ToPChar(HintStr);
  HintInfoPtr := THintInfoToGo(HintInfo);
  SendEvent([@RetHintStr, @CanShow, @HintInfoPtr]);
  HintStr := StrPas(RetHintStr);
  HintInfo := THintInfoToPas(HintInfoPtr);
end;

procedure TLCLEvent.OnTSpecialLineMarkupEvent(Sender: TObject; Line: integer; var Special: boolean; Markup: TSynSelectedColor);
begin
  SendEvent([Sender, Line, @Special, Markup]);
end;

procedure TLCLEvent.OnTStartDockEvent(Sender: TObject; var DragObject: TDragDockObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TLCLEvent.OnTStartDragEvent(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TLCLEvent.OnTStatusChangeEvent(Sender: TObject; Changes: TSynStatusChanges);
begin
  SendEvent([Sender, PInteger(@Changes)^]);
end;

function TLCLEvent.OnTSynBaseCompletionMeasureItem(const AKey: string; ACanvas: TCanvas; Selected: boolean; Index: integer): TPoint;
begin
  SendEvent([ToPChar(AKey), ACanvas, Selected, Index, @Result]);
end;

function TLCLEvent.OnTSynBaseCompletionPaintItem(const AKey: string; ACanvas: TCanvas; X, Y: integer; Selected: boolean; Index: integer ): boolean;
begin
  SendEvent([ToPChar(AKey), ACanvas, X, Y, Selected, Index, @Result]);
end;

procedure TLCLEvent.OnTSynBaseCompletionSearchPosition(var APosition :integer);
begin
  SendEvent([@APosition]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterEvent();
begin
  SendEvent([]);
end;

function TLCLEvent.OnTSynBaseHighlighterIEsbRHrlCharEvent(ALines: TSynEditStringsBase): TSynHighlighterRangeList;
begin
  SendEvent([ALines, @Result]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterIHrlCharEvent(ARangeList: TSynHighlighterRangeList);
begin
  SendEvent([ARangeList]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterIIdeCharEvent(AChars: TSynIdentChars);
begin
  SendEvent([PInteger(@AChars)^]);
end;

function TLCLEvent.OnTSynBaseHighlighterIIntBoolRIntEvent(startIndex, endIndex: Integer; forceEndIndex: Boolean): Integer;
begin
  SendEvent([startIndex, endIndex, forceEndIndex, @Result]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterIIntEvent(value: integer);
begin
  SendEvent([value]);
end;

function TLCLEvent.OnTSynBaseHighlighterIIntRBoolEvent(const value: integer): boolean;
begin
  SendEvent([value, @Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterIIntRDdcEvent(index: integer): TSynDividerDrawConfig;
begin
  SendEvent([index, @Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterIIntRDdcsEvent(index: integer): TSynDividerDrawConfigSetting;
begin
  SendEvent([index, @Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterIIntRHAttrEvent(index: integer): TSynHighlighterAttributes;
begin
  SendEvent([index, @Result]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterIPtrEvent(Value: Pointer);
begin
  SendEvent([Value]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterIStrEvent(value: string);
begin
  SendEvent([ToPChar(value)]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterIStrIntEvent(const value: String; lineNumber:Integer);
begin
  SendEvent([ToPChar(value), lineNumber]);
end;

function TLCLEvent.OnTSynBaseHighlighterIStrRBoolEvent(const value: string): boolean;
begin
  SendEvent([ToPChar(value), @Result]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterIStrsEvent(strings: TStrings);
begin
  SendEvent([strings]);
end;

procedure TLCLEvent.OnTSynBaseHighlighterOStrIntEvent(out TokenStart: string; out TokenLength: integer);
var
  RetTokenStart: PChar;
begin
  SendEvent([@RetTokenStart, @TokenLength]);
  TokenStart := StrPas(RetTokenStart);
end;

function TLCLEvent.OnTSynBaseHighlighterRBoolEvent(): boolean;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterRHAttrEvent(): TSynHighlighterAttributes;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterRIdeCharEvent(): TSynIdentChars;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterRIntEvent(): integer;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterRPtrEvent(): Pointer;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynBaseHighlighterRStrEvent(): string;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynBeautifierGetIndentEvent( Sender: TObject; Editor: TObject; LogCaret, OldLogCaret: TPoint; FirstLinePos, LastLinePos: Integer; Reason: TSynEditorCommand; SetIndentProc: TSynBeautifierSetIndentProc ): boolean;
var
  SetIndentProcCallback: TBeautifierSetIndentCallback;
begin
  SetIndentProcCallback := TBeautifierSetIndentCallback.Create(SetIndentProc);
  SendEvent([Sender, Editor, @LogCaret, @OldLogCaret, FirstLinePos, LastLinePos, Reason, SetIndentProcCallback, @Result]);
end;

procedure TLCLEvent.OnTSynCopyPasteEvent(Sender: TObject; var AText: String; var AMode: TSynSelectionMode; ALogStartPos: TPoint; var AnAction: TSynCopyPasteAction);
var
  RetAText: PChar;
begin
  RetAText := ToPChar(AText);
  SendEvent([Sender, @RetAText, @AMode, @ALogStartPos, @AnAction]);
  AText := StrPas(RetAText);
end;

procedure TLCLEvent.OnTSynDropFilesEvent(Sender: TObject; X, Y: integer; AFiles: TStrings);
begin
  SendEvent([Sender, X, Y, AFiles]);
end;

procedure TLCLEvent.OnTSynEditGetGutterLineTextEvent(Sender: TSynGutterLineNumber; ALine: integer; out AText: string; const ALineInfo: TSynEditGutterLineInfo);
var
  RetAText: PChar;
  ALineInfoPtr: TSynEditGutterLineInfoPtr;
begin
  ALineInfoPtr := TSynEditGutterLineInfoToGo(ALineInfo);
  SendEvent([Sender, ALine, @RetAText, @ALineInfoPtr]);
  AText := StrPas(RetAText);
end;

function TLCLEvent.OnTSynGetCaretUndoProc(): TSynEditUndoItem;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynMacroReaderEventCommandEvent(): TSynEditorCommand;
begin
  SendEvent([@Result]);
end;

function TLCLEvent.OnTSynMacroReaderGetParamAsIntEvent(Index: Integer): Integer;
begin
  SendEvent([Index, @Result]);
end;

function TLCLEvent.OnTSynMacroReaderGetParamAsStringEvent(Index: Integer): string;
begin
  SendEvent([Index, @Result]);
end;

function TLCLEvent.OnTSynMacroReaderGetParamTypeEvent(Index: Integer): TSynEventParamType;
begin
  SendEvent([Index, @Result]);
end;

function TLCLEvent.OnTSynMacroReaderParamCountEvent(): Integer;
begin
  SendEvent([@Result]);
end;

procedure TLCLEvent.OnTSynMacroWriteCommandEvent(const ACmd: TSynEditorCommand);
begin
  SendEvent([ACmd]);
end;

procedure TLCLEvent.OnTSynMacroWriteEventIntEvent(const ACmd: integer);
begin
  SendEvent([ACmd]);
end;

procedure TLCLEvent.OnTSynMacroWriteEventStrEvent(const AParam: string);
begin
  SendEvent([ToPChar(AParam)]);
end;

procedure TLCLEvent.OnTSynMouseLinkEvent( Sender: TObject; X, Y: Integer; var AllowMouseLink: Boolean);
begin
  SendEvent([Sender, X, Y, @AllowMouseLink]);
end;

procedure TLCLEvent.OnTSynUserCommandEvent(aSender: TCustomSynMacroRecorder; aCmd: TSynEditorCommand; var aEvent: TSynMacroEvent);
begin
  SendEvent([aSender, aCmd, @aEvent]);
end;

procedure TLCLEvent.OnTSysLinkEvent(Sender: TObject; const Link: string; LinkType: TSysLinkType);
begin
  SendEvent([Sender, ToPChar(Link), Integer(LinkType)]);
end;

procedure TLCLEvent.OnTTVAdvancedCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, Integer(Stage), @DefaultDraw]);
end;

procedure TLCLEvent.OnTTVAdvancedCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; Stage: TCustomDrawStage; var PaintImages, DefaultDraw: Boolean);
begin
  SendEvent([Sender, Node, PInteger(@State)^, Integer(Stage), @PaintImages, @DefaultDraw]);
end;

procedure TLCLEvent.OnTTVChangedEvent(Sender: TObject; Node: TTreeNode);
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTTVChangingEvent(Sender: TObject; Node: TTreeNode; var AllowChange: Boolean);
begin
  SendEvent([Sender, Node, @AllowChange]);
end;

procedure TLCLEvent.OnTTVCollapsingEvent(Sender: TObject; Node: TTreeNode; var AllowCollapse: Boolean);
begin
  SendEvent([Sender, Node, @AllowCollapse]);
end;

procedure TLCLEvent.OnTTVCompareEvent(Sender: TObject; Node1, Node2: TTreeNode; var Compare: Integer);
begin
  SendEvent([Sender, Node1, Node2, @Compare]);
end;

procedure TLCLEvent.OnTTVCreateNodeClassEvent(Sender: TCustomTreeView; var NodeClass: TTreeNodeClass);
begin
  SendEvent([Sender, @NodeClass]);
end;

procedure TLCLEvent.OnTTVCustomCreateNodeEvent(Sender: TCustomTreeView; var ATreeNode: TTreenode);
begin
  SendEvent([Sender, @ATreeNode]);
end;

procedure TLCLEvent.OnTTVCustomDrawArrowEvent(Sender: TCustomTreeView; const ARect: TRect; ACollapsed: Boolean);
begin
  SendEvent([Sender, @ARect, ACollapsed]);
end;

procedure TLCLEvent.OnTTVCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, @DefaultDraw]);
end;

procedure TLCLEvent.OnTTVCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Node, PInteger(@State)^, @DefaultDraw]);
end;

procedure TLCLEvent.OnTTVEditedEvent(Sender: TObject; Node: TTreeNode; var S: string);
var
  RetS: PChar;
begin
  RetS := ToPChar(S);
  SendEvent([Sender, Node, @RetS]);
  S := StrPas(RetS);
end;

procedure TLCLEvent.OnTTVEditingEndEvent(Sender: TObject; Node: TTreeNode; Cancel: Boolean);
begin
  SendEvent([Sender, Node, Cancel]);
end;

procedure TLCLEvent.OnTTVEditingEvent(Sender: TObject; Node: TTreeNode; var AllowEdit: Boolean);
begin
  SendEvent([Sender, Node, @AllowEdit]);
end;

procedure TLCLEvent.OnTTVExpandedEvent(Sender: TObject; Node: TTreeNode);
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTTVExpandingEvent(Sender: TObject; Node: TTreeNode; var AllowExpansion: Boolean);
begin
  SendEvent([Sender, Node, @AllowExpansion]);
end;

function TLCLEvent.OnTTVHasChildrenEvent(Sender: TCustomTreeView; ANode: TTreeNode): Boolean;
begin
  SendEvent([Sender, ANode, @Result]);
end;

procedure TLCLEvent.OnTTVNodeChangedEvent(Sender: TObject; Node: TTreeNode; ChangeReason: TTreeNodeChangeReason);
begin
  SendEvent([Sender, Node, Integer(ChangeReason)]);
end;

procedure TLCLEvent.OnTTabChangingEvent(Sender: TObject; var AllowChange: Boolean);
begin
  SendEvent([Sender, @AllowChange]);
end;

procedure TLCLEvent.OnTTabGetImageEvent(Sender: TObject; TabIndex: Integer; var ImageIndex: Integer);
begin
  SendEvent([Sender, TabIndex, @ImageIndex]);
end;

procedure TLCLEvent.OnTTaskDlgClickEvent(Sender: TObject; AModalResult: TModalResult; var ACanClose: Boolean);
begin
  SendEvent([Sender, AModalResult, @ACanClose]);
end;

procedure TLCLEvent.OnTTaskDlgTimerEvent(Sender: TObject; TickCount: Cardinal; var Reset: Boolean);
begin
  SendEvent([Sender, TickCount, @Reset]);
end;

procedure TLCLEvent.OnTToggledCheckboxEvent(Sender: TObject; aCol, aRow: Integer; aState: TCheckboxState);
begin
  SendEvent([Sender, aCol, aRow, Integer(aState)]);
end;

procedure TLCLEvent.OnTToolBarOnPaintButton(Sender: TToolButton; State: integer);
begin
  SendEvent([Sender, State]);
end;

procedure TLCLEvent.OnTUDChangingEvent(Sender: TObject; var AllowChange: Boolean);
begin
  SendEvent([Sender, @AllowChange]);
end;

procedure TLCLEvent.OnTUDChangingEventEx(Sender: TObject; var AllowChange: Boolean; NewValue: SmallInt; Direction: TUpDownDirection);
begin
  SendEvent([Sender, @AllowChange, NewValue, Integer(Direction)]);
end;

procedure TLCLEvent.OnTUDClickEvent(Sender: TObject; Button: TUDBtnType);
begin
  SendEvent([Sender, Integer(Button)]);
end;

procedure TLCLEvent.OnTUTF8KeyPressEvent(Sender: TObject; var UTF8Key: TUTF8Char);
var
  RetUTF8Key: PChar;
begin
  RetUTF8Key := ToPChar(UTF8Key);
  SendEvent([Sender, @RetUTF8Key]);
  UTF8Key := StrPas(RetUTF8Key);
end;

procedure TLCLEvent.OnTUnDockEvent(Sender: TObject; Client: TControl; NewTarget: TWinControl; var Allow: Boolean);
begin
  SendEvent([Sender, Client, NewTarget, @Allow]);
end;

procedure TLCLEvent.OnTUserCheckBoxImageEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckBoxState; var ImageList: TCustomImageList; var ImageIndex: TImageIndex);
begin
  SendEvent([Sender, aCol, aRow, Integer(CheckedState), @ImageList, @ImageIndex]);
end;

procedure TLCLEvent.OnTUserCheckboxBitmapEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckboxState; var ABitmap: TBitmap);
begin
  SendEvent([Sender, aCol, aRow, Integer(CheckedState), @ABitmap]);
end;

procedure TLCLEvent.OnTVSTGetTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType; var CellText: String);
var
  RetCellText: PChar;
begin
  RetCellText := ToPChar(CellText);
  SendEvent([Sender, Node, Column, Integer(TextType), @RetCellText]);
  CellText := StrPas(RetCellText);
end;

procedure TLCLEvent.OnTVSTNewTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const NewText: String);
begin
  SendEvent([Sender, Node, Column, ToPChar(NewText)]);
end;

procedure TLCLEvent.OnTVSTShortenStringEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const S: String; TextSpace: Integer; var Result: String; var Done: Boolean);
var
  RetResult: PChar;
begin
  RetResult := ToPChar(Result);
  SendEvent([Sender, TargetCanvas, Node, Column, ToPChar(S), TextSpace, @RetResult, @Done]);
  Result := StrPas(RetResult);
end;

procedure TLCLEvent.OnTVTAddToSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTVTAdvancedHeaderPaintEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; const Elements: THeaderPaintElements);
var
  PaintInfoPtr: THeaderPaintInfoPtr;
begin
  PaintInfoPtr := THeaderPaintInfoToGo(PaintInfo);
  SendEvent([Sender, @PaintInfoPtr, PInteger(@Elements)^]);
  PaintInfo := THeaderPaintInfoToPas(PaintInfoPtr);
end;

procedure TLCLEvent.OnTVTAfterAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTAfterAutoFitColumnsEvent(Sender: TVTHeader);
begin
  SendEvent([Sender]);
end;

procedure TLCLEvent.OnTVTAfterCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellRect: TRect);
begin
  SendEvent([Sender, TargetCanvas, Node, Column, @CellRect]);
end;

procedure TLCLEvent.OnTVTAfterColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTAfterGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var MaxWidth: Integer);
begin
  SendEvent([Sender, Column, @MaxWidth]);
end;

procedure TLCLEvent.OnTVTAfterHeaderHeightTrackingEvent(Sender: TVTHeader);
begin
  SendEvent([Sender]);
end;

procedure TLCLEvent.OnTVTAfterItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
begin
  SendEvent([Sender, TargetCanvas, Node, @ItemRect]);
end;

procedure TLCLEvent.OnTVTAfterItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
begin
  SendEvent([Sender, TargetCanvas, Node, @ItemRect]);
end;

procedure TLCLEvent.OnTVTBackgroundPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; const R: TRect; var Handled: Boolean);
begin
  SendEvent([Sender, TargetCanvas, @R, @Handled]);
end;

procedure TLCLEvent.OnTVTBeforeAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex; var SmartAutoFitType: TSmartAutoFitType; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, @SmartAutoFitType, @Allowed]);
end;

procedure TLCLEvent.OnTVTBeforeAutoFitColumnsEvent(Sender: TVTHeader; var SmartAutoFitType: TSmartAutoFitType);
begin
  SendEvent([Sender, @SmartAutoFitType]);
end;

procedure TLCLEvent.OnTVTBeforeCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; CellPaintMode: TVTCellPaintMode; CellRect: TRect; var ContentRect: TRect);
begin
  SendEvent([Sender, TargetCanvas, Node, Column, Integer(CellPaintMode), @CellRect, @ContentRect]);
end;

procedure TLCLEvent.OnTVTBeforeColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState);
begin
  SendEvent([Sender, Column, PInteger(@Shift)^]);
end;

procedure TLCLEvent.OnTVTBeforeDrawLineImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Level: Integer; var PosX: Integer);
begin
  SendEvent([Sender, Node, Level, @PosX]);
end;

procedure TLCLEvent.OnTVTBeforeGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var UseSmartColumnWidth: Boolean);
begin
  SendEvent([Sender, Column, @UseSmartColumnWidth]);
end;

procedure TLCLEvent.OnTVTBeforeHeaderHeightTrackingEvent(Sender: TVTHeader; Shift: TShiftState);
begin
  SendEvent([Sender, PInteger(@Shift)^]);
end;

procedure TLCLEvent.OnTVTBeforeItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var ItemColor: TColor; var EraseAction: TItemEraseAction);
begin
  SendEvent([Sender, TargetCanvas, Node, @ItemRect, @ItemColor, @EraseAction]);
end;

procedure TLCLEvent.OnTVTBeforeItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var CustomDraw: Boolean);
begin
  SendEvent([Sender, TargetCanvas, Node, @ItemRect, @CustomDraw]);
end;

function TLCLEvent.OnTVTBeginCancelEndEditEvent(): Boolean;
begin
  SendEvent([@Result]);
end;

procedure TLCLEvent.OnTVTCanSplitterResizeColumnEvent(Sender: TVTHeader; P: TPoint; Column: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTCanSplitterResizeHeaderEvent(Sender: TVTHeader; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTCanSplitterResizeNodeEvent(Sender: TBaseVirtualTree; P: TPoint; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, Node, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTVTChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, @Allowed]);
end;

procedure TLCLEvent.OnTVTCheckChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var NewState: TCheckState; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, @NewState, @Allowed]);
end;

procedure TLCLEvent.OnTVTColumnClickEvent(Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
begin
  SendEvent([Sender, Column, PInteger(@Shift)^]);
end;

procedure TLCLEvent.OnTVTColumnDblClickEvent(Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
begin
  SendEvent([Sender, Column, PInteger(@Shift)^]);
end;

procedure TLCLEvent.OnTVTColumnExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Column: TVirtualTreeColumn);
begin
  SendEvent([Sender, Integer(aExportType), Column]);
end;

procedure TLCLEvent.OnTVTColumnWidthDblClickResizeEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, PInteger(@Shift)^, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, PInteger(@Shift)^, @TrackPoint, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTCompareEvent(Sender: TBaseVirtualTree; Node1, Node2: PVirtualNode; Column: TColumnIndex; var Result: Integer);
begin
  SendEvent([Sender, Node1, Node2, Column, @Result]);
end;

procedure TLCLEvent.OnTVTCreateDataObjectEvent(Sender: TBaseVirtualTree; out IDataObject: IDataObject);
begin
  SendEvent([Sender, @IDataObject]);
end;

procedure TLCLEvent.OnTVTCreateDragManagerEvent(Sender: TBaseVirtualTree; out DragManager: IVTDragManager);
begin
  SendEvent([Sender, @DragManager]);
end;

procedure TLCLEvent.OnTVTCreateEditorEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; out EditLink: IVTEditLink);
begin
  SendEvent([Sender, Node, Column, @EditLink]);
end;

procedure TLCLEvent.OnTVTDragAllowedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTDragDropEvent(Sender: TBaseVirtualTree; Source: TObject; DataObject: IDataObject; Formats: TFormatArray; Shift: TShiftState; const Pt: TPoint; var Effect: LongWord; Mode: TDropMode);
var
  FormatsPtr: Pointer = nil;
  FormatsLen: Integer;
begin
  FormatsLen := Length(Formats);
  if FormatsLen > 0 then
    FormatsPtr := @Formats[0];
  SendEvent([Sender, Source, DataObject, FormatsPtr, FormatsLen, PInteger(@Shift)^, @Pt, @Effect, Integer(Mode)]);
end;

procedure TLCLEvent.OnTVTDragOverEvent(Sender: TBaseVirtualTree; Source: TObject; Shift: TShiftState; State: TDragState; const Pt: TPoint; Mode: TDropMode; var Effect: LongWord; var Accept: Boolean);
begin
  SendEvent([Sender, Source, PInteger(@Shift)^, Integer(State), @Pt, Integer(Mode), @Effect, @Accept]);
end;

procedure TLCLEvent.OnTVTDrawHintEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; R: TRect; Column: TColumnIndex);
begin
  SendEvent([Sender, HintCanvas, Node, @R, Column]);
end;

procedure TLCLEvent.OnTVTDrawNodeEvent(Sender: TBaseVirtualTree; const PaintInfo: TVTPaintInfo);
var
  PaintInfoPtr: TVTPaintInfoPtr;
begin
  PaintInfoPtr := TVTPaintInfoToGo(PaintInfo);
  SendEvent([Sender, @PaintInfoPtr]);
end;

procedure TLCLEvent.OnTVTDrawTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; const CellRect: TRect; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, TargetCanvas, Node, Column, ToPChar(CellText), @CellRect, @DefaultDraw]);
end;

procedure TLCLEvent.OnTVTEditCancelEvent(Sender: TBaseVirtualTree; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTEditChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
begin
  SendEvent([Sender, Node, Column]);
end;

procedure TLCLEvent.OnTVTEditChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTFocusChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
begin
  SendEvent([Sender, Node, Column]);
end;

procedure TLCLEvent.OnTVTFocusChangingEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode; OldColumn, NewColumn: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, OldNode, NewNode, OldColumn, NewColumn, @Allowed]);
end;

procedure TLCLEvent.OnTVTFreeNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
begin
  SendEvent([Sender, Node]);
end;

function TLCLEvent.OnTVTGetBoundsEvent(): TRect;
begin
  SendEvent([@Result]);
end;

procedure TLCLEvent.OnTVTGetCellIsEmptyEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var IsEmpty: Boolean);
begin
  SendEvent([Sender, Node, Column, @IsEmpty]);
end;

procedure TLCLEvent.OnTVTGetCursorEvent(Sender: TBaseVirtualTree; var Cursor: TCursor);
begin
  SendEvent([Sender, @Cursor]);
end;

procedure TLCLEvent.OnTVTGetHeaderCursorEvent(Sender: TVTHeader; var Cursor: HCURSOR);
begin
  SendEvent([Sender, @Cursor]);
end;

procedure TLCLEvent.OnTVTGetHintEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var LineBreakStyle: TVTTooltipLineBreakStyle; var HintText: String);
var
  RetHintText: PChar;
begin
  RetHintText := ToPChar(HintText);
  SendEvent([Sender, Node, Column, @LineBreakStyle, @RetHintText]);
  HintText := StrPas(RetHintText);
end;

procedure TLCLEvent.OnTVTGetHintSizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var R: TRect);
begin
  SendEvent([Sender, Node, Column, @R]);
end;

procedure TLCLEvent.OnTVTGetImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var Ghosted: Boolean; var ImageIndex: Integer);
begin
  SendEvent([Sender, Node, Integer(Kind), Column, @Ghosted, @ImageIndex]);
end;

procedure TLCLEvent.OnTVTGetImageExEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var Ghosted: Boolean; var ImageIndex: Integer; var ImageList: TCustomImageList);
begin
  SendEvent([Sender, Node, Integer(Kind), Column, @Ghosted, @ImageIndex, @ImageList]);
end;

procedure TLCLEvent.OnTVTGetImageTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var ImageText: String);
var
  RetImageText: PChar;
begin
  RetImageText := ToPChar(ImageText);
  SendEvent([Sender, Node, Integer(Kind), Column, @RetImageText]);
  ImageText := StrPas(RetImageText);
end;

procedure TLCLEvent.OnTVTGetLineStyleEvent(Sender: TBaseVirtualTree; var Bits: Pointer);
begin
  SendEvent([Sender, @Bits]);
end;

procedure TLCLEvent.OnTVTGetNodeDataSizeEvent(Sender: TBaseVirtualTree; var NodeDataSize: Integer);
begin
  SendEvent([Sender, @NodeDataSize]);
end;

procedure TLCLEvent.OnTVTGetNodeWidthEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; var NodeWidth: Integer);
begin
  SendEvent([Sender, HintCanvas, Node, Column, @NodeWidth]);
end;

procedure TLCLEvent.OnTVTGetUserClipboardFormatsEvent(Sender: TBaseVirtualTree; var Formats: TFormatEtcArray);
var
  FormatsWrap: TFormatEtcArrayWrap;
begin
  FormatsWrap := TFormatEtcArrayWrap.Create(Formats);
  SendEvent([Sender, @FormatsWrap]);
  if FormatsWrap.Size() > 0 then
    Formats := FormatsWrap.FormatEtcArrayData()^;
  FormatsWrap.Free();
end;

procedure TLCLEvent.OnTVTHeaderClickEvent(Sender: TVTHeader; HitInfo: TVTHeaderHitInfo);
var
  HitInfoPtr: TVTHeaderHitInfoPtr;
begin
  HitInfoPtr := TVTHeaderHitInfoToGo(HitInfo);
  SendEvent([Sender, @HitInfoPtr]);
end;

procedure TLCLEvent.OnTVTHeaderDraggedEvent(Sender: TVTHeader; Column: TColumnIndex; OldPosition: Integer);
begin
  SendEvent([Sender, Column, OldPosition]);
end;

procedure TLCLEvent.OnTVTHeaderDraggedOutEvent(Sender: TVTHeader; Column: TColumnIndex; const DropPosition: TPoint);
begin
  SendEvent([Sender, Column, @DropPosition]);
end;

procedure TLCLEvent.OnTVTHeaderDraggingEvent(Sender: TVTHeader; Column: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTHeaderHeightDblClickResizeEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, PInteger(@Shift)^, @Allowed]);
end;

procedure TLCLEvent.OnTVTHeaderHeightTrackingEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, PInteger(@Shift)^, @Allowed]);
end;

procedure TLCLEvent.OnTVTHeaderMouseEvent(Sender: TVTHeader; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, Integer(Button), PInteger(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTVTHeaderMouseMoveEvent(Sender: TVTHeader; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, PInteger(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTVTHeaderNotifyEvent(Sender: TVTHeader; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTHeaderPaintEvent(Sender: TVTHeader; HeaderCanvas: TCanvas; Column: TVirtualTreeColumn; const R: TRect; Hover, Pressed: Boolean; DropMark: TVTDropMarkMode);
begin
  SendEvent([Sender, HeaderCanvas, Column, @R, Hover, Pressed, Integer(DropMark)]);
end;

procedure TLCLEvent.OnTVTHeaderPaintQueryElementsEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; var Elements: THeaderPaintElements);
var
  PaintInfoPtr: THeaderPaintInfoPtr;
begin
  PaintInfoPtr := THeaderPaintInfoToGo(PaintInfo);
  SendEvent([Sender, @PaintInfoPtr, @Elements]);
  PaintInfo := THeaderPaintInfoToPas(PaintInfoPtr);
end;

procedure TLCLEvent.OnTVTHelpContextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var HelpContext: Integer);
begin
  SendEvent([Sender, Node, Column, @HelpContext]);
end;

procedure TLCLEvent.OnTVTHintKindEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Kind: TVTHintKind);
begin
  SendEvent([Sender, Node, Column, @Kind]);
end;

procedure TLCLEvent.OnTVTHotNodeChangeEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode);
begin
  SendEvent([Sender, OldNode, NewNode]);
end;

procedure TLCLEvent.OnTVTIncrementalSearchEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; const SearchText: String; var Result: Integer);
begin
  SendEvent([Sender, Node, ToPChar(SearchText), @Result]);
end;

procedure TLCLEvent.OnTVTInitChildrenEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var ChildCount: Cardinal);
begin
  SendEvent([Sender, Node, @ChildCount]);
end;

procedure TLCLEvent.OnTVTInitNodeEvent(Sender: TBaseVirtualTree; ParentNode, Node: PVirtualNode; var InitialStates: TVirtualNodeInitStates);
begin
  SendEvent([Sender, ParentNode, Node, @InitialStates]);
end;

procedure TLCLEvent.OnTVTKeyActionEvent(Sender: TBaseVirtualTree; var CharCode: Word; var Shift: TShiftState; var DoDefault: Boolean);
begin
  SendEvent([Sender, @CharCode, @Shift, @DoDefault]);
end;

procedure TLCLEvent.OnTVTMeasureItemEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; var NodeHeight: Integer);
begin
  SendEvent([Sender, TargetCanvas, Node, @NodeHeight]);
end;

procedure TLCLEvent.OnTVTMeasureTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; var Extent: Integer);
begin
  SendEvent([Sender, TargetCanvas, Node, Column, ToPChar(CellText), @Extent]);
end;

procedure TLCLEvent.OnTVTNodeClickEvent(Sender: TBaseVirtualTree; const HitInfo: THitInfo);
var
  HitInfoPtr: THitInfoPtr;
begin
  HitInfoPtr := THitInfoToGo(HitInfo);
  SendEvent([Sender, @HitInfoPtr]);
end;

procedure TLCLEvent.OnTVTNodeCopiedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTVTNodeCopyingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, Target, @Allowed]);
end;

function TLCLEvent.OnTVTNodeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Node: PVirtualNode): Boolean;
begin
  SendEvent([Sender, Integer(aExportType), Node, @Result]);
end;

procedure TLCLEvent.OnTVTNodeHeightDblClickResizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, Column, PInteger(@Shift)^, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTNodeHeightTrackingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, Column, PInteger(@Shift)^, @TrackPoint, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTNodeMovedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTVTNodeMovingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
begin
  SendEvent([Sender, Node, Target, @Allowed]);
end;

procedure TLCLEvent.OnTVTOperationEvent(Sender: TBaseVirtualTree; OperationKind: TVTOperationKind);
begin
  SendEvent([Sender, Integer(OperationKind)]);
end;

procedure TLCLEvent.OnTVTPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas);
begin
  SendEvent([Sender, TargetCanvas]);
end;

procedure TLCLEvent.OnTVTPaintText(Sender: TBaseVirtualTree; const TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType);
begin
  SendEvent([Sender, TargetCanvas, Node, Column, Integer(TextType)]);
end;

procedure TLCLEvent.OnTVTPopupEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const P: TPoint; var AskParent: Boolean; var PopupMenu: TPopupMenu);
begin
  SendEvent([Sender, Node, Column, @P, @AskParent, @PopupMenu]);
end;

function TLCLEvent.OnTVTPrepareEditEvent(Tree: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex): Boolean;
begin
  SendEvent([Tree, Node, Column, @Result]);
end;

procedure TLCLEvent.OnTVTProcessMessageEvent(var Msg: TLMessage);
begin
  SendEvent([@Msg]);
end;

procedure TLCLEvent.OnTVTRemoveFromSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTVTRenderOLEDataEvent(Sender: TBaseVirtualTree; const FormatEtcIn: TFormatEtc; out Medium: TStgMedium; ForClipboard: Boolean; var Result: HRESULT);
begin
  SendEvent([Sender, @FormatEtcIn, @Medium, ForClipboard, @Result]);
end;

procedure TLCLEvent.OnTVTSaveNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Stream: TStream);
begin
  SendEvent([Sender, Node, Stream]);
end;

procedure TLCLEvent.OnTVTSaveTreeEvent(Sender: TBaseVirtualTree; Stream: TStream);
begin
  SendEvent([Sender, Stream]);
end;

procedure TLCLEvent.OnTVTScrollBarShowEvent(Sender: TBaseVirtualTree; Bar: Integer; Show: Boolean);
begin
  SendEvent([Sender, Bar, Show]);
end;

procedure TLCLEvent.OnTVTScrollEvent(Sender: TBaseVirtualTree; DeltaX, DeltaY: Integer);
begin
  SendEvent([Sender, DeltaX, DeltaY]);
end;

procedure TLCLEvent.OnTVTSetBoundsEvent(R: TRect);
begin
  SendEvent([@R]);
end;

procedure TLCLEvent.OnTVTStateChangeEvent(Sender: TBaseVirtualTree; Enter, Leave: TVirtualTreeStates);
begin
  SendEvent([Sender, PInteger(@Enter)^, PInteger(@Leave)^]);
end;

procedure TLCLEvent.OnTVTStructureChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Reason: TChangeReason);
begin
  SendEvent([Sender, Node, Integer(Reason)]);
end;

procedure TLCLEvent.OnTVTTreeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType);
begin
  SendEvent([Sender, Integer(aExportType)]);
end;

procedure TLCLEvent.OnTVTUpdatingEvent(Sender: TBaseVirtualTree; State: TVTUpdateState);
begin
  SendEvent([Sender, Integer(State)]);
end;

procedure TLCLEvent.OnTValidateEntryEvent(Sender: TObject; aCol, aRow: Integer; const OldValue: string; var NewValue: String);
var
  RetNewValue: PChar;
begin
  RetNewValue := ToPChar(NewValue);
  SendEvent([Sender, aCol, aRow, ToPChar(OldValue), @RetNewValue]);
  NewValue := StrPas(RetNewValue);
end;

procedure TLCLEvent.OnTValidateEvent(Sender: TObject; KeyChar: TUTF8Char; Shift: TShiftState);
begin
  SendEvent([Sender, ToPChar(KeyChar), PInteger(@Shift)^]);
end;

procedure TLCLEvent.OnTgridOperationEvent(Sender: TObject; IsColumn:Boolean; sIndex, tIndex: Integer);
begin
  SendEvent([Sender, IsColumn, sIndex, tIndex]);
end;



end.
