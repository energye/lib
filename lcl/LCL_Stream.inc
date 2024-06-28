
//constructor
function Stream_Create(): TStream; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TStream.Create();
  handleExceptionEnd
end;

//property
procedure Stream_Position(AIsSet: LongBool; AObj: TStream; var AValue: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='Position'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
procedure Stream_Size(AIsSet: LongBool; AObj: TStream; var AValue: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='Size'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Size := AValue;
  end else
    Result := AObj.Size;
  handleExceptionEnd
end;

//function
function Stream_Read(AObj: TStream; var Buffer: Pointer; Count: LongInt): LongInt; extdecl;
var
  RetBuffer: Pointer;
begin
  {$define handleExceptionFuncName :='Read'}
  handleExceptionBegin
  RetBuffer := Buffer;
  Result := AObj.Read(RetBuffer, Count);
  Buffer := RetBuffer;
  handleExceptionEnd
end;

//function
function Stream_Write(AObj: TStream; const Buffer: Pointer; Count: LongInt): LongInt; extdecl;
begin
  {$define handleExceptionFuncName :='Write'}
  handleExceptionBegin
  Result := AObj.Write(Buffer^, Count);
  handleExceptionEnd
end;

//function
function Stream_Seek(AObj: TStream; Offset: LongInt; Origin: Word): LongInt; extdecl;
begin
  {$define handleExceptionFuncName :='Seek'}
  handleExceptionBegin
  Result := AObj.Seek(Offset, Origin);
  handleExceptionEnd
end;

//function
procedure Stream_Seek1(AObj: TStream; var Offset: Int64; Origin: TSeekOrigin; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='Seek1'}
  handleExceptionBegin
  Result := AObj.Seek(Offset, Origin);
  handleExceptionEnd
end;

//function
procedure Stream_CopyFrom(AObj: TStream; Source: TStream; var Count: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='CopyFrom'}
  handleExceptionBegin
  Result := AObj.CopyFrom(Source, Count);
  handleExceptionEnd
end;

//function
function Stream_ReadComponent(AObj: TStream; Instance: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='ReadComponent'}
  handleExceptionBegin
  Result := AObj.ReadComponent(Instance);
  handleExceptionEnd
end;

//function
function Stream_ReadComponentRes(AObj: TStream; Instance: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='ReadComponentRes'}
  handleExceptionBegin
  Result := AObj.ReadComponentRes(Instance);
  handleExceptionEnd
end;

//function
function Stream_ReadByte(AObj: TStream): Byte; extdecl;
begin
  {$define handleExceptionFuncName :='ReadByte'}
  handleExceptionBegin
  Result := AObj.ReadByte();
  handleExceptionEnd
end;

//function
function Stream_ReadWord(AObj: TStream): Word; extdecl;
begin
  {$define handleExceptionFuncName :='ReadWord'}
  handleExceptionBegin
  Result := AObj.ReadWord();
  handleExceptionEnd
end;

//function
function Stream_ReadDWord(AObj: TStream): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='ReadDWord'}
  handleExceptionBegin
  Result := AObj.ReadDWord();
  handleExceptionEnd
end;

//function
function Stream_ReadQWord(AObj: TStream): QWord; extdecl;
begin
  {$define handleExceptionFuncName :='ReadQWord'}
  handleExceptionBegin
  Result := AObj.ReadQWord();
  handleExceptionEnd
end;

//function
function Stream_ReadAnsiString(AObj: TStream): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ReadAnsiString'}
  handleExceptionBegin
  Result := ToPChar(AObj.ReadAnsiString());
  handleExceptionEnd
end;

//function
function Stream_Class(): TClass; extdecl;
begin
  Result := TStream;
end;

//procedure
procedure Stream_ReadBuffer(AObj: TStream; var Buffer: Pointer; Count: LongInt); extdecl;
var
  RetBuffer: Pointer;
begin
  {$define handleExceptionFuncName :='ReadBuffer'}
  handleExceptionBegin
  RetBuffer := Buffer;
  AObj.ReadBuffer(RetBuffer, Count);
  Buffer := RetBuffer;
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteBuffer(AObj: TStream; const Buffer: Pointer; Count: LongInt); extdecl;
begin
  {$define handleExceptionFuncName :='WriteBuffer'}
  handleExceptionBegin
  AObj.WriteBuffer(Buffer^, Count);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteComponent(AObj: TStream; Instance: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='WriteComponent'}
  handleExceptionBegin
  AObj.WriteComponent(Instance);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteComponentRes(AObj: TStream; const ResName: PChar; Instance: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='WriteComponentRes'}
  handleExceptionBegin
  AObj.WriteComponentRes(ResName, Instance);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteDescendent(AObj: TStream; Instance, Ancestor: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDescendent'}
  handleExceptionBegin
  AObj.WriteDescendent(Instance, Ancestor);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteDescendentRes(AObj: TStream; const ResName: PChar; Instance, Ancestor: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDescendentRes'}
  handleExceptionBegin
  AObj.WriteDescendentRes(ResName, Instance, Ancestor);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteResourceHeader(AObj: TStream; const ResName: PChar; var FixupInfo: LongInt); extdecl;
var
  RetFixupInfo: LongInt;
begin
  {$define handleExceptionFuncName :='WriteResourceHeader'}
  handleExceptionBegin
  RetFixupInfo := FixupInfo;
  AObj.WriteResourceHeader(ResName, RetFixupInfo);
  FixupInfo := RetFixupInfo;
  handleExceptionEnd
end;

//procedure
procedure Stream_FixupResourceHeader(AObj: TStream; FixupInfo: LongInt); extdecl;
begin
  {$define handleExceptionFuncName :='FixupResourceHeader'}
  handleExceptionBegin
  AObj.FixupResourceHeader(FixupInfo);
  handleExceptionEnd
end;

//procedure
procedure Stream_ReadResHeader(AObj: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='ReadResHeader'}
  handleExceptionBegin
  AObj.ReadResHeader();
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteByte(AObj: TStream; b: Byte); extdecl;
begin
  {$define handleExceptionFuncName :='WriteByte'}
  handleExceptionBegin
  AObj.WriteByte(b);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteWord(AObj: TStream; w: Word); extdecl;
begin
  {$define handleExceptionFuncName :='WriteWord'}
  handleExceptionBegin
  AObj.WriteWord(w);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteDWord(AObj: TStream; d: uint32); extdecl;
begin
  {$define handleExceptionFuncName :='WriteDWord'}
  handleExceptionBegin
  AObj.WriteDWord(d);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteQWord(AObj: TStream; q: QWord); extdecl;
begin
  {$define handleExceptionFuncName :='WriteQWord'}
  handleExceptionBegin
  AObj.WriteQWord(q);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteAnsiString(AObj: TStream; const S: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='WriteAnsiString'}
  handleExceptionBegin
  AObj.WriteAnsiString(S);
  handleExceptionEnd
end;


exports
  Stream_Create,
  Stream_Position,
  Stream_Size,
  Stream_Read,
  Stream_Write,
  Stream_Seek,
  Stream_Seek1,
  Stream_CopyFrom,
  Stream_ReadComponent,
  Stream_ReadComponentRes,
  Stream_ReadByte,
  Stream_ReadWord,
  Stream_ReadDWord,
  Stream_ReadQWord,
  Stream_ReadAnsiString,
  Stream_Class,
  Stream_ReadBuffer,
  Stream_WriteBuffer,
  Stream_WriteComponent,
  Stream_WriteComponentRes,
  Stream_WriteDescendent,
  Stream_WriteDescendentRes,
  Stream_WriteResourceHeader,
  Stream_FixupResourceHeader,
  Stream_ReadResHeader,
  Stream_WriteByte,
  Stream_WriteWord,
  Stream_WriteDWord,
  Stream_WriteQWord,
  Stream_WriteAnsiString;