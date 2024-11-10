unit uNSURLRequest;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll;

type

  // A URL load request that is independent of protocol or URL scheme.
  // https://developer.apple.com/documentation/foundation/nsurlrequest?language=objc
  TNSURLRequest = class
  protected
    FData: NSURLRequest;
  public
    constructor Create(AData: NSURLRequest);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): NSURLRequest;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an NSURLRequest object.
    class function New(): TNSURLRequest;
    // Creates and returns a URL request for a specified URL.
    class function RequestWithURL(URL: NSURL): TNSURLRequest;
    // A Boolean value indicating whether the NSURLRequest implements the NSSecureCoding protocol.
    class function SupportsSecureCoding: LongBool;
    // Creates and returns an initialized URL request with specified URL, cache policy, and timeout values.
    class function RequestWithURLCachePolicyTimeoutInterval (URL: NSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): TNSURLRequest;
    // The URL being requested.
    function URL: NSURL;
    // The request’s cache policy.
    function CachePolicy: NSURLRequestCachePolicy;
    // The request’s timeout interval, in seconds.
    function TimeoutInterval: double;
    // The main document URL associated with the request.
    function MainDocumentURL: NSURL;
    // The network service type of the request.
    function NetworkServiceType: NSURLRequestNetworkServiceType;
    // A Boolean value that indicates whether the request is allowed to use the cellular radio (if present).
    function AllowsCellularAccess: LongBool;
    // The HTTP request method.
    function HTTPMethod: string;
    // A dictionary containing all of the HTTP header fields for a request. JSON string.
    function AllHTTPHeaderFields: string;
    // Returns the value of the specified HTTP header field.
    function ValueForHTTPHeaderField (aField: string): string;
  end;

  // A mutable URL load request that is independent of protocol or URL scheme.
  // https://developer.apple.com/documentation/foundation/nsmutableurlrequest?language=objc
  TNSMutableURLRequest = class(TNSURLRequest)
  public
    constructor Create(AData: NSMutableURLRequest);
    destructor Destroy; override;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an NSMutableURLRequest object.
    class function New(): TNSMutableURLRequest;
    // The HTTP request method.
    procedure SetHTTPMethod(aMethod: string);
    // A dictionary containing all of the HTTP header fields for a request.
    procedure SetAllHTTPHeaderFields(headerFieldsJSONString: string);
    // Sets a value for the header field.
    procedure SetValueForHTTPHeaderField (aValue: string; aField: string);
    // Adds a value to the header field.
    procedure AddValueForHTTPHeaderField (aValue: string; aField: string);
  end;


implementation

constructor TNSURLRequest.Create(AData: NSURLRequest);
begin
  inherited Create;
  FData := AData;
end;

destructor TNSURLRequest.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TNSURLRequest.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TNSURLRequest.Data(): NSURLRequest;
begin
  Result := FData;
end;

class function TNSURLRequest.New(): TNSURLRequest;
begin
  Result := Create(NSURLRequest.alloc.init);
end;

class function TNSURLRequest.RequestWithURL (URL: NSURL): TNSURLRequest;
var
  TempRequest: NSURLRequest;
begin
  Result := nil;
  TempRequest := NSURLRequest.requestWithURL(URL);
  if Assigned(TempRequest) then
  begin
    Result := Create(TempRequest);
  end;
end;

class function TNSURLRequest.SupportsSecureCoding: LongBool;
begin
  Result := LongBool(NSURLRequest.supportsSecureCoding);
end;

class function TNSURLRequest.RequestWithURLCachePolicyTimeoutInterval (URL: NSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): TNSURLRequest;
var
  TempRequest: NSURLRequest;
begin
  Result := nil;
  TempRequest := NSURLRequest.requestWithURL_cachePolicy_timeoutInterval (URL, cachePolicy, timeoutInterval);
  if Assigned(TempRequest) then
  begin
    Result := Create(TempRequest);
  end;
end;

function TNSURLRequest.URL: NSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.URL;
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

function TNSURLRequest.MainDocumentURL: NSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.mainDocumentURL;
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

function TNSURLRequest.HTTPMethod: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.HTTPMethod);
  end;
end;

function TNSURLRequest.AllHTTPHeaderFields: string;
var
  TempHeaders: NSDictionary;
  TempJSONData: NSData;
  TempJSONString: NSString;
begin
  Result := '{}';
  if Assigned(FData) then
  begin
    TempHeaders := FData.allHTTPHeaderFields;
    if TempHeaders = nil then
      exit;
    TempJSONData := NSJSONSerialization.dataWithJSONObject_options_error(TempHeaders, 0, nil);
    if TempJSONData = nil then
      exit;
    TempJSONString := NSString.alloc.initWithData_encoding(TempJSONData, NSUTF8StringEncoding);
    if TempJSONString = nil then
      exit;
    Result := NSStringToString(TempJSONString);
  end;
end;

function TNSURLRequest.ValueForHTTPHeaderField (aField: string): string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.valueForHTTPHeaderField(StrToNSString(aField)));
  end;
end;


constructor TNSMutableURLRequest.Create(AData: NSMutableURLRequest);
begin
  FData := AData;
end;

destructor TNSMutableURLRequest.Destroy;
begin
  inherited Destroy;
end;

procedure TNSMutableURLRequest.Release();
begin
  if Assigned(FData) then
  begin
    inherited Release;
  end;
end;

class function TNSMutableURLRequest.New(): TNSMutableURLRequest;
begin
  Result := Create(NSMutableURLRequest.alloc.init);
end;

procedure TNSMutableURLRequest.SetHTTPMethod(aMethod: string);
begin
  if Assigned(FData) then
  begin
    NSMutableURLRequest(FData).setHTTPMethod(StrToNSString(aMethod));
  end;
end;

procedure TNSMutableURLRequest.SetAllHTTPHeaderFields(headerFieldsJSONString: string);
var
  TempHeaderJSONData: NSData;
  TempHeaderFields: NSDictionary;
begin
  if Assigned(FData) then
  begin
    TempHeaderJSONData := NSData.dataWithBytes_length(PChar(headerFieldsJSONString), NSUInteger(Length(headerFieldsJSONString)));
    if TempHeaderJSONData = nil then
      exit;
    TempHeaderFields := NSJSONSerialization.JSONObjectWithData_options_error(TempHeaderJSONData, NSJSONReadingMutableContainers, nil);
    if TempHeaderFields = nil then
      exit;
    NSMutableURLRequest(FData).setAllHTTPHeaderFields(TempHeaderFields);
  end;
end;

procedure TNSMutableURLRequest.SetValueForHTTPHeaderField (aValue: string; aField: string);
begin
  if Assigned(FData) then
  begin
    NSMutableURLRequest(FData).setValue_forHTTPHeaderField(StrToNSString(aValue), StrToNSString(aField));
  end;
end;

procedure TNSMutableURLRequest.AddValueForHTTPHeaderField (aValue: string; aField: string);
begin
  if Assigned(FData) then
  begin
    NSMutableURLRequest(FData).addValue_forHTTPHeaderField(StrToNSString(aValue), StrToNSString(aField));
  end;
end;

end.
