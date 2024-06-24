unit uWkURIResponse;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  uWkInterfaces, uLibWebkit, uWkHeaders;

type

  TWkURIResponse = class(TInterfacedObject, IWkURIResponse)
  protected
    FURIResponse: WebKitURIResponse;
    FHeaders: TWkHeaders;
    function GetUri(): string;
  public
    constructor Create(aURIResponse: WebKitURIResponse);
    destructor Destroy; override;
    property URI: string read GetUri;
    function Headers(): IWkHeaders;
    function GetStatusCode(): integer;
    function GetContentLength(): uint64;
    function GetMimeType(): string;
    function GetSuggestedFilename(): string;
  end;

implementation

constructor TWkURIResponse.Create(aURIResponse: WebKitURIResponse);
begin
  inherited Create;
  FURIResponse := aURIResponse;
  FHeaders := nil;
end;

destructor TWkURIResponse.Destroy;
begin
  inherited Destroy;
  FURIResponse := nil;
  FHeaders := nil;
end;

function TWkURIResponse.GetUri(): string;
begin
  Result := '';
  if Assigned(FURIResponse) then
    Result := string(webkit_uri_response_get_uri(FURIResponse));
end;

function TWkURIResponse.Headers(): IWkHeaders;
begin
  if Assigned(FURIResponse) and not Assigned(FHeaders) then
    FHeaders := TWkHeaders.Create(webkit_uri_response_get_http_headers(FURIResponse));
  Result := FHeaders;
end;

function TWkURIResponse.GetStatusCode(): integer;
begin
  Result := 0;
  if Assigned(FURIResponse) then
    Result := integer(webkit_uri_response_get_status_code(FURIResponse));
end;

function TWkURIResponse.GetContentLength(): uint64;
begin
  Result := 0;
  if Assigned(FURIResponse) then
    Result := uint64(webkit_uri_response_get_content_length(FURIResponse));
end;

function TWkURIResponse.GetMimeType(): string;
begin
  Result := '';
  if Assigned(FURIResponse) then
    Result := string(webkit_uri_response_get_mime_type(FURIResponse));
end;

function TWkURIResponse.GetSuggestedFilename(): string;
begin
  Result := '';
  if Assigned(FURIResponse) then
    Result := string(webkit_uri_response_get_suggested_filename(FURIResponse));
end;

end.
