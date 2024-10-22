unit uWkURISchemeRequest;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2,
  uWkInterfaces, uLibWebKit, uWkHeaders,
  uWkInputStream;

type

  TWkURISchemeRequest = class(TInterfacedObject, IWkURISchemeRequest)
  private
    FURISchemeRequest: WebKitURISchemeRequest;
    FHeaders: TWkHeaders;
    FInputStream: TWkInputStream;
  public
    constructor Create(URISchemeRequest: WebKitURISchemeRequest);
    destructor Destroy; override;
  public
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

implementation

constructor TWkURISchemeRequest.Create(URISchemeRequest: WebKitURISchemeRequest);
begin
  FURISchemeRequest := URISchemeRequest;
  FHeaders := nil;
  FInputStream := nil;
end;

destructor TWkURISchemeRequest.Destroy;
begin
  inherited Destroy;
  FURISchemeRequest := nil;
  //if Assigned(FHeaders) then
  //  FHeaders.Free;
  FHeaders := nil;
  FInputStream := nil;
end;

function TWkURISchemeRequest.Data(): WebKitURISchemeRequest;
begin
  Result := FURISchemeRequest;
end;

function TWkURISchemeRequest.Scheme(): string;
begin
  Result := '';
  if Assigned(FURISchemeRequest) then
  begin
    Result := webkit_uri_scheme_request_get_scheme(FURISchemeRequest);
  end;
end;

function TWkURISchemeRequest.Uri(): string;
begin
  Result := '';
  if Assigned(FURISchemeRequest) then
  begin
    Result := webkit_uri_scheme_request_get_uri(FURISchemeRequest);
  end;
end;

function TWkURISchemeRequest.Path(): string;
begin
  Result := '';
  if Assigned(FURISchemeRequest) then
  begin
    Result := webkit_uri_scheme_request_get_path(FURISchemeRequest);
  end;
end;

function TWkURISchemeRequest.WebView(): WebKitWebView;
begin
  Result := nil;
  if Assigned(FURISchemeRequest) then
  begin
    Result := webkit_uri_scheme_request_get_web_view(FURISchemeRequest);
  end;
end;

function TWkURISchemeRequest.Method(): string;
begin
  Result := '';
  if Assigned(FURISchemeRequest) then
  begin
    Result := webkit_uri_scheme_request_get_http_method(FURISchemeRequest);
  end;
end;

function TWkURISchemeRequest.Headers(): IWkHeaders;
begin
  if Assigned(FURISchemeRequest) and not Assigned(FHeaders) then
    FHeaders := TWkHeaders.Create(webkit_uri_scheme_request_get_http_headers(FURISchemeRequest));
  Result := FHeaders;
end;

function TWkURISchemeRequest.Body(): IWkInputStream;
begin
  if Assigned(FURISchemeRequest) and not Assigned(FInputStream) then
    FInputStream := TWkInputStream.Create(webkit_uri_scheme_request_get_http_body(FURISchemeRequest));
  Result := FInputStream;
end;

procedure TWkURISchemeRequest.Finish(stream: IWkInputStream; stream_length: int64; content_type: string);
begin
  if Assigned(FURISchemeRequest) then
  begin
    webkit_uri_scheme_request_finish(FURISchemeRequest, stream.Data(), gint64(stream_length), Pgchar(content_type));
  end;
end;

procedure TWkURISchemeRequest.FinishWithResponse(response: WebKitURISchemeResponse);
begin
  if Assigned(FURISchemeRequest) then
  begin
    webkit_uri_scheme_request_finish_with_response(FURISchemeRequest, response);
  end;
end;

procedure TWkURISchemeRequest.FinishError(code: int; errorMessage: string);
var
  aError: PGError;
begin
  aError := nil;
  if Assigned(FURISchemeRequest) then
  begin
    aError := new(PGError);
    aError^.code := gint(code);
    aError^.message := Pgchar(errorMessage);
    webkit_uri_scheme_request_finish_error(FURISchemeRequest, aError);
    g_error_free(aError);
  end;
end;


end.
