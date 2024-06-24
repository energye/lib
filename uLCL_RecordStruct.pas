//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uLCL_RecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses
  {$IFDEF LINUX}xlib,{$ENDIF}
  Types,
  Classes, SysUtils, Graphics, Controls,
  ImgList,
  laz.VirtualTrees;

type

  PStatStgPtr = ^TStatStgPtr;

  TStatStgPtr = record
    pwcsName: PChar;
    dwType: PDWord;
    cbSize: PLargeuInt;
    mtime: PChar; // TFileTime
    ctime: PChar; // TFileTime
    atime: PChar; // TFileTime
    grfMode: PDWord;
    grfLocksSupported: PDWord;
    clsid: PChar;
    grfStateBits: PDWord;
    reserved: PDWord;
  end;

  // THintInfo
  THintInfoPtr = record
    HintControl: Pointer;
    HintWindowClass: Pointer;
    HintPos: PPoint;
    HintMaxWidth: PInteger;
    HintColor: PColor;
    CursorRect: PRect;
    CursorPos: PPoint;
    ReshowTimeout: PInteger;
    HideTimeout: PInteger;
    HintStr: PChar;
    HintData: Pointer;
  end;

  // TVirtualNode
  TVirtualNodePtr = record
    Index: PCardinal;         // index of node with regard to its parent
    ChildCount: PCardinal;    // number of child nodes
    NodeHeight: PWord;        // height in pixels
    States: Pointer;           // TVirtualNodeStates;  // states describing various properties of the node (expanded, initialized etc.)
    Align: pbyte;             // line/button alignment
    CheckState: PInteger;    // TCheckState;  // indicates the current check state (e.g. checked, pressed etc.)
    CheckType: PInteger;     // TCheckType;   // indicates which check type shall be used for this node
    Dummy: pbyte;             // dummy value to fill DWORD boundary
    TotalCount,              // sum of this node, all of its child nodes and their child nodes etc.
    TotalHeight: PCardinal;   // height in pixels this node covers on screen including the height of all of its
    // children
    // Note: Some copy routines require that all pointers (as well as the data area) in a node are
    //       located at the end of the node! Hence if you want to add new member fields (except pointers to internal
    //       data) then put them before field Parent.
    Parent,                  // reference to the node's parent (for the root this contains the treeview)
    PrevSibling,             // link to the node's previous sibling or nil if it is the first node
    NextSibling,             // link to the node's next sibling or nil if it is the last node
    FirstChild,              // link to the node's first child...
    LastChild: PVirtualNode;      //PVirtualNode; // link to the node's last child...
    //Data: Pointer;           //record end; 不知道在这里咋用   // this is a placeholder, each node gets extra data determined by NodeDataSize
  end;

  // THeaderPaintInfo
  THeaderPaintInfoPtr = record
    TargetCanvas: Pointer; // TCanvas;
    Column: Pointer; // TVirtualTreeColumn;
    PaintRectangle: PRect;
    TextRectangle: PRect;
    IsHoverIndex,
    IsDownIndex,
    IsEnabled,
    ShowHeaderGlyph,
    ShowSortGlyph,
    ShowRightBorder: PBoolean;
    DropMark: PInteger; // TVTDropMarkMode;
    GlyphPos,
    SortGlyphPos: PPoint;
  end;

  // THitInfo
  THitInfoPtr = record
    HitNode: PVirtualNode;
    HitPositions: Pointer; // THitPositions;
    HitColumn: PInteger;
    HitPoint: PPoint;
  end;

  // TVTImageInfo
  TVTImageInfoPtr = record
    Index: PInteger;           // Index in the associated image list.
    XPos,                      // Horizontal position in the current target canvas.
    YPos: PInteger;            // Vertical position in the current target canvas.
    Ghosted: PBoolean;         // Flag to indicate that the image must be drawn slightly lighter.
    Images: Pointer;           // TCustomImageList; // The image list to be used for painting.
  end;

  // TVTPaintInfo
  TVTPaintInfoPtr = record
    Canvas: Pointer;              // TCanvas; // the canvas to paint on
    PaintOptions: Pointer;        // TVTInternalPaintOptions;  // a copy of the paint options passed to PaintTree
    Node: PVirtualNode;           // the node to paint
    Column: PInteger;             // the node's column index to paint
    Position: PCardinal;          // the column position of the node
    CellRect,                     // the node cell
    ContentRect: PRect;           // the area of the cell used for the node's content
    NodeWidth: PInteger;          // the actual node width
    Alignment: PInteger;          // TAlignment; // how to align within the node rectangle
    CaptionAlignment: PInteger;   // TAlignment; // how to align text within the caption rectangle
    BidiMode: PInteger;           // TBidiMode; // directionality to be used for painting
    BrushOrigin: PPoint;          // the alignment for the brush used to draw dotted lines
    ImageInfo: Pointer;           // array[TVTImageInfoIndex] of TVTImageInfo; // info about each possible node image
    //ImageInfoCount: PInteger;     // TVTImageInfo count
  end;

  PImageInfoArray = ^TImageInfoArray;
  TImageInfoArray = array[TVTImageInfoIndex] of TVTImageInfo;

// 文件时间转Pas时间
function FileTimeToDateTime(const FileTime: TFileTime): TDateTime;

// THintInfo
function HintInfoToGo(const AHitInfo: THintInfo): THintInfoPtr;
function HintInfoToPas(const AHitInfo: THintInfoPtr): THintInfo;

// TVirtualNode
function VirtualNodeToGo(const AVirtualNode: TVirtualNode): TVirtualNodePtr;
function VirtualNodeToPas(const AVirtualNode: TVirtualNodePtr): TVirtualNode;

// THeaderPaintInfo
function HeaderPaintInfoToGo(const AHeaderPaintInfo: THeaderPaintInfo): THeaderPaintInfoPtr;
function HeaderPaintInfoToPas(const AHeaderPaintInfo: THeaderPaintInfoPtr): THeaderPaintInfo;

// THitInfo
function HitInfoToGo(const AHitInfo: THitInfo): THitInfoPtr;
function HitInfoToPas(const AHitInfo: THitInfoPtr): THitInfo;

// TVTImageInfo
function VTImageInfoToGo(const AVTImageInfo: TVTImageInfo): TVTImageInfoPtr;
function VTImageInfoToPas(const AVTImageInfo: TVTImageInfoPtr): TVTImageInfo;

// TVTPaintInfo
function VTPaintInfoToGo(const AVTPaintInfo: TVTPaintInfo): TVTPaintInfoPtr;
function VTPaintInfoToPas(const AVTPaintInfo: TVTPaintInfoPtr): TVTPaintInfo;

implementation

function FileTimeToDateTime(const FileTime: TFileTime): TDateTime;
begin
  // 将FILETIME结构转换为TDateTime
  Result := int64(FileTime.dwLowDateTime) + int64(FileTime.dwHighDateTime) * $100000000;
  Result := Result / (24 * 60 * 60 * 10000000) - 2082844800; // 调整到Unix时间戳
end;

// THintInfo
function HintInfoToGo(const AHitInfo: THintInfo): THintInfoPtr;
begin
  Result.HintControl := @AHitInfo.HintControl;
  Result.HintWindowClass := @AHitInfo.HintWindowClass;
  Result.HintPos := @AHitInfo.HintPos;
  Result.HintMaxWidth := @AHitInfo.HintMaxWidth;
  Result.HintColor := @AHitInfo.HintColor;
  Result.CursorRect := @AHitInfo.CursorRect;
  Result.CursorPos := @AHitInfo.CursorPos;
  Result.ReshowTimeout := @AHitInfo.ReshowTimeout;
  Result.HideTimeout := @AHitInfo.HideTimeout;
  Result.HintStr := PChar(AHitInfo.HintStr);
  Result.HintData := AHitInfo.HintData;
end;

function HintInfoToPas(const AHitInfo: THintInfoPtr): THintInfo;
begin
  Result.HintControl := TControl(AHitInfo.HintControl);
  Result.HintWindowClass := TWinControlClass(AHitInfo.HintWindowClass);
  Result.HintPos := AHitInfo.HintPos^;
  Result.HintMaxWidth := AHitInfo.HintMaxWidth^;
  Result.HintColor := AHitInfo.HintColor^;
  Result.CursorRect := AHitInfo.CursorRect^;
  Result.CursorPos := AHitInfo.CursorPos^;
  Result.ReshowTimeout := AHitInfo.ReshowTimeout^;
  Result.HideTimeout := AHitInfo.HideTimeout^;
  Result.HintStr := string(AHitInfo.HintStr);
  Result.HintData := AHitInfo.HintData;
end;

// TVirtualNode
function VirtualNodeToGo(const AVirtualNode: TVirtualNode): TVirtualNodePtr;
begin
  Result.Index := @AVirtualNode.Index;
  Result.ChildCount := @AVirtualNode.ChildCount;
  Result.NodeHeight := @AVirtualNode.NodeHeight;
  Result.States := @AVirtualNode.States;
  Result.Align := @AVirtualNode.Align;
  Result.CheckState := @AVirtualNode.CheckState;
  Result.CheckType := @AVirtualNode.CheckType;
  Result.Dummy := @AVirtualNode.Dummy;
  Result.TotalCount := @AVirtualNode.TotalCount;
  Result.TotalHeight := @AVirtualNode.TotalHeight;
  Result.Parent := AVirtualNode.Parent;
  Result.PrevSibling := AVirtualNode.PrevSibling;
  Result.NextSibling := AVirtualNode.NextSibling;
  Result.FirstChild := AVirtualNode.FirstChild;
  Result.LastChild := AVirtualNode.LastChild;
end;

function VirtualNodeToPas(const AVirtualNode: TVirtualNodePtr): TVirtualNode;
begin
  Result.Index := AVirtualNode.Index^;
  Result.ChildCount := AVirtualNode.ChildCount^;
  Result.NodeHeight := AVirtualNode.NodeHeight^;
  Result.States := TVirtualNodeStates(AVirtualNode.States^);
  Result.Align := AVirtualNode.Align^;
  Result.CheckState := TCheckState(AVirtualNode.CheckState^);
  Result.CheckType := TCheckType(AVirtualNode.CheckType^);
  Result.Dummy := AVirtualNode.Dummy^;
  Result.TotalCount := AVirtualNode.TotalCount^;
  Result.TotalHeight := AVirtualNode.TotalHeight^;
  Result.Parent := AVirtualNode.Parent;
  Result.PrevSibling := AVirtualNode.PrevSibling;
  Result.NextSibling := AVirtualNode.NextSibling;
  Result.FirstChild := AVirtualNode.FirstChild;
  Result.LastChild := AVirtualNode.LastChild;
end;

// THeaderPaintInfo
function HeaderPaintInfoToGo(const AHeaderPaintInfo: THeaderPaintInfo): THeaderPaintInfoPtr;
begin
  Result.TargetCanvas := @AHeaderPaintInfo.TargetCanvas;
  Result.Column := @AHeaderPaintInfo.Column;
  Result.PaintRectangle := @AHeaderPaintInfo.PaintRectangle;
  Result.TextRectangle := @AHeaderPaintInfo.TextRectangle;
  Result.IsHoverIndex := @AHeaderPaintInfo.IsHoverIndex;
  Result.IsDownIndex := @AHeaderPaintInfo.IsDownIndex;
  Result.IsEnabled := @AHeaderPaintInfo.IsEnabled;
  Result.ShowHeaderGlyph := @AHeaderPaintInfo.ShowHeaderGlyph;
  Result.ShowSortGlyph := @AHeaderPaintInfo.ShowSortGlyph;
  Result.ShowRightBorder := @AHeaderPaintInfo.ShowRightBorder;
  Result.DropMark := @AHeaderPaintInfo.DropMark;
  Result.GlyphPos := @AHeaderPaintInfo.GlyphPos;
  Result.SortGlyphPos := @AHeaderPaintInfo.SortGlyphPos;
end;

function HeaderPaintInfoToPas(const AHeaderPaintInfo: THeaderPaintInfoPtr): THeaderPaintInfo;
begin
  Result.TargetCanvas := TCanvas(AHeaderPaintInfo.TargetCanvas);
  Result.Column := TVirtualTreeColumn(AHeaderPaintInfo.Column);
  Result.PaintRectangle := AHeaderPaintInfo.PaintRectangle^;
  Result.TextRectangle := AHeaderPaintInfo.TextRectangle^;
  Result.IsHoverIndex := AHeaderPaintInfo.IsHoverIndex^;
  Result.IsDownIndex := AHeaderPaintInfo.IsDownIndex^;
  Result.IsEnabled := AHeaderPaintInfo.IsEnabled^;
  Result.ShowHeaderGlyph := AHeaderPaintInfo.ShowHeaderGlyph^;
  Result.ShowSortGlyph := AHeaderPaintInfo.ShowSortGlyph^;
  Result.ShowRightBorder := AHeaderPaintInfo.ShowRightBorder^;
  Result.DropMark := TVTDropMarkMode(AHeaderPaintInfo.DropMark^);
  Result.GlyphPos := AHeaderPaintInfo.GlyphPos^;
  Result.SortGlyphPos := AHeaderPaintInfo.SortGlyphPos^;
end;

// THitInfo
function HitInfoToGo(const AHitInfo: THitInfo): THitInfoPtr;
begin
  Result.HitNode := AHitInfo.HitNode;
  Result.HitPositions := @AHitInfo.HitPositions;
  Result.HitColumn := @AHitInfo.HitColumn;
  Result.HitPoint := @AHitInfo.HitPoint;
end;

function HitInfoToPas(const AHitInfo: THitInfoPtr): THitInfo;
begin
  Result.HitNode := AHitInfo.HitNode;
  Result.HitPositions := THitPositions(AHitInfo.HitPositions^);
  Result.HitColumn := AHitInfo.HitColumn^;
  Result.HitPoint := AHitInfo.HitPoint^;
end;

// TVTImageInfo
function VTImageInfoToGo(const AVTImageInfo: TVTImageInfo): TVTImageInfoPtr;
begin
  Result.Index := @AVTImageInfo.Index;
  Result.XPos := @AVTImageInfo.XPos;
  Result.YPos := @AVTImageInfo.YPos;
  Result.Ghosted := @AVTImageInfo.Ghosted;
  Result.Images := @AVTImageInfo.Images;
end;

function VTImageInfoToPas(const AVTImageInfo: TVTImageInfoPtr): TVTImageInfo;
begin
  Result.Index := AVTImageInfo.Index^;
  Result.XPos := AVTImageInfo.XPos^;
  Result.YPos := AVTImageInfo.YPos^;
  Result.Ghosted := AVTImageInfo.Ghosted^;
  Result.Images := TCustomImageList(AVTImageInfo.Images);
end;


// TVTPaintInfo
function VTPaintInfoToGo(const AVTPaintInfo: TVTPaintInfo): TVTPaintInfoPtr;
  //var
  //  ImageInfoCount: Integer;
begin
  Result.Canvas := @AVTPaintInfo.Canvas;
  Result.PaintOptions := @AVTPaintInfo.PaintOptions;
  Result.Node := AVTPaintInfo.Node;
  Result.Column := @AVTPaintInfo.Column;
  Result.Position := @AVTPaintInfo.Position;
  Result.CellRect := @AVTPaintInfo.CellRect;
  Result.ContentRect := @AVTPaintInfo.ContentRect;
  Result.NodeWidth := @AVTPaintInfo.NodeWidth;
  Result.Alignment := @AVTPaintInfo.Alignment;
  Result.CaptionAlignment := @AVTPaintInfo.CaptionAlignment;
  Result.BidiMode := @AVTPaintInfo.BidiMode;
  Result.BrushOrigin := @AVTPaintInfo.BrushOrigin;
  Result.ImageInfo := @AVTPaintInfo.ImageInfo;
  //ImageInfoCount := Length(AVTPaintInfo.ImageInfo);
  //Result.ImageInfoCount := @ImageInfoCount;
end;

function VTPaintInfoToPas(const AVTPaintInfo: TVTPaintInfoPtr): TVTPaintInfo;
  //var
  //  I: Integer;
begin
  Result.Canvas := TCanvas(AVTPaintInfo.Canvas);
  Result.PaintOptions := TVTInternalPaintOptions(AVTPaintInfo.PaintOptions^);
  Result.Node := AVTPaintInfo.Node;
  Result.Column := AVTPaintInfo.Column^;
  Result.Position := AVTPaintInfo.Position^;
  Result.CellRect := AVTPaintInfo.CellRect^;
  Result.ContentRect := AVTPaintInfo.ContentRect^;
  Result.NodeWidth := AVTPaintInfo.NodeWidth^;
  Result.Alignment := TAlignment(AVTPaintInfo.Alignment^);
  Result.CaptionAlignment := TAlignment(AVTPaintInfo.CaptionAlignment^);
  Result.BidiMode := TBidiMode(AVTPaintInfo.BidiMode^);
  Result.BrushOrigin := AVTPaintInfo.BrushOrigin^;
  //Result.ImageInfo := AVTPaintInfo.ImageInfo;
  //Result.ImageInfoCount := AVTPaintInfo.ImageInfoCount;
end;

end.
