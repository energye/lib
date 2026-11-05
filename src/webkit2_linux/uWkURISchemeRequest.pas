unit uWkURISchemeRequest;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2,
  uLibWebKit;

type

  TWkURISchemeRequest = class
  private
    FURISchemeRequest: WebKitURISchemeRequest;
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
    function Headers(): PSoupMessageHeaders;
    function Body(): PInputStream;
    procedure Finish(stream: PInputStream; stream_length: int64; content_type: string);
    procedure FinishWithResponse(response: WebKitURISchemeResponse);
    procedure FinishError(domain, code: integer; errorMessage: string);
  end;

implementation

constructor TWkURISchemeRequest.Create(URISchemeRequest: WebKitURISchemeRequest);
begin
  FURISchemeRequest := URISchemeRequest;
end;

destructor TWkURISchemeRequest.Destroy;
begin
  inherited Destroy;
  FURISchemeRequest := nil;
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

function TWkURISchemeRequest.Headers(): PSoupMessageHeaders;
begin
  Result := nil;
  if Assigned(FURISchemeRequest)  then
    Result := webkit_uri_scheme_request_get_http_headers(FURISchemeRequest);
end;

function TWkURISchemeRequest.Body(): PInputStream;
begin
  Result := nil;
  if Assigned(FURISchemeRequest) then
    Result := webkit_uri_scheme_request_get_http_body(FURISchemeRequest);
end;

procedure TWkURISchemeRequest.Finish(stream: PInputStream; stream_length: int64; content_type: string);
begin
  if Assigned(FURISchemeRequest) then
  begin
    webkit_uri_scheme_request_finish(FURISchemeRequest, stream, gint64(stream_length), Pgchar(content_type));
  end;
end;

procedure TWkURISchemeRequest.FinishWithResponse(response: WebKitURISchemeResponse);
begin
  if Assigned(FURISchemeRequest) then
  begin
    webkit_uri_scheme_request_finish_with_response(FURISchemeRequest, response);
  end;
end;

procedure TWkURISchemeRequest.FinishError(domain, code: int; errorMessage: string);
var
  aError: PGError;
begin
  aError := nil;
  if Assigned(FURISchemeRequest) then
  begin
    aError := TGError.new_literal(guint32(domain), gint(code), Pgchar(errorMessage));
    if aError <> nil then
    begin
      webkit_uri_scheme_request_finish_error(FURISchemeRequest, aError);
      aError^.free();
    end;
  end;
end;


end.
