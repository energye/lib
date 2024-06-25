
//function
procedure CefV8Value_ExecuteFunction(AObj: ICefV8Value; const obj: ICefv8Value; const arguments: TCefv8ValueArray; argumentsLength: Integer; var Result: ICefv8Value); extdecl;
var
  i: integer;
  args: TCefv8ValueArray;
begin
  handleExceptionBegin
  if argumentsLength > 0 then
  begin
    SetLength(args, argumentsLength);
    for i := 0 to argumentsLength - 1 do
    begin
      args[i] := arguments[i];
    end;
    Result := AObj.ExecuteFunction(obj, args);
  end
  else
    Result := AObj.ExecuteFunction(obj, nil);
  SetLength(args, 0);
  args := nil;
  handleExceptionEnd
end;

//function
procedure CefV8Value_ExecuteFunctionWithContext(AObj: ICefV8Value; const context: ICefv8Context; const obj: ICefv8Value; const arguments: TCefv8ValueArray; argumentsLength: Integer; var Result: ICefv8Value); extdecl;
var
  i: integer;
  args: TCefv8ValueArray;
begin
  handleExceptionBegin
  if argumentsLength > 0 then
  begin
    SetLength(args, argumentsLength);
    for i := 0 to argumentsLength - 1 do
    begin
      args[i] := arguments[i];
    end;
    Result := AObj.ExecuteFunctionWithContext(context, obj, args);
  end
  else
  begin
    Result := AObj.ExecuteFunctionWithContext(context, obj, nil);
  end;
  SetLength(args, 0);
  args := nil;
  handleExceptionEnd
end;

exports
  CefV8Value_ExecuteFunction,
  CefV8Value_ExecuteFunctionWithContext;
