unit uWkNSURL;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils;

type

  // An object that represents the location of a resource, such as an item on a remote server or the path to a local file.
  // https://developer.apple.com/documentation/foundation/nsurl?language=objc
  TWkNSURL = class
  private
    FData: NSURL;
  public
    constructor Create(AData: NSURL);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): NSURL;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an NSURL object.
    class function New(): TWkNSURL;
    // Creates and returns an NSURL object initialized with a provided URL string.
    class function URLWithString (URLString: string): TWkNSURL;
    // Creates and returns an NSURL object initialized with a base URL and a relative string.
    class function URLWithStringRelativeToURL (URLString: string; baseURL: NSURL): TWkNSURL;
    // The URL string for the receiver as an absolute URL. (read-only)
    function AbsoluteString: string;
    // A string representation of the relative portion of the URL. (read-only)
    function RelativeString: string;
    // The base URL. (read-only)
    function BaseURL: TWkNSURL;
    // An absolute URL that refers to the same resource as the receiver. (read-only)
    function AbsoluteURL: TWkNSURL;
    // The scheme. (read-only)
    function Scheme: string;
    // The host, conforming to RFC 1808. (read-only)
    function Host: string;
    // The port, conforming to RFC 1808.
    function Port: Integer;
    // The user name, conforming to RFC 1808.
    function User: string;
    // The password conforming to RFC 1808. (read-only)
    function Password: string;
    // The path, conforming to RFC 1808. (read-only)
    function Path: string;
    // The fragment identifier, conforming to RFC 1808. (read-only)
    function Fragment: string;
    // The parameter string conforming to RFC 1808. (read-only)
    // Deprecated
    function ParameterString: string;
    // The query string, conforming to RFC 1808.
    function Query: string;
  end;


implementation

constructor TWkNSURL.Create(AData: NSURL);
begin
  inherited Create;
  FData := AData;
end;

destructor TWkNSURL.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkNSURL.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWkNSURL.Data(): NSURL;
begin
  Result := FData;
end;

class function TWkNSURL.New(): TWkNSURL;
begin
  Result := Create(NSURL.alloc.init);
end;

class function TWkNSURL.URLWithString (URLString: string): TWkNSURL;
var
  TempNSURL: NSURL;
begin
  Result := nil;
  TempNSURL := NSURL.URLWithString(NSStringUtf8(URLString));
  if Assigned(TempNSURL) then
    Result := Create(TempNSURL);
end;

class function TWkNSURL.URLWithStringRelativeToURL (URLString: string; baseURL: NSURL): TWkNSURL;
var
  TempNSURL: NSURL;
begin
  Result := nil;
  if Assigned(baseURL) then
    TempNSURL := NSURL.URLWithString_relativeToURL(NSStringUtf8(URLString), baseURL)
  else
  begin
    TempNSURL := NSURL.URLWithString_relativeToURL(NSStringUtf8(URLString), nil)
  end;
  if Assigned(TempNSURL) then
    Result := Create(TempNSURL);
end;

function TWkNSURL.AbsoluteString: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.absoluteString);
  end;
end;

function TWkNSURL.RelativeString: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.relativeString);
  end;
end;

function TWkNSURL.Scheme: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.scheme);
  end;
end;

function TWkNSURL.BaseURL: TWkNSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
     Result := TWkNSURL.Create(FData.baseURL);
  end;
end;

function TWkNSURL.AbsoluteURL: TWkNSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
     Result := TWkNSURL.Create(FData.absoluteURL);
  end;
end;

function TWkNSURL.Host: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.host);
  end;
end;

function TWkNSURL.Port: Integer;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := Integer(FData.port.integerValue);
  end;
end;

function TWkNSURL.User: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.user);
  end;
end;

function TWkNSURL.Password: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.password);
  end;
end;

function TWkNSURL.Path: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.path);
  end;
end;

function TWkNSURL.Fragment: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.fragment);
  end;
end;

function TWkNSURL.ParameterString: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.parameterString);
  end;
end;

function TWkNSURL.Query: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.query);
  end;
end;


end.
