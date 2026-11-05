unit uWkWebContext;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes,
  LazGLib2, LazGObject2,
  uWkInterfaces, uLibWebKit;

type

  TWkWebContext = class
  private
    FWebContext: WebKitWebContext;
  public
    constructor Create(aWebContext: WebKitWebContext);
    destructor Destroy; override;
    function Data(): WebKitWebContext;
    procedure RegisterURIScheme(aScheme: string; aDelegate: IWkSchemeRequestDelegateEvent);
    procedure SetCacheModel(cache_model: WebKitCacheModel);
    procedure DownloadURI(uri: string);
    procedure SetWetPreferredLanguages(languages: TStrings);
    function GetCookieManager(): WebKitCookieManager;
  public
    class function Default(): TWkWebContext;
    class function New(): TWkWebContext;
  end;

implementation


procedure doAPIURISchemeRequest(request: WebKitURISchemeRequest; user_data: gpointer); cdecl;
begin
  IWkSchemeRequestDelegateEvent(user_data).doURISchemeRequest(request);
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

function TWkWebContext.Data(): WebKitWebContext;
begin
  Result := FWebContext;
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

function TWkWebContext.GetCookieManager(): WebKitCookieManager;
begin
  Result := nil;
  if Assigned(FWebContext) then
  begin
    Result := webkit_web_context_get_cookie_manager(FWebContext);
  end;
end;

procedure TWkWebContext.SetWetPreferredLanguages(languages: TStrings);
var
  LangList: PPgchar;
  I: Integer;
begin
  if Assigned(FWebContext) and (languages.Count > 0) then
  begin
    GetMem(LangList, SizeOf(Pgchar) * (languages.Count + 1));
    try
      for I := 0 to languages.Count - 1 do
      begin
        LangList[I] := Pgchar(PChar(languages[I]));
      end;
      LangList[languages.Count] := nil;
      webkit_web_context_set_preferred_languages(FWebContext, LangList);
    finally
      FreeMem(LangList);
    end;
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
