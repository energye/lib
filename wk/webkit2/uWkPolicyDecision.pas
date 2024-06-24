unit uWkPolicyDecision;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  SysUtils,
  uWkInterfaces, uLibWebkit, uWkNavigationAction, uWkURIRequest, uWkURIResponse;

type

  TWkPolicyDecision = class(TInterfacedObject, IWkPolicyDecision)
  protected
    FDecision: WebKitPolicyDecision;
  public
    constructor Create(aDecision: WebKitPolicyDecision);
    destructor Destroy; override;
    function Data(): WebKitPolicyDecision;
    procedure Use();
    procedure UseWithPolicies(policies: IWkWebsitePolicies);
    procedure Ignore();
    procedure Download();
  end;


  TWkNavigationPolicyDecision = class(TWkPolicyDecision, IWkNavigationPolicyDecision)
  public
    constructor Create(aDecision: WebKitNavigationPolicyDecision);
    destructor Destroy; override;
    function GetNavigationAction(): IWkNavigationAction;
  end;


  TWkResponsePolicyDecision = class(TWkPolicyDecision, IWkResponsePolicyDecision)
    constructor Create(aDecision: WebKitResponsePolicyDecision);
    destructor Destroy; override;
    function GetRequest(): IWkURIRequest;
    function GetResponse(): IWkURIResponse;
  end;

implementation

constructor TWkPolicyDecision.Create(aDecision: WebKitPolicyDecision);
begin
  if not Assigned(aDecision) then
    raise Exception.Create('PolicyDecision Create Failed instance is nil');
  FDecision := aDecision;
end;

destructor TWkPolicyDecision.Destroy;
begin
  inherited Destroy;
  FDecision := nil;
end;

function TWkPolicyDecision.Data(): WebKitPolicyDecision;
begin
  Result := FDecision;
end;

procedure TWkPolicyDecision.Use();
begin
  if Assigned(FDecision) then
  begin
    webkit_policy_decision_use(FDecision);
  end;
end;

procedure TWkPolicyDecision.UseWithPolicies(policies: IWkWebsitePolicies);
begin
  if Assigned(FDecision) then
  begin
    webkit_policy_decision_use_with_policies(FDecision, policies.Data());
  end;
end;

procedure TWkPolicyDecision.Ignore();
begin
  if Assigned(FDecision) then
  begin
    webkit_policy_decision_ignore(FDecision);
  end;
end;

procedure TWkPolicyDecision.Download();
begin
  if Assigned(FDecision) then
  begin
    webkit_policy_decision_download(FDecision);
  end;
end;


constructor TWkNavigationPolicyDecision.Create(aDecision: WebKitNavigationPolicyDecision);
begin
  inherited Create(aDecision);
end;

destructor TWkNavigationPolicyDecision.Destroy;
begin
  inherited Destroy;
end;

function TWkNavigationPolicyDecision.GetNavigationAction(): IWkNavigationAction;
begin
  Result := nil;
  if Assigned(FDecision) then
  begin
    Result := TWkNavigationAction.Create(webkit_navigation_policy_decision_get_navigation_action(FDecision));
  end;
end;


constructor TWkResponsePolicyDecision.Create(aDecision: WebKitResponsePolicyDecision);
begin
  inherited Create(aDecision);
end;

destructor TWkResponsePolicyDecision.Destroy;
begin
  inherited Destroy;
end;

function TWkResponsePolicyDecision.GetRequest(): IWkURIRequest;
begin
  Result := nil;
  if Assigned(FDecision) then
  begin
    Result := TWkURIRequest.Create(webkit_response_policy_decision_get_request(FDecision));
  end;
end;

function TWkResponsePolicyDecision.GetResponse(): IWkURIResponse;
begin
  Result := nil;
  if Assigned(FDecision) then
  begin
    Result := TWkURIResponse.Create(webkit_response_policy_decision_get_response(FDecision)) as IWkURIResponse;
  end;
end;


end.
