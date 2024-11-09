unit uNSURLResponse;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  CocoaAll;

type


  TNSURLResponse = class
  private
    FData: NSURLResponse;
  public
    constructor Create(AData: NSURLResponse);
    destructor Destroy; override;
    function Data(): NSURLResponse;
    // Release the current object and Data pointer
    procedure Release();
  public
    class function New(): TNSURLResponse;
    function InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: NSURL; MIMEType: string; length: Integer; name: String): TNSURLResponse;
    function URL: NSURL;
    function MIMEType: string;
    function ExpectedContentLength: int64;
    function TextEncodingName: string;
    function SuggestedFilename: string;
  end;

  TNSHTTPURLResponse = class(TNSURLResponse)
  public
    constructor Create(AData: NSHTTPURLResponse);
    destructor Destroy; override;
    procedure Release();
  public
    class function New(): TNSHTTPURLResponse;
    function InitWithURLStatusCodeHTTPVersionHeaderFields (url_: NSURL; statusCode: Integer; HTTPVersion: string; headerFieldsJSONString: string): TNSHTTPURLResponse;
    function StatusCode: Integer;
    function AllHeaderFields: string;
     // statusCode: https://www.ietf.org/rfc/rfc2616.txt
    class function LocalizedStringForStatusCode (statusCode_: Integer): string;
  end;

implementation

constructor TNSURLResponse.Create(AData: NSURLResponse);
begin
  FData := AData;
end;

destructor TNSURLResponse.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TNSURLResponse.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TNSURLResponse.Data(): NSURLResponse;
begin
  Result := FData;
end;

class function TNSURLResponse.New(): TNSURLResponse;
begin
  Result := Create(NSURLResponse.alloc);
end;

function TNSURLResponse.InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: NSURL; MIMEType: string; length: Integer; name: String): TNSURLResponse;
var
  TempURLResponse: NSURLResponse;
begin
  Result := nil;
  TempURLResponse := nil;
  if Assigned(FData) then
  begin
    TempURLResponse := FData.initWithURL_MIMEType_expectedContentLength_textEncodingName(URL, StrToNSString(MIMEType), NSInteger(length), StrToNSString(name));
    if TempURLResponse = nil then
      exit;
    Result := TNSURLResponse.Create(TempURLResponse);
  end;
end;

function TNSURLResponse.URL: NSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.URL;
  end;
end;

function TNSURLResponse.MIMEType: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.MIMEType);
  end;
end;

function TNSURLResponse.ExpectedContentLength: int64;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := int64(FData.expectedContentLength);
  end;
end;

function TNSURLResponse.TextEncodingName: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.textEncodingName);
  end;
end;

function TNSURLResponse.SuggestedFilename: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.suggestedFilename);
  end;
end;

constructor TNSHTTPURLResponse.Create(AData: NSHTTPURLResponse);
begin
  FData := AData;
end;

destructor TNSHTTPURLResponse.Destroy;
begin
  inherited Destroy;
end;

procedure TNSHTTPURLResponse.Release();
begin
  if Assigned(FData) then
  begin
    inherited Release;
  end;
end;

class function TNSHTTPURLResponse.New(): TNSHTTPURLResponse;
begin
  Result := Create(NSHTTPURLResponse.alloc);
end;

// headerFields json 格式, {key: []value, ...}
function TNSHTTPURLResponse.InitWithURLStatusCodeHTTPVersionHeaderFields (url_: NSURL; statusCode: Integer; HTTPVersion: string; headerFieldsJSONString: string): TNSHTTPURLResponse;
var
  TempResponse: NSHTTPURLResponse;
  TempHeaderJSONData: NSData;
  TempHeaderFields: NSDictionary;
begin
  Result := nil;
  TempResponse := nil;
  TempHeaderJSONData := nil;
  TempHeaderFields := nil;
  if Assigned(FData) then
  begin
    TempHeaderJSONData := NSData.dataWithBytes_length(PChar(headerFieldsJSONString), NSUInteger(Length(headerFieldsJSONString)));
    if TempHeaderJSONData = nil then
      exit;
    TempHeaderFields := NSJSONSerialization.JSONObjectWithData_options_error(TempHeaderJSONData, NSJSONReadingMutableContainers, nil);
    if TempHeaderFields = nil then
      exit;
    TempResponse := NSHTTPURLResponse(FData).initWithURL_statusCode_HTTPVersion_headerFields(url_, NSInteger(statusCode), StrToNSString(HTTPVersion), TempHeaderFields);
    if TempResponse = nil then
      exit;
    Result := TNSHTTPURLResponse.Create(TempResponse);
  end;
end;

function TNSHTTPURLResponse.StatusCode: Integer;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := Integer(NSHTTPURLResponse(FData).statusCode);
  end;
end;

function TNSHTTPURLResponse.AllHeaderFields: string;
var
  TempHeaders: NSDictionary;
  TempJSONData: NSData;
  TempJSONString: NSString;
begin
  Result := '{}';
  if Assigned(FData) then
  begin
    TempHeaders := NSHTTPURLResponse(FData).allHeaderFields;
    TempJSONData := NSJSONSerialization.dataWithJSONObject_options_error(TempHeaders, 0, nil);
    TempJSONString := NSString.alloc.initWithData_encoding(TempJSONData, NSUTF8StringEncoding);
    Result := NSStringToString(TempJSONString);
  end;
end;

 // statusCode: https://www.ietf.org/rfc/rfc2616.txt
class function TNSHTTPURLResponse.LocalizedStringForStatusCode (statusCode_: Integer): string;
var
  Temp: NSString;
begin
  Temp := NSHTTPURLResponse.localizedStringForStatusCode(NSInteger(statusCode_));
  Result := NSStringToString(Temp);
end;

end.
