//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uCEF_CustomClasss;

{$IFDEF FPC}
  {$MODE OBJFPC}{$H+}
{$ENDIF}

{$IFNDEF TARGET_64BITS}{$ALIGN ON}{$ENDIF}
{$MINENUMSIZE 4}

{$Z4+}

interface

uses
  Classes,
  uCEFTypes, uCEFInterfaces,
  uCEFStringMap, uCEFStringMultimap, uCEFStringList;

type

  /// <summary>
  /// CEF string maps are a set of key/value string pairs.
  /// </summary>
  TEnergyStringMap = class(TCefCustomStringMap)
  public
    /// <summary>
    /// Allocate a new string map.
    /// </summary>
    constructor Create; override;
    /// <summary>
    /// Free the string map.
    /// </summary>
    destructor Destroy; override;
  end;


  /// <summary>
  /// CEF string multimaps are a set of key/value string pairs.
  /// More than one value can be assigned to a single key.
  /// </summary>
  //TEnergyStringMultiMap = class(TCefBaseRefCountedRef, ICefStringMultimap)
  //public
  //  /// <summary>
  //  /// Allocate a new string multimap.
  //  /// </summary>
  //  constructor Create; override;
  //  /// <summary>
  //  /// Free the string multimap.
  //  /// </summary>
  //  destructor Destroy; override;
  //end;



  /// <summary>
  /// CEF string maps are a set of key/value string pairs.
  /// </summary>
  TEnergyStringList = class(TCefCustomStringList)
  public
    /// <summary>
    /// Allocate a new string map.
    /// </summary>
    constructor Create; override;
    /// <summary>
    /// Free the string list.
    /// </summary>
    destructor Destroy; override;
  end;

implementation


uses
  uCEFMiscFunctions, uCEFLibFunctions;

// TCustomStringMap
constructor TEnergyStringMap.Create;
begin
  inherited Create;
  FHandle := cef_string_map_alloc();
end;

destructor TEnergyStringMap.Destroy;
begin
  if (FHandle <> nil) then cef_string_map_free(FHandle);
  inherited Destroy;
end;

// TEnergyStringMultiMap
//constructor TEnergyStringMultiMap.Create;
//begin
//  inherited Create;
//  FHandle := cef_string_multimap_alloc();
//end;
//
//destructor TEnergyStringMultiMap.Destroy;
//begin
//  if (FHandle <> nil) then cef_string_multimap_free(FHandle);
//  inherited Destroy;
//end;

// TEnergyStringList
constructor TEnergyStringList.Create;
begin
  inherited Create;
  FHandle := cef_string_list_alloc();
end;

destructor TEnergyStringList.Destroy;
begin
  if (FHandle <> nil) then cef_string_list_free(FHandle);
  inherited Destroy;
end;

end.
