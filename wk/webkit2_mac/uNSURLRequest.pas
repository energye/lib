unit uNSURLRequest;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll;

type


  TNSURLRequest = class
  private
    FData: NSURLRequest;
  public
    constructor Create(AData: NSURLRequest);
    destructor Destroy; override;
    function Data(): NSURLRequest;
  public
    class function New(): TNSURLRequest;
    class function RequestWithURL(URL: NSURL): TNSURLRequest;
    class function SupportsSecureCoding: LongBool;
    class function RequestWithURLCachePolicyTimeoutInterval (URL: NSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): TNSURLRequest;
    function URL: NSURL;
    function CachePolicy: NSURLRequestCachePolicy;
    function TimeoutInterval: double;
    function MainDocumentURL: NSURL;
    function NetworkServiceType: NSURLRequestNetworkServiceType;
    function AllowsCellularAccess: LongBool;
    function HTTPMethod: string;
    function AllHTTPHeaderFields: string;
    function ValueForHTTPHeaderField (aField: string): string;
  end;

  TNSMutableURLRequest = class
  private
    FMutableData: NSMutableURLRequest;
  protected
    function MutableData(): NSMutableURLRequest;
  public
    constructor Create(AData: NSMutableURLRequest);
    destructor Destroy; override;
  public
    class function New(): TNSMutableURLRequest;
    procedure SetHTTPMethod(aMethod: string);
    procedure SetAllHTTPHeaderFields(headerFieldsJSONString: string);
    procedure SetValueForHTTPHeaderField (aValue: string; aField: string);
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
    // FData.release;
    FData := nil;
  end;
  inherited Destroy;
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
  inherited Create();
  FMutableData := AData;
end;

destructor TNSMutableURLRequest.Destroy;
begin
  FMutableData := nil;
  inherited Destroy;
end;

class function TNSMutableURLRequest.New(): TNSMutableURLRequest;
begin
  Result := Create(NSMutableURLRequest.alloc.init);
end;

function TNSMutableURLRequest.MutableData(): NSMutableURLRequest;
begin
  Result := FMutableData;
end;

procedure TNSMutableURLRequest.SetHTTPMethod(aMethod: string);
begin
  if Assigned(FMutableData) then
  begin
    FMutableData.setHTTPMethod(StrToNSString(aMethod));
  end;
end;

procedure TNSMutableURLRequest.SetAllHTTPHeaderFields(headerFieldsJSONString: string);
var
  TempHeaderJSONData: NSData;
  TempHeaderFields: NSDictionary;
begin
  if Assigned(FMutableData) then
  begin
    TempHeaderJSONData := NSData.dataWithBytes_length(PChar(headerFieldsJSONString), NSUInteger(Length(headerFieldsJSONString)));
    if TempHeaderJSONData = nil then
      exit;
    TempHeaderFields := NSJSONSerialization.JSONObjectWithData_options_error(TempHeaderJSONData, NSJSONReadingMutableContainers, nil);
    if TempHeaderFields = nil then
      exit;
    FMutableData.setAllHTTPHeaderFields(TempHeaderFields);
  end;
end;

procedure TNSMutableURLRequest.SetValueForHTTPHeaderField (aValue: string; aField: string);
begin
  if Assigned(FMutableData) then
  begin
    FMutableData.setValue_forHTTPHeaderField(StrToNSString(aValue), StrToNSString(aField));
  end;
end;

procedure TNSMutableURLRequest.AddValueForHTTPHeaderField (aValue: string; aField: string);
begin
  if Assigned(FMutableData) then
  begin
    FMutableData.addValue_forHTTPHeaderField(StrToNSString(aValue), StrToNSString(aField));
  end;
end;

end.
