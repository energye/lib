unit uNSURL;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils, uWebKit, uWkInterface;

type

  TNSURL = class(TInterfacedObject, INSURL)
  private
    FData: NSURL;
  protected
    function Data(): NSURL;
  public
    constructor Create; overload;
    constructor Create(AData: NSURL);
    destructor Destroy; override;
  public
    class function URLWithString (URLString: string): INSURL;
    class function URLWithStringRelativeToURL (URLString: string; baseURL: TNSURL): INSURL;
    function AbsoluteString: string;
    function RelativeString: string;
    function BaseURL: INSURL;
    function AbsoluteURL: INSURL;
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

constructor TNSURL.Create;
begin
  inherited Create;
  FData := NSURL.alloc.init;
end;

constructor TNSURL.Create(AData: NSURL);
begin
  FData := AData;
end;

destructor TNSURL.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TNSURL.Data(): NSURL;
begin
  Result := FData;
end;

class function TNSURL.URLWithString (URLString: string): INSURL;
var
  TempNSURL: NSURL;
begin
  Result := nil;
  TempNSURL := NSURL.URLWithString(NSStringUtf8(URLString));
  if Assigned(TempNSURL) then
    Result := Create(TempNSURL);
end;

class function TNSURL.URLWithStringRelativeToURL (URLString: string; baseURL: TNSURL): INSURL;
var
  TempNSURL: NSURL;
begin
  Result := nil;
  if Assigned(baseURL) then
    TempNSURL := NSURL.URLWithString_relativeToURL(NSStringUtf8(URLString), baseURL.FData)
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

function TNSURL.BaseURL: INSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
     Result := TNSURL.Create(FData.baseURL);
  end;
end;

function TNSURL.AbsoluteURL: INSURL;
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
