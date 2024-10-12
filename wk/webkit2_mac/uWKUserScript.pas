unit uWKUserScript;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface;

type


  TWKUserScript = class(TInterfacedObject, IWKUserScript)
  private
    FData: WKUserScript;
  protected
    function Data(): WKUserScript;
  public
    constructor Create; overload;
    constructor Create(AData: WKUserScript);
    destructor Destroy; override;
  public
    function Source: string;
    function InjectionTime: int64;
    function IsForMainFrameOnly: LongBool;
    class function InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): IWKUserScript;
  end;


implementation


constructor TWKUserScript.Create;
begin
  inherited Create;
  FData := WKUserScript.alloc.init;
end;

constructor TWKUserScript.Create(AData: WKUserScript);
begin
  inherited Create;
  FData := AData;
end;

destructor TWKUserScript.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
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

class function TWKUserScript.InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): IWKUserScript;
var
  TempUserScript: WKUserScript;
begin
  Result := nil;
  TempUserScript := WKUserScript.alloc;
  if Assigned(TempUserScript) then
  begin
    TempUserScript := TempUserScript.initWithSource_injectionTime_forMainFrameOnly(NSStringUtf8(ASource), WKUserScriptInjectionTime(AInjectionTime), ObjCBOOL(AForMainFrameOnly));
    Result := Create(TempUserScript);
  end;
end;

end.
