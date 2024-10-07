unit uNSURLRequest;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  CocoaAll, uWebKit, uWkInterface, uNSURL;

type


  TNSURLRequest = class(TInterfacedObject)
  private
    FData: NSURLRequest;
  protected
    function Data(): NSURLRequest;
  public
    constructor Create; overload;
    constructor Create(AData: NSURLRequest);
    destructor Destroy; override;
  public
    class function RequestWithURL (URL: INSURL): TNSURLRequest;
    class function SupportsSecureCoding: LongBool;
    class function RequestWithURLCachePolicyTimeoutInterval (URL: INSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): TNSURLRequest;
    function URL: INSURL;
    function CachePolicy: NSURLRequestCachePolicy;
    function TimeoutInterval: double;
    function MainDocumentURL: INSURL;
    function NetworkServiceType: NSURLRequestNetworkServiceType;
    function AllowsCellularAccess: LongBool;
  end;


implementation


constructor TNSURLRequest.Create;
begin
  FData := NSURLRequest.alloc.init;
end;

constructor TNSURLRequest.Create(AData: NSURLRequest);
begin
  FData := AData;
end;

destructor TNSURLRequest.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TNSURLRequest.Data(): NSURLRequest;
begin
  Result := FData;
end;

class function TNSURLRequest.RequestWithURL (URL: INSURL): TNSURLRequest;
var
  TempRequest: NSURLRequest;
begin
  Result := nil;
  TempRequest := NSURLRequest.requestWithURL(URL.Data());
  if Assigned(TempRequest) then
  begin
    Result := Create(TempRequest);
  end;
end;

class function TNSURLRequest.SupportsSecureCoding: LongBool;
begin
  Result := LongBool(NSURLRequest.supportsSecureCoding);
end;

class function TNSURLRequest.RequestWithURLCachePolicyTimeoutInterval (URL: INSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): TNSURLRequest;
var
  TempRequest: NSURLRequest;
begin
  Result := nil;
  TempRequest := NSURLRequest.requestWithURL_cachePolicy_timeoutInterval (URL.Data(), cachePolicy, timeoutInterval);
  if Assigned(TempRequest) then
  begin
    Result := Create(TempRequest);
  end;
end;

function TNSURLRequest.URL: INSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURL.Create(FData.URL);
  end;
end;

function TNSURLRequest.CachePolicy: NSURLRequestCachePolicy;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := NSURLRequestCachePolicy(FData.cachePolicy);
  end;
end;

function TNSURLRequest.TimeoutInterval: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := double(FData.timeoutInterval);
  end;
end;

function TNSURLRequest.MainDocumentURL: INSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURL.Create(FData.mainDocumentURL);
  end;
end;

function TNSURLRequest.NetworkServiceType: NSURLRequestNetworkServiceType;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := NSURLRequestNetworkServiceType(FData.networkServiceType);
  end;
end;

function TNSURLRequest.AllowsCellularAccess: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.allowsCellularAccess);
  end;
end;


end.
