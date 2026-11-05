unit uWkNSURLResponse;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  CocoaAll;

type

  // The metadata associated with the response to a URL load request, independent of protocol and URL scheme.
  // https://developer.apple.com/documentation/foundation/nsurlresponse?language=objc
  TWkNSURLResponse = class
  private
    FData: NSURLResponse;
  public
    constructor Create(AData: NSURLResponse);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): NSURLResponse;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an TWkNSURLResponse object.
    class function New(): TWkNSURLResponse;
    // Creates an initialized NSURLResponse object with the URL, MIME type, length, and text encoding set to given values.
    function InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: NSURL; MIMEType: string; length: Integer; name: String): TWkNSURLResponse;
    // The URL for the response.
    function URL: NSURL;
    // The MIME type of the response.
    function MIMEType: string;
    // The expected length of the response’s content.
    function ExpectedContentLength: int64;
    // The name of the text encoding provided by the response’s originating source.
    function TextEncodingName: string;
    // A suggested filename for the response data.
    function SuggestedFilename: string;
  end;

  // The metadata associated with the response to an HTTP protocol URL load request.
  // https://developer.apple.com/documentation/foundation/nshttpurlresponse?language=objc
  TWkNSHTTPURLResponse = class(TWkNSURLResponse)
  public
    constructor Create(AData: NSHTTPURLResponse);
    destructor Destroy; override;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an TWkNSHTTPURLResponse object.
    class function New(): TWkNSHTTPURLResponse;
    // Initializes an HTTP URL response object with a status code, protocol version, and response headers.
    function InitWithURLStatusCodeHTTPVersionHeaderFields (url_: NSURL; statusCode: Integer; HTTPVersion: string; headerFieldsJSONString: string): TWkNSHTTPURLResponse;
    // The response’s HTTP status code.
    function StatusCode: Integer;
    // All HTTP header fields of the response.
    function AllHeaderFields: string;
    // Returns a localized string corresponding to a specified HTTP status code.
    // statusCode: https://www.ietf.org/rfc/rfc2616.txt
    class function LocalizedStringForStatusCode (statusCode_: Integer): string;
  end;

implementation

constructor TWkNSURLResponse.Create(AData: NSURLResponse);
begin
  inherited Create;
  FData := AData;
end;

destructor TWkNSURLResponse.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkNSURLResponse.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWkNSURLResponse.Data(): NSURLResponse;
begin
  Result := FData;
end;

class function TWkNSURLResponse.New(): TWkNSURLResponse;
begin
  Result := Create(NSURLResponse.alloc);
end;

function TWkNSURLResponse.InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: NSURL; MIMEType: string; length: Integer; name: String): TWkNSURLResponse;
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
    Result := TWkNSURLResponse.Create(TempURLResponse);
  end;
end;

function TWkNSURLResponse.URL: NSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.URL;
  end;
end;

function TWkNSURLResponse.MIMEType: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.MIMEType);
  end;
end;

function TWkNSURLResponse.ExpectedContentLength: int64;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := int64(FData.expectedContentLength);
  end;
end;

function TWkNSURLResponse.TextEncodingName: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.textEncodingName);
  end;
end;

function TWkNSURLResponse.SuggestedFilename: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.suggestedFilename);
  end;
end;

constructor TWkNSHTTPURLResponse.Create(AData: NSHTTPURLResponse);
begin
  inherited Create(AData);
end;

destructor TWkNSHTTPURLResponse.Destroy;
begin
  inherited Destroy;
end;

procedure TWkNSHTTPURLResponse.Release();
begin
  if Assigned(FData) then
  begin
    inherited Release;
  end;
end;

class function TWkNSHTTPURLResponse.New(): TWkNSHTTPURLResponse;
begin
  Result := Create(NSHTTPURLResponse.alloc);
end;

// headerFields json 格式, {key: []value, ...}
function TWkNSHTTPURLResponse.InitWithURLStatusCodeHTTPVersionHeaderFields (url_: NSURL; statusCode: Integer; HTTPVersion: string; headerFieldsJSONString: string): TWkNSHTTPURLResponse;
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
    Result := TWkNSHTTPURLResponse.Create(TempResponse);
  end;
end;

function TWkNSHTTPURLResponse.StatusCode: Integer;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := Integer(NSHTTPURLResponse(FData).statusCode);
  end;
end;

function TWkNSHTTPURLResponse.AllHeaderFields: string;
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
class function TWkNSHTTPURLResponse.LocalizedStringForStatusCode (statusCode_: Integer): string;
var
  Temp: NSString;
begin
  Temp := NSHTTPURLResponse.localizedStringForStatusCode(NSInteger(statusCode_));
  Result := NSStringToString(Temp);
end;

end.
