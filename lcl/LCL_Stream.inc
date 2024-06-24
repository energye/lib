
//constructor
function Stream_Create(): TStream; extdecl;
begin
  handleExceptionBegin
  Result := TStream.Create();
  handleExceptionEnd
end;

//property
procedure Stream_Position(AIsSet: LongBool; AObj: TStream; var AValue: Int64; var Result: Int64); extdecl;
begin
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
  handleExceptionBegin
  RetBuffer := Buffer;
  Result := AObj.Read(RetBuffer, Count);
  Buffer := RetBuffer;
  handleExceptionEnd
end;

//function
function Stream_Write(AObj: TStream; const Buffer: Pointer; Count: LongInt): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Write(Buffer^, Count);
  handleExceptionEnd
end;

//function
function Stream_Seek(AObj: TStream; Offset: LongInt; Origin: Word): LongInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Seek(Offset, Origin);
  handleExceptionEnd
end;

//function
procedure Stream_Seek1(AObj: TStream; var Offset: Int64; Origin: TSeekOrigin; var Result: Int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Seek(Offset, Origin);
  handleExceptionEnd
end;

//function
procedure Stream_CopyFrom(AObj: TStream; Source: TStream; var Count: Int64; var Result: Int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CopyFrom(Source, Count);
  handleExceptionEnd
end;

//function
function Stream_ReadComponent(AObj: TStream; Instance: TComponent): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadComponent(Instance);
  handleExceptionEnd
end;

//function
function Stream_ReadComponentRes(AObj: TStream; Instance: TComponent): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadComponentRes(Instance);
  handleExceptionEnd
end;

//function
function Stream_ReadByte(AObj: TStream): Byte; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadByte();
  handleExceptionEnd
end;

//function
function Stream_ReadWord(AObj: TStream): Word; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadWord();
  handleExceptionEnd
end;

//function
function Stream_ReadDWord(AObj: TStream): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadDWord();
  handleExceptionEnd
end;

//function
function Stream_ReadQWord(AObj: TStream): QWord; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadQWord();
  handleExceptionEnd
end;

//function
function Stream_ReadAnsiString(AObj: TStream): PChar; extdecl;
begin
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
  handleExceptionBegin
  RetBuffer := Buffer;
  AObj.ReadBuffer(RetBuffer, Count);
  Buffer := RetBuffer;
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteBuffer(AObj: TStream; const Buffer: Pointer; Count: LongInt); extdecl;
begin
  handleExceptionBegin
  AObj.WriteBuffer(Buffer^, Count);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteComponent(AObj: TStream; Instance: TComponent); extdecl;
begin
  handleExceptionBegin
  AObj.WriteComponent(Instance);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteComponentRes(AObj: TStream; const ResName: PChar; Instance: TComponent); extdecl;
begin
  handleExceptionBegin
  AObj.WriteComponentRes(ResName, Instance);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteDescendent(AObj: TStream; Instance, Ancestor: TComponent); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDescendent(Instance, Ancestor);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteDescendentRes(AObj: TStream; const ResName: PChar; Instance, Ancestor: TComponent); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDescendentRes(ResName, Instance, Ancestor);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteResourceHeader(AObj: TStream; const ResName: PChar; var FixupInfo: LongInt); extdecl;
var
  RetFixupInfo: LongInt;
begin
  handleExceptionBegin
  RetFixupInfo := FixupInfo;
  AObj.WriteResourceHeader(ResName, RetFixupInfo);
  FixupInfo := RetFixupInfo;
  handleExceptionEnd
end;

//procedure
procedure Stream_FixupResourceHeader(AObj: TStream; FixupInfo: LongInt); extdecl;
begin
  handleExceptionBegin
  AObj.FixupResourceHeader(FixupInfo);
  handleExceptionEnd
end;

//procedure
procedure Stream_ReadResHeader(AObj: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.ReadResHeader();
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteByte(AObj: TStream; b: Byte); extdecl;
begin
  handleExceptionBegin
  AObj.WriteByte(b);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteWord(AObj: TStream; w: Word); extdecl;
begin
  handleExceptionBegin
  AObj.WriteWord(w);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteDWord(AObj: TStream; d: uint32); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDWord(d);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteQWord(AObj: TStream; q: QWord); extdecl;
begin
  handleExceptionBegin
  AObj.WriteQWord(q);
  handleExceptionEnd
end;

//procedure
procedure Stream_WriteAnsiString(AObj: TStream; const S: PChar); extdecl;
begin
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