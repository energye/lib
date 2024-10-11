unit uWKNavigationAction;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit, uWkInterface, uNSURLRequest, uWKFrameInfo;

type


  TWKNavigationAction = class(TInterfacedObject, IWKNavigationAction)
  private
    FData: WKNavigationAction;
  protected
    function Data(): WKNavigationAction;
  public
    constructor Create; overload;
    constructor Create(AData: WKNavigationAction);
    destructor Destroy; override;
  public
    function SourceFrame: IWKFrameInfo;
    function TargetFrame: IWKFrameInfo;
    function NavigationType: WKNavigationType;
    function Request: INSURLRequest;
    function ModifierFlags: NSEventModifierFlags;
    function ButtonNumber: Integer;
  end;


implementation


constructor TWKNavigationAction.Create;
begin
  FData := WKNavigationAction.alloc.init;
end;

constructor TWKNavigationAction.Create(AData: WKNavigationAction);
begin
  FData := AData;
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

function TWKNavigationAction.SourceFrame: IWKFrameInfo;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKFrameInfo.Create(FData.sourceFrame);
  end;
end;

function TWKNavigationAction.TargetFrame: IWKFrameInfo;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TWKFrameInfo.Create(FData.targetFrame);
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

function TWKNavigationAction.Request: INSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURLRequest.Create(FData.request);
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
