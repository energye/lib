unit uWkInterfaces;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes,
  uLibWebkit;

type

  IWkCookieManagerDelegateEvent = interface
    ['{85c2ccf4-0ff0-433e-bc8a-fa69d3df324d}']
    procedure doGetAcceptPolicyFinish(policy: WebKitCookieAcceptPolicy; error: string);
    procedure doAddCookieFinish(aResult: boolean; error: string);
    procedure doGetCookiesFinish(cookieList: PList; error: string);
    procedure doDeleteCookieFinish(aResult: boolean; error: string);
  end;

  IWkSchemeRequestDelegateEvent = interface
    ['{CA5E93CB-EC40-B968-990A-729497C8927D}']
    procedure doURISchemeRequest(uriSchemeRequest: WebKitURISchemeRequest);
  end;


implementation

end.
