unit uWkNavigationAction;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  SysUtils,
  uWkInterfaces, uLibWebkit, uWkURIRequest;

type

  TWkNavigationAction = class(TInterfacedObject, IWkNavigationAction)
  protected
    FNavigationAction: WebKitNavigationAction;
    FURIRequest: TWkURIRequest;
  public
    constructor Create(aNavigationAction: WebKitNavigationAction);
    destructor Destroy; override;
    function GetRequest(): IWkURIRequest;
  end;


implementation

constructor TWkNavigationAction.Create(aNavigationAction: WebKitNavigationAction);
begin
  inherited Create;
  if not Assigned(aNavigationAction) then
    raise Exception.Create('NavigationAction Create Failed instance is nil');
  FNavigationAction := aNavigationAction;
  FURIRequest := nil;
end;

destructor TWkNavigationAction.Destroy;
begin
  inherited Destroy;
  FNavigationAction := nil;
  FURIRequest := nil;
end;

function TWkNavigationAction.GetRequest(): IWkURIRequest;
begin
  if Assigned(FNavigationAction) and not Assigned(FURIRequest) then
    FURIRequest := TWkURIRequest.Create(webkit_navigation_action_get_request(FNavigationAction));
  Result := FURIRequest;
end;

end.
