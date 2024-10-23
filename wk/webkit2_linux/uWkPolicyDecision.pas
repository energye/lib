unit uWkPolicyDecision;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  SysUtils, uLibWebkit;

type

  TWkPolicyDecision = class
  protected
    FDecision: WebKitPolicyDecision;
  public
    constructor Create(aDecision: WebKitPolicyDecision);
    destructor Destroy; override;
    function Data(): WebKitPolicyDecision;
    procedure Use();
    procedure UseWithPolicies(policies: WebKitWebsitePolicies);
    procedure Ignore();
    procedure Download();
  end;


  TWkNavigationPolicyDecision = class
  protected
    FDecision: WebKitNavigationPolicyDecision;
  public
    constructor Create(aDecision: WebKitNavigationPolicyDecision);
    destructor Destroy; override;
    function GetNavigationAction(): WebKitNavigationAction;
  end;


  TWkResponsePolicyDecision = class
  protected
    FDecision: WebKitResponsePolicyDecision;
  public
    constructor Create(aDecision: WebKitResponsePolicyDecision);
    destructor Destroy; override;
    function GetRequest(): WebKitURIRequest;
    function GetResponse(): WebKitURIResponse;
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

procedure TWkPolicyDecision.UseWithPolicies(policies: WebKitWebsitePolicies);
begin
  if Assigned(FDecision) then
  begin
    webkit_policy_decision_use_with_policies(FDecision, policies);
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
  FDecision := aDecision;
end;

destructor TWkNavigationPolicyDecision.Destroy;
begin
  inherited Destroy;
  FDecision := nil;
end;

function TWkNavigationPolicyDecision.GetNavigationAction(): WebKitNavigationAction;
begin
  Result := nil;
  if Assigned(FDecision) then
  begin
    Result := webkit_navigation_policy_decision_get_navigation_action(FDecision);
  end;
end;


constructor TWkResponsePolicyDecision.Create(aDecision: WebKitResponsePolicyDecision);
begin
  FDecision := aDecision;
end;

destructor TWkResponsePolicyDecision.Destroy;
begin
  inherited Destroy;
end;

function TWkResponsePolicyDecision.GetRequest(): WebKitURIRequest;
begin
  Result := nil;
  if Assigned(FDecision) then
  begin
    Result := webkit_response_policy_decision_get_request(FDecision);
  end;
end;

function TWkResponsePolicyDecision.GetResponse(): WebKitURIResponse;
begin
  Result := nil;
  if Assigned(FDecision) then
  begin
    Result := webkit_response_policy_decision_get_response(FDecision);
  end;
end;


end.
