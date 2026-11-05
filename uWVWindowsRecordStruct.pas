unit uWVWindowsRecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses uWVTypes, uTools;

type


  TWVBrowserBaseSimulateKeyEventArgs = record
    type_: TWV2KeyEventType; // TWV2KeyEventType
    modifiers: integer; // integer
    windowsVirtualKeyCode: integer; // integer
    nativeVirtualKeyCode: integer; // integer
    timestamp: integer; // integer
    location: integer; // integer
    autoRepeat: boolean; // boolean
    isKeypad: boolean; // boolean
    isSystemKey: boolean; // boolean
    text: wvstring; // wvstring
    unmodifiedtext: wvstring; // wvstring
    keyIdentifier: wvstring; // wvstring
    code: wvstring; // wvstring
    key: wvstring; // wvstring
  end;

  TWVBrowserBaseSimulateKeyEventArgsPtr = record
    type_: Integer; // TWV2KeyEventType
    modifiers: integer; // integer
    windowsVirtualKeyCode: integer; // integer
    nativeVirtualKeyCode: integer; // integer
    timestamp: integer; // integer
    location: integer; // integer
    autoRepeat: LongBool; // boolean
    isKeypad: LongBool; // boolean
    isSystemKey: LongBool; // boolean
    text: PChar; // wvstring
    unmodifiedtext: PChar; // wvstring
    keyIdentifier: PChar; // wvstring
    code: PChar; // wvstring
    key: PChar; // wvstring
  end;

  TWVCustomSchemeInfoPtr = record
    SchemeName: PChar; // wvstring
    TreatAsSecure: LongBool; // boolean
    AllowedDomains: PChar; // wvstring
    HasAuthorityComponent: LongBool; // boolean
  end;

  TWVWindowFeaturesPtr = record
    HasPosition: LongBool; // boolean
    HasSize: LongBool; // boolean
    Left: cardinal; // cardinal
    Top: cardinal; // cardinal
    Width: cardinal; // cardinal
    Height: cardinal; // cardinal
    ShouldDisplayMenuBar: LongBool; // boolean
    ShouldDisplayStatus: LongBool; // boolean
    ShouldDisplayToolbar: LongBool; // boolean
    ShouldDisplayScrollBars: LongBool; // boolean
  end;

// TWVBrowserBaseSimulateKeyEventArgs
function TWVBrowserBaseSimulateKeyEventArgsToGo(const AWVBrowserBaseSimulateKeyEventArgs: TWVBrowserBaseSimulateKeyEventArgs): TWVBrowserBaseSimulateKeyEventArgsPtr;
function TWVBrowserBaseSimulateKeyEventArgsToPas(const AWVBrowserBaseSimulateKeyEventArgs: TWVBrowserBaseSimulateKeyEventArgsPtr): TWVBrowserBaseSimulateKeyEventArgs;

// TWVCustomSchemeInfo
function TWVCustomSchemeInfoToGo(const AWVCustomSchemeInfo: TWVCustomSchemeInfo): TWVCustomSchemeInfoPtr;
function TWVCustomSchemeInfoToPas(const AWVCustomSchemeInfo: TWVCustomSchemeInfoPtr): TWVCustomSchemeInfo;

// TWVWindowFeatures
function TWVWindowFeaturesToGo(const AWVWindowFeatures: TWVWindowFeatures): TWVWindowFeaturesPtr;
function TWVWindowFeaturesToPas(const AWVWindowFeatures: TWVWindowFeaturesPtr): TWVWindowFeatures;

implementation

// TWVBrowserBaseSimulateKeyEventArgs
function TWVBrowserBaseSimulateKeyEventArgsToGo(const AWVBrowserBaseSimulateKeyEventArgs: TWVBrowserBaseSimulateKeyEventArgs): TWVBrowserBaseSimulateKeyEventArgsPtr;
begin
  Result.type_ := Integer(AWVBrowserBaseSimulateKeyEventArgs.type_); // TWV2KeyEventType
  Result.modifiers := AWVBrowserBaseSimulateKeyEventArgs.modifiers; // integer
  Result.windowsVirtualKeyCode := AWVBrowserBaseSimulateKeyEventArgs.windowsVirtualKeyCode; // integer
  Result.nativeVirtualKeyCode := AWVBrowserBaseSimulateKeyEventArgs.nativeVirtualKeyCode; // integer
  Result.timestamp := AWVBrowserBaseSimulateKeyEventArgs.timestamp; // integer
  Result.location := AWVBrowserBaseSimulateKeyEventArgs.location; // integer
  Result.autoRepeat := AWVBrowserBaseSimulateKeyEventArgs.autoRepeat; // boolean
  Result.isKeypad := AWVBrowserBaseSimulateKeyEventArgs.isKeypad; // boolean
  Result.isSystemKey := AWVBrowserBaseSimulateKeyEventArgs.isSystemKey; // boolean
  Result.text := ToPChar(AWVBrowserBaseSimulateKeyEventArgs.text); // wvstring
  Result.unmodifiedtext := ToPChar(AWVBrowserBaseSimulateKeyEventArgs.unmodifiedtext); // wvstring
  Result.keyIdentifier := ToPChar(AWVBrowserBaseSimulateKeyEventArgs.keyIdentifier); // wvstring
  Result.code := ToPChar(AWVBrowserBaseSimulateKeyEventArgs.code); // wvstring
  Result.key := ToPChar(AWVBrowserBaseSimulateKeyEventArgs.key); // wvstring
end;

function TWVBrowserBaseSimulateKeyEventArgsToPas(const AWVBrowserBaseSimulateKeyEventArgs: TWVBrowserBaseSimulateKeyEventArgsPtr): TWVBrowserBaseSimulateKeyEventArgs;
begin
  Result.type_ := TWV2KeyEventType(AWVBrowserBaseSimulateKeyEventArgs.type_); // TWV2KeyEventType
  Result.modifiers := AWVBrowserBaseSimulateKeyEventArgs.modifiers; // integer
  Result.windowsVirtualKeyCode := AWVBrowserBaseSimulateKeyEventArgs.windowsVirtualKeyCode; // integer
  Result.nativeVirtualKeyCode := AWVBrowserBaseSimulateKeyEventArgs.nativeVirtualKeyCode; // integer
  Result.timestamp := AWVBrowserBaseSimulateKeyEventArgs.timestamp; // integer
  Result.location := AWVBrowserBaseSimulateKeyEventArgs.location; // integer
  Result.autoRepeat := AWVBrowserBaseSimulateKeyEventArgs.autoRepeat; // boolean
  Result.isKeypad := AWVBrowserBaseSimulateKeyEventArgs.isKeypad; // boolean
  Result.isSystemKey := AWVBrowserBaseSimulateKeyEventArgs.isSystemKey; // boolean
  Result.text := PCharToUStr(AWVBrowserBaseSimulateKeyEventArgs.text); // wvstring
  Result.unmodifiedtext := PCharToUStr(AWVBrowserBaseSimulateKeyEventArgs.unmodifiedtext); // wvstring
  Result.keyIdentifier := PCharToUStr(AWVBrowserBaseSimulateKeyEventArgs.keyIdentifier); // wvstring
  Result.code := PCharToUStr(AWVBrowserBaseSimulateKeyEventArgs.code); // wvstring
  Result.key := PCharToUStr(AWVBrowserBaseSimulateKeyEventArgs.key); // wvstring
end;

// TWVCustomSchemeInfo
function TWVCustomSchemeInfoToGo(const AWVCustomSchemeInfo: TWVCustomSchemeInfo): TWVCustomSchemeInfoPtr;
begin
  Result.SchemeName := ToPChar(AWVCustomSchemeInfo.SchemeName); // wvstring
  Result.TreatAsSecure := AWVCustomSchemeInfo.TreatAsSecure; // boolean
  Result.AllowedDomains := ToPChar(AWVCustomSchemeInfo.AllowedDomains); // wvstring
  Result.HasAuthorityComponent := AWVCustomSchemeInfo.HasAuthorityComponent; // boolean
end;

function TWVCustomSchemeInfoToPas(const AWVCustomSchemeInfo: TWVCustomSchemeInfoPtr): TWVCustomSchemeInfo;
begin
  Result.SchemeName := PCharToUStr(AWVCustomSchemeInfo.SchemeName); // wvstring
  Result.TreatAsSecure := AWVCustomSchemeInfo.TreatAsSecure; // boolean
  Result.AllowedDomains := PCharToUStr(AWVCustomSchemeInfo.AllowedDomains); // wvstring
  Result.HasAuthorityComponent := AWVCustomSchemeInfo.HasAuthorityComponent; // boolean
end;

// TWVWindowFeatures
function TWVWindowFeaturesToGo(const AWVWindowFeatures: TWVWindowFeatures): TWVWindowFeaturesPtr;
begin
  Result.HasPosition := AWVWindowFeatures.HasPosition; // boolean
  Result.HasSize := AWVWindowFeatures.HasSize; // boolean
  Result.Left := AWVWindowFeatures.Left; // cardinal
  Result.Top := AWVWindowFeatures.Top; // cardinal
  Result.Width := AWVWindowFeatures.Width; // cardinal
  Result.Height := AWVWindowFeatures.Height; // cardinal
  Result.ShouldDisplayMenuBar := AWVWindowFeatures.ShouldDisplayMenuBar; // boolean
  Result.ShouldDisplayStatus := AWVWindowFeatures.ShouldDisplayStatus; // boolean
  Result.ShouldDisplayToolbar := AWVWindowFeatures.ShouldDisplayToolbar; // boolean
  Result.ShouldDisplayScrollBars := AWVWindowFeatures.ShouldDisplayScrollBars; // boolean
end;

function TWVWindowFeaturesToPas(const AWVWindowFeatures: TWVWindowFeaturesPtr): TWVWindowFeatures;
begin
  Result.HasPosition := AWVWindowFeatures.HasPosition; // boolean
  Result.HasSize := AWVWindowFeatures.HasSize; // boolean
  Result.Left := AWVWindowFeatures.Left; // cardinal
  Result.Top := AWVWindowFeatures.Top; // cardinal
  Result.Width := AWVWindowFeatures.Width; // cardinal
  Result.Height := AWVWindowFeatures.Height; // cardinal
  Result.ShouldDisplayMenuBar := AWVWindowFeatures.ShouldDisplayMenuBar; // boolean
  Result.ShouldDisplayStatus := AWVWindowFeatures.ShouldDisplayStatus; // boolean
  Result.ShouldDisplayToolbar := AWVWindowFeatures.ShouldDisplayToolbar; // boolean
  Result.ShouldDisplayScrollBars := AWVWindowFeatures.ShouldDisplayScrollBars; // boolean
end;


end.
