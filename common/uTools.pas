//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------
unit uTools;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses
  {$IFDEF LINUX}xlib, {$ENDIF}
  {$IFnDEF MSWINDOWS}LCLType,Types{macos??},{$ENDIF}
  {$IFDEF MSWINDOWS}Windows,{$ENDIF}
  Classes, SysUtils, fgl;

type
  // 新的方式，不再使用id+map来查找，这样效率更高，且不会出错
  TEventObjectList = specialize TFPGMapObject<Pointer, TObject>;


function FileTimeToDateTime(const FileTime: TFileTime): TDateTime;

//string to hash
function StrToHash(const SoureStr: string): cardinal;

//PChar 转 UnicodeString
function PCharToUStr(const Value: PChar): unicodestring;

//PChar 转 WideChar
function PCharToWChar(const Value: PChar): WideChar;

//PChar 转 PWideChar
function PCharToPWChar(const Value: PChar): PWideChar;

//String 转 UnicodeString
function StrToUStr(const Value: string): unicodestring;

// byte 转 Integer
function ByteToInteger(const Data: array of byte; start: integer = 0): integer;

//复制 Byte 数组到 Dest
function CopyByteArray(const Source: array of byte; Position, Count: integer): TBytes;

function CopyStringToNewString(old: string): string;

//释放VarRec数组
procedure FreeArrayTVarRec(argsArray: array of TVarRec);


function ToPChar(AStr: PAnsiString): PChar; inline;
function ToPChar(AStr: string): PChar; inline;
function ToPChar(AStr: unicodestring): PChar; inline;
function ToPChar(AStr: WideChar): PChar; inline;
function ToPChar(AStr: PWideChar): PChar; inline;
function ToPChar(AFileTime: FILETIME): PChar; inline;
function ToPChar(AClsId: TCLSID): PChar; inline;


procedure StringBufferCreate(const AStr: string; out Data: Pointer; out Size: NativeUInt);

var
  {$ifdef DARWIN}
  CommandLine: TStringArray;
  CommandCount: integer;
  MyArgv: array of PChar;
  {$endif}
  //const config
  SingleProcess: boolean = False;

implementation


function FileTimeToDateTime(const FileTime: TFileTime): TDateTime;
begin
  // 将FILETIME结构转换为TDateTime
  Result := int64(FileTime.dwLowDateTime) + int64(FileTime.dwHighDateTime) * $100000000;
  Result := Result / (24 * 60 * 60 * 10000000) - 2082844800; // 调整到Unix时间戳
end;

function ToPChar(AStr: PAnsiString): PChar; inline;
begin
  Result := PChar(AStr^);
end;

function ToPChar(AStr: string): PChar; inline;
begin
  Result := PChar(AStr);
end;

function ToPChar(AStr: unicodestring): PChar; inline;
begin
  Result := PChar(UTF8Encode(AStr)); //PWideChar(AStr);
end;

function ToPChar(AStr: WideChar): PChar; inline;
begin
  Result := PChar(UTF8Encode(AStr));
end;

function ToPChar(AStr: PWideChar): PChar; inline;
begin
    Result := PChar(UTF8Encode(AStr^));
end;

function ToPChar(AFileTime: FILETIME): PChar; inline;
begin
  Result := PChar(DateTimeToStr(FileTimeToDateTime(AFileTime)));
end;

function ToPChar(AClsId: TCLSID): PChar; inline;
begin
  Result := PChar(AClsId.ToString(True));
end;


function ByteToInteger(const Data: array of byte; start: integer = 0): integer;
var
  byt: TBytes;
  Pint: PInteger;
begin
  try
    SetLength(byt, 4);
    byt[3] := Data[start + 0];
    byt[2] := Data[start + 1];
    byt[1] := Data[start + 2];
    byt[0] := Data[start + 3];
    Pint := PInteger(@byt[0]);
    Result := Pint^;
  finally
    SetLength(byt, 0);
    Pint := nil;
  end;
end;

//PChar 转 UnicodeString
function PCharToUStr(const Value: PChar): unicodestring;
begin
  Result := '';
  if Value <> nil then
    //关于PChar 默认编码不是UTF8
    Result := StrToUStr(StrPas(Value));
end;

function PCharToWChar(const Value: PChar): WideChar;
var
  WideStr: WideString;
begin
  WideStr := UTF8Decode(Value);
  Result := PWideChar(WideStr)^;
end;


function PCharToPWChar(const Value: PChar): PWideChar;
var
  WideStr: WideString;
begin
  WideStr := UTF8Decode(Value);
  Result := PWideChar(WideStr);
end;

//String 转 UnicodeString
function StrToUStr(const Value: string): unicodestring;
begin
  Result := UTF8Decode(Value);
end;

// string to hash
function StrToHash(const SoureStr: string): cardinal;
const
  cOneEight = 4;
  cThreeFourths = 24;
  cHighBits = $F0000000;
var
  I: integer;
  P: PChar;
  Temp: cardinal;
begin
  Result := 0;
  P := PChar(SoureStr);
  I := Length(SoureStr);
  while I > 0 do
  begin
    Result := (Result shl cOneEight) + Ord(P^);
    Temp := Result and cHighBits;
    if Temp <> 0 then
      Result := (Result xor (Temp shr cThreeFourths)) and (not cHighBits);
    Dec(I);
    Inc(P);
  end;
end;

{
 bytes: [4 0 0 0 4 0 1 4 106 0 0 0 0 15 230 157 168 231 186 162 229 178 169 230 181 139 232 175 149]
}
function CopyByteArray(const Source: array of byte; Position, Count: integer): TBytes;
var
  i, idx: integer;
  Dest: TBytes;
begin
  i := 0;
  SetLength(Dest, Count - Position);
  for idx := Position to Count - 1 do
  begin
    Dest[i] := Source[idx];
    Inc(i);
  end;
  Result := Dest;
end;

function CopyStringToNewString(old: string): string;
var
  i: integer;
  B: array of byte;
begin
  SetLength(B, Length(old) + 1);
  for i := 0 to length(old) do
  begin
    B[i] := byte(old[i]);
  end;
  Result := string(B);
end;

procedure FreeArrayTVarRec(argsArray: array of TVarRec);
var
  idx: integer;
begin
  for idx := 0 to length(argsArray) - 1 do
  begin
    case argsArray[idx].VType of
      vtPChar:
      begin
        argsArray[idx].VPChar := nil;
      end;
      vtPointer:
      begin
        argsArray[idx].VPointer := nil;
      end;
    end;
  end;
end;

procedure StringBufferCreate(const AStr: string; out Data: Pointer; out Size: NativeUInt);
begin
  Data := nil;
  Size := Length(AStr);
  if Size > 0 then
  begin
    GetMem(Data, Size);
    Move(PChar(AStr)^, Data^, Size);
  end;
end;

end.
