unit uWKNavigationAction;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit;

type


  TWKNavigationAction = class
  private
    FData: WKNavigationAction;
  public
    constructor Create(AData: WKNavigationAction);
    destructor Destroy; override;
    function Data(): WKNavigationAction;
  public
    function SourceFrame: WKFrameInfo;
    function TargetFrame: WKFrameInfo;
    function NavigationType: WKNavigationType;
    function Request: NSURLRequest;
    function ModifierFlags: NSEventModifierFlags;
    function ButtonNumber: Integer;
  end;


implementation


constructor TWKNavigationAction.Create(AData: WKNavigationAction);
begin
  FData := AData;
  inherited Create;
end;

destructor TWKNavigationAction.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKNavigationAction.Data(): WKNavigationAction;
begin
  Result := FData;
end;

function TWKNavigationAction.SourceFrame: WKFrameInfo;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.sourceFrame;
  end;
end;

function TWKNavigationAction.TargetFrame: WKFrameInfo;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.targetFrame;
  end;
end;

function TWKNavigationAction.NavigationType: WKNavigationType;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := FData.navigationType;
  end;
end;

function TWKNavigationAction.Request: NSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.request;
  end;
end;

function TWKNavigationAction.ModifierFlags: NSEventModifierFlags;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := FData.modifierFlags;
  end;
end;

function TWKNavigationAction.ButtonNumber: Integer;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := Integer(FData.buttonNumber);
  end;
end;

end.
