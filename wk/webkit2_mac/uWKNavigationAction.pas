unit uWKNavigationAction;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit;

type

  // An object that contains information about an action that causes navigation to occur.
  // https://developer.apple.com/documentation/webkit/wknavigationaction?language=objc
  TWKNavigationAction = class
  private
    FData: WKNavigationAction;
  public
    constructor Create(AData: WKNavigationAction);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKNavigationAction;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // The frame that requested the navigation.
    function SourceFrame: WKFrameInfo;
    // The frame in which to display the new content.
    function TargetFrame: WKFrameInfo;
    // The type of action that triggered the navigation.
    function NavigationType: WKNavigationType;
    // The URL request object associated with the navigation action.
    function Request: NSURLRequest;
    // The modifier keys that were pressed at the time of the navigation request.
    function ModifierFlags: NSEventModifierFlags;
    // The number of the mouse button that caused the navigation request.
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
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKNavigationAction.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
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
