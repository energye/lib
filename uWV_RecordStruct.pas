//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uWV_RecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses
  SysUtils, Controls, Types;

type

  PCustomSchemeInfoPtr = ^TCustomSchemeInfoPtr;

  // 自定义URL协议信息
  TCustomSchemeInfoPtr = record
    SchemeName: PChar;
    TreatAsSecure: Boolean;
    AllowedDomains: PChar;
    HasAuthorityComponent: Boolean;
  end;

implementation

end.
