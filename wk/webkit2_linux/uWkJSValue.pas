unit uWkJSValue;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2,
  uLibWebKit;

type

  JSType = (jtInvalid, jtNotSupported, jtUndefined, jtNull, jtString, jtNumber,
    jtInteger, jtBoolean, jtException);

  TWkJSValue = class
  private
    FResult: WebKitJavascriptResult;
    FContextRef: JSGlobalContextRef; // < 22
    FJSValueRef: JSValueRef; // < 22
    FJSCValue: JSCValue;
    FValueType: JSType;
    FException: string;
  protected
    function CheckGetValueExecption(): boolean;
    function CheckGetValueExecption(aExecption: JSValueRef): boolean;
    function GetValueType(): JSType;
  public
    constructor Create(aResult: WebKitJavascriptResult; aIsException: boolean; exception: string);
    constructor Create(aResult: WebKitJavascriptResult);
    destructor Destroy; override;
  public
    property ValueType: JSType read GetValueType;
    function StringValue(): string;
    function NumberValue(): double;
    function IntegerValue(): integer;
    function BooleanValue(): boolean;
    function ExceptionMessage(): string;
  end;

implementation

// GE2 >= 2
// L22 < 22
function WebkitMajorGE2L22(): boolean;
begin
  Result := (webkit_major_version() >= 2) and (webkit_minor_version() < 22);
  // Result := True; // test
end;

constructor TWkJSValue.Create(aResult: WebKitJavascriptResult; aIsException: boolean; exception: string);
begin
  if aIsException then
  begin
    FValueType := jtException;
    FException := exception;
  end;
  if aResult <> nil then
  begin
    Create(aResult);
  end;
end;

constructor TWkJSValue.Create(aResult: WebKitJavascriptResult);
begin
  if aResult <> nil then
  begin
    FResult := aResult;
    // webkit2 version < 22
    if WebkitMajorGE2L22() then
    begin
      FContextRef := webkit_javascript_result_get_global_context(aResult);
      FJSValueRef := webkit_javascript_result_get_value(aResult);
    end
    else
      FJSCValue := webkit_javascript_result_get_js_value(aResult);
  end;
end;

destructor TWkJSValue.Destroy;
begin
  inherited Destroy;
  FResult := nil;
  FJSCValue := nil;
  FContextRef := nil; // < 22
  FJSValueRef := nil; // < 22
end;

function TWkJSValue.GetValueType(): JSType;
begin
  if FValueType = jtInvalid then
  begin
    if WebkitMajorGE2L22() then
    begin
      if JSValueGetType(FContextRef, FJSValueRef) = kJSTypeString then
        FValueType := jtString
      else if JSValueGetType(FContextRef, FJSValueRef) = kJSTypeUndefined then
        FValueType := jtUndefined
      else if JSValueGetType(FContextRef, FJSValueRef) = kJSTypeNull then
        FValueType := jtNull
      else if JSValueGetType(FContextRef, FJSValueRef) = kJSTypeNumber then
        FValueType := jtNumber
      else if JSValueGetType(FContextRef, FJSValueRef) = kJSTypeBoolean then
        FValueType := jtBoolean
      else
        FValueType := jtNotSupported;
    end
    else
    begin
      if jsc_value_is_string(FJSCValue) then
        FValueType := jtString
      else if jsc_value_is_undefined(FJSCValue) then
        FValueType := jtUndefined
      else if jsc_value_is_null(FJSCValue) then
        FValueType := jtNull
      else if jsc_value_is_number(FJSCValue) then
        FValueType := jtNumber
      else if jsc_value_is_boolean(FJSCValue) then
        FValueType := jtBoolean
      else
        FValueType := jtNotSupported;
    end;
  end;
  Result := FValueType;
end;

function TWkJSValue.CheckGetValueExecption(): boolean;
var
  aExecption: JSCException;
  aExecptionValue: Pgchar;
begin
  Result := False;
  aExecption := jsc_context_get_exception(jsc_value_get_context(FJSCValue));
  if aExecption <> nil then
  begin
    aExecptionValue := jsc_exception_get_message(aExecption);
    FValueType := jtException;
    FException := string(aExecptionValue);
    Result := True;
    g_free(aExecptionValue);
  end;
end;

function TWkJSValue.CheckGetValueExecption(aExecption: JSValueRef): boolean;
begin
  Result := False;
  if aExecption <> nil then
  begin
    // todo no impl
    FValueType := jtException;
    FException := 'Value conversion of string type failed';
    g_free(aExecption);
    aExecption := nil;
  end;
end;

function TWkJSValue.StringValue(): string;
var
  aStrValue: Pgchar;
  aStringValueRef: JSStringRef;
  aStringValueSize: size_t;
  aException: JSValueRef;
  aStringValue: PChar;
begin
  Result := '';
  if GetValueType() = jtString then
  begin
    if WebkitMajorGE2L22() then
    begin
      aException := nil;
      aStringValueRef := JSValueToStringCopy(FContextRef, FJSValueRef, @aException);
      if not CheckGetValueExecption(aException) then
      begin
        aStringValueSize := JSStringGetMaximumUTF8CStringSize(aStringValueRef);
        GetMem(aStringValue, aStringValueSize * SizeOf(char));
        JSStringGetUTF8CString(aStringValueRef, aStringValue, aStringValueSize);
        JSStringRelease(aStringValueRef);
        Result := string(aStringValue);
        FreeMem(aStringValue);
      end;
    end
    else
    begin
      aStrValue := jsc_value_to_string(FJSCValue);
      if not CheckGetValueExecption() then
      begin
        Result := string(aStrValue);
      end;
      g_free(aStrValue);
    end;
  end;
end;

function TWkJSValue.NumberValue(): double;
var
  aNumValue: gdouble;
begin
  Result := 0.0;
  if GetValueType() = jtNumber then
  begin
    aNumValue := jsc_value_to_double(FJSCValue);
    if not CheckGetValueExecption() then
    begin
      Result := double(aNumValue);
    end;
  end;
end;

function TWkJSValue.IntegerValue(): integer;
var
  aInt32Value: gint32;
begin
  Result := 0;
  if GetValueType() = jtNumber then
  begin
    aInt32Value := jsc_value_to_int32(FJSCValue);
    if not CheckGetValueExecption() then
    begin
      Result := integer(aInt32Value);
    end;
  end;
end;

function TWkJSValue.BooleanValue(): boolean;
var
  aBoolValue: gboolean;
begin
  Result := False;
  if GetValueType() = jtBoolean then
  begin
    aBoolValue := jsc_value_to_boolean(FJSCValue);
    if not CheckGetValueExecption() then
    begin
      Result := boolean(aBoolValue);
    end;
  end;
end;

function TWkJSValue.ExceptionMessage(): string;
begin
  Result := '';
  if GetValueType() = jtException then
    Result := FException;
end;

end.
