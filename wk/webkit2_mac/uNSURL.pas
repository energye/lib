unit uNSURL;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils;

type

  TNSURL = class
  private
    FData: NSURL;
  public
    constructor Create(AData: NSURL);
    destructor Destroy; override;
    function Data(): NSURL;
  public
    class function New(): TNSURL;
    class function URLWithString (URLString: string): TNSURL;
    class function URLWithStringRelativeToURL (URLString: string; baseURL: NSURL): TNSURL;
    function AbsoluteString: string;
    function RelativeString: string;
    function BaseURL: TNSURL;
    function AbsoluteURL: TNSURL;
    function Scheme: string;
    function Host: string;
    function Port: Integer;
    function User: string;
    function Password: string;
    function Path: string;
    function Fragment: string;
    function ParameterString: string;
    function Query: string;
  end;


implementation

constructor TNSURL.Create(AData: NSURL);
begin
  inherited Create;
  FData := AData;
end;

destructor TNSURL.Destroy;
begin
  if FData <> nil then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

function TNSURL.Data(): NSURL;
begin
  Result := FData;
end;

class function TNSURL.New(): TNSURL;
begin
  Result := Create(NSURL.alloc.init);
end;

class function TNSURL.URLWithString (URLString: string): TNSURL;
var
  TempNSURL: NSURL;
begin
  Result := nil;
  TempNSURL := NSURL.URLWithString(NSStringUtf8(URLString));
  if Assigned(TempNSURL) then
    Result := Create(TempNSURL);
end;

class function TNSURL.URLWithStringRelativeToURL (URLString: string; baseURL: NSURL): TNSURL;
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

function TNSURL.AbsoluteString: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.absoluteString);
  end;
end;

function TNSURL.RelativeString: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.relativeString);
  end;
end;

function TNSURL.Scheme: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.scheme);
  end;
end;

function TNSURL.BaseURL: TNSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
     Result := TNSURL.Create(FData.baseURL);
  end;
end;

function TNSURL.AbsoluteURL: TNSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
     Result := TNSURL.Create(FData.absoluteURL);
  end;
end;

function TNSURL.Host: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.host);
  end;
end;

function TNSURL.Port: Integer;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := Integer(FData.port.integerValue);
  end;
end;

function TNSURL.User: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.user);
  end;
end;

function TNSURL.Password: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.password);
  end;
end;

function TNSURL.Path: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.path);
  end;
end;

function TNSURL.Fragment: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.fragment);
  end;
end;

function TNSURL.ParameterString: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.parameterString);
  end;
end;

function TNSURL.Query: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.query);
  end;
end;


end.
