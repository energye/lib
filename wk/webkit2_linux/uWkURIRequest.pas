unit uWkURIRequest;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2,
  uWkInterfaces, uLibWebkit, uWkHeaders;

type

  TWkURIRequest = class(TInterfacedObject, IWkURIRequest)
  protected
    FURIRequest: WebKitURIRequest;
    FHeaders: TWkHeaders;
    function GetUri(): string;
    procedure SetUri(uri: string);
  public
    constructor Create(aURIRequest: WebKitURIRequest);
    destructor Destroy; override;
    function Method(): string;
    function Headers(): IWkHeaders;
    class function NewURIRequest(uri: string): IWkURIRequest;
    property URI: string read GetUri write SetUri;
  end;

implementation

constructor TWkURIRequest.Create(aURIRequest: WebKitURIRequest);
begin
  FURIRequest := aURIRequest;
  FHeaders := nil;
end;

destructor TWkURIRequest.Destroy;
begin
  inherited Destroy;
  FURIRequest := nil;
  FHeaders := nil;
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

function TWkURIRequest.Headers(): IWkHeaders;
begin
  if Assigned(FURIRequest) and not Assigned(FHeaders) then
    FHeaders := TWkHeaders.Create(webkit_uri_request_get_http_headers(FURIRequest));
  Result := FHeaders;
end;

class function TWkURIRequest.NewURIRequest(uri: string): IWkURIRequest;
begin
  Result := Create(webkit_uri_request_new(Pgchar(uri))) as IWkURIRequest;
end;


end.
