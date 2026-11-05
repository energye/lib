//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uVirtualNodeWrap;

{$mode objfpc}{$H+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, laz.VirtualTrees;

type
  TVirtualNodeWrap = class;

type

  TVirtualNodeWrap = class
  private
    FData: TVirtualNode;
  public
    function Data(): PVirtualNode;
    // index of node with regard to its parent
    function Index(): cardinal;
    // number of child nodes
    function ChildCount(): cardinal;
    // height in pixels
    function NodeHeight(): word;
    // states describing various properties of the node (expanded, initialized etc.)
    function States(): TVirtualNodeStates;
    // line/button alignment
    function Align(): byte;
    // indicates the current check state (e.g. checked, pressed etc.)
    function CheckState(): TCheckState;
    // indicates which check type shall be used for this node
    function CheckType(): TCheckType;
    // dummy value to fill DWORD boundary
    function Dummy(): byte;
    // sum of this node, all of its child nodes and their child nodes etc.
    function TotalCount(): cardinal;
    // height in pixels this node covers on screen including the height of all of its  children
    // Note: Some copy routines require that all pointers (as well as the data area) in a node are
    //       located at the end of the node! Hence if you want to add new member fields (except pointers to internal
    //       data) then put them before field Parent.
    function TotalHeight(): cardinal;
    // reference to the node's parent (for the root this contains the treeview)
    function Parent(): TVirtualNodeWrap;
    // link to the node's previous sibling or nil if it is the first node
    function PrevSibling(): TVirtualNodeWrap;
    // link to the node's next sibling or nil if it is the last node
    function NextSibling(): TVirtualNodeWrap;
    // link to the node's first child...
    function FirstChild(): TVirtualNodeWrap;
    // link to the node's last child...
    function LastChild(): TVirtualNodeWrap;
  public
    constructor Create();
    destructor Destroy; override;
  public
    class function UnWrap(const AData: PVirtualNode): TVirtualNodeWrap;
  end;

implementation

constructor TVirtualNodeWrap.Create();
begin
  inherited Create();
end;

class function TVirtualNodeWrap.UnWrap(const AData: PVirtualNode): TVirtualNodeWrap;
begin
  Result := nil;
  if AData <> nil then
  begin
    Result := Create();
    Result.FData := AData^;
  end;
end;

destructor TVirtualNodeWrap.Destroy;
begin
  inherited Destroy;
end;

function TVirtualNodeWrap.Data(): PVirtualNode;
begin
  Result := @FData;
end;

function TVirtualNodeWrap.Index(): cardinal;
begin
  Result := FData.Index;
end;

function TVirtualNodeWrap.ChildCount(): cardinal;
begin
  Result := FData.ChildCount;
end;

function TVirtualNodeWrap.NodeHeight(): word;
begin
  Result := FData.NodeHeight;
end;

function TVirtualNodeWrap.States(): TVirtualNodeStates;
begin
  Result := FData.States;
end;

function TVirtualNodeWrap.Align(): byte;
begin
  Result := FData.Align;
end;

function TVirtualNodeWrap.CheckState(): TCheckState;
begin
  Result := FData.CheckState;
end;

function TVirtualNodeWrap.CheckType(): TCheckType;
begin
  Result := FData.CheckType;
end;

function TVirtualNodeWrap.Dummy(): byte;
begin
  Result := FData.Dummy;
end;

function TVirtualNodeWrap.TotalCount(): cardinal;
begin
  Result := FData.TotalCount;
end;

function TVirtualNodeWrap.TotalHeight(): cardinal;
begin
  Result := FData.TotalHeight;
end;

function TVirtualNodeWrap.Parent(): TVirtualNodeWrap;
begin
  Result := TVirtualNodeWrap.Create();
  Result.FData := FData.Parent^;
end;

function TVirtualNodeWrap.PrevSibling(): TVirtualNodeWrap;
begin
  Result := TVirtualNodeWrap.Create();
  Result.FData := FData.PrevSibling^;
end;

function TVirtualNodeWrap.NextSibling(): TVirtualNodeWrap;
begin
  Result := TVirtualNodeWrap.Create();
  Result.FData := FData.NextSibling^;
end;

function TVirtualNodeWrap.FirstChild(): TVirtualNodeWrap;
begin
  Result := TVirtualNodeWrap.Create();
  Result.FData := FData.FirstChild^;
end;

function TVirtualNodeWrap.LastChild(): TVirtualNodeWrap;
begin
  Result := TVirtualNodeWrap.Create();
  Result.FData := FData.LastChild^;
end;


end.
