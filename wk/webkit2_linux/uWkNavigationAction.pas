unit uWkNavigationAction;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  SysUtils, uLibWebkit;

type

  TWkNavigationAction = class
  protected
    FNavigationAction: WebKitNavigationAction;
  public
    constructor Create(aNavigationAction: WebKitNavigationAction);
    destructor Destroy; override;
    function Data(): WebKitNavigationAction;
    function GetRequest(): WebKitURIRequest;
  end;


implementation

constructor TWkNavigationAction.Create(aNavigationAction: WebKitNavigationAction);
begin
  inherited Create;
  if not Assigned(aNavigationAction) then
    raise Exception.Create('NavigationAction Create Failed instance is nil');
  FNavigationAction := aNavigationAction;
end;

destructor TWkNavigationAction.Destroy;
begin
  inherited Destroy;
  FNavigationAction := nil;
end;

function TWkNavigationAction.Data(): WebKitNavigationAction;
begin
  Result := FNavigationAction;
end;

function TWkNavigationAction.GetRequest(): WebKitURIRequest;
begin
  Result := nil;
  if Assigned(FNavigationAction) then
    Result := webkit_navigation_action_get_request(FNavigationAction);
end;

end.
