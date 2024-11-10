unit uWKUserScript;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit;

type

  // A script that the web view injects into a webpage.
  // https://developer.apple.com/documentation/webkit/wkuserscript?language=objc
  TWKUserScript = class
  private
    FData: WKUserScript;
  public
    constructor Create(AData: WKUserScript);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKUserScript;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an WKUserScript object.
    class function New(): TWKUserScript;
    // The script’s source code.
    function Source: string;
    // The time at which to inject the script into the webpage.
    function InjectionTime: int64;
    // A Boolean value that indicates whether to inject the script into the main frame or all frames.
    function IsForMainFrameOnly: LongBool;
    // Creates a user script object that contains the specified source code and attributes.
    class function InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): TWKUserScript;
  end;


implementation


constructor TWKUserScript.Create(AData: WKUserScript);
begin
  inherited Create;
  FData := AData;
end;

destructor TWKUserScript.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKUserScript.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWKUserScript.New(): TWKUserScript;
begin
  Result := Create(WKUserScript.alloc.init);
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

class function TWKUserScript.InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): TWKUserScript;
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
