unit uWkCookieManager;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  SysUtils, DateUtils,
  LazGObject2, LazGLib2,
  uLibWebkit, uWkInterfaces;

type

  TWkCookieDate = class
  private
    FDate: PWkDateTime;
  public
    constructor Create(aDate: PWkDateTime);
    destructor Destroy; override;
    function Data(): PWkDateTime;
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
  public
    class function NewCustomCookieDate(aYear, aMonth, aDay, aHour, aMinute, aSecond: longint): TWkCookieDate;
    class function NewCookieDate(): TWkCookieDate;
  end;

  TWkCookie = class
  private
    FCookie: PSoupCookie;
  public
    constructor Create(aCookie: PSoupCookie);
    destructor Destroy; override;
    function Data(): PSoupCookie;
  protected
    function GetDomain(): string;
    procedure SetDomain(aValue: string);
    function GetExpires(): PWkDateTime;
    procedure SetExpires(aValue: PWkDateTime);
    function GetHttpOnly(): boolean;
    procedure SetHttpOnly(aValue: boolean);
    function GetName(): string;
    procedure SetName(aValue: string);
    function GetPath(): string;
    procedure SetPath(aValue: string);
    function GetSecure(): boolean;
    procedure SetSecure(aValue: boolean);
    function GetValue(): string;
    procedure SetValue(aValue: string);
  public
    property Name: string read GetName write SetName;
    property Value: string read GetValue write SetValue;
    property Domain: string read GetDomain write SetDomain;
    property Path: string read GetPath write SetPath;
    property HttpOnly: boolean read GetHttpOnly write SetHttpOnly;
    property Secure: boolean read GetSecure write SetSecure;
    property Expires: PWkDateTime read GetExpires write SetExpires;
    procedure SetMaxAge(aValue: longint);
    class function NewCookie(aName, aValue, aDomain, aPath: string; aMaxAge: longint): TWkCookie;
  end;

  TWkCookieList = class
  private
    FList: PList;
  public
    constructor Create(aList: PList);
    destructor Destroy; override;
    function Data(): PList;
    function Length(): integer;
    function GetCookie(index: integer): PSoupCookie;
  end;

  TWkCookieManager = class
  private
    FCookieManager: WebKitCookieManager;
    FDelegateEvent: IWkCookieManagerDelegateEvent;
  protected
    property DelegateEvent: IWkCookieManagerDelegateEvent read FDelegateEvent;
  public
    constructor Create(aCookieManager: WebKitCookieManager);
    destructor Destroy; override;
    function Data(): WebKitCookieManager;
    procedure SetPersistentStorage(filename: string; storage: WebKitCookiePersistentStorage);
    procedure SetAcceptPolicy(policy: WebKitCookieAcceptPolicy);

    // 异步获取cookie_manager的cookie接受策略。
    // 注意，当策略被设置为WEBKIT_COOKIE_POLICY_ACCEPT_NO_THIRD_PARTY并且ITP被启用时，这将返回WEBKIT_COOKIE_POLICY_ACCEPT_ALWAYS。参见webkit_website_data_manager_set_itp_enabled()。
    // 当操作完成时，回调将被调用。然后可以调用webkit_cookie_manager_get_accept_policy_finish()来获取操作的结果。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.get_accept_policy.html
    procedure GetAcceptPolicy();

    // 异步地将SoupCookie添加到底层存储。
    // 当操作完成时，回调将被调用。然后可以调用webkit_cookie_manager_add_cookie_finish()来获取操作的结果。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.add_cookie.html
    procedure AddCookie(const cookie: PSoupCookie);

    // 从cookie_manager异步获取SoupCookie的列表。
    // 从与uri关联的cookie_manager异步获取SoupCookie的列表，该列表必须是HTTP或HTTPS URL。
    // 当操作完成时，回调将被调用。然后可以调用webkit_cookie_manager_get_cookies_finish()来获取操作的结果。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.get_cookies.html
    procedure GetCookies(uri: string);

    // 从当前会话中异步删除SoupCookie。
    // 当操作完成时，回调将被调用。然后可以调用webkit_cookie_manager_delete_cookie_finish()来获取操作的结果。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.delete_cookie.html
    procedure DeleteCookie(cookie: PSoupCookie);

    // 删除给定域的cookie_manager的所有cookie。
    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.delete_cookies_for_domain.html
    procedure DeleteCookiesForDomain(domain: string);

    // https://webkitgtk.org/reference/webkit2gtk/stable/method.CookieManager.delete_all_cookies.html
    procedure DeleteAllCookies();
  public
    class function NewDelegate(aCookieManager: WebKitCookieManager; aDelegateEvent: IWkCookieManagerDelegateEvent): TWkCookieManager;
  end;

implementation

procedure doAPIGetAcceptPolicyFinish(source_object: PGObject; res: PAsyncResult; user_data: gpointer); cdecl;
var
  aErr: PGError;
  aResult: WebKitCookieAcceptPolicy;
begin
  aErr := nil;
  aResult := webkit_cookie_manager_get_accept_policy_finish(WebKitCookieManager(source_object), res, @aErr);
  if aErr <> nil then
  begin
    TWkCookieManager(user_data).DelegateEvent.doGetAcceptPolicyFinish(aResult, string(aErr^.message));
    g_error_free(aErr);
  end
  else
  begin
    TWkCookieManager(user_data).DelegateEvent.doGetAcceptPolicyFinish(aResult, '');
  end;
end;

procedure doAPIAddCookieFinish(source_object: PGObject; res: PAsyncResult; user_data: gpointer); cdecl;
var
  aErr: PGError;
  aResult: boolean;
begin
  aErr := nil;
  aResult := boolean(webkit_cookie_manager_add_cookie_finish(WebKitCookieManager(source_object), res, @aErr));
  if aErr <> nil then
  begin
    TWkCookieManager(user_data).DelegateEvent.doAddCookieFinish(aResult, string(aErr^.message));
    g_error_free(aErr);
  end
  else
  begin
    TWkCookieManager(user_data).DelegateEvent.doAddCookieFinish(aResult, '');
  end;
end;

procedure doAPIGetCookiesFinish(source_object: PGObject; res: PAsyncResult; user_data: gpointer); cdecl;
var
  aErr: PGError;
  aResult: PList;
begin
  aErr := nil;
  aResult := webkit_cookie_manager_get_cookies_finish(WebKitCookieManager(source_object), res, @aErr);
  if aErr <> nil then
  begin
    TWkCookieManager(user_data).DelegateEvent.doGetCookiesFinish(nil, string(aErr^.message));
    g_error_free(aErr);
  end
  else
  begin
    TWkCookieManager(user_data).DelegateEvent.doGetCookiesFinish(aResult, '');
    //aResult^.Free(aResult);
    //aResult^.free_full(aResult, TGDestroyNotify(@g_free));
    aResult := nil;
  end;
end;

procedure doAPIDeleteCookieFinish(source_object: PGObject; res: PAsyncResult; user_data: gpointer); cdecl;
var
  aErr: PGError;
  aResult: boolean;
begin
  aErr := nil;
  aResult := boolean(webkit_cookie_manager_delete_cookie_finish(WebKitCookieManager(source_object), res, @aErr));
  if aErr <> nil then
  begin
    TWkCookieManager(user_data).DelegateEvent.doDeleteCookieFinish(aResult, string(aErr^.message));
    g_error_free(aErr);
  end
  else
  begin
    TWkCookieManager(user_data).DelegateEvent.doDeleteCookieFinish(aResult, '');
  end;
end;


{ TWkCookieManager }

constructor TWkCookieManager.Create(aCookieManager: WebKitCookieManager);
begin
  FDelegateEvent := nil;
  FCookieManager := nil;
  if Assigned(aCookieManager) then
    FCookieManager := aCookieManager;
end;

destructor TWkCookieManager.Destroy;
begin
  inherited Destroy;
  FCookieManager := nil;
end;

function TWkCookieManager.Data(): WebKitCookieManager;
begin
  Result := FCookieManager;
end;

procedure TWkCookieManager.SetPersistentStorage(filename: string; storage: WebKitCookiePersistentStorage);
begin
  if Assigned(FCookieManager) then
  begin
    webkit_cookie_manager_set_persistent_storage(FCookieManager, Pgchar(filename), storage);
  end;
end;

procedure TWkCookieManager.SetAcceptPolicy(policy: WebKitCookieAcceptPolicy);
begin
  if Assigned(FCookieManager) then
  begin
    webkit_cookie_manager_set_accept_policy(FCookieManager, policy);
  end;
end;

procedure TWkCookieManager.GetAcceptPolicy();
begin
  if Assigned(FCookieManager) then
  begin
    if Assigned(FDelegateEvent) then
      webkit_cookie_manager_get_accept_policy(FCookieManager, nil, TAsyncReadyCallback(@doAPIGetAcceptPolicyFinish), self)
    else
      webkit_cookie_manager_get_accept_policy(FCookieManager, nil, nil, self);
  end;
end;

procedure TWkCookieManager.AddCookie(const cookie: PSoupCookie);
begin
  if Assigned(FCookieManager) and Assigned(cookie) then
  begin
    if Assigned(FDelegateEvent) then
      webkit_cookie_manager_add_cookie(FCookieManager, cookie, nil, TAsyncReadyCallback(@doAPIAddCookieFinish), self)
    else
      webkit_cookie_manager_add_cookie(FCookieManager, cookie, nil, nil, self);
  end;
end;

procedure TWkCookieManager.GetCookies(uri: string);
begin
  if Assigned(FCookieManager) then
  begin
    if Assigned(FDelegateEvent) then
      webkit_cookie_manager_get_cookies(FCookieManager, Pgchar(uri), nil, TGCALLBACK(@doAPIGetCookiesFinish), self)
    else
      webkit_cookie_manager_get_cookies(FCookieManager, Pgchar(uri), nil, nil, self);
  end;
end;

procedure TWkCookieManager.DeleteCookie(cookie: PSoupCookie);
begin
  if Assigned(FCookieManager) then
  begin
    if Assigned(FDelegateEvent) then
      webkit_cookie_manager_delete_cookie(FCookieManager, cookie, nil, TAsyncReadyCallback(@doAPIDeleteCookieFinish), self)
    else
      webkit_cookie_manager_delete_cookie(FCookieManager, cookie, nil, nil, self);
  end;
end;

procedure TWkCookieManager.DeleteCookiesForDomain(domain: string);
begin
  if Assigned(FCookieManager) then
  begin
    webkit_cookie_manager_delete_cookies_for_domain(FCookieManager, Pgchar(domain));
  end;
end;

procedure TWkCookieManager.DeleteAllCookies();
begin
  if Assigned(FCookieManager) then
  begin
    webkit_cookie_manager_delete_all_cookies(FCookieManager);
  end;
end;

class function TWkCookieManager.NewDelegate(aCookieManager: WebKitCookieManager; aDelegateEvent: IWkCookieManagerDelegateEvent): TWkCookieManager;
var
  TempCookieManager: TWkCookieManager;
begin
  TempCookieManager := nil;
  if Assigned(aCookieManager) then
  begin
    TempCookieManager := Create(aCookieManager);
    TempCookieManager.FDelegateEvent := aDelegateEvent;
  end;
  Result := TempCookieManager;
end;

{ TWkCookie }

constructor TWkCookie.Create(aCookie: PSoupCookie);
begin
  if not Assigned(aCookie) then
    raise Exception.Create('Cookie Create Failed cookie is nil');
  FCookie := aCookie;
end;

class function TWkCookie.NewCookie(aName, aValue, aDomain, aPath: string; aMaxAge: longint): TWkCookie;
begin
  Result := nil;
  case GWebkit2Version of
    Wkv4_0: Result := Create(soup2_4_cookie_new(Pgchar(aName), Pgchar(aValue), Pgchar(aDomain), Pgchar(aPath), aMaxAge));
    Wkv4_1: Result := Create(soup3_0_cookie_new(Pgchar(aName), Pgchar(aValue), Pgchar(aDomain), Pgchar(aPath), aMaxAge));
  end;
end;

destructor TWkCookie.Destroy;
begin
  inherited Destroy;
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_free(FCookie);
      Wkv4_1: soup3_0_cookie_free(FCookie);
    end;
    FCookie := nil;
  end;
end;

function TWkCookie.Data(): PSoupCookie;
begin
  Result := FCookie;
end;

function TWkCookie.GetDomain(): string;
begin
  Result := '';
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := string(soup2_4_cookie_get_domain(FCookie));
      Wkv4_1: Result := string(soup3_0_cookie_get_domain(FCookie));
    end;
  end;
end;

procedure TWkCookie.SetDomain(aValue: string);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_domain(FCookie, Pgchar(aValue));
      Wkv4_1: soup3_0_cookie_set_domain(FCookie, Pgchar(aValue));
    end;
  end;
end;

function TWkCookie.GetExpires(): PWkDateTime;
begin
  Result := nil;
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := soup2_4_cookie_get_expires(FCookie);
      Wkv4_1: Result := soup3_0_cookie_get_expires(FCookie);
    end;
  end;
end;

procedure TWkCookie.SetExpires(aValue: PWkDateTime);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_expires(FCookie, aValue);
      Wkv4_1: soup3_0_cookie_set_expires(FCookie, aValue);
    end;
  end;
end;

function TWkCookie.GetHttpOnly(): boolean;
begin
  Result := False;
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := boolean(soup2_4_cookie_get_http_only(FCookie));
      Wkv4_1: Result := boolean(soup3_0_cookie_get_http_only(FCookie));
    end;
  end;
end;

procedure TWkCookie.SetHttpOnly(aValue: boolean);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_http_only(FCookie, aValue);
      Wkv4_1: soup3_0_cookie_set_http_only(FCookie, aValue);
    end;
  end;
end;

function TWkCookie.GetName(): string;
begin
  Result := '';
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := string(soup2_4_cookie_get_name(FCookie));
      Wkv4_1: Result := string(soup3_0_cookie_get_name(FCookie));
    end;
  end;
end;

procedure TWkCookie.SetName(aValue: string);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_name(FCookie, Pgchar(aValue));
      Wkv4_1: soup3_0_cookie_set_name(FCookie, Pgchar(aValue));
    end;
  end;
end;

function TWkCookie.GetPath(): string;
begin
  Result := '';
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := string(soup2_4_cookie_get_path(FCookie));
      Wkv4_1: Result := string(soup3_0_cookie_get_path(FCookie));
    end;
  end;
end;

procedure TWkCookie.SetPath(aValue: string);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_path(FCookie, Pgchar(aValue));
      Wkv4_1: soup3_0_cookie_set_path(FCookie, Pgchar(aValue));
    end;
  end;
end;

function TWkCookie.GetSecure(): boolean;
begin
  Result := False;
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := boolean(soup2_4_cookie_get_secure(FCookie));
      Wkv4_1: Result := boolean(soup3_0_cookie_get_secure(FCookie));
    end;
  end;
end;

procedure TWkCookie.SetSecure(aValue: boolean);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_secure(FCookie, aValue);
      Wkv4_1: soup3_0_cookie_set_secure(FCookie, aValue);
    end;
  end;
end;

function TWkCookie.GetValue(): string;
begin
  Result := '';
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := string(soup2_4_cookie_get_value(FCookie));
      Wkv4_1: Result := string(soup3_0_cookie_get_value(FCookie));
    end;
  end;
end;

procedure TWkCookie.SetValue(aValue: string);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_value(FCookie, Pgchar(aValue));
      Wkv4_1: soup3_0_cookie_set_value(FCookie, Pgchar(aValue));
    end;
  end;
end;

procedure TWkCookie.SetMaxAge(aValue: longint);
begin
  if Assigned(FCookie) then
  begin
    case GWebkit2Version of
      Wkv4_0: soup2_4_cookie_set_max_age(FCookie, aValue);
      Wkv4_1: soup3_0_cookie_set_max_age(FCookie, aValue);
    end;
  end;
end;

{ TWkCookieList }

constructor TWkCookieList.Create(aList: PList);
begin
  FList := aList;
end;

destructor TWkCookieList.Destroy;
begin
  inherited Destroy;
  if Assigned(FList) then
  begin
    LazGLib2.g_list_free(FList);
    FList := nil;
  end;
end;

function TWkCookieList.Data(): PList;
begin
  Result := FList
end;

function TWkCookieList.Length(): integer;
begin
  Result := 0;
  if Assigned(FList) then
  begin
     Result := LazGLib2.g_list_length(FList);;
  end;
end;

function TWkCookieList.GetCookie(index: integer): PSoupCookie;
begin
  Result := nil;
  if Assigned(FList) then
  begin
    Result := PSoupCookie(LazGLib2.g_list_nth_data(FList, index));
  end;
end;

{ TWkCookieDate }

constructor TWkCookieDate.Create(aDate: PWkDateTime);
begin
  FDate := nil;
  if Assigned(aDate) then
    FDate := aDate;
end;

class function TWkCookieDate.NewCustomCookieDate(aYear, aMonth, aDay, aHour, aMinute, aSecond: longint): TWkCookieDate;
begin
  Result := nil;
  case GWebkit2Version of
    Wkv4_0: Result := Create(soup2_4_date_new(aYear, aMonth, aDay, aHour, aMinute, aSecond));
    Wkv4_1: Result := Create(TGDateTime.new(TGTimeZone.new_utc, aYear, aMonth, aDay, aHour, aMinute, gdouble(aSecond)));
  end;
end;

class function TWkCookieDate.NewCookieDate(): TWkCookieDate;
var
  CurrentDateTime: TDateTime;
  aYear, aMonth, aDay, aHour, aMinute, aSecond, aMilliSecond: word;
begin
  CurrentDateTime := Now;
  DecodeDate(CurrentDateTime, aYear, aMonth, aDay);
  DecodeTime(CurrentDateTime, aHour, aMinute, aSecond, aMilliSecond);
  Result := NewCustomCookieDate(aYear, aMonth, aDay, aHour, aMinute, aSecond);
end;

destructor TWkCookieDate.Destroy;
begin
  inherited Destroy;
  if Assigned(FDate) then
  begin
    //soup_date_free(FDate); // 好像不能调用 free ？
    FDate := nil;
  end;
end;

function TWkCookieDate.Data(): PWkDateTime;
begin
  Result := FDate;
end;

function TWkCookieDate.Year(): longint;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := longint(soup2_4_date_get_year(FDate));
      Wkv4_1: Result := longint(PGDateTime(FDate)^.get_year);
    end;
  end;
end;

function TWkCookieDate.Month(): longint;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := longint(soup2_4_date_get_month(FDate));
      Wkv4_1: Result := longint(PGDateTime(FDate)^.get_month);
    end;
  end;
end;

function TWkCookieDate.Day(): longint;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := longint(soup2_4_date_get_day(FDate));
      Wkv4_1: Result := longint(PGDateTime(FDate)^.get_day_of_month);
    end;
  end;
end;

function TWkCookieDate.Hour(): longint;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := longint(soup2_4_date_get_hour(FDate));
      Wkv4_1: Result := longint(PGDateTime(FDate)^.get_hour);
    end;
  end;
end;

function TWkCookieDate.Minute(): longint;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := longint(soup2_4_date_get_minute(FDate));
      Wkv4_1: Result := longint(PGDateTime(FDate)^.get_minute);
    end;
  end;
end;

function TWkCookieDate.Second(): longint;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := longint(soup2_4_date_get_second(FDate));
      Wkv4_1: Result := longint(PGDateTime(FDate)^.get_second);
    end;
  end;
end;

function TWkCookieDate.Utc(): boolean;
begin
  Result := False;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := boolean(soup2_4_date_get_utc(FDate));
      Wkv4_1: Result := StrComp(PGDateTime(FDate)^.get_timezone^.get_identifier, 'UTC') = 0;
    end;
  end;
end;

function TWkCookieDate.Offset(): longint;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := longint(soup2_4_date_get_offset(FDate));
      Wkv4_1: Result := longint(PGDateTime(FDate)^.get_utc_offset div G_USEC_PER_SEC);
    end;
  end;
end;

function TWkCookieDate.ToStringTime(format: TSoupDateFormat = SOUP_DATE_HTTP): string;
begin
  Result := '';
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := string(soup2_4_date_to_string(FDate, format));
      Wkv4_1: Result := string(soup3_0_date_time_to_string(PGDateTime(FDate), format));
    end;
  end;
end;

function TWkCookieDate.ToLongTime(): int64;
begin
  Result := 0;
  if Assigned(FDate) then
  begin
    case GWebkit2Version of
      Wkv4_0: Result := int64(soup2_4_date_to_time_t(FDate));
      Wkv4_1: Result := int64(PGDateTime(FDate)^.to_unix);
    end;
  end;
end;

end.
