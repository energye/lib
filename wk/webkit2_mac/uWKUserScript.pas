unit uWKUserScript;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface;

type


  TWKUserScript = class(TInterfacedObject, IWKUserScript)
  private
    FData: WKUserScript;
  public
    constructor Create; overload;
    constructor Create(AData: WKUserScript);
    destructor Destroy; override;
  public
    function Data(): WKUserScript;
  public
    function Source: string;
    function InjectionTime: int64;
    function IsForMainFrameOnly: LongBool;
    function InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): IWKUserScript;
  end;


implementation


constructor TWKUserScript.Create;
begin
  FData := WKUserScript.alloc.init;
end;

constructor TWKUserScript.Create(AData: WKUserScript);
begin
  FData := AData;
end;

destructor TWKUserScript.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKUserScript.Data(): WKUserScript;
begin
  Result := FData;
end;

function TWKUserScript.Source: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.source);
  end;
end;

function TWKUserScript.InjectionTime: int64;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := int64(FData.injectionTime);
  end;
end;

function TWKUserScript.IsForMainFrameOnly: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.IsForMainFrameOnly);
  end;
end;

function TWKUserScript.InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): IWKUserScript;
var
  TempUserScript: WKUserScript;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    TempUserScript := FData.initWithSource_injectionTime_forMainFrameOnly(NSStringUtf8(ASource), WKUserScriptInjectionTime(AInjectionTime), ObjCBOOL(AForMainFrameOnly));
    if Assigned(TempUserScript) then
      Result := TWKUserScript.Create(TempUserScript);
  end;
end;

end.
