unit uWkWebsitePolicies;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2,
  uWkInterfaces, uLibWebkit;

type

  TWkWebsitePolicies = class
  private
    FWebsitePolicies: WebKitWebsitePolicies;
  public
    constructor Create();
    constructor Create(first_policy_name: string);
    destructor Destroy; override;
    function Data(): WebKitWebsitePolicies;
    function GetAutoplayPolicy(): WebKitAutoplayPolicy;
  end;

implementation

constructor TWkWebsitePolicies.Create();
begin
  FWebsitePolicies := webkit_website_policies_new();
end;

constructor TWkWebsitePolicies.Create(first_policy_name: string);
begin
  // webkit_website_policies_new_with_policies(const gchar *first_policy_name, ...)  first_policy_name array ??
  FWebsitePolicies := webkit_website_policies_new_with_policies(Pgchar(first_policy_name));
end;

destructor TWkWebsitePolicies.Destroy;
begin
  inherited Destroy;
  FWebsitePolicies := nil;
end;

function TWkWebsitePolicies.Data(): WebKitWebsitePolicies;
begin
    Result := FWebsitePolicies;
end;

function TWkWebsitePolicies.GetAutoplayPolicy(): WebKitAutoplayPolicy;
begin
  Result := WEBKIT_AUTOPLAY_ALLOW;
  if Assigned(FWebsitePolicies) then
  begin
    Result := webkit_website_policies_get_autoplay_policy(FWebsitePolicies);
  end;
end;

end.
