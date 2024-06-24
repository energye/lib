unit uWkWebContext;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes,
  LazGLib2, LazGObject2,
  uWkInterfaces, uLibWebKit, uWkCookieManager, uWkURISchemeRequest;

type

  TWkWebContext = class
  private
    FWebContext: WebKitWebContext;
  protected
  public
    constructor Create(aWebContext: WebKitWebContext);
    destructor Destroy; override;
    procedure RegisterURIScheme(aScheme: string; aDelegate: IWkSchemeRequestDelegateEvent);
    procedure SetCacheModel(cache_model: WebKitCacheModel);
    procedure DownloadURI(uri: string);
    function GetCookieManager(): TWkCookieManager;
    procedure SetWetPreferredLanguages(languages: TStrings);
    class function Default(): TWkWebContext;
    class function New(): TWkWebContext;
  end;

implementation


procedure doAPIURISchemeRequest(request: WebKitURISchemeRequest; user_data: gpointer); cdecl;
var
  URISchemeRequest: TWkURISchemeRequest;
begin
  URISchemeRequest := TWkURISchemeRequest.Create(request);
  IWkSchemeRequestDelegateEvent(user_data).doURISchemeRequest(URISchemeRequest);
  URISchemeRequest := nil;
end;

constructor TWkWebContext.Create(aWebContext: WebKitWebContext);
begin
  FWebContext := aWebContext;
end;

destructor TWkWebContext.Destroy;
begin
  inherited Destroy;
  FWebContext := nil;
end;

procedure TWkWebContext.RegisterURIScheme(aScheme: string; aDelegate: IWkSchemeRequestDelegateEvent);
begin
  if Assigned(FWebContext) then
  begin
    webkit_web_context_register_uri_scheme(FWebContext, Pgchar(aScheme), TGCALLBACK(@doAPIURISchemeRequest), aDelegate, nil);
  end;
end;

procedure TWkWebContext.SetCacheModel(cache_model: WebKitCacheModel);
begin
  if Assigned(FWebContext) then
  begin
    webkit_web_context_set_cache_model(FWebContext, cache_model);
  end;
end;

procedure TWkWebContext.DownloadURI(uri: string);
begin
  if Assigned(FWebContext) then
  begin
    webkit_web_context_download_uri(FWebContext, Pgchar(uri));
  end;
end;

function TWkWebContext.GetCookieManager(): TWkCookieManager;
begin
  Result := nil;
  if Assigned(FWebContext) then
  begin
    Result := TWkCookieManager.Create(webkit_web_context_get_cookie_manager(FWebContext));
  end;
end;

procedure TWkWebContext.SetWetPreferredLanguages(languages: TStrings);
var
  tmpList: PGList;
  I: Integer;
begin
  if Assigned(FWebContext) and (languages.Count > 0) then
  begin
    tmpList := TGList.alloc();
    for I := 0 to languages.Count - 1 do
    begin
      tmpList := tmpList^.append(tmpList, Pgchar(languages[I]));
    end;
    webkit_web_context_set_preferred_languages(FWebContext, tmpList);
    tmpList := nil;
  end;
end;

class function TWkWebContext.Default(): TWkWebContext;
begin
  Result := Create(webkit_web_context_get_default());
end;

class function TWkWebContext.New(): TWkWebContext;
begin
  Result := Create(webkit_web_context_new());
end;


end.
