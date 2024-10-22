unit uWkInterfaces;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes,
  LazGio2,
  uLibWebkit;

type

  IWkWebsitePolicies = interface;
  IWkContextMenu = interface;
  IWkContextMenuItem = interface;
  IWkURISchemeRequest = interface;

  IWkCookieDate = interface
    ['{7f3b12b4-6733-4cad-9fc5-0dc5e9673f3a}']
    function Year(): longint;
    function Month(): longint;
    function Day(): longint;
    function Hour(): longint;
    function Minute(): longint;
    function Second(): longint;
    function Utc(): boolean;
    function Offset(): longint;
    function ToStringTime(format: TSoupDateFormat = SOUP_DATE_HTTP): string;
    function ToLongTime(): int64;
  end;

  IWkCookie = interface
    ['{d4c4e2c5-bc0f-4974-9776-ed28cbc89223}']
    function GetDomain(): string;
    procedure SetDomain(aValue: string);
    function GetExpires(): IWkCookieDate;
    procedure SetExpires(aValue: IWkCookieDate);
    function GetHttpOnly(): boolean;
    procedure SetHttpOnly(Value: boolean);
    function GetName(): string;
    procedure SetName(aValue: string);
    function GetPath(): string;
    procedure SetPath(aValue: string);
    function GetSecure(): boolean;
    procedure SetSecure(aValue: boolean);
    function GetValue(): string;
    procedure SetValue(aValue: string);
    procedure SetMaxAge(aValue: longint);

    property Name: string read GetName write SetName;
    property Value: string read GetValue write SetValue;
    property Domain: string read GetDomain write SetDomain;
    property Path: string read GetPath write SetPath;
    property HttpOnly: boolean read GetHttpOnly write SetHttpOnly;
    property Secure: boolean read GetSecure write SetSecure;
    property Expires: IWkCookieDate read GetExpires write SetExpires;
    function Data(): PSoupCookie;
  end;

  IWkCookieList = interface
    ['{a4992b09-b347-4314-b38f-64e4acf8a573}']
    function Length(): integer;
    function GetCookie(index: integer): IWkCookie;
  end;

  IWkCookieManagerDelegateEvent = interface
    ['{85c2ccf4-0ff0-433e-bc8a-fa69d3df324d}']
    procedure doGetAcceptPolicyFinish(policy: WebKitCookieAcceptPolicy; error: string);
    procedure doAddCookieFinish(aResult: boolean; error: string);
    procedure doGetCookiesFinish(cookieList: IWkCookieList; error: string);
    procedure doDeleteCookieFinish(aResult: boolean; error: string);
  end;

  IWkSchemeRequestDelegateEvent = interface
    ['{CA5E93CB-EC40-B968-990A-729497C8927D}']
    procedure doURISchemeRequest(uriSchemeRequest: IWkURISchemeRequest);
  end;

  IWkHeaders = interface
    ['{c77200e3-3c6a-4d76-9d2b-3eaabbea4e7b}']
    function List(): TStrings;
    procedure Append(aName: string; aValue: string);
    procedure Clear();
    procedure Remove(aName: string);
    procedure Replace(aName: string; aValue: string);
  end;

  IWkURIRequest = interface
    ['{03042d08-1b94-46c1-ba68-ad5b5b98201e}']
    function GetUri(): string;
    procedure SetUri(uri: string);
    function Method(): string;
    function Headers(): IWkHeaders;
    property URI: string read GetUri write SetUri;
  end;

  IWkURIResponse = interface
    ['{be808e62-8822-4deb-88b8-c2981f7374fb}']
    function GetUri(): string;
    property URI: string read GetUri;
    function Headers(): IWkHeaders;
    function GetStatusCode(): integer;
    function GetContentLength(): uint64;
    function GetMimeType(): string;
    function GetSuggestedFilename(): string;
  end;

  IWkNavigationAction = interface
    ['{2a1eae68-5a3a-4882-a98d-d9dfcffcad5b}']
    function GetRequest(): IWkURIRequest;
  end;

  IWkInputStream = interface
    ['{5C2F9200-CF07-69EA-A942-87E2604F8B66}']
    function Data(): PInputStream;
    procedure Read(const buf: Pointer; bufSize: integer; var readCount: integer; var errorMsg: string);
    procedure Close();
  end;

  IWkURISchemeRequest = interface
    ['{0646e57d-14fd-4bd8-8c1d-5c138906959a}']
    function Data(): WebKitURISchemeRequest;
    function Scheme(): string;
    function Uri(): string;
    function Path(): string;
    function WebView(): WebKitWebView;
    function Method(): string;
    function Headers(): IWkHeaders;
    function Body(): IWkInputStream;
    procedure Finish(stream: IWkInputStream; stream_length: int64; content_type: string);
    procedure FinishWithResponse(response: WebKitURISchemeResponse);
    procedure FinishError(code: integer; errorMessage: string);
  end;

  IWkPolicyDecision = interface
    ['{0c301d17-388d-4735-abd2-d50ed1589557}']
    //function Data(): WebKitPolicyDecision;
    // 接受触发此决定的行动
    procedure Use();
    // 接受导航操作并继续执行所提供的策略
    // 接受触发此决策的导航操作，并继续执行影响与所接受的导航操作关联的源中所有后续资源负载的策略
    // 例如，在不允许自动播放电影的前提下，可能会接受到视频分享网站的导航决定。本例中的自动播放策略将在策略中设置
    procedure UseWithPolicies(policies: IWkWebsitePolicies);
    // 这将取消请求
    // 忽略触发这个决定的行为。例如，对于WebKitResponsePolicyDecision，这将取消请求
    procedure Ignore();
    // 从这个决定中衍生一个下载
    procedure Download();
  end;

  IWkNavigationPolicyDecision = interface(IWkPolicyDecision)
    ['{c82b485e-989e-42e5-8fc0-88cab452cd1e}']
    function GetNavigationAction(): IWkNavigationAction;
  end;

  IWkResponsePolicyDecision = interface(IWkPolicyDecision)
    ['{e137c1d3-56b0-4aaf-9a06-3e2328666ae1}']
    function GetRequest(): IWkURIRequest;
    function GetResponse(): IWkURIResponse;
  end;

  IWkWebsitePolicies = interface
    ['{cc56f83a-d893-44a0-a499-344d27463899}']
    function GetAutoplayPolicy(): WebKitAutoplayPolicy;
    function Data(): WebKitWebsitePolicies;
  end;

  IWkContextMenu = interface
    ['{be891564-e52e-49a4-9ca0-9dbcf06fd594}']
    function Data(): WebKitContextMenu;
    procedure Prepend(item: IWkContextMenuItem);
    procedure Append(item: IWkContextMenuItem);
    procedure Insert(item: IWkContextMenuItem; position: integer);
    function GetItemsLength(): integer;
    function GetItemAtPosition(position: integer): IWkContextMenuItem;
    procedure Remove(item: IWkContextMenuItem);
    procedure RemoveAll();
  end;

  IWkContextMenuItem = interface
    ['{0b0254c7-84c7-4c54-b39e-aa7ebfb44a14}']
    function Data(): WebKitContextMenuItem;
    function GetSubmenu(): WebKitContextMenu;
    procedure SetSubmenu(submenu: IWkContextMenu);
    function GetAction(): WkAction;
    function GetStockAction(): WebKitContextMenuAction;
    function IsSeparator(): boolean;
  end;


implementation

end.
