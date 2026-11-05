//----------------------------------------

// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL

//----------------------------------------

unit uI18n;

{$I ExtDecl.inc}
{$mode objfpc}{$H+}

interface

uses InterfaceBase, Classes, SysUtils, Graphics, ComCtrls, Forms,
  Controls, LCLType, TypInfo,
  Generics.Collections;

type
  TI18nDict = specialize TDictionary<string, string>;

  TI18n = class
  private
    FStackPath: string;
    FI18n: TI18nDict;
    procedure IntUpdateTranslation(AnInstance: TPersistent; Level: integer = 0; const AKeyPrefix: string = '');
  public
    constructor Create();
    destructor Destroy; override;
    procedure AddLine(const ALine: string);
    function UpdateDict(AData: PChar; ALength: Integer): LongBool;
    function GetText(const AKey: string): string;
    procedure UpdateTranslation(AnInstance: TPersistent);
  end;

type
  TPersistentAccess = class(TPersistent);

var
  GI18n: TI18n;

implementation

function GetIdentifier(const Instance: TPersistent; PropInfo: PPropInfo; const AKeyPrefix: string = ''): string;
var
  Component: TComponent;
begin
  Result := '';
  if PropInfo = nil then
    exit;

  // For collection items (TListColumn, THeaderSection, etc.) and other
  // objects without Name, use the key prefix built from parent path
  if AKeyPrefix <> '' then
  begin
    Result := LowerCase(AKeyPrefix + '.' + PropInfo^.Name);
    Exit;
  end;

  if not (Instance is TComponent) then
    exit;

  Component := TComponent(Instance);

  if (csDesigning in Component.ComponentState) then
    exit;
  if Component.Name = '' then
    Exit;

  Result := LowerCase(Component.Name + '.' + PropInfo^.Name);
end;

constructor TI18n.Create();
begin
  FI18n := TI18nDict.Create;
end;

destructor  TI18n.Destroy;
begin
  FI18n.Clear;
  FI18n.Free;
end;

procedure TI18n.AddLine(const ALine: string);
var
  EqPos: Integer;
  LineTrim, Key, Value: string;
begin
  LineTrim := Trim(ALine);

  if LineTrim = '' then
    Exit;

  if LineTrim[1] = '#' then
    Exit;

  EqPos := Pos('=', LineTrim);
  if EqPos < 2 then
    Exit;

  Key := LowerCase(Trim(Copy(LineTrim, 1, EqPos - 1)));
  Value := Trim(Copy(LineTrim, EqPos + 1, MaxInt));
  //WriteLn('AddLine key: ', Key, ' Value: ', Value);
  if Key <> '' then
    FI18n.AddOrSetValue(Key, Value);
end;

function TI18n.UpdateDict(AData: PChar; ALength: Integer): LongBool;
var
  Text: string;
  Line: string;
  StartPos, NewLinePos: Integer;
begin
  Result := False;
  if (AData = nil) or (ALength <= 0) then Exit;

  FI18n.Clear;

  try
    SetLength(Text, ALength);
    Move(AData^, Text[1], ALength);

    StartPos := 1;
    while StartPos <= ALength do
    begin
      NewLinePos := Pos(#10, Text, StartPos);
      if NewLinePos = 0 then
        NewLinePos := ALength + 1;

      Line := Copy(Text, StartPos, NewLinePos - StartPos);
      AddLine(Line);

      StartPos := NewLinePos + 1;
    end;
    Result := True;
  except
    on E: Exception do
      WriteLn('parsing i18n dictionary error: ' + E.ToString());
  end;
end;

function TI18n.GetText(const AKey: string): string;
begin
  if not FI18n.TryGetValue(AKey, Result) then
    Result := '';
end;

procedure TI18n.IntUpdateTranslation(AnInstance: TPersistent; Level: integer = 0; const AKeyPrefix: string = '');
var
  i, j: integer;
  APropCount: integer;
  APropList: PPropList;
  APropInfo: PPropInfo;
  TmpStr: string;
  APersistentProp: TPersistent;
  StoreStackPath: string;
  AComponent, SubComponent: TComponent;
  AIdentifier: string;
  CollectionKeyPrefix: string;
begin
  APropCount := GetPropList(AnInstance.ClassInfo, APropList);
  try
    for i := 0 to APropCount - 1 do
    begin
      APropInfo := APropList^[i];
      if Assigned(PPropInfo(APropInfo)^.GetProc) and Assigned(APropInfo^.PropType) then
        case APropInfo^.PropType^.Kind of
          tkSString,
          tkLString,
          tkAString:
            if Assigned(PPropInfo(APropInfo)^.SetProc) then
            begin
              AIdentifier := GetIdentifier(AnInstance, APropInfo, AKeyPrefix);
              TmpStr := GetText(AIdentifier);
              // WriteLn('IntUpdateTranslation IdentifierPath: ', AIdentifier, ' TmpStr: ', TmpStr);
              if TmpStr <> '' then
                SetStrProp(AnInstance, APropInfo, TmpStr);
            end;
          tkClass:
          begin
            APersistentProp := TPersistent(GetObjectProp(AnInstance, APropInfo, TPersistent));
            if Assigned(APersistentProp) then
            begin
              if APersistentProp is TStrings then
              begin
                // Translate TStrings items by index
                // Key format: ComponentName.Items[Index]
                if AKeyPrefix <> '' then
                begin
                  for j := 0 to TStrings(APersistentProp).Count - 1 do
                  begin
                    TmpStr := GetText(LowerCase(AKeyPrefix + '.' + APropInfo^.Name + '[' + IntToStr(j) + ']'));
                    if TmpStr <> '' then
                      TStrings(APersistentProp)[j] := TmpStr;
                  end;
                end
                else if (AnInstance is TComponent) and (TComponent(AnInstance).Name <> '') then
                begin
                  for j := 0 to TStrings(APersistentProp).Count - 1 do
                  begin
                    TmpStr := GetText(LowerCase(TComponent(AnInstance).Name + '.' + APropInfo^.Name + '[' + IntToStr(j) + ']'));
                    if TmpStr <> '' then
                      TStrings(APersistentProp)[j] := TmpStr;
                  end;
                end;
              end
              else if APersistentProp is TCollection then
              begin
                for j := 0 to TCollection(APersistentProp).Count - 1 do
                begin
                  // Build key prefix for collection items (they may not have Name)
                  // Key format: ParentName.CollectionName[Index] or KeyPrefix.CollectionName[Index]
                  if AKeyPrefix <> '' then
                    CollectionKeyPrefix := LowerCase(AKeyPrefix + '.' + APropInfo^.Name + '[' + IntToStr(j) + ']')
                  else if (AnInstance is TComponent) and (TComponent(AnInstance).Name <> '') then
                    CollectionKeyPrefix := LowerCase(TComponent(AnInstance).Name + '.' + APropInfo^.Name + '[' + IntToStr(j) + ']')
                  else
                    CollectionKeyPrefix := '';
                  StoreStackPath := FStackPath;
                  FStackPath := FStackPath + '.' + APropInfo^.Name + '[' + IntToStr(j) + ']';
                  IntUpdateTranslation(TCollection(APersistentProp).Items[j], Level + 1, CollectionKeyPrefix);
                  FStackPath := StoreStackPath;
                end;
              end
              else
              begin
                if APersistentProp is TComponent then
                begin
                  AComponent := TComponent(APersistentProp);
                  if (csSubComponent in AComponent.ComponentStyle) then
                  begin
                    // For SubComponents (like EditLabel), build key prefix from parent
                    if (AnInstance is TComponent) and (TComponent(AnInstance).Name <> '') then
                    begin
                      StoreStackPath := FStackPath;
                      FStackPath := FStackPath + '.' + APropInfo^.Name;
                      IntUpdateTranslation(APersistentProp, Level + 1,
                        LowerCase(TComponent(AnInstance).Name + '.' + APropInfo^.Name));
                      FStackPath := StoreStackPath;
                    end;
                  end;
                end
                else
                begin
                  StoreStackPath := FStackPath;
                  FStackPath := FStackPath + '.' + APropInfo^.Name;
                  IntUpdateTranslation(APersistentProp, Level + 1);
                  FStackPath := StoreStackPath;
                end;
              end;
            end;
          end;
        end;
    end;
  finally
    Freemem(APropList);
  end;

  if (AnInstance is TComponent) then
  begin
    AComponent := TComponent(AnInstance);
    for i := 0 to AComponent.ComponentCount - 1 do
    begin
      SubComponent := AComponent.Components[i];
      StoreStackPath := FStackPath;
      if SubComponent is TCustomFrame then
        UpdateTranslation(SubComponent);
      if SubComponent.Name <> '' then
        FStackPath := StoreStackPath + '.' + SubComponent.Name
      else
        FStackPath := StoreStackPath;
      IntUpdateTranslation(SubComponent, Level + 1);
      FStackPath := StoreStackPath;
    end;
  end;
end;

procedure TI18n.UpdateTranslation(AnInstance: TPersistent);
begin
  FStackPath := AnInstance.ClassName;
  IntUpdateTranslation(AnInstance);
end;

initialization
  GI18n := TI18n.Create;

finalization
  GI18n.Free;

end.
