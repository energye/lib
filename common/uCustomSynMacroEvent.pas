//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uCustomSynMacroEvent;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Controls,
  SynMacroRecorder, SynEditKeyCmds, SynEditHighlighter, SynEditTextBase, SynEditTypes;

type

  TSynMacroWriteCommandEvent = procedure(const ACmd: TSynEditorCommand) of object;
  TSynMacroWriteEventStrEvent = procedure(const AParam: string) of object;
  TSynMacroWriteEventIntEvent = procedure(const ACmd: integer) of object;

  TSynMacroReaderGetParamAsIntEvent = function(Index: Integer): Integer of object;
  TSynMacroReaderGetParamAsStringEvent = function(Index: Integer): string of object;
  TSynMacroReaderGetParamTypeEvent = function(Index: Integer): TSynEventParamType of object;
  TSynMacroReaderEventCommandEvent = function(): TSynEditorCommand of object;
  TSynMacroReaderParamCountEvent = function(): Integer of object;

  TSynBaseHighlighterRIntEvent = function(): integer of object;
  TSynBaseHighlighterRStrEvent = function(): string of object;
  TSynBaseHighlighterRBoolEvent = function(): boolean of object;
  TSynBaseHighlighterRPtrEvent = function(): Pointer of object;
  TSynBaseHighlighterIIntRHAttrEvent = function(index: integer): TSynHighlighterAttributes of object;
  TSynBaseHighlighterRIdeCharEvent = function(): TSynIdentChars of object;
  TSynBaseHighlighterIEsbRHrlCharEvent = function(ALines: TSynEditStringsBase): TSynHighlighterRangeList of object;
  TSynBaseHighlighterIIntRDdcsEvent = function(index: integer): TSynDividerDrawConfigSetting of object;
  TSynBaseHighlighterIIntRDdcEvent = function(index: integer): TSynDividerDrawConfig of object;
  TSynBaseHighlighterIIntBoolRIntEvent = function(startIndex, endIndex: Integer; forceEndIndex: Boolean): Integer of object;
  TSynBaseHighlighterRHAttrEvent = function(): TSynHighlighterAttributes of object;
  TSynBaseHighlighterIStrRBoolEvent = function(const value: string): boolean of object;
  TSynBaseHighlighterIIntRBoolEvent = function(const value: integer): boolean of object;
  TSynBaseHighlighterIIdeCharEvent = procedure(AChars: TSynIdentChars) of object;
  TSynBaseHighlighterIStrEvent = procedure(value: string) of object;
  TSynBaseHighlighterIIntEvent = procedure(value: integer) of object;
  TSynBaseHighlighterIHrlCharEvent = procedure(ARangeList: TSynHighlighterRangeList) of object;
  TSynBaseHighlighterEvent = procedure() of object;
  TSynBaseHighlighterOStrIntEvent = procedure(out TokenStart: string; out TokenLength: integer) of object;
  TSynBaseHighlighterIStrIntEvent = procedure(const value: String; lineNumber:Integer) of object;
  TSynBaseHighlighterIStrsEvent = procedure(strings: TStrings) of object;
  TSynBaseHighlighterIPtrEvent = procedure(Value: Pointer) of object;

  TCustomSynMacroEventWriter = class(TSynMacroEventWriter)
  private
    FWriteEventCommand: TSynMacroWriteCommandEvent;
    FWriteEventStr: TSynMacroWriteEventStrEvent;
    FWriteEventInt: TSynMacroWriteEventIntEvent;
  protected
    procedure WriteEventCommand(const ACmd: TSynEditorCommand); override;
    procedure WriteEventParam(const AParam: string); override;
    procedure WriteEventParam(const AParam: integer); override;
  published
    property OnWriteEventCommand: TSynMacroWriteCommandEvent read FWriteEventCommand write FWriteEventCommand;
    property OnWriteEventStr: TSynMacroWriteEventStrEvent read FWriteEventStr write FWriteEventStr;
    property OnWriteEventInt: TSynMacroWriteEventIntEvent read FWriteEventInt write FWriteEventInt;
  end;

  TCustomSynMacroEventReader = class(TSynMacroEventReader)
  private
    FGetParamAsInt: TSynMacroReaderGetParamAsIntEvent;
    FGetParamAsString: TSynMacroReaderGetParamAsStringEvent;
    FGetParamType: TSynMacroReaderGetParamTypeEvent;
    FEventCommand: TSynMacroReaderEventCommandEvent;
    FParamCount: TSynMacroReaderParamCountEvent;
  protected
    function GetParamAsInt(Index: Integer): Integer; override;
    function GetParamAsString(Index: Integer): string; override;
    function GetParamType(Index: Integer): TSynEventParamType; override;
  public
    function  EventCommand(): TSynEditorCommand; override;
    function  ParamCount(): Integer; override;
  published
    property OnGetParamAsInt: TSynMacroReaderGetParamAsIntEvent read FGetParamAsInt write FGetParamAsInt;
    property OnGetParamAsString: TSynMacroReaderGetParamAsStringEvent read FGetParamAsString write FGetParamAsString;
    property OnGetParamType: TSynMacroReaderGetParamTypeEvent read FGetParamType write FGetParamType;
    property OnEventCommand: TSynMacroReaderEventCommandEvent read FEventCommand write FEventCommand;
    property OnParamCount: TSynMacroReaderParamCountEvent read FParamCount write FParamCount;
  end;


  TSynBaseHighlighter = class(TSynCustomHighlighter)
  private
    FGetInstanceLanguageName: TSynBaseHighlighterRStrEvent;
    FGetAttribCount: TSynBaseHighlighterRIntEvent;
    FGetAttribute: TSynBaseHighlighterIIntRHAttrEvent;
    FGetDefaultAttribute: TSynBaseHighlighterIIntRHAttrEvent;
    FGetDefaultFilter: TSynBaseHighlighterRStrEvent;
    FGetIdentChars: TSynBaseHighlighterRIdeCharEvent;
    FSetWordBreakChars: TSynBaseHighlighterIIdeCharEvent;
    FGetSampleSource: TSynBaseHighlighterRStrEvent;
    FIsFilterStored: TSynBaseHighlighterRBoolEvent;
    FSetDefaultFilter: TSynBaseHighlighterIStrEvent;
    FSetSampleSource: TSynBaseHighlighterIStrEvent;
    FGetRangeIdentifier: TSynBaseHighlighterRPtrEvent;
    FCreateRangeList: TSynBaseHighlighterIEsbRHrlCharEvent;
    FAfterAttachedToRangeList: TSynBaseHighlighterIHrlCharEvent;
    FBeforeDetachedFromRangeList: TSynBaseHighlighterIHrlCharEvent;
    FUpdateRangeInfoAtLine: TSynBaseHighlighterIIntRBoolEvent;
    FDoCurrentLinesChanged: TSynBaseHighlighterEvent;
    FGetDrawDivider: TSynBaseHighlighterIIntRDdcsEvent;
    FGetDividerDrawConfig: TSynBaseHighlighterIIntRDdcEvent;
    FGetDividerDrawConfigCount: TSynBaseHighlighterRIntEvent;
    FPerformScan: TSynBaseHighlighterIIntBoolRIntEvent;
    FGetEol: TSynBaseHighlighterRBoolEvent;
    FGetRange: TSynBaseHighlighterRPtrEvent;
    FGetToken: TSynBaseHighlighterRStrEvent;
    FGetTokenEx: TSynBaseHighlighterOStrIntEvent;
    FGetEndOfLineAttribute: TSynBaseHighlighterRHAttrEvent;
    FGetTokenAttribute: TSynBaseHighlighterRHAttrEvent;
    FGetTokenKind: TSynBaseHighlighterRIntEvent;
    FGetTokenPos: TSynBaseHighlighterRIntEvent;
    FGetTokenLen: TSynBaseHighlighterRIntEvent;
    FIsKeyword: TSynBaseHighlighterIStrRBoolEvent;
    FNext: TSynBaseHighlighterEvent;
    FStartAtLineIndex: TSynBaseHighlighterIIntEvent;
    FSetRange: TSynBaseHighlighterIPtrEvent;
    FResetRange: TSynBaseHighlighterEvent;
    FSetLine: TSynBaseHighlighterIStrIntEvent;
    FUseUserSettings: TSynBaseHighlighterIIntRBoolEvent;
    FEnumUserSettings: TSynBaseHighlighterIStrsEvent;
  protected
    function GetInstanceLanguageName(): string; override; // virtual;
    function GetAttribCount(): integer; override; // virtual;
    function GetAttribute(idx: integer): TSynHighlighterAttributes; override; // virtual;
    function GetDefaultAttribute(Index: integer): TSynHighlighterAttributes; override; // virtual; abstract;
    function GetDefaultFilter(): string; override; // virtual;
    function GetIdentChars(): TSynIdentChars; override; // virtual;
    procedure SetWordBreakChars(AChars: TSynIdentChars); override; // virtual;
    function GetSampleSource(): string; override; // virtual;
    function IsFilterStored(): boolean; override; // virtual;
    procedure SetDefaultFilter(Value: string); override; // virtual;
    procedure SetSampleSource(Value: string); override; // virtual;
    function GetRangeIdentifier(): Pointer; override; // virtual;
    function CreateRangeList(ALines: TSynEditStringsBase): TSynHighlighterRangeList; override; // virtual;
    procedure AfterAttachedToRangeList(ARangeList: TSynHighlighterRangeList); override; // virtual;
    procedure BeforeDetachedFromRangeList(ARangeList: TSynHighlighterRangeList); override; // virtual;
    function UpdateRangeInfoAtLine(Index: Integer): Boolean; override; // virtual;
    procedure DoCurrentLinesChanged(); override; // virtual;
    function GetDrawDivider(Index: integer): TSynDividerDrawConfigSetting; override; // virtual;
    function GetDividerDrawConfig(Index: Integer): TSynDividerDrawConfig; override; // virtual;
    function GetDividerDrawConfigCount(): Integer; override; // virtual;
    function PerformScan(StartIndex, EndIndex: Integer; ForceEndIndex: Boolean = False): Integer; override; // virtual;
    function GetEol(): Boolean; override; // virtual; abstract;
    function GetRange(): Pointer; override; // virtual;
    function GetToken(): string; override; // virtual; abstract;
    procedure GetTokenEx(out TokenStart: PChar; out TokenLength: integer); override; // virtual; abstract;
    function GetEndOfLineAttribute(): TSynHighlighterAttributes; override; // virtual;
    function GetTokenAttribute(): TSynHighlighterAttributes; override; // virtual; abstract;
    function GetTokenKind(): integer; override; // virtual; abstract;
    function GetTokenPos(): Integer; override; // virtual; abstract;
    function GetTokenLen(): Integer; override; // virtual;
    function IsKeyword(const AKeyword: string): boolean; override; // virtual;
    procedure Next(); override; // virtual; abstract;
    procedure StartAtLineIndex(LineNumber: Integer); override; // virtual;
    procedure SetRange(Value: Pointer); override; // virtual;
    procedure ResetRange(); override; // virtual;
    procedure SetLine(const NewValue: string; LineNumber: Integer); override; // virtual;
    function UseUserSettings(settingIndex: integer): boolean; override; // virtual;
    procedure EnumUserSettings(Settings: TStrings); override; // virtual;
  public
    destructor Destroy; override;
  published
    property OnGetInstanceLanguageName: TSynBaseHighlighterRStrEvent read FGetInstanceLanguageName write FGetInstanceLanguageName;
    property OnGetAttribCount: TSynBaseHighlighterRIntEvent read FGetAttribCount write FGetAttribCount;
    property OnGetAttribute: TSynBaseHighlighterIIntRHAttrEvent read FGetAttribute write FGetAttribute;
    property OnGetDefaultAttribute: TSynBaseHighlighterIIntRHAttrEvent read FGetDefaultAttribute write FGetDefaultAttribute;
    property OnGetDefaultFilter: TSynBaseHighlighterRStrEvent read FGetDefaultFilter write FGetDefaultFilter;
    property OnGetIdentChars: TSynBaseHighlighterRIdeCharEvent read FGetIdentChars write FGetIdentChars;
    property OnSetWordBreakChars: TSynBaseHighlighterIIdeCharEvent read FSetWordBreakChars write FSetWordBreakChars;
    property OnGetSampleSource: TSynBaseHighlighterRStrEvent read FGetSampleSource write FGetSampleSource;
    property OnIsFilterStored: TSynBaseHighlighterRBoolEvent read FIsFilterStored write FIsFilterStored;
    property OnSetDefaultFilter: TSynBaseHighlighterIStrEvent read FSetDefaultFilter write FSetDefaultFilter;
    property OnSetSampleSource: TSynBaseHighlighterIStrEvent read FSetSampleSource write FSetSampleSource;
    property OnGetRangeIdentifier: TSynBaseHighlighterRPtrEvent read FGetRangeIdentifier write FGetRangeIdentifier;
    property OnCreateRangeList: TSynBaseHighlighterIEsbRHrlCharEvent read FCreateRangeList write FCreateRangeList;
    property OnAfterAttachedToRangeList: TSynBaseHighlighterIHrlCharEvent read FAfterAttachedToRangeList write FAfterAttachedToRangeList;
    property OnBeforeDetachedFromRangeList: TSynBaseHighlighterIHrlCharEvent read FBeforeDetachedFromRangeList write FBeforeDetachedFromRangeList;
    property OnUpdateRangeInfoAtLine: TSynBaseHighlighterIIntRBoolEvent read FUpdateRangeInfoAtLine write FUpdateRangeInfoAtLine;
    property OnDoCurrentLinesChanged: TSynBaseHighlighterEvent read FDoCurrentLinesChanged write FDoCurrentLinesChanged;
    property OnGetDrawDivider: TSynBaseHighlighterIIntRDdcsEvent read FGetDrawDivider write FGetDrawDivider;
    property OnGetDividerDrawConfig: TSynBaseHighlighterIIntRDdcEvent read FGetDividerDrawConfig write FGetDividerDrawConfig;
    property OnGetDividerDrawConfigCount: TSynBaseHighlighterRIntEvent read FGetDividerDrawConfigCount write FGetDividerDrawConfigCount;
    property OnPerformScan: TSynBaseHighlighterIIntBoolRIntEvent read FPerformScan write FPerformScan;
    property OnGetEol: TSynBaseHighlighterRBoolEvent read FGetEol write FGetEol;
    property OnGetRange: TSynBaseHighlighterRPtrEvent read FGetRange write FGetRange;
    property OnGetToken: TSynBaseHighlighterRStrEvent read FGetToken write FGetToken;
    property OnGetTokenEx: TSynBaseHighlighterOStrIntEvent read FGetTokenEx write FGetTokenEx;
    property OnGetEndOfLineAttribute: TSynBaseHighlighterRHAttrEvent read FGetEndOfLineAttribute write FGetEndOfLineAttribute;
    property OnGetTokenAttribute: TSynBaseHighlighterRHAttrEvent read FGetTokenAttribute write FGetTokenAttribute;
    property OnGetTokenKind: TSynBaseHighlighterRIntEvent read FGetTokenKind write FGetTokenKind;
    property OnGetTokenPos: TSynBaseHighlighterRIntEvent read FGetTokenPos write FGetTokenPos;
    property OnGetTokenLen: TSynBaseHighlighterRIntEvent read FGetTokenLen write FGetTokenLen;
    property OnIsKeyword: TSynBaseHighlighterIStrRBoolEvent read FIsKeyword write FIsKeyword;
    property OnNext: TSynBaseHighlighterEvent read FNext write FNext;
    property OnStartAtLineIndex: TSynBaseHighlighterIIntEvent read FStartAtLineIndex write FStartAtLineIndex;
    property OnSetRange: TSynBaseHighlighterIPtrEvent read FSetRange write FSetRange;
    property OnResetRange: TSynBaseHighlighterEvent read FResetRange write FResetRange;
    property OnSetLine: TSynBaseHighlighterIStrIntEvent read FSetLine write FSetLine;
    property OnUseUserSettings: TSynBaseHighlighterIIntRBoolEvent read FUseUserSettings write FUseUserSettings;
    property OnEnumUserSettings: TSynBaseHighlighterIStrsEvent read FEnumUserSettings write FEnumUserSettings;
  end;
  


implementation

// TCustomSynMacroEventWriter

procedure TCustomSynMacroEventWriter.WriteEventCommand(const ACmd: TSynEditorCommand);
begin
  if Assigned(FWriteEventCommand) then FWriteEventCommand(ACmd);
end;

procedure TCustomSynMacroEventWriter.WriteEventParam(const AParam: string);
begin
  if Assigned(FWriteEventStr) then FWriteEventStr(AParam);
end;

procedure TCustomSynMacroEventWriter.WriteEventParam(const AParam: integer);
begin
  if Assigned(FWriteEventInt) then FWriteEventInt(AParam);
end;

// TCustomSynMacroEventReader

function TCustomSynMacroEventReader.GetParamAsInt(Index: Integer): Integer;
begin
  Result := 0;
  if Assigned(FGetParamAsInt) then Result := FGetParamAsInt(Index);
end;

function TCustomSynMacroEventReader.GetParamAsString(Index: Integer): string;
begin
  Result := '';
  if Assigned(FGetParamAsString) then Result := FGetParamAsString(Index);
end;

function TCustomSynMacroEventReader.GetParamType(Index: Integer): TSynEventParamType;
begin
  Result := ptString;
  if Assigned(FGetParamType) then Result := FGetParamType(Index);
end;

function  TCustomSynMacroEventReader.EventCommand(): TSynEditorCommand;
begin
  Result := 0;
  if Assigned(FEventCommand) then Result := FEventCommand();
end;

function  TCustomSynMacroEventReader.ParamCount(): Integer;
begin
  Result := 0;
  if Assigned(FParamCount) then Result := FParamCount();
end;


// TSynBaseHighlighter

function TSynBaseHighlighter.GetInstanceLanguageName(): string; // virtual;
begin
  Result := inherited;
  if Assigned(FGetInstanceLanguageName) then Result := FGetInstanceLanguageName();
end;

function TSynBaseHighlighter.GetAttribCount(): integer; // virtual;
begin
  Result := inherited;
  if Assigned(FGetAttribCount) then Result := FGetAttribCount();
end;

function TSynBaseHighlighter.GetAttribute(idx: integer): TSynHighlighterAttributes; // virtual;
begin
  Result := inherited;
  if Assigned(FGetAttribute) then Result := FGetAttribute(idx);
end;

function TSynBaseHighlighter.GetDefaultAttribute(Index: integer): TSynHighlighterAttributes; // virtual; abstract;
begin
  Result := nil;
  if Assigned(FGetDefaultAttribute) then Result := FGetDefaultAttribute(Index);
end;

function TSynBaseHighlighter.GetDefaultFilter(): string; // virtual;
begin
  Result := inherited;
  if Assigned(FGetDefaultFilter) then Result := FGetDefaultFilter();
end;

function TSynBaseHighlighter.GetIdentChars(): TSynIdentChars; // virtual;
begin
  Result := inherited;
  if Assigned(FGetIdentChars) then Result := FGetIdentChars();
end;

procedure TSynBaseHighlighter.SetWordBreakChars(AChars: TSynIdentChars); // virtual;
begin
  if Assigned(FSetWordBreakChars) then FSetWordBreakChars(AChars);
end;

function TSynBaseHighlighter.GetSampleSource(): string; // virtual;
begin
  Result := inherited;
  if Assigned(FGetSampleSource) then Result := FGetSampleSource();
end;

function TSynBaseHighlighter.IsFilterStored(): boolean; // virtual;
begin
  Result := inherited;
  if Assigned(FIsFilterStored) then Result := FIsFilterStored();
end;

procedure TSynBaseHighlighter.SetDefaultFilter(Value: string); // virtual;
begin
  inherited;
  if Assigned(FSetDefaultFilter) then FSetDefaultFilter(Value);
end;

procedure TSynBaseHighlighter.SetSampleSource(Value: string); // virtual;
begin
  inherited;
  if Assigned(FSetSampleSource) then FSetSampleSource(Value);
end;

function TSynBaseHighlighter.GetRangeIdentifier(): Pointer; // virtual;
begin
  Result := inherited;
  if Assigned(FGetRangeIdentifier) then Result := FGetRangeIdentifier();
end;

function TSynBaseHighlighter.CreateRangeList(ALines: TSynEditStringsBase): TSynHighlighterRangeList; // virtual;
begin
  Result := nil;
  if Assigned(FCreateRangeList) then Result := FCreateRangeList(ALines);
  if Result = nil then Result := inherited;
end;

procedure TSynBaseHighlighter.AfterAttachedToRangeList(ARangeList: TSynHighlighterRangeList); // virtual;
begin
  inherited;
  if Assigned(FAfterAttachedToRangeList) then FAfterAttachedToRangeList(ARangeList);
end;

procedure TSynBaseHighlighter.BeforeDetachedFromRangeList(ARangeList: TSynHighlighterRangeList); // virtual;
begin
  inherited;
  if Assigned(FBeforeDetachedFromRangeList) then FBeforeDetachedFromRangeList(ARangeList);
end;

function TSynBaseHighlighter.UpdateRangeInfoAtLine(Index: Integer): Boolean; // virtual;
begin
  Result := inherited;
  if Assigned(FUpdateRangeInfoAtLine) then Result := FUpdateRangeInfoAtLine(Index);
end;

procedure TSynBaseHighlighter.DoCurrentLinesChanged(); // virtual;
begin
  inherited;
  if Assigned(FDoCurrentLinesChanged) then FDoCurrentLinesChanged();
end;

function TSynBaseHighlighter.GetDrawDivider(Index: integer): TSynDividerDrawConfigSetting; // virtual;
begin
  Result := inherited;
  if Assigned(FGetDrawDivider) then Result := FGetDrawDivider(Index);
end;

function TSynBaseHighlighter.GetDividerDrawConfig(Index: Integer): TSynDividerDrawConfig; // virtual;
begin
  Result := inherited;
  if Assigned(FGetDividerDrawConfig) then Result := FGetDividerDrawConfig(Index);
end;

function TSynBaseHighlighter.GetDividerDrawConfigCount(): Integer; // virtual;
begin
  Result := inherited;
  if Assigned(FGetDividerDrawConfigCount) then Result := FGetDividerDrawConfigCount();
end;

function TSynBaseHighlighter.PerformScan(StartIndex, EndIndex: Integer; ForceEndIndex: Boolean = False): Integer; // virtual;
begin
  Result := inherited;
  if Assigned(FPerformScan) then Result := FPerformScan(StartIndex, EndIndex, ForceEndIndex);
end;

function TSynBaseHighlighter.GetEol(): Boolean; // virtual; abstract;
begin
  Result := False;
  if Assigned(FGetEol) then Result := FGetEol();
end;

function TSynBaseHighlighter.GetRange(): Pointer; // virtual;
begin
  Result := inherited;
  if Assigned(FGetRange) then Result := FGetRange();
end;

function TSynBaseHighlighter.GetToken(): string; // virtual; abstract;
begin
  Result := '';
  if Assigned(FGetToken) then Result := FGetToken();
end;

procedure TSynBaseHighlighter.GetTokenEx(out TokenStart: PChar; out TokenLength: integer); // virtual; abstract;
var
  TmpTokenStart: string;
begin
  TmpTokenStart := '';
  if Assigned(FGetTokenEx) then FGetTokenEx(TmpTokenStart, TokenLength);
  TokenStart := PChar(TmpTokenStart);
end;

function TSynBaseHighlighter.GetEndOfLineAttribute(): TSynHighlighterAttributes; // virtual;
begin
  Result := inherited;
  if Assigned(FGetEndOfLineAttribute) then Result := FGetEndOfLineAttribute();
end;

function TSynBaseHighlighter.GetTokenAttribute(): TSynHighlighterAttributes; // virtual; abstract;
begin
  Result := nil;
  if Assigned(FGetTokenAttribute) then Result := FGetTokenAttribute();
end;

function TSynBaseHighlighter.GetTokenKind(): integer; // virtual; abstract;
begin
  Result := 0;
  if Assigned(FGetTokenKind) then Result := FGetTokenKind();
end;

function TSynBaseHighlighter.GetTokenPos(): Integer; // virtual; abstract;
begin
  Result := 0;
  if Assigned(FGetTokenPos) then Result := FGetTokenPos();
end;

function TSynBaseHighlighter.GetTokenLen(): Integer; // virtual;
begin
  Result := inherited;
  if Assigned(FGetTokenLen) then Result := FGetTokenLen();
end;

function TSynBaseHighlighter.IsKeyword(const AKeyword: string): boolean; // virtual;
begin
  Result := inherited;
  if Assigned(FIsKeyword) then Result := FIsKeyword(AKeyword);
end;

procedure TSynBaseHighlighter.Next(); // virtual; abstract;
begin
  if Assigned(FNext) then FNext();
end;

procedure TSynBaseHighlighter.StartAtLineIndex(LineNumber:Integer); // virtual;
begin
  inherited;
  if Assigned(FStartAtLineIndex) then FStartAtLineIndex(LineNumber);
end;

procedure TSynBaseHighlighter.SetRange(Value: Pointer); // virtual;
begin
  inherited;
  if Assigned(FSetRange) then FSetRange(Value);
end;

procedure TSynBaseHighlighter.ResetRange(); // virtual;
begin
  inherited;
  if Assigned(FResetRange) then FResetRange();
end;

procedure TSynBaseHighlighter.SetLine(const NewValue: String; LineNumber:Integer); // virtual;
begin
  inherited;
  if Assigned(FSetLine) then FSetLine(NewValue, LineNumber);
end;

function TSynBaseHighlighter.UseUserSettings(settingIndex: integer): boolean; // virtual;
begin
  Result := inherited;
  if Assigned(FUseUserSettings) then Result := FUseUserSettings(settingIndex);
end;

procedure TSynBaseHighlighter.EnumUserSettings(Settings: TStrings); // virtual;
begin
  inherited;
  if Assigned(FEnumUserSettings) then FEnumUserSettings(Settings);
end;

destructor TSynBaseHighlighter.Destroy;
begin
  inherited;
  FGetInstanceLanguageName := nil;
  FGetAttribCount := nil;
  FGetAttribute := nil;
  FGetDefaultAttribute := nil;
  FGetDefaultFilter := nil;
  FGetIdentChars := nil;
  FSetWordBreakChars := nil;
  FGetSampleSource := nil;
  FIsFilterStored := nil;
  FSetDefaultFilter := nil;
  FSetSampleSource := nil;
  FGetRangeIdentifier := nil;
  FCreateRangeList := nil;
  FAfterAttachedToRangeList := nil;
  FBeforeDetachedFromRangeList := nil;
  FUpdateRangeInfoAtLine := nil;
  FDoCurrentLinesChanged := nil;
  FGetDrawDivider := nil;
  FGetDividerDrawConfig := nil;
  FGetDividerDrawConfigCount := nil;
  FPerformScan := nil;
  FGetEol := nil;
  FGetRange := nil;
  FGetToken := nil;
  FGetTokenEx := nil;
  FGetEndOfLineAttribute := nil;
  FGetTokenAttribute := nil;
  FGetTokenKind := nil;
  FGetTokenPos := nil;
  FGetTokenLen := nil;
  FIsKeyword := nil;
  FNext := nil;
  FStartAtLineIndex := nil;
  FSetRange := nil;
  FResetRange := nil;
  FSetLine := nil;
  FUseUserSettings := nil;
  FEnumUserSettings := nil;
end;



end.
