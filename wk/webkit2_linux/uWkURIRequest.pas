unit uWkURIRequest;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2,
  uLibWebkit;

type

  TWkURIRequest = class
  protected
    FURIRequest: WebKitURIRequest;
    function GetUri(): string;
    procedure SetUri(uri: string);
  public
    constructor Create(aURIRequest: WebKitURIRequest);
    destructor Destroy; override;
    function Method(): string;
    function Headers(): PSoupMessageHeaders;
    property URI: string read GetUri write SetUri;
  public
    class function NewURIRequest(aUri: string): TWkURIRequest;
  end;

implementation

constructor TWkURIRequest.Create(aURIRequest: WebKitURIRequest);
begin
  FURIRequest := aURIRequest;
end;

destructor TWkURIRequest.Destroy;
begin
  inherited Destroy;
  FURIRequest := nil;
end;

function TWkURIRequest.GetUri(): string;
begin
  Result := '';
  if Assigned(FURIRequest) then
    Result := string(webkit_uri_request_get_uri(FURIRequest));
end;

procedure TWkURIRequest.SetUri(uri: string);
begin
  if Assigned(FURIRequest) then
    webkit_uri_request_set_uri(FURIRequest, Pgchar(uri));
end;

function TWkURIRequest.Method(): string;
begin
  Result := '';
  if Assigned(FURIRequest) then
    Result := string(webkit_uri_request_get_http_method(FURIRequest));
end;

function TWkURIRequest.Headers(): PSoupMessageHeaders;
begin
  Result := nil;
  if Assigned(FURIRequest) then
    Result := webkit_uri_request_get_http_headers(FURIRequest);
end;

class function TWkURIRequest.NewURIRequest(aUri: string): TWkURIRequest;
begin
  Result := Create(webkit_uri_request_new(Pgchar(aUri)));
end;


end.
