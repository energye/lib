//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uVirtualNodeEnumeratorWrap;

{$mode objfpc}{$H+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, laz.VirtualTrees;

type

  TVTVirtualNodeEnumerationWrap = class
  private
    FData: TVTVirtualNodeEnumeration;
  public
    function GetEnumerator: TVTVirtualNodeEnumerator;
  public
    constructor Create(const AData: TVTVirtualNodeEnumeration);
    destructor Destroy; override;
  end;

implementation

constructor TVTVirtualNodeEnumerationWrap.Create(const AData: TVTVirtualNodeEnumeration);
begin
  inherited Create();
  FData := AData;
end;

destructor TVTVirtualNodeEnumerationWrap.Destroy;
begin
  inherited Destroy;
end;

function TVTVirtualNodeEnumerationWrap.GetEnumerator(): TVTVirtualNodeEnumerator;
begin
  Result := FData.GetEnumerator;
end;



end.
