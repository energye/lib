unit uNSURLRequest;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  CocoaAll, uWebKit, uWkInterface, uNSURL;

type


  TNSURLRequest = class(TInterfacedObject, INSURLRequest)
  private
    FData: NSURLRequest;
  protected
    function Data(): NSURLRequest;
  public
    constructor Create; overload;
    constructor Create(AData: NSURLRequest);
    destructor Destroy; override;
  public
    class function RequestWithURL (URL: INSURL): INSURLRequest;
    class function SupportsSecureCoding: LongBool;
    class function RequestWithURLCachePolicyTimeoutInterval (URL: INSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): INSURLRequest;
    function URL: INSURL;
    function CachePolicy: NSURLRequestCachePolicy;
    function TimeoutInterval: double;
    function MainDocumentURL: INSURL;
    function NetworkServiceType: NSURLRequestNetworkServiceType;
    function AllowsCellularAccess: LongBool;
    function HTTPMethod: string;
    function AllHTTPHeaderFields: string;
    function ValueForHTTPHeaderField (aField: string): string;
  end;

  TNSMutableURLRequest = class(TNSURLRequest, INSMutableURLRequest)
  private
    FMutableData: NSMutableURLRequest;
  protected
    function MutableData(): NSMutableURLRequest;
  public
    constructor Create; overload;
    constructor Create(AData: NSMutableURLRequest);
    destructor Destroy; override;
  public
    procedure SetHTTPMethod(aMethod: string);
    procedure SetAllHTTPHeaderFields(headerFieldsJSONString: string);
    procedure SetValueForHTTPHeaderField (aValue: string; aField: string);
    procedure AddValueForHTTPHeaderField (aValue: string; aField: string);
  end;


implementation


constructor TNSURLRequest.Create;
begin
  inherited Create;
  FData := NSURLRequest.alloc.init;
end;

constructor TNSURLRequest.Create(AData: NSURLRequest);
begin
  inherited Create;
  FData := AData;
end;

destructor TNSURLRequest.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TNSURLRequest.Data(): NSURLRequest;
begin
  Result := FData;
end;

class function TNSURLRequest.RequestWithURL (URL: INSURL): INSURLRequest;
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

class function TNSURLRequest.RequestWithURLCachePolicyTimeoutInterval (URL: INSURL; cachePolicy: NSURLRequestCachePolicy; timeoutInterval: NSTimeInterval): INSURLRequest;
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
    TempJSONData := NSJSONSerialization.dataWithJSONObject_options_error(TempHeaders, 0, nil);
    TempJSONString := NSString.alloc.initWithData_encoding(TempJSONData, NSUTF8StringEncoding);
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


constructor TNSMutableURLRequest.Create;
begin
  FMutableData := NSMutableURLRequest.alloc.init;
  inherited Create(FMutableData);
end;

constructor TNSMutableURLRequest.Create(AData: NSMutableURLRequest);
begin
  FMutableData := AData;
  inherited Create(FMutableData);
end;

destructor TNSMutableURLRequest.Destroy;
begin
  FMutableData := nil;
  inherited Destroy;
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
    TempHeaderFields := NSJSONSerialization.JSONObjectWithData_options_error(TempHeaderJSONData, NSJSONReadingMutableContainers, nil);
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
