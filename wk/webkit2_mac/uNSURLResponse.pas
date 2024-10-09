unit uNSURLResponse;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  CocoaAll, uWebKit, uWkInterface, uNSURL;

type


  TNSURLResponse = class(TInterfacedObject, INSURLResponse)
  private
    FData: NSHTTPURLResponse;
  protected
    function Data(): NSHTTPURLResponse;
  public
    constructor Create; overload;
    constructor Create(AData: NSHTTPURLResponse);
    destructor Destroy; override;
  public
    function InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: INSURL; MIMEType: string; length: Integer; name: String): INSURLResponse;
    function URL: INSURL;
    function MIMEType: string;
    function ExpectedContentLength: int64;
    function TextEncodingName: string;
    function SuggestedFilename: string;
    function InitWithURLStatusCodeHTTPVersionHeaderFields (url_: INSURL; statusCode: Integer; HTTPVersion: string; headerFieldsJSONString: string): INSURLResponse;
    function StatusCode: Integer;
    function AllHeaderFields: string;
     // statusCode: https://www.ietf.org/rfc/rfc2616.txt
    class function LocalizedStringForStatusCode (statusCode_: Integer): string;
  end;


implementation


constructor TNSURLResponse.Create;
begin
  FData := NSHTTPURLResponse.alloc;
end;

constructor TNSURLResponse.Create(AData: NSHTTPURLResponse);
begin
  FData := AData;
end;

destructor TNSURLResponse.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TNSURLResponse.Data(): NSHTTPURLResponse;
begin
  Result := FData;
end;

function TNSURLResponse.InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: INSURL; MIMEType: string; length: Integer; name: String): INSURLResponse;
var
  TempResponse: NSHTTPURLResponse;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    TempResponse := FData.initWithURL_MIMEType_expectedContentLength_textEncodingName(URL.Data(), StrToNSString(MIMEType), NSInteger(length), StrToNSString(name));
    if TempResponse = nil then
      exit;
    Result := TNSURLResponse.Create(TempResponse);
  end;
end;

function TNSURLResponse.URL: INSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURL.Create(FData.URL);
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

// headerFields json 格式, {key: []value, ...}
function TNSURLResponse.InitWithURLStatusCodeHTTPVersionHeaderFields (url_: INSURL; statusCode: Integer; HTTPVersion: string; headerFieldsJSONString: string): INSURLResponse;
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
    TempResponse := FData.initWithURL_statusCode_HTTPVersion_headerFields(url_.Data(), NSInteger(statusCode), StrToNSString(HTTPVersion), TempHeaderFields);
    if TempResponse = nil then
      exit;
    Result := TNSURLResponse.Create(TempResponse);
  end;
end;

function TNSURLResponse.StatusCode: Integer;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := Integer(FData.statusCode);
  end;
end;

function TNSURLResponse.AllHeaderFields: string;
var
  TempHeaders: NSDictionary;
  TempJSONData: NSData;
  TempJSONString: NSString;
begin
  Result := '{}';
  if Assigned(FData) then
  begin
    TempHeaders := FData.allHeaderFields;
    TempJSONData := NSJSONSerialization.dataWithJSONObject_options_error(TempHeaders, 0, nil);
    TempJSONString := NSString.alloc.initWithData_encoding(TempJSONData, NSUTF8StringEncoding);
    Result := NSStringToString(TempJSONString);
  end;
end;

 // statusCode: https://www.ietf.org/rfc/rfc2616.txt
class function TNSURLResponse.LocalizedStringForStatusCode (statusCode_: Integer): string;
var
  Temp: NSString;
begin
  Temp := NSHTTPURLResponse.localizedStringForStatusCode(NSInteger(statusCode_));
  Result := NSStringToString(Temp);
end;

end.
