//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uLCL_EventCallback;

{$mode objfpc}{$H+}

{$I ExtDecl.inc}

interface

uses
  Controls,
  Forms,
  ComCtrls,
  Menus,
  ExtCtrls,
  Classes,
  SysUtils,
  Graphics,
  StdCtrls,
  LCLType,
  LMessages,
  Grids,
  uLinkLabel,
  ColorBox,
  ImgList,
  FPImage,
  ComboEx,
  WSReferences,
  fgl,
  laz.VirtualTrees,
  {$ifdef Windows}
  ActiveX,
  {$else}
  laz.FakeActiveX,
  {$endif}
  uTools, uLCL_RecordStruct;

type
  // 基础事件回调函数
  TEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;
  // 清除事件回调函数
  TRemoveEventCallPtr = function(f: Pointer): Pointer; extdecl;
  // 特殊的消息事件回调
  TMessageCallbackPtr = function(f: Pointer; msg: Pointer): Pointer; extdecl;

var
  GEventCallbackPtr: TEventCallbackPtr;
  GRemoveEventCallbackPtr: TRemoveEventCallPtr;
  GMessageCallbackPtr: TMessageCallbackPtr;

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
    //------------------新方式-------------------------------

    // TApplication
    procedure OnTActionEvent(AAction: TBasicAction; var Handled: Boolean);
    procedure OnTGetHandleEvent(var Handle: LCLType.HWND);
    procedure OnTShowHintEvent(var HintStr: string; var CanShow: Boolean; var HintInfo: THintInfo);
    // TClipboard
    procedure OnTClipboardRequestEvent(const RequestedFormatID: TClipboardFormat; Data: TStream);
    // TControl
    procedure OnTControlShowHintEvent(Sender: TObject; HintInfo: PHintInfo);
    // TCustomAction
    procedure OnTHintEvent(var HintStr: string; var CanShow: Boolean);
    // TCustomColorBox
    procedure OnTGetColorsEvent(Sender: TCustomColorBox; Items: TStrings);
    // TCustomColorListBox
    procedure OnTLBGetColorsEvent(Sender: TCustomColorListBox; Items: TStrings);
    // TXXXGrid
    procedure OnTOnDrawCell(Sender: TObject; aCol, aRow: Integer; aRect: TRect; aState: TGridDrawState);
    procedure OnTOnSelectCellEvent(Sender: TObject; aCol, aRow: Integer; var CanSelect: Boolean);
    // TCustomForm
    procedure OnTModalDialogFinished(Sender: TObject; AResult: Integer);
    // TCustomHeaderControl
    procedure OnTCustomSectionNotifyEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection);
    procedure OnTCustomSectionTrackEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection; Width: Integer; State: TSectionTrackState);
    procedure OnTCustomHCCreateSectionClassEvent(Sender: TCustomHeaderControl; var SectionClass: THeaderSectionClass);
    // TCustomImageList
    procedure OnTCustomImageListGetWidthForPPI(Sender: TCustomImageList; AImageWidth, APPI: Integer; var AResultWidth: Integer);
    procedure OnTDestroyResolutionHandleEvent(Sender: TCustomImageList; AWidth: Integer; AReferenceHandle: TLCLHandle);
    // TCustomListBox
    procedure OnTSelectionChangeEvent(Sender: TObject; User: boolean);
    // TCustomScrollBar
    procedure OnTScrollEvent(Sender: TObject; ScrollCode: TScrollCode; var ScrollPos: Integer);
    // TCustomSplitter
    procedure OnTCanOffsetEvent(Sender: TObject; var NewOffset: Integer; var Accept: Boolean);
    procedure OnTCanResizeEvent(Sender: TObject; var NewSize: Integer; var Accept: Boolean);
    // TCustomTabControl
    procedure OnTTabGetImageEvent(Sender: TObject; TabIndex: Integer; var ImageIndex: Integer);
    // TDrawGrid
    procedure OnTUserCheckBoxImageEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckBoxState;
      var ImageList: TCustomImageList; var ImageIndex: TImageIndex);
    // TFPCustomCanvas
    function OnTFPCanvasCombineColors(const color1, color2: TFPColor): TFPColor;
    // TPicture TProgressEvent = TFPImgProgressEvent;
    procedure OnTProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect; const Msg: AnsiString; var Continue : Boolean);
    // TListControlItems
    function OnTListCompareEvent(AList: TListControlItems; AItem1, AItem2: TListControlItem): Integer;
    // TListView
    procedure OnTLVCreateItemClassEvent(Sender: TCustomListView; var ItemClass: TListItemClass);
    procedure OnTLVDataStateChangeEvent(Sender: TObject; StartIndex, EndIndex: Integer; OldState, NewState: TListItemStates);
    // TLVInsertEvent = TLVDeletedEvent;
    procedure OnTLVInsertEvent(Sender: TObject; Item: TListItem);
    // TPageControl, TPanel
    procedure OnTGetDockCaptionEvent(Sender: TObject; AControl: TControl; var ACaption: string);
    // TPrintDialog TPageSetupDialog TPrinterSetupDialog
    procedure OnTDialogResultEvent(Sender: TObject; Success: Boolean);
    // TStatusBar
    procedure OnTSBCreatePanelClassEvent(Sender: TStatusBar; var PanelClass: TStatusPanelClass);
    procedure OnTDrawPanelEvent(StatusBar: TStatusBar; Panel: TStatusPanel; const Rect: TRect);
    // TStringGrid
    procedure OnTCellProcessEvent(Sender: TObject; aCol, aRow: Integer; processType: TCellProcessType; var aValue: string);
    // TToolBar
    procedure OnTToolBarOnPaintButton(Sender: TToolButton; State: Integer);
    // TTreeView
    procedure OnTTVCreateNodeClassEvent(Sender: TCustomTreeView; var NodeClass: TTreeNodeClass);
    procedure OnTTVCustomCreateNodeEvent(Sender: TCustomTreeView; var ATreeNode: TTreenode);
    procedure OnTTVCustomDrawArrowEvent(Sender: TCustomTreeView; const ARect: TRect; ACollapsed: Boolean);
    procedure OnTTVEditingEndEvent(Sender: TObject; Node: TTreeNode; Cancel: Boolean);
    function OnTTVHasChildrenEvent(Sender: TCustomTreeView; ANode: TTreeNode): Boolean;
    procedure OnTTVNodeChangedEvent(Sender: TObject; Node: TTreeNode; ChangeReason: TTreeNodeChangeReason);
    // TUpDown
    procedure OnTUDChangingEventEx(Sender: TObject; var AllowChange: Boolean; NewValue: SmallInt; Direction: TUpDownDirection);
    // TValueListEditor
    procedure OnTGetPickListEvent(Sender: TObject; const KeyName: string; Values: TStrings);
    procedure OnTOnValidateEvent(Sender: TObject; ACol, ARow: Longint; const KeyName, KeyValue: string);
    // TWinControl
    function OnTAlignInsertBeforeEvent(Sender: TWinControl; Control1, Control2: TControl): Boolean;
    procedure OnTDockOverEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
    // TFPCustomImage
    procedure OnTFPImgProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect; const Msg: AnsiString; var Continue : Boolean);

    //
    procedure OnTExceptionEvent(Sender: TObject; E: Exception);

    procedure OnTNotifyEvent(Sender: TObject);

    function OnTHelpEvent(Command: Word; Data: PtrInt; var CallHelp: Boolean): Boolean;
    procedure OnTShortCutEvent(var Msg: TLMKey; var Handled: Boolean);
    procedure OnTAlignPositionEvent(Sender: TWinControl; Control: TControl; var NewLeft, NewTop, NewWidth, NewHeight: Integer; var AlignRect: TRect; AlignInfo: TAlignInfo);
    procedure OnTCloseEvent(Sender: TObject; var Action: TCloseAction);
    procedure OnTCloseQueryEvent(Sender: TObject; var CanClose: Boolean);
    procedure OnTContextPopupEvent(Sender: TObject; MousePos: TPoint; var Handled: Boolean);
    procedure OnTDockDropEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer);
    procedure OnTDragDropEvent(Sender, Source: TObject; X, Y: Integer);
    procedure OnTDragOverEvent(Sender, Source: TObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
    procedure OnTStartDragEvent(Sender: TObject; var DragObject: TDragObject);
    procedure OnTEndDragEvent(Sender, Target: TObject; X, Y: Integer);
    procedure OnTGetSiteInfoEvent(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: Boolean);
    procedure OnTKeyEvent(Sender: TObject; var Key: Word; Shift: TShiftState);
    procedure OnTKeyPressEvent(Sender: TObject; var Key: Char);
    procedure OnTMouseEvent(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure OnTMouseMoveEvent(Sender: TObject; Shift: TShiftState; X, Y: Integer);
    procedure OnTMouseWheelEvent(Sender: TObject; Shift: TShiftState; WheelDelta: Integer; MousePos: TPoint; var Handled: Boolean);
    procedure OnTMouseWheelUpDownEvent(Sender: TObject; Shift: TShiftState; MousePos: TPoint; var Handled: Boolean);
    procedure OnTStartDockEvent(Sender: TObject; var DragObject: TDragDockObject);
    procedure OnTUnDockEvent(Sender: TObject; Client: TControl; NewTarget: TWinControl; var Allow: Boolean);
    procedure OnTMenuChangeEvent(Sender: TObject; Source: TMenuItem; Rebuild: Boolean);
    procedure OnTDrawItemEvent(Control: TWinControl; Index: Integer; ARect: TRect; State: TOwnerDrawState);
    procedure OnTMeasureItemEvent(Control: TWinControl; Index: Integer; var Height: Integer);
    procedure OnTSysLinkEvent(Sender: TObject; const Link: string; LinkType: TSysLinkType);
    procedure OnTUDChangingEvent(Sender: TObject; var AllowChange: Boolean);
    procedure OnTUDClickEvent(Sender: TObject; Button: TUDBtnType);
    procedure OnTLVAdvancedCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTLVAdvancedCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTLVAdvancedCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTLVChangeEvent(Sender: TObject; AItem: TListItem; Change: TItemChange);
    procedure OnTLVColumnClickEvent(Sender: TObject; Column: TListColumn);
    procedure OnTLVCompareEvent(Sender: TObject; Item1, Item2: TListItem; Data: Integer; var Compare: Integer);
    procedure OnTLVCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; var DefaultDraw: Boolean);
    procedure OnTLVCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; var DefaultDraw: Boolean);
    procedure OnTLVCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; var DefaultDraw: Boolean);
    procedure OnTLVDataEvent(Sender: TObject; Item: TListItem);
    procedure OnTLVDataFindEvent(Sender: TObject; Find: TItemFind; const FindString: string; const FindPosition: TPoint; FindData: Pointer; StartIndex: Integer; Direction: TSearchDirection; Wrap: Boolean; var Index: Integer);
    procedure OnTLVDataHintEvent(Sender: TObject; StartIndex, EndIndex: Integer);
    procedure OnTLVDeletedEvent(Sender: TObject; Item: TListItem);
    procedure OnTLVEditedEvent(Sender: TObject; Item: TListItem; var S: string);
    procedure OnTLVEditingEvent(Sender: TObject; Item: TListItem; var AllowEdit: Boolean);
    procedure OnTLVSelectItemEvent(Sender: TObject; Item: TListItem; Selected: Boolean);
    procedure OnTLVCheckedItemEvent(Sender: TObject; Item: TListItem);
    procedure OnTLVDrawItemEvent(Sender: TCustomListView; AItem: TListItem; ARect: TRect; AState: TOwnerDrawState);

    procedure OnTTVExpandedEvent(Sender: TObject; Node: TTreeNode);
    procedure OnTTVAdvancedCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
    procedure OnTTVAdvancedCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; Stage: TCustomDrawStage; var PaintImages, DefaultDraw: Boolean);
    procedure OnTTVChangedEvent(Sender: TObject; ANode: TTreeNode);
    procedure OnTTVChangingEvent(Sender: TObject; Node: TTreeNode; var AllowChange: Boolean);
    procedure OnTTVCollapsingEvent(Sender: TObject; Node: TTreeNode; var AllowCollapse: Boolean);
    procedure OnTTVCompareEvent(Sender: TObject; Node1, Node2: TTreeNode; var Compare: Integer);
    procedure OnTTVCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; var DefaultDraw: Boolean);
    procedure OnTTVCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; var DefaultDraw: Boolean);
    procedure OnTTVEditedEvent(Sender: TObject; Node: TTreeNode; var S: string);
    procedure OnTTVEditingEvent(Sender: TObject; Node: TTreeNode; var AllowEdit: Boolean);
    procedure OnTTVExpandingEvent(Sender: TObject; Node: TTreeNode; var AllowExpansion: Boolean);
    procedure OnTMenuMeasureItemEvent(Sender: TObject; ACanvas: TCanvas; var Width, Height: Integer);
    procedure OnTTabChangingEvent(Sender: TObject; var AllowChange: Boolean);
    procedure OnTWebTitleChangeEvent(Sender: TObject; const Text: string);
    procedure OnTWebJSExternalEvent(Sender: TObject; const Afunc: string; const AArgs: string; var ARetval: string);

    procedure OnTDrawCellEvent(Sender: TObject; ACol, ARow: Longint; ARect: TRect; State: TGridDrawState);
    procedure OnTGetEditEvent(Sender: TObject; ACol, ARow: Integer; var Value: string);
    procedure OnTSetEditEvent(Sender: TObject; ACol, ARow: Integer; const Value: string);
    procedure OnTSelectCellEvent(Sender: TObject; ACol, ARow: Integer; var CanSelect: Boolean);
    procedure OnTSectionNotifyEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection);
    procedure OnTSectionTrackEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection; Width: Integer; State: TSectionTrackState);
    procedure OnTSectionDragEvent(Sender: TObject; FromSection, ToSection: THeaderSection; var AllowDrag: Boolean);
    procedure OnTTaskDlgClickEvent(Sender: TObject; ModalResult: TModalResult; var CanClose: Boolean);
    procedure OnTCheckGroupClicked(Sender: TObject; Index: integer);

    procedure OnTConstrainedResizeEvent(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
    procedure OnTDropFilesEvent(Sender: TObject; const AFileNames: array of string);


    //TStringGrid
    procedure OnTOnSelectEvent(Sender: TObject; aCol, aRow: Integer);
    procedure OnTToggledCheckboxEvent(sender: TObject; aCol, aRow: Integer; aState: TCheckboxState);
    procedure OnTGridOperationEvent(Sender: TObject; IsColumn:Boolean; sIndex, tIndex: Integer);
    procedure OnTOnCompareCells(Sender: TObject; ACol, ARow, BCol,BRow: Integer; var Result: integer);
    procedure OnTGetCellHintEvent(Sender: TObject; ACol, ARow: Integer; var HintText: String);
    procedure OnTGetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; var Value: TCheckboxState);
    procedure OnTSetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; const Value: TCheckboxState);
    procedure OnTHdrEvent(Sender: TObject; IsColumn: Boolean; Index: Integer);
    procedure OnTHeaderSizingEvent(sender: TObject; const IsColumn: boolean; const aIndex, aSize: Integer);
    procedure OnTSelectEditorEvent(Sender: TObject; aCol, aRow: Integer; var Editor: TWinControl);
    procedure OnTUserCheckboxBitmapEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckboxState; var ABitmap: TBitmap);
    procedure OnTValidateEntryEvent(sender: TObject; aCol, aRow: Integer; const OldValue: string; var NewValue: String);
    procedure OnTOnPrepareCanvasEvent(sender: TObject; aCol, aRow: Integer; aState: TGridDrawState);
    //--------------------------------------------------------------------------

    procedure OnTImagePaintBackgroundEvent(ASender: TObject; ACanvas: TCanvas; ARect: TRect);

    procedure OnTAcceptFileNameEvent(Sender: TObject; var Value: String);
    procedure OnTCheckItemChange(Sender: TObject; AIndex: Integer);

    procedure OnTUTF8KeyPressEvent(Sender: TObject; var UTF8Key: TUTF8Char);

    procedure OnTMenuDrawItemEvent(Sender: TObject; ACanvas: TCanvas; ARect: TRect; AState: TOwnerDrawState);

    procedure OnTWndProcEvent(Sender: TObject; var TheMessage: TLMessage);

    // method callback func
    function OnTTreeNodeCompare(Node1, Node2: TTreeNode): integer;

    // node events
    procedure OnTVTChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var Allowed: Boolean);
    procedure OnTVTCheckChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var NewState: TCheckState; var Allowed: Boolean);
    procedure OnTVTChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTStructureChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Reason: TChangeReason);
    procedure OnTVTEditCancelEvent(Sender: TBaseVirtualTree; Column: TColumnIndex);
    procedure OnTVTEditChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTEditChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
    procedure OnTVTFreeNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTFocusChangingEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode; OldColumn, NewColumn: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTFocusChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
    procedure OnTVTAddToSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTRemoveFromSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTGetImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var Ghosted: Boolean; var ImageIndex: Integer);
    procedure OnTVTGetImageExEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var Ghosted: Boolean; var ImageIndex: Integer; var ImageList: TCustomImageList);
    procedure OnTVTGetImageTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var ImageText: String);
    procedure OnTVTHotNodeChangeEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode);
    procedure OnTVTInitChildrenEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var ChildCount: Cardinal);
    procedure OnTVTInitNodeEvent(Sender: TBaseVirtualTree; ParentNode, Node: PVirtualNode; var InitialStates: TVirtualNodeInitStates);
    procedure OnTVTPopupEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const P: TPoint; var AskParent: Boolean; var PopupMenu: TPopupMenu);
    procedure OnTVTHelpContextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var HelpContext: Integer);
    procedure OnTVTCreateEditorEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; out EditLink: IVTEditLink);
    procedure OnTVTSaveTreeEvent(Sender: TBaseVirtualTree; Stream: TStream);
    procedure OnTVTSaveNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Stream: TStream);

    // header/column events
    procedure OnTVTHeaderClickEvent(Sender: TVTHeader; HitInfo: TVTHeaderHitInfo);
    procedure OnTVTHeaderMouseEvent(Sender: TVTHeader; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure OnTVTHeaderMouseMoveEvent(Sender: TVTHeader; Shift: TShiftState; X, Y: Integer);
    procedure OnTVTBeforeHeaderHeightTrackingEvent(Sender: TVTHeader; Shift: TShiftState);
    procedure OnTVTAfterHeaderHeightTrackingEvent(Sender: TVTHeader);
    procedure OnTVTHeaderHeightTrackingEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
    procedure OnTVTHeaderHeightDblClickResizeEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
    procedure OnTVTHeaderNotifyEvent(Sender: TVTHeader; Column: TColumnIndex);
    procedure OnTVTHeaderDraggingEvent(Sender: TVTHeader; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTHeaderDraggedEvent(Sender: TVTHeader; Column: TColumnIndex; OldPosition: Integer);
    procedure OnTVTHeaderDraggedOutEvent(Sender: TVTHeader; Column: TColumnIndex; const DropPosition: TPoint);
    procedure OnTVTHeaderPaintEvent(Sender: TVTHeader; HeaderCanvas: TCanvas; Column: TVirtualTreeColumn; const R: TRect; Hover, Pressed: Boolean; DropMark: TVTDropMarkMode);
    procedure OnTVTHeaderPaintQueryElementsEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; var Elements: THeaderPaintElements);
    procedure OnTVTAdvancedHeaderPaintEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; const Elements: THeaderPaintElements);
    procedure OnTVTBeforeAutoFitColumnsEvent(Sender: TVTHeader; var SmartAutoFitType: TSmartAutoFitType);
    procedure OnTVTBeforeAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex; var SmartAutoFitType: TSmartAutoFitType; var Allowed: Boolean);
    procedure OnTVTAfterAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex);
    procedure OnTVTAfterAutoFitColumnsEvent(Sender: TVTHeader);
    procedure OnTVTColumnClickEvent (Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
    procedure OnTVTColumnDblClickEvent (Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
    procedure OnTVTColumnWidthDblClickResizeEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
    procedure OnTVTBeforeColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState);
    procedure OnTVTAfterColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex);
    procedure OnTVTColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
    procedure OnTVTGetHeaderCursorEvent(Sender: TVTHeader; var Cursor: HCURSOR);
    procedure OnTVTBeforeGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var UseSmartColumnWidth: Boolean);
    procedure OnTVTAfterGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var MaxWidth: Integer);
    procedure OnTVTCanSplitterResizeColumnEvent(Sender: TVTHeader; P: TPoint; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTCanSplitterResizeHeaderEvent(Sender: TVTHeader; P: TPoint; var Allowed: Boolean);

    // move, copy and node tracking events
    procedure OnTVTNodeMovedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTNodeMovingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
    procedure OnTVTNodeCopiedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
    procedure OnTVTNodeCopyingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
    procedure OnTVTNodeClickEvent(Sender: TBaseVirtualTree; const HitInfo: THitInfo);
    procedure OnTVTNodeHeightTrackingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
    procedure OnTVTNodeHeightDblClickResizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
    procedure OnTVTCanSplitterResizeNodeEvent(Sender: TBaseVirtualTree; P: TPoint; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);

    // drag'n drop/OLE events
    procedure OnTVTCreateDragManagerEvent(Sender: TBaseVirtualTree; out DragManager: IVTDragManager);
    procedure OnTVTCreateDataObjectEvent(Sender: TBaseVirtualTree; out IDataObject: IDataObject);
    procedure OnTVTDragAllowedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
    procedure OnTVTDragOverEvent(Sender: TBaseVirtualTree; Source: TObject; Shift: TShiftState; State: TDragState; const Pt: TPoint; Mode: TDropMode; var Effect: LongWord; var Accept: Boolean);
    procedure OnTVTDragDropEvent(Sender: TBaseVirtualTree; Source: TObject; DataObject: IDataObject; Formats: TFormatArray; Shift: TShiftState; const Pt: TPoint; var Effect: LongWord; Mode: TDropMode);
    procedure OnTVTRenderOLEDataEvent(Sender: TBaseVirtualTree; const FormatEtcIn: TFormatEtc; out Medium: TStgMedium; ForClipboard: Boolean; var Result: HRESULT);
    procedure OnTVTGetUserClipboardFormatsEvent(Sender: TBaseVirtualTree; var Formats: TFormatEtcArray);

    // paint events
    procedure OnTVTBeforeItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var ItemColor: TColor; var EraseAction: TItemEraseAction);
    procedure OnTVTAfterItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
    procedure OnTVTBeforeItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var CustomDraw: Boolean);
    procedure OnTVTAfterItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
    procedure OnTVTBeforeCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; CellPaintMode: TVTCellPaintMode; CellRect: TRect; var ContentRect: TRect);
    procedure OnTVTAfterCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellRect: TRect);
    procedure OnTVTPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas);
    procedure OnTVTBackgroundPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; const R: TRect; var Handled: Boolean);
    procedure OnTVTGetLineStyleEvent(Sender: TBaseVirtualTree; var Bits: Pointer);
    procedure OnTVTMeasureItemEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; var NodeHeight: Integer);

    // search, sort
    procedure OnTVTCompareEvent(Sender: TBaseVirtualTree; Node1, Node2: PVirtualNode; Column: TColumnIndex; var Result: Integer);
    procedure OnTVTIncrementalSearchEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; const SearchText: String; var Result: Integer);

    // operations
    procedure OnTVTOperationEvent(Sender: TBaseVirtualTree; OperationKind: TVTOperationKind);

    procedure OnTVTHintKindEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Kind: TVTHintKind);
    procedure OnTVTDrawHintEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; R: TRect; Column: TColumnIndex);
    procedure OnTVTGetHintSizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var R: TRect);

    // miscellaneous
    procedure OnTVTBeforeDrawLineImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Level: Integer; var PosX: Integer);
    procedure OnTVTGetNodeDataSizeEvent(Sender: TBaseVirtualTree; var NodeDataSize: Integer);
    procedure OnTVTKeyActionEvent(Sender: TBaseVirtualTree; var CharCode: Word; var Shift: TShiftState; var DoDefault: Boolean);
    procedure OnTVTScrollEvent(Sender: TBaseVirtualTree; DeltaX, DeltaY: Integer);
    procedure OnTVTUpdatingEvent(Sender: TBaseVirtualTree; State: TVTUpdateState);
    procedure OnTVTGetCursorEvent(Sender: TBaseVirtualTree; var Cursor: TCursor);
    procedure OnTVTStateChangeEvent(Sender: TBaseVirtualTree; Enter, Leave: TVirtualTreeStates);
    procedure OnTVTGetCellIsEmptyEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var IsEmpty: Boolean);
    procedure OnTVTScrollBarShowEvent(Sender: TBaseVirtualTree; Bar: Integer; Show: Boolean);

    procedure OnTVTColumnExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Column: TVirtualTreeColumn);
    procedure OnTVTTreeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType);
    function  OnTVTNodeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Node: PVirtualNode): Boolean;
    procedure OnTVTDrawNodeEvent(Sender: TBaseVirtualTree; const PaintInfo: TVTPaintInfo);
    procedure OnTVTGetCellContentMarginEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; CellContentMarginType: TVTCellContentMarginType; var CellContentMargin: TPoint);
    procedure OnTVTGetNodeWidthEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; var NodeWidth: Integer);

    procedure OnTVTPaintText(Sender: TBaseVirtualTree; const TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType);
    procedure OnTVSTGetTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType; var CellText: String);
    procedure OnTVSTGetHintEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var LineBreakStyle: TVTTooltipLineBreakStyle; var HintText: String);
    // New text can only be set for variable caption.
    procedure OnTVSTNewTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const NewText: String);
    procedure OnTVSTShortenStringEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const S: String; TextSpace: Integer; var Result: String; var Done: Boolean);
    procedure OnTVTMeasureTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; var Extent: Integer);
    procedure OnTVTDrawTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; const CellRect: TRect; var DefaultDraw: Boolean);

  end;

// 公共发送事件函数
procedure SendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);

implementation
{ TLCLEventBase }

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
  if Assigned(GRemoveEventCallbackPtr) then
    GRemoveEventCallbackPtr(TLCLEventBase(AMethod.Data).FHostDataPtr);
end;

procedure TLCLEventBase.SendEvent(AArgs: array of const);
begin
  if Assigned(GEventCallbackPtr) and CheckDataPtr then
  begin
    // 这里要替换为 Pointer
    SendEventByPointer(DataPtr, AArgs);
  end;
end;

procedure SendEventByPointer(EventDataPtr: Pointer; AArgs: array of const);
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
    GEventCallbackPtr(EventDataPtr, @LParams[0], LArgLen);
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

class procedure TLCLEventBase.Remove(AMethod: TMethod);
begin
  System.EnterCriticalSection(FEventObjectsLock);
  try
    // 这是一个class，找到后会删除并Free掉这个对象
    if AMethod.Data <> nil then
    begin
      CallRemoveEvent(AMethod);
      FEventObjects.Remove(AMethod.Data);
    end;
  finally
    System.LeaveCriticalSection(FEventObjectsLock);
  end;
end;

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

// ----------------- 事件定义 -------------------------------

procedure TLCLEvent.OnTActionEvent(AAction: TBasicAction; var Handled: Boolean);
begin
  SendEvent([AAction, @Handled]);
end;

procedure TLCLEvent.OnTGetHandleEvent(var Handle: LCLType.HWND);
begin
  SendEvent([@Handle]);
end;

procedure TLCLEvent.OnTShowHintEvent(var HintStr: string; var CanShow: Boolean; var HintInfo: THintInfo);
var
  RHintStr: PChar;
  hintInfoPtr: THintInfoPtr;
begin
  RHintStr := PChar(HintStr);
  hintInfoPtr := HintInfoToGo(HintInfo);
  SendEvent([@RHintStr, @CanShow, @hintInfoPtr]);
  if RHintStr <> nil then
    HintStr := RHintStr;
  HintInfo := HintInfoToPas(hintInfoPtr);
end;

procedure TLCLEvent.OnTClipboardRequestEvent(const RequestedFormatID: TClipboardFormat; Data: TStream);
begin
  SendEvent([RequestedFormatID, Data]);
end;

procedure TLCLEvent.OnTControlShowHintEvent(Sender: TObject; HintInfo: PHintInfo);
var
  hintInfoPtr: THintInfoPtr;
begin
  hintInfoPtr := HintInfoToGo(HintInfo^);
  SendEvent([Sender, @hintInfoPtr]);
end;

procedure TLCLEvent.OnTHintEvent(var HintStr: string; var CanShow: Boolean);
var
  RHintStr: PChar;
begin
  RHintStr := PChar(HintStr);
  SendEvent([@RHintStr, @CanShow]);
  if RHintStr <> nil then
    HintStr := RHintStr;
end;

procedure TLCLEvent.OnTGetColorsEvent(Sender: TCustomColorBox; Items: TStrings);
begin
  SendEvent([Sender, Items]);
end;

procedure TLCLEvent.OnTLBGetColorsEvent(Sender: TCustomColorListBox; Items: TStrings);
begin
  SendEvent([Sender, Items]);
end;

procedure TLCLEvent.OnTOnDrawCell(Sender: TObject; aCol, aRow: Integer; aRect: TRect; aState: TGridDrawState);
begin
  SendEvent([Sender, aCol, aRow, @aRect, PWord(@aState)^]);
end;

procedure TLCLEvent.OnTOnSelectCellEvent(Sender: TObject; aCol, aRow: Integer; var CanSelect: Boolean);
begin
  SendEvent([Sender, aCol, aRow, @CanSelect]);
end;

procedure TLCLEvent.OnTModalDialogFinished(Sender: TObject; AResult: Integer);
begin
  SendEvent([Sender, AResult]);
end;

procedure TLCLEvent.OnTCustomSectionNotifyEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection);
begin
  SendEvent([HeaderControl, Section]);
end;

procedure TLCLEvent.OnTCustomSectionTrackEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection; Width: Integer; State: TSectionTrackState);
begin
  SendEvent([HeaderControl, Section, Width, State]);
end;

procedure TLCLEvent.OnTCustomHCCreateSectionClassEvent(Sender: TCustomHeaderControl; var SectionClass: THeaderSectionClass);
begin
  SendEvent([Sender, @SectionClass]);
end;

procedure TLCLEvent.OnTCustomImageListGetWidthForPPI(Sender: TCustomImageList; AImageWidth, APPI: Integer; var AResultWidth: Integer);
begin
  SendEvent([Sender, AImageWidth, APPI, @AResultWidth]);
end;

procedure TLCLEvent.OnTDestroyResolutionHandleEvent(Sender: TCustomImageList; AWidth: Integer; AReferenceHandle: TLCLHandle);
begin
  SendEvent([Sender, AWidth, AReferenceHandle]);
end;

procedure TLCLEvent.OnTSelectionChangeEvent(Sender: TObject; User: boolean);
begin
  SendEvent([Sender, User]);
end;

procedure TLCLEvent.OnTScrollEvent(Sender: TObject; ScrollCode: TScrollCode; var ScrollPos: Integer);
begin
  SendEvent([Sender, ScrollCode, @ScrollPos]);
end;

procedure TLCLEvent.OnTCanOffsetEvent(Sender: TObject; var NewOffset: Integer; var Accept: Boolean);
begin
  SendEvent([Sender, @NewOffset, @Accept]);
end;

procedure TLCLEvent.OnTCanResizeEvent(Sender: TObject; var NewSize: Integer; var Accept: Boolean);
begin
  SendEvent([Sender, @NewSize, @Accept]);
end;

procedure TLCLEvent.OnTTabGetImageEvent(Sender: TObject; TabIndex: Integer; var ImageIndex: Integer);
begin
  SendEvent([Sender, TabIndex, @ImageIndex]);
end;

procedure TLCLEvent.OnTUserCheckBoxImageEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckBoxState;
      var ImageList: TCustomImageList; var ImageIndex: TImageIndex);
begin
  SendEvent([Sender, aCol, aRow, CheckedState, @ImageList, @ImageIndex]);
end;

function TLCLEvent.OnTFPCanvasCombineColors(const color1, color2: TFPColor): TFPColor;
begin
  SendEvent([@color1, @color2, @Result]);
end;

procedure TLCLEvent.OnTProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect; const Msg: AnsiString; var Continue : Boolean);
begin
  SendEvent([Sender, Stage, PercentDone, RedrawNow, @R, PChar(string(Msg)), @Continue]);
end;

function TLCLEvent.OnTListCompareEvent(AList: TListControlItems; AItem1, AItem2: TListControlItem): Integer;
begin
  SendEvent([AList,  AItem1, AItem2, @Result]);
end;

procedure TLCLEvent.OnTLVCreateItemClassEvent(Sender: TCustomListView; var ItemClass: TListItemClass);
begin
  SendEvent([Sender, @ItemClass]);
end;

procedure TLCLEvent.OnTLVDataStateChangeEvent(Sender: TObject; StartIndex, EndIndex: Integer; OldState, NewState: TListItemStates);
begin
  SendEvent([Sender, StartIndex, EndIndex, PWord(@OldState)^, PWord(@NewState)^]);
end;

procedure TLCLEvent.OnTLVInsertEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTGetDockCaptionEvent(Sender: TObject; AControl: TControl; var ACaption: string);
var
  RACaption: PChar;
begin
  RACaption := PChar(ACaption);
  SendEvent([Sender, AControl, @RACaption]);
  if RACaption <> nil then
     ACaption := RACaption;
end;

procedure TLCLEvent.OnTDialogResultEvent(Sender: TObject; Success: Boolean);
begin
  SendEvent([Sender, Success]);
end;

procedure TLCLEvent.OnTSBCreatePanelClassEvent(Sender: TStatusBar; var PanelClass: TStatusPanelClass);
begin
  SendEvent([Sender, @PanelClass]);
end;

procedure TLCLEvent.OnTDrawPanelEvent(StatusBar: TStatusBar; Panel: TStatusPanel; const Rect: TRect);
begin
  SendEvent([StatusBar, Panel, @Rect]);
end;

procedure TLCLEvent.OnTCellProcessEvent(Sender: TObject; aCol, aRow: Integer; processType: TCellProcessType; var aValue: string);
var
  RAValue: PChar;
begin
  RAValue := PChar(aValue);
  SendEvent([Sender, aCol, aRow, processType, @RAValue]);
  if RAValue <> nil then
     aValue := RAValue;
end;

procedure TLCLEvent.OnTToolBarOnPaintButton(Sender: TToolButton; State: Integer);
begin
  SendEvent([Sender, State]);
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

procedure TLCLEvent.OnTTVEditingEndEvent(Sender: TObject; Node: TTreeNode; Cancel: Boolean);
begin
  SendEvent([Sender, Node, Cancel]);
end;

function TLCLEvent.OnTTVHasChildrenEvent(Sender: TCustomTreeView; ANode: TTreeNode): Boolean;
begin
  SendEvent([Sender, ANode, @Result]);
end;

procedure TLCLEvent.OnTTVNodeChangedEvent(Sender: TObject; Node: TTreeNode; ChangeReason: TTreeNodeChangeReason);
begin
  SendEvent([Sender, Node, ChangeReason]);
end;

procedure TLCLEvent.OnTUDChangingEventEx(Sender: TObject; var AllowChange: Boolean; NewValue: SmallInt; Direction: TUpDownDirection);
begin
  SendEvent([Sender, @AllowChange, Direction]);
end;

procedure TLCLEvent.OnTGetPickListEvent(Sender: TObject; const KeyName: string; Values: TStrings);
begin
  SendEvent([Sender, PChar(KeyName), Values]);
end;

procedure TLCLEvent.OnTOnValidateEvent(Sender: TObject; ACol, ARow: Longint; const KeyName, KeyValue: string);
begin
  SendEvent([Sender, Integer(ACol), Integer(ARow), PChar(KeyName), PChar(KeyValue)]);
end;

function TLCLEvent.OnTAlignInsertBeforeEvent(Sender: TWinControl; Control1, Control2: TControl): Boolean;
begin
  SendEvent([Sender, Control1, Control2, @Result]);
end;

procedure TLCLEvent.OnTDockOverEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, State, @Accept]);
end;

procedure TLCLEvent.OnTFPImgProgressEvent(Sender: TObject; Stage: TFPImgProgressStage; PercentDone: Byte; RedrawNow: Boolean; const R: TRect;
      const Msg: AnsiString; var Continue : Boolean);
begin
  SendEvent([Sender, PWord(@Stage)^, PercentDone, RedrawNow, @R, PChar(Msg), @Continue]);
end;

// now
procedure TLCLEvent.OnTExceptionEvent(Sender: TObject; E: Exception);
begin
  SendEvent([Sender, E]);
end;

procedure TLCLEvent.OnTNotifyEvent(Sender: TObject);
begin
  SendEvent([Sender]);
end;

function TLCLEvent.OnTHelpEvent(Command: Word; Data: PtrInt; var CallHelp: Boolean): Boolean;
var
  LResult: Boolean;
begin
  SendEvent([Command, Data, Pointer(@CallHelp), Pointer(@LResult)]);
  Result := LResult;
end;

procedure TLCLEvent.OnTShortCutEvent(var Msg: TLMKey; var Handled: Boolean);
begin
  SendEvent([Pointer(@Msg), Pointer(@Handled)]);
end;

procedure TLCLEvent.OnTAlignPositionEvent(Sender: TWinControl; Control: TControl; var NewLeft, NewTop, NewWidth, NewHeight: Integer;
  var AlignRect: TRect; AlignInfo: TAlignInfo);
begin
  SendEvent([Sender, Control, @NewLeft, @NewTop, @NewWidth, @NewHeight, @AlignRect, @AlignInfo]);
end;

procedure TLCLEvent.OnTCloseEvent(Sender: TObject;
  var Action: TCloseAction);
begin
  SendEvent([Sender, @Action]);
end;

procedure TLCLEvent.OnTCloseQueryEvent(Sender: TObject;
  var CanClose: Boolean);
begin
  SendEvent([Sender, @CanClose]);
end;

procedure TLCLEvent.OnTContextPopupEvent(Sender: TObject; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, Pointer(@MousePos), Pointer(@Handled)]);
end;

procedure TLCLEvent.OnTDockDropEvent(Sender: TObject; Source: TDragDockObject; X, Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TLCLEvent.OnTDragDropEvent(Sender, Source: TObject; X, Y: Integer);
begin
  SendEvent([Sender, Source, X, Y]);
end;

procedure TLCLEvent.OnTDragOverEvent(Sender, Source: TObject; X, Y: Integer; State: TDragState; var Accept: Boolean);
begin
  SendEvent([Sender, Source, X, Y, Integer(State), Pointer(@Accept)]);
end;

procedure TLCLEvent.OnTStartDragEvent(Sender: TObject; var DragObject: TDragObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TLCLEvent.OnTEndDragEvent(Sender, Target: TObject; X, Y: Integer);
begin
  SendEvent([Sender, Target, X, Y]);
end;

procedure TLCLEvent.OnTGetSiteInfoEvent(Sender: TObject; DockClient: TControl; var InfluenceRect: TRect; MousePos: TPoint; var CanDock: Boolean);
begin
  SendEvent([Sender, DockClient, Pointer(@InfluenceRect), Pointer(@MousePos), Pointer(@CanDock)]);
end;

procedure TLCLEvent.OnTKeyEvent(Sender: TObject; var Key: Word; Shift: TShiftState);
begin
  SendEvent([Sender, @Key, PWord(@Shift)^]);
end;

procedure TLCLEvent.OnTKeyPressEvent(Sender: TObject; var Key: Char);
var
  LKey: Word;
begin
  // 这里要修复下
  LKey := Ord(Key);
  SendEvent([Sender, @LKey]);
  Key := Char(LKey);
end;

procedure TLCLEvent.OnTMouseEvent(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, Ord(Button), PWord(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTMouseMoveEvent(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, PWord(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTMouseWheelEvent(Sender: TObject; Shift: TShiftState; WheelDelta: Integer; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, PWord(@Shift)^, WheelDelta, MousePos.X, MousePos.Y, @Handled]);
end;

procedure TLCLEvent.OnTMouseWheelUpDownEvent(Sender: TObject; Shift: TShiftState; MousePos: TPoint; var Handled: Boolean);
begin
  SendEvent([Sender, PWord(@Shift)^, Pointer(@MousePos), Pointer(@Handled)]);
end;

procedure TLCLEvent.OnTStartDockEvent(Sender: TObject; var DragObject: TDragDockObject);
begin
  SendEvent([Sender, @DragObject]);
end;

procedure TLCLEvent.OnTUnDockEvent(Sender: TObject; Client: TControl; NewTarget: TWinControl; var Allow: Boolean);
begin
  SendEvent([Sender, Client, NewTarget, Pointer(@Allow)]);
end;

procedure TLCLEvent.OnTMenuChangeEvent(Sender: TObject; Source: TMenuItem; Rebuild: Boolean);
begin
  SendEvent([Sender, Source, Rebuild]);
end;

procedure TLCLEvent.OnTDrawItemEvent(Control: TWinControl; Index: Integer; ARect: TRect; State: TOwnerDrawState);
begin
  SendEvent([Control, Index, @ARect, PWord(@State)^]);
end;

procedure TLCLEvent.OnTMeasureItemEvent(Control: TWinControl; Index: Integer; var Height: Integer);
begin
  SendEvent([Control, Index, @Height]);
end;

procedure TLCLEvent.OnTSysLinkEvent(Sender: TObject; const Link: string; LinkType: TSysLinkType);
begin
  SendEvent([Sender, PChar(Link), Ord(LinkType)]);
end;

procedure TLCLEvent.OnTUDChangingEvent(Sender: TObject; var AllowChange: Boolean);
begin
  SendEvent([Sender, @AllowChange]);
end;

procedure TLCLEvent.OnTUDClickEvent(Sender: TObject; Button: TUDBtnType);
begin
  SendEvent([Sender, Ord(Button)]);
end;

procedure TLCLEvent.OnTLVAdvancedCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; Stage: TCustomDrawStage;
  var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, Ord(Stage), @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVAdvancedCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, PWord(@State)^, Ord(Stage), @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVAdvancedCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, SubItem, PWord(@State)^, Ord(Stage), @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVChangeEvent(Sender: TObject; AItem: TListItem; Change: TItemChange);
begin
  SendEvent([Sender, AItem, Ord(Change)]);
end;

procedure TLCLEvent.OnTLVColumnClickEvent(Sender: TObject; Column: TListColumn);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTLVCompareEvent(Sender: TObject; Item1, Item2: TListItem; Data: Integer; var Compare: Integer);
begin
  SendEvent([Sender, Item1, Item2, Data, @Compare]);
end;

procedure TLCLEvent.OnTLVCustomDrawEvent(Sender: TCustomListView; const ARect: TRect; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVCustomDrawItemEvent(Sender: TCustomListView; Item: TListItem; State: TCustomDrawState; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, PWord(@State)^, @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVCustomDrawSubItemEvent(Sender: TCustomListView; Item: TListItem; SubItem: Integer; State: TCustomDrawState; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Item, SubItem, PWord(@State)^, @DefaultDraw]);
end;

procedure TLCLEvent.OnTLVDataEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTLVDataFindEvent(Sender: TObject; Find: TItemFind; const FindString: string; const FindPosition: TPoint;
  FindData: Pointer; StartIndex: Integer; Direction: TSearchDirection; Wrap: Boolean; var Index: Integer);
begin
  SendEvent([Sender, Ord(Find), PChar(FindString), @FindPosition, FindData, StartIndex, Ord(Direction), Integer(Wrap), @Index]);
end;

procedure TLCLEvent.OnTLVDataHintEvent(Sender: TObject; StartIndex, EndIndex: Integer);
begin
  SendEvent([Sender, StartIndex, EndIndex]);
end;

procedure TLCLEvent.OnTLVDeletedEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTLVEditedEvent(Sender: TObject; Item: TListItem; var S: string);
var
  LS: PChar;
begin
  LS := PChar(S);
  SendEvent([Sender, Item, @LS]);
  S := LS;
end;

procedure TLCLEvent.OnTLVEditingEvent(Sender: TObject; Item: TListItem; var AllowEdit: Boolean);
begin
  SendEvent([Sender, Item, @AllowEdit]);
end;

procedure TLCLEvent.OnTLVSelectItemEvent(Sender: TObject; Item: TListItem; Selected: Boolean);
begin
  SendEvent([Sender, Item, Selected]);
end;

procedure TLCLEvent.OnTLVCheckedItemEvent(Sender: TObject; Item: TListItem);
begin
  SendEvent([Sender, Item]);
end;

procedure TLCLEvent.OnTLVDrawItemEvent(Sender: TCustomListView; AItem: TListItem; ARect: TRect; AState: TOwnerDrawState);
begin
  SendEvent([Sender, AItem, @ARect, PWord(@AState)^]);
end;

procedure TLCLEvent.OnTTVExpandedEvent(Sender: TObject; Node: TTreeNode
  );
begin
  SendEvent([Sender, Node]);
end;

procedure TLCLEvent.OnTTVAdvancedCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; Stage: TCustomDrawStage; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, Ord(Stage), DefaultDraw]);
end;

procedure TLCLEvent.OnTTVAdvancedCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; Stage: TCustomDrawStage; var PaintImages, DefaultDraw: Boolean);
begin
  SendEvent([Sender, Node, PWord(@State)^, Ord(Stage), @PaintImages, DefaultDraw]);
end;

procedure TLCLEvent.OnTTVChangedEvent(Sender: TObject; ANode: TTreeNode
  );
begin
  SendEvent([Sender, ANode]);
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
  SendEvent([Sender, Node1, Node2, 0, @Compare]);
end;

procedure TLCLEvent.OnTTVCustomDrawEvent(Sender: TCustomTreeView; const ARect: TRect; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, @ARect, @DefaultDraw]);
end;

procedure TLCLEvent.OnTTVCustomDrawItemEvent(Sender: TCustomTreeView; Node: TTreeNode; State: TCustomDrawState; var DefaultDraw: Boolean);
begin
  SendEvent([Sender, Node, PWord(@State)^, @DefaultDraw]);
end;

procedure TLCLEvent.OnTTVEditedEvent(Sender: TObject; Node: TTreeNode; var S: string);
var
  LS: PChar;
begin
  LS := PChar(S);
  SendEvent([Sender, Node, @LS]);
  S := LS;
end;

procedure TLCLEvent.OnTTVEditingEvent(Sender: TObject; Node: TTreeNode; var AllowEdit: Boolean);
begin
  SendEvent([Sender, Node, @AllowEdit]);
end;

procedure TLCLEvent.OnTTVExpandingEvent(Sender: TObject; Node: TTreeNode; var AllowExpansion: Boolean);
begin
  SendEvent([Sender, Node, @AllowExpansion]);
end;

procedure TLCLEvent.OnTMenuMeasureItemEvent(Sender: TObject; ACanvas: TCanvas; var Width, Height: Integer);
begin
  SendEvent([Sender, ACanvas, @Width, @Height]);
end;

procedure TLCLEvent.OnTTabChangingEvent(Sender: TObject; var AllowChange: Boolean);
begin
  SendEvent([Sender, @AllowChange]);
end;

procedure TLCLEvent.OnTWebTitleChangeEvent(Sender: TObject; const Text: string);
begin
  SendEvent([Sender, PChar(Text)]);
end;

procedure TLCLEvent.OnTWebJSExternalEvent(Sender: TObject; const Afunc: string; const AArgs: string; var ARetval: string);
var
  LRet: PChar;
begin
  LRet := PChar(ARetval);
  SendEvent([Sender, PChar(Afunc), PChar(AArgs), @LRet]);
  ARetval := string(LRet);
end;

procedure TLCLEvent.OnTOnCompareCells(Sender: TObject; ACol, ARow, BCol, BRow: Integer; var Result: integer);
begin
  SendEvent([Sender, ACol, ARow, BCol, BRow, @Result]);
end;

procedure TLCLEvent.OnTGetCellHintEvent(Sender: TObject; ACol, ARow: Integer; var HintText: String);
var
  LVal: PChar;
begin
  LVal := PChar(HintText);
  SendEvent([Sender, aCol, aRow, @LVal]);
  if LVal <> nil then
    HintText := LVal;
end;

procedure TLCLEvent.OnTGetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; var Value: TCheckboxState);
begin
  SendEvent([Sender, ACol, ARow, @Value]);
end;

procedure TLCLEvent.OnTSetCheckboxStateEvent(Sender: TObject; ACol, ARow: Integer; const Value: TCheckboxState);
begin
  SendEvent([Sender, ACol, ARow, PWord(@Value)^]);
end;

procedure TLCLEvent.OnTHdrEvent(Sender: TObject; IsColumn: Boolean; Index: Integer);
begin
  SendEvent([Sender, IsColumn, Index]);
end;

procedure TLCLEvent.OnTHeaderSizingEvent(sender: TObject; const IsColumn: boolean; const aIndex, aSize: Integer);
begin
  SendEvent([Sender, IsColumn, aIndex, aSize]);
end;

procedure TLCLEvent.OnTOnSelectEvent(Sender: TObject; aCol, aRow: Integer);
begin
  SendEvent([Sender, aCol, aRow]);
end;

procedure TLCLEvent.OnTSelectEditorEvent(Sender: TObject; aCol, aRow: Integer; var Editor: TWinControl);
begin
  SendEvent([Sender, aCol, aRow, @Editor]);
end;

procedure TLCLEvent.OnTUserCheckboxBitmapEvent(Sender: TObject; const aCol, aRow: Integer; const CheckedState: TCheckboxState; var ABitmap: TBitmap);
begin
  SendEvent([Sender, aCol, aRow, PWord(@CheckedState)^, @ABitmap]);
end;

procedure TLCLEvent.OnTValidateEntryEvent(sender: TObject; aCol, aRow: Integer; const OldValue: string; var NewValue: String);
var
  LVal: PChar;
begin
  LVal := PChar(NewValue);
  SendEvent([Sender, aCol, aRow, PChar(OldValue), @LVal]);
  if LVal <> nil then
    NewValue := LVal;
end;

procedure TLCLEvent.OnTOnPrepareCanvasEvent(sender: TObject; aCol, aRow: Integer; aState: TGridDrawState);
begin
  SendEvent([Sender, aCol, aRow, PWord(@aState)^]);
end;

procedure TLCLEvent.OnTImagePaintBackgroundEvent(ASender: TObject; ACanvas: TCanvas; ARect: TRect);
begin
  SendEvent([ASender, ACanvas, @ARect]);
end;

procedure TLCLEvent.OnTAcceptFileNameEvent(Sender: TObject; var Value: String);
var
  LS: PChar;
begin
  LS := PChar(Value);
  SendEvent([Sender, Pointer(@LS)]);
  Value := LS;
end;

procedure TLCLEvent.OnTCheckItemChange(Sender: TObject; AIndex: Integer);
begin
  SendEvent([Sender, AIndex]);
end;

procedure TLCLEvent.OnTUTF8KeyPressEvent(Sender: TObject; var UTF8Key: TUTF8Char);
begin
  SendEvent([Sender, @UTF8Key]);
end;

procedure TLCLEvent.OnTMenuDrawItemEvent(Sender: TObject; ACanvas: TCanvas; ARect: TRect; AState: TOwnerDrawState);
begin
  SendEvent([Sender, ACanvas, Pointer(@ARect), PWord(@AState)^]);
end;

procedure TLCLEvent.OnTDrawCellEvent(Sender: TObject; ACol, ARow: Longint; ARect: TRect; State: TGridDrawState);
begin
  SendEvent([Sender, ACol, ARow, Pointer(@ARect), PWord(@State)^]);
end;

procedure TLCLEvent.OnTGetEditEvent(Sender: TObject; ACol, ARow: Integer; var Value: string);
var
  LS: PChar;
begin
  LS := PChar(Value);
  SendEvent([Sender, ACol, ARow, Pointer(@LS)]);
  Value := LS;
end;

procedure TLCLEvent.OnTSelectCellEvent(Sender: TObject; ACol, ARow: Integer; var CanSelect: Boolean);
begin
  SendEvent([Sender, ACol, ARow, Pointer(@CanSelect)]);
end;

procedure TLCLEvent.OnTSetEditEvent(Sender: TObject; ACol, ARow: Integer; const Value: string);
begin
  SendEvent([Sender, ACol, ARow, PChar(Value)]);
end;

procedure TLCLEvent.OnTSectionNotifyEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection);
begin
  SendEvent([HeaderControl, Section]);
end;

procedure TLCLEvent.OnTSectionTrackEvent(HeaderControl: TCustomHeaderControl; Section: THeaderSection; Width: Integer; State: TSectionTrackState);
begin
  SendEvent([HeaderControl, Section, Width, Integer(State)]);
end;

procedure TLCLEvent.OnTSectionDragEvent(Sender: TObject; FromSection, ToSection: THeaderSection; var AllowDrag: Boolean);
begin
  SendEvent([Sender, FromSection, ToSection, Pointer(@AllowDrag)]);
end;

procedure TLCLEvent.OnTTaskDlgClickEvent(Sender: TObject; ModalResult: TModalResult; var CanClose: Boolean);
begin
  SendEvent([Sender, ModalResult, @CanClose]);
end;

procedure TLCLEvent.OnTCheckGroupClicked(Sender: TObject; Index: integer);
begin
  SendEvent([Sender, Index]);
end;

procedure TLCLEvent.OnTConstrainedResizeEvent(Sender: TObject; var MinWidth, MinHeight, MaxWidth, MaxHeight: TConstraintSize);
begin
  SendEvent([Sender, @MinWidth, @MinHeight, @MaxWidth, @MaxHeight]);
end;

procedure TLCLEvent.OnTDropFilesEvent(Sender: TObject; const AFileNames: array of string);
var
  LLen: Integer;
begin
  LLen := Length(AFileNames);
  if LLen > 0 then
    SendEvent([Sender, @AFileNames[0], LLen]);
end;

procedure TLCLEvent.OnTToggledCheckboxEvent(sender: TObject; aCol, aRow: Integer; aState: TCheckboxState);
begin
  SendEvent([Sender, aCol, aRow, PWord(@aState)^]);
end;

procedure TLCLEvent.OnTGridOperationEvent(Sender: TObject; IsColumn: Boolean; sIndex, tIndex: Integer);
begin
  SendEvent([Sender, IsColumn, sIndex, tIndex]);
end;

procedure TLCLEvent.OnTWndProcEvent(Sender: TObject; var TheMessage: TLMessage);
begin
  if Assigned(GMessageCallbackPtr) and CheckDataPtr then
    GMessageCallbackPtr(DataPtr, @TheMessage);
end;

function TLCLEvent.OnTTreeNodeCompare(Node1, Node2: TTreeNode): integer;
begin
  SendEvent([Node1, Node2, @Result]);
end;

// node events
procedure TLCLEvent.OnTVTChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, @Allowed]);
end;

procedure TLCLEvent.OnTVTCheckChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var NewState: TCheckState; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, @NewState, @Allowed]);
end;

procedure TLCLEvent.OnTVTChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr]);
end;

procedure TLCLEvent.OnTVTStructureChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Reason: TChangeReason);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Reason]);
end;

procedure TLCLEvent.OnTVTEditCancelEvent(Sender: TBaseVirtualTree; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTEditChangingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTEditChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column]);
end;

procedure TLCLEvent.OnTVTFreeNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr]);
end;

procedure TLCLEvent.OnTVTFocusChangingEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode; OldColumn, NewColumn: TColumnIndex; var Allowed: Boolean);
var
  OldNodePtr: TVirtualNodePtr;
  NewNodePtr: TVirtualNodePtr;
begin
  OldNodePtr := VirtualNodeToGo(OldNode^);
  NewNodePtr := VirtualNodeToGo(NewNode^);
  SendEvent([Sender, @OldNodePtr, @NewNodePtr, OldColumn, NewColumn, @Allowed]);
end;

procedure TLCLEvent.OnTVTFocusChangeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column]);
end;

procedure TLCLEvent.OnTVTAddToSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr]);
end;

procedure TLCLEvent.OnTVTRemoveFromSelectionEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr]);
end;

procedure TLCLEvent.OnTVTGetImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var Ghosted: Boolean; var ImageIndex: Integer);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Kind, Column, @Ghosted, @ImageIndex]);
end;

procedure TLCLEvent.OnTVTGetImageExEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex;
  var Ghosted: Boolean; var ImageIndex: Integer; var ImageList: TCustomImageList);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Kind, Column, @Ghosted, @ImageIndex, @ImageList]);
end;

procedure TLCLEvent.OnTVTGetImageTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex; var ImageText: String);
var
  NodePtr: TVirtualNodePtr;
  ImageTextPtr: PChar;
begin
  NodePtr := VirtualNodeToGo(Node^);
  ImageTextPtr := ToPChar(ImageText);
  SendEvent([Sender, @NodePtr, Kind, Column, @ImageTextPtr]);
  ImageText := StrPas(ImageTextPtr);
  ImageTextPtr := nil;
end;

procedure TLCLEvent.OnTVTHotNodeChangeEvent(Sender: TBaseVirtualTree; OldNode, NewNode: PVirtualNode);
var
  OldNodePtr: TVirtualNodePtr;
  NewNodePtr: TVirtualNodePtr;
begin
  OldNodePtr := VirtualNodeToGo(OldNode^);
  NewNodePtr := VirtualNodeToGo(NewNode^);
  SendEvent([Sender, @OldNodePtr, @NewNodePtr]);
end;

procedure TLCLEvent.OnTVTInitChildrenEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; var ChildCount: Cardinal);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, @ChildCount]);
end;

procedure TLCLEvent.OnTVTInitNodeEvent(Sender: TBaseVirtualTree; ParentNode, Node: PVirtualNode; var InitialStates: TVirtualNodeInitStates);
var
  ParentNodePtr: TVirtualNodePtr;
  NodePtr: TVirtualNodePtr;
begin
  ParentNodePtr := VirtualNodeToGo(ParentNode^);
  NodePtr := VirtualNodeToGo(Node^);
  // PWord(@InitialStates)^
  SendEvent([Sender, @ParentNodePtr, @NodePtr, @InitialStates]);
end;

procedure TLCLEvent.OnTVTPopupEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const P: TPoint; var AskParent: Boolean; var PopupMenu: TPopupMenu);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @P, @AskParent, @PopupMenu]);
end;

procedure TLCLEvent.OnTVTHelpContextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var HelpContext: Integer);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @HelpContext]);
end;

procedure TLCLEvent.OnTVTCreateEditorEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; out EditLink: IVTEditLink);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @EditLink]);
end;

procedure TLCLEvent.OnTVTSaveTreeEvent(Sender: TBaseVirtualTree; Stream: TStream);
begin
  SendEvent([Sender, Stream]);
end;

procedure TLCLEvent.OnTVTSaveNodeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Stream: TStream);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Stream]);
end;

// header/column events
procedure TLCLEvent.OnTVTHeaderClickEvent(Sender: TVTHeader; HitInfo: TVTHeaderHitInfo);
begin
  SendEvent([Sender, @HitInfo]);
end;

procedure TLCLEvent.OnTVTHeaderMouseEvent(Sender: TVTHeader; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, Button, PWord(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTVTHeaderMouseMoveEvent(Sender: TVTHeader; Shift: TShiftState; X, Y: Integer);
begin
  SendEvent([Sender, PWord(@Shift)^, X, Y]);
end;

procedure TLCLEvent.OnTVTBeforeHeaderHeightTrackingEvent(Sender: TVTHeader; Shift: TShiftState);
begin
  SendEvent([Sender, PWord(@Shift)^]);
end;

procedure TLCLEvent.OnTVTAfterHeaderHeightTrackingEvent(Sender: TVTHeader);
begin
  SendEvent([Sender]);
end;

procedure TLCLEvent.OnTVTHeaderHeightTrackingEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, PWord(@Shift)^, @Allowed]);
end;

procedure TLCLEvent.OnTVTHeaderHeightDblClickResizeEvent(Sender: TVTHeader; var P: TPoint; Shift: TShiftState; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, PWord(@Shift)^, @Allowed]);
end;

procedure TLCLEvent.OnTVTHeaderNotifyEvent(Sender: TVTHeader; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTHeaderDraggingEvent(Sender: TVTHeader; Column: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTHeaderDraggedEvent(Sender: TVTHeader; Column: TColumnIndex; OldPosition: Integer);
begin
  SendEvent([Sender, Column, OldPosition]);
end;

procedure TLCLEvent.OnTVTHeaderDraggedOutEvent(Sender: TVTHeader; Column: TColumnIndex; const DropPosition: TPoint);
begin
  SendEvent([Sender, Column, @DropPosition]);
end;

procedure TLCLEvent.OnTVTHeaderPaintEvent(Sender: TVTHeader; HeaderCanvas: TCanvas; Column: TVirtualTreeColumn; const R: TRect; Hover, Pressed: Boolean; DropMark: TVTDropMarkMode);
begin
  SendEvent([Sender, HeaderCanvas, Column, @R, Hover, Pressed, DropMark]);
end;

procedure TLCLEvent.OnTVTHeaderPaintQueryElementsEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; var Elements: THeaderPaintElements);
var
  PaintInfoPtr: THeaderPaintInfoPtr;
begin
  PaintInfoPtr := HeaderPaintInfoToGo(PaintInfo);
  SendEvent([Sender, @PaintInfoPtr, @Elements]);
  PaintInfo := HeaderPaintInfoToPas(PaintInfoPtr);
end;

procedure TLCLEvent.OnTVTAdvancedHeaderPaintEvent(Sender: TVTHeader; var PaintInfo: THeaderPaintInfo; const Elements: THeaderPaintElements);
var
  PaintInfoPtr: THeaderPaintInfoPtr;
begin
  PaintInfoPtr := HeaderPaintInfoToGo(PaintInfo);
  SendEvent([Sender, @PaintInfoPtr, PWord(@Elements)^]);
  PaintInfo := HeaderPaintInfoToPas(PaintInfoPtr);
end;

procedure TLCLEvent.OnTVTBeforeAutoFitColumnsEvent(Sender: TVTHeader; var SmartAutoFitType: TSmartAutoFitType);
begin
  SendEvent([Sender, @SmartAutoFitType]);
end;

procedure TLCLEvent.OnTVTBeforeAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex; var SmartAutoFitType: TSmartAutoFitType; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, @SmartAutoFitType, @Allowed]);
end;

procedure TLCLEvent.OnTVTAfterAutoFitColumnEvent(Sender: TVTHeader; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTAfterAutoFitColumnsEvent(Sender: TVTHeader);
begin
  SendEvent([Sender]);
end;

procedure TLCLEvent.OnTVTColumnClickEvent (Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
begin
  SendEvent([Sender, Column, PWord(@Shift)^]);
end;

procedure TLCLEvent.OnTVTColumnDblClickEvent (Sender: TBaseVirtualTree; Column: TColumnIndex; Shift: TShiftState);
begin
  SendEvent([Sender, Column, PWord(@Shift)^]);
end;

procedure TLCLEvent.OnTVTColumnWidthDblClickResizeEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, PWord(@Shift)^, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTBeforeColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState);
begin
  SendEvent([Sender, Column, PWord(@Shift)^]);
end;

procedure TLCLEvent.OnTVTAfterColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex);
begin
  SendEvent([Sender, Column]);
end;

procedure TLCLEvent.OnTVTColumnWidthTrackingEvent(Sender: TVTHeader; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, Column, PWord(@Shift)^, @TrackPoint, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTGetHeaderCursorEvent(Sender: TVTHeader; var Cursor: HCURSOR);
begin
  SendEvent([Sender, @Cursor]);
end;

procedure TLCLEvent.OnTVTBeforeGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var UseSmartColumnWidth: Boolean);
begin
  SendEvent([Sender, Column, @UseSmartColumnWidth]);
end;

procedure TLCLEvent.OnTVTAfterGetMaxColumnWidthEvent(Sender: TVTHeader; Column: TColumnIndex; var MaxWidth: Integer);
begin
  SendEvent([Sender, Column, @MaxWidth]);
end;

procedure TLCLEvent.OnTVTCanSplitterResizeColumnEvent(Sender: TVTHeader; P: TPoint; Column: TColumnIndex; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTCanSplitterResizeHeaderEvent(Sender: TVTHeader; P: TPoint; var Allowed: Boolean);
begin
  SendEvent([Sender, @P, @Allowed]);
end;


// move, copy and node tracking events
procedure TLCLEvent.OnTVTNodeMovedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr]);
end;

procedure TLCLEvent.OnTVTNodeMovingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
  TargetPtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  TargetPtr := VirtualNodeToGo(Target^);
  SendEvent([Sender, @NodePtr, @TargetPtr, @Allowed]);
end;

procedure TLCLEvent.OnTVTNodeCopiedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr]);
end;

procedure TLCLEvent.OnTVTNodeCopyingEvent(Sender: TBaseVirtualTree; Node, Target: PVirtualNode; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
  TargetPtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  TargetPtr := VirtualNodeToGo(Target^);
  SendEvent([Sender, @NodePtr, @TargetPtr, @Allowed]);
end;

procedure TLCLEvent.OnTVTNodeClickEvent(Sender: TBaseVirtualTree; const HitInfo: THitInfo);
var
  HitInfoPtr: THitInfoPtr;
begin
  HitInfoPtr := HitInfoToGo(HitInfo);
  SendEvent([Sender, @HitInfoPtr]);
end;

procedure TLCLEvent.OnTVTNodeHeightTrackingEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; var TrackPoint: TPoint; P: TPoint; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, PWord(@Shift)^, @TrackPoint, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTNodeHeightDblClickResizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; Shift: TShiftState; P: TPoint; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, PWord(@Shift)^, @P, @Allowed]);
end;

procedure TLCLEvent.OnTVTCanSplitterResizeNodeEvent(Sender: TBaseVirtualTree; P: TPoint; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @P, @NodePtr, Column, @Allowed]);
end;


// drag'n drop/OLE events
procedure TLCLEvent.OnTVTCreateDragManagerEvent(Sender: TBaseVirtualTree; out DragManager: IVTDragManager);
begin
  SendEvent([Sender, @DragManager]);
end;

procedure TLCLEvent.OnTVTCreateDataObjectEvent(Sender: TBaseVirtualTree; out IDataObject: IDataObject);
begin
  SendEvent([Sender, @IDataObject]);
end;

procedure TLCLEvent.OnTVTDragAllowedEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Allowed: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @Allowed]);
end;

procedure TLCLEvent.OnTVTDragOverEvent(Sender: TBaseVirtualTree; Source: TObject; Shift: TShiftState; State: TDragState; const Pt: TPoint; Mode: TDropMode; var Effect: LongWord; var Accept: Boolean);
begin
  SendEvent([Sender, Source, PWord(@Shift)^, State, @Pt, @Mode, @Effect, @Accept]);
end;

procedure TLCLEvent.OnTVTDragDropEvent(Sender: TBaseVirtualTree; Source: TObject; DataObject: IDataObject; Formats: TFormatArray; Shift: TShiftState; const Pt: TPoint; var Effect: LongWord; Mode: TDropMode);
begin
  SendEvent([Sender, Source, DataObject, @Formats, Length(Formats), PWord(@Shift)^, @Pt, @Effect, Mode]);
end;

procedure TLCLEvent.OnTVTRenderOLEDataEvent(Sender: TBaseVirtualTree; const FormatEtcIn: TFormatEtc; out Medium: TStgMedium; ForClipboard: Boolean; var Result: HRESULT);
begin
  SendEvent([Sender, @FormatEtcIn, @Medium, ForClipboard, @Result]);
end;

procedure TLCLEvent.OnTVTGetUserClipboardFormatsEvent(Sender: TBaseVirtualTree; var Formats: TFormatEtcArray);
begin
  SendEvent([Sender, @Formats, Length(Formats)]);
end;


// paint events
procedure TLCLEvent.OnTVTBeforeItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var ItemColor: TColor; var EraseAction: TItemEraseAction);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, @ItemRect, @ItemColor, @EraseAction]);
end;

procedure TLCLEvent.OnTVTAfterItemEraseEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, @ItemRect]);
end;

procedure TLCLEvent.OnTVTBeforeItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect; var CustomDraw: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, @ItemRect, @CustomDraw]);
end;

procedure TLCLEvent.OnTVTAfterItemPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; const ItemRect: TRect);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, @ItemRect]);
end;

procedure TLCLEvent.OnTVTBeforeCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; CellPaintMode: TVTCellPaintMode; CellRect: TRect; var ContentRect: TRect);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, Column, CellPaintMode, @CellRect, @ContentRect]);
end;

procedure TLCLEvent.OnTVTAfterCellPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellRect: TRect);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, Column, @CellRect]);
end;

procedure TLCLEvent.OnTVTPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas);
begin
  SendEvent([Sender, TargetCanvas]);
end;

procedure TLCLEvent.OnTVTBackgroundPaintEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; const R: TRect; var Handled: Boolean);
begin
  SendEvent([Sender, TargetCanvas, @R, @Handled]);
end;

procedure TLCLEvent.OnTVTGetLineStyleEvent(Sender: TBaseVirtualTree; var Bits: Pointer);
begin
  SendEvent([Sender, @Bits]);
end;

procedure TLCLEvent.OnTVTMeasureItemEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; var NodeHeight: Integer);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, @NodeHeight]);
end;


// search, sort
procedure TLCLEvent.OnTVTCompareEvent(Sender: TBaseVirtualTree; Node1, Node2: PVirtualNode; Column: TColumnIndex; var Result: Integer);
var
  Node1Ptr: TVirtualNodePtr;
  Node2Ptr: TVirtualNodePtr;
begin
  Node1Ptr := VirtualNodeToGo(Node1^);
  Node2Ptr := VirtualNodeToGo(Node2^);
  SendEvent([Sender, @Node1Ptr, @Node2Ptr, Column, @Result]);
end;

procedure TLCLEvent.OnTVTIncrementalSearchEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; const SearchText: String; var Result: Integer);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, ToPChar(SearchText), @Result]);
end;

// operations
procedure TLCLEvent.OnTVTOperationEvent(Sender: TBaseVirtualTree; OperationKind: TVTOperationKind);
begin
  SendEvent([Sender, OperationKind]);
end;

procedure TLCLEvent.OnTVTHintKindEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var Kind: TVTHintKind);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @Kind]);
end;

procedure TLCLEvent.OnTVTDrawHintEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; R: TRect; Column: TColumnIndex);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, HintCanvas, @NodePtr, @R, Column]);
end;

procedure TLCLEvent.OnTVTGetHintSizeEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var R: TRect);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @R]);
end;

// miscellaneous
procedure TLCLEvent.OnTVTBeforeDrawLineImageEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Level: Integer; var PosX: Integer);
begin
  SendEvent([Sender, Node, Level, @PosX]);
end;

procedure TLCLEvent.OnTVTGetNodeDataSizeEvent(Sender: TBaseVirtualTree; var NodeDataSize: Integer);
begin
  SendEvent([Sender, @NodeDataSize]);
end;

procedure TLCLEvent.OnTVTKeyActionEvent(Sender: TBaseVirtualTree; var CharCode: Word; var Shift: TShiftState; var DoDefault: Boolean);
begin
  SendEvent([Sender, @CharCode, @Shift, @DoDefault]);
end;

procedure TLCLEvent.OnTVTScrollEvent(Sender: TBaseVirtualTree; DeltaX, DeltaY: Integer);
begin
  SendEvent([Sender, DeltaX, DeltaY]);
end;

procedure TLCLEvent.OnTVTUpdatingEvent(Sender: TBaseVirtualTree; State: TVTUpdateState);
begin
  SendEvent([Sender, State]);
end;

procedure TLCLEvent.OnTVTGetCursorEvent(Sender: TBaseVirtualTree; var Cursor: TCursor);
begin
  SendEvent([Sender, @Cursor]);
end;

procedure TLCLEvent.OnTVTStateChangeEvent(Sender: TBaseVirtualTree; Enter, Leave: TVirtualTreeStates);
begin
  SendEvent([Sender, PWord(@Enter)^, PWord(@Leave)^]);
end;

procedure TLCLEvent.OnTVTGetCellIsEmptyEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var IsEmpty: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, @IsEmpty]);
end;

procedure TLCLEvent.OnTVTScrollBarShowEvent(Sender: TBaseVirtualTree; Bar: Integer; Show: Boolean);
begin
  SendEvent([Sender, Bar, Show]);
end;

procedure TLCLEvent.OnTVTColumnExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Column: TVirtualTreeColumn);
begin
  SendEvent([Sender, aExportType, Column]);
end;

procedure TLCLEvent.OnTVTTreeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType);
begin
  SendEvent([Sender, aExportType]);
end;

function  TLCLEvent.OnTVTNodeExportEvent(Sender: TBaseVirtualTree; aExportType: TVTExportType; Node: PVirtualNode): Boolean;
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, aExportType, @NodePtr]);
end;

procedure TLCLEvent.OnTVTDrawNodeEvent(Sender: TBaseVirtualTree; const PaintInfo: TVTPaintInfo);
var
  PaintInfoPtr: TVTPaintInfoPtr;
begin
  // TODO 字段 ImageInfo 使用接口方式获取
  PaintInfoPtr := VTPaintInfoToGo(PaintInfo);
  SendEvent([Sender, @PaintInfoPtr]);
end;

procedure TLCLEvent.OnTVTGetCellContentMarginEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; CellContentMarginType: TVTCellContentMarginType; var CellContentMargin: TPoint);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, HintCanvas, @NodePtr, Column, CellContentMarginType, @CellContentMargin]);
end;

procedure TLCLEvent.OnTVTGetNodeWidthEvent(Sender: TBaseVirtualTree; HintCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; var NodeWidth: Integer);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, HintCanvas, @NodePtr, Column, @NodeWidth]);
end;

procedure TLCLEvent.OnTVTPaintText(Sender: TBaseVirtualTree; const TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, Column, TextType]);
end;

procedure TLCLEvent.OnTVSTGetTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType; var CellText: String);
var
  NodePtr: TVirtualNodePtr;
  CellTextPtr: PChar;
begin
  NodePtr := VirtualNodeToGo(Node^);
  CellTextPtr := ToPChar(CellText);
  SendEvent([Sender, @NodePtr, Column, TextType, @CellTextPtr]);
  CellText := StrPas(CellTextPtr);
end;

procedure TLCLEvent.OnTVSTGetHintEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; var LineBreakStyle: TVTTooltipLineBreakStyle; var HintText: String);
var
  NodePtr: TVirtualNodePtr;
  HintTextPtr: PChar;
begin
  NodePtr := VirtualNodeToGo(Node^);
  HintTextPtr := ToPChar(HintText);
  SendEvent([Sender, @NodePtr, Column, @LineBreakStyle, @HintTextPtr]);
  HintText := StrPas(HintTextPtr);
end;

// New text can only be set for variable caption.
procedure TLCLEvent.OnTVSTNewTextEvent(Sender: TBaseVirtualTree; Node: PVirtualNode; Column: TColumnIndex; const NewText: String);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, @NodePtr, Column, ToPChar(NewText)]);
end;

procedure TLCLEvent.OnTVSTShortenStringEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const S: String; TextSpace: Integer;
  var Result: String; var Done: Boolean);
var
  NodePtr: TVirtualNodePtr;
  ResultPtr: PChar;
begin
  NodePtr := VirtualNodeToGo(Node^);
  ResultPtr := ToPChar(Result);
  SendEvent([Sender, TargetCanvas, @NodePtr, Column, ToPChar(S), TextSpace, @ResultPtr, @Done]);
  Result := StrPas(ResultPtr);
end;

procedure TLCLEvent.OnTVTMeasureTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; var Extent: Integer);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, Column, ToPChar(CellText), @Extent]);
end;

procedure TLCLEvent.OnTVTDrawTextEvent(Sender: TBaseVirtualTree; TargetCanvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; const CellText: String; const CellRect: TRect;
  var DefaultDraw: Boolean);
var
  NodePtr: TVirtualNodePtr;
begin
  NodePtr := VirtualNodeToGo(Node^);
  SendEvent([Sender, TargetCanvas, @NodePtr, Column, ToPChar(CellText), @CellRect, @DefaultDraw]);
end;

end.
