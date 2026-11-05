// constructor
function TStream_Create(): TStream; extdecl;
begin
  {$define handleExceptionID := 11100}
  handleExceptionBegin
  Result := TStream.Create();
  handleExceptionEnd
end;

// function
function TStream_Read(AObj: TStream; var Buffer: Pointer; Count: Integer): Integer; extdecl;
var
  OutBuffer: PPointer;
begin
  {$define handleExceptionID := 11101}
  handleExceptionBegin
  OutBuffer := Buffer;
  Result := AObj.Read(OutBuffer^, Count);
  Buffer := OutBuffer;
  handleExceptionEnd
end;

// function
function TStream_Write(AObj: TStream; const Buffer: Pointer; Count: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 11102}
  handleExceptionBegin
  Result := AObj.Write(Buffer^, Count);
  handleExceptionEnd
end;

// function
function TStream_SeekWithIntWord(AObj: TStream; Offset: Integer; Origin: Word): Integer; extdecl;
begin
  {$define handleExceptionID := 11103}
  handleExceptionBegin
  Result := AObj.Seek(Offset, Origin);
  handleExceptionEnd
end;

// function
procedure TStream_SeekWithInt64SeekOrigin(AObj: TStream; var Offset: Int64; Origin: TSeekOrigin; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 11104}
  handleExceptionBegin
  Result := AObj.Seek(Offset, Origin);
  handleExceptionEnd
end;

// function
procedure TStream_CopyFrom(AObj: TStream; Source: TStream; var Count: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 11105}
  handleExceptionBegin
  Result := AObj.CopyFrom(Source, Count);
  handleExceptionEnd
end;

// function
function TStream_ReadComponent(AObj: TStream; Instance: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 11106}
  handleExceptionBegin
  Result := AObj.ReadComponent(Instance);
  handleExceptionEnd
end;

// function
function TStream_ReadComponentRes(AObj: TStream; Instance: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 11107}
  handleExceptionBegin
  Result := AObj.ReadComponentRes(Instance);
  handleExceptionEnd
end;

// function
function TStream_ReadByte(AObj: TStream): Byte; extdecl;
begin
  {$define handleExceptionID := 11108}
  handleExceptionBegin
  Result := AObj.ReadByte();
  handleExceptionEnd
end;

// function
function TStream_ReadWord(AObj: TStream): Word; extdecl;
begin
  {$define handleExceptionID := 11109}
  handleExceptionBegin
  Result := AObj.ReadWord();
  handleExceptionEnd
end;

// function
function TStream_ReadDWord(AObj: TStream): Cardinal; extdecl;
begin
  {$define handleExceptionID := 11110}
  handleExceptionBegin
  Result := AObj.ReadDWord();
  handleExceptionEnd
end;

// function
function TStream_ReadQWord(AObj: TStream): QWord; extdecl;
begin
  {$define handleExceptionID := 11111}
  handleExceptionBegin
  Result := AObj.ReadQWord();
  handleExceptionEnd
end;

// function
procedure TStream_ReadAnsiString(AObj: TStream;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11112}
  handleExceptionBegin
  StringBufferCreate(AObj.ReadAnsiString(), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TStream_ReadBuffer(AObj: TStream; var Buffer: Pointer; Count: Integer); extdecl;
var
  OutBuffer: PPointer;
begin
  {$define handleExceptionID := 11113}
  handleExceptionBegin
  OutBuffer := Buffer;
  AObj.ReadBuffer(OutBuffer^, Count);
  Buffer := OutBuffer;
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteBuffer(AObj: TStream; const Buffer: Pointer; Count: Integer); extdecl;
begin
  {$define handleExceptionID := 11114}
  handleExceptionBegin
  AObj.WriteBuffer(Buffer^, Count);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteComponent(AObj: TStream; Instance: TComponent); extdecl;
begin
  {$define handleExceptionID := 11115}
  handleExceptionBegin
  AObj.WriteComponent(Instance);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteComponentRes(AObj: TStream; const ResName: PChar; Instance: TComponent); extdecl;
begin
  {$define handleExceptionID := 11116}
  handleExceptionBegin
  AObj.WriteComponentRes(ResName, Instance);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteDescendent(AObj: TStream; Instance: TComponent; Ancestor: TComponent); extdecl;
begin
  {$define handleExceptionID := 11117}
  handleExceptionBegin
  AObj.WriteDescendent(Instance, Ancestor);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteDescendentRes(AObj: TStream; const ResName: PChar; Instance: TComponent; Ancestor: TComponent); extdecl;
begin
  {$define handleExceptionID := 11118}
  handleExceptionBegin
  AObj.WriteDescendentRes(ResName, Instance, Ancestor);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteResourceHeader(AObj: TStream; const ResName: PChar; var FixupInfo: Integer); extdecl;
var
  OutFixupInfo: Longint;
begin
  {$define handleExceptionID := 11119}
  handleExceptionBegin
  OutFixupInfo := FixupInfo;
  AObj.WriteResourceHeader(ResName, OutFixupInfo);
  FixupInfo := OutFixupInfo;
  handleExceptionEnd
end;

// procedure
procedure TStream_FixupResourceHeader(AObj: TStream; FixupInfo: Integer); extdecl;
begin
  {$define handleExceptionID := 11120}
  handleExceptionBegin
  AObj.FixupResourceHeader(FixupInfo);
  handleExceptionEnd
end;

// procedure
procedure TStream_ReadResHeader(AObj: TStream); extdecl;
begin
  {$define handleExceptionID := 11121}
  handleExceptionBegin
  AObj.ReadResHeader();
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteByte(AObj: TStream; b: Byte); extdecl;
begin
  {$define handleExceptionID := 11122}
  handleExceptionBegin
  AObj.WriteByte(b);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteWord(AObj: TStream; w: Word); extdecl;
begin
  {$define handleExceptionID := 11123}
  handleExceptionBegin
  AObj.WriteWord(w);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteDWord(AObj: TStream; d: Cardinal); extdecl;
begin
  {$define handleExceptionID := 11124}
  handleExceptionBegin
  AObj.WriteDWord(d);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteQWord(AObj: TStream; q: QWord); extdecl;
begin
  {$define handleExceptionID := 11125}
  handleExceptionBegin
  AObj.WriteQWord(q);
  handleExceptionEnd
end;

// procedure
procedure TStream_WriteAnsiString(AObj: TStream; const S: PChar); extdecl;
begin
  {$define handleExceptionID := 11126}
  handleExceptionBegin
  AObj.WriteAnsiString(S);
  handleExceptionEnd
end;

// property
procedure TStream_Position(ASet: LongBool; AObj: TStream; var AValue: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 11127}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
procedure TStream_Size(ASet: LongBool; AObj: TStream; var AValue: Int64; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 11128}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Size := AValue
  end else
    Result := AObj.Size;
  handleExceptionEnd
end;

exports
  TStream_Create,
  TStream_Read,
  TStream_Write,
  TStream_SeekWithIntWord,
  TStream_SeekWithInt64SeekOrigin,
  TStream_CopyFrom,
  TStream_ReadComponent,
  TStream_ReadComponentRes,
  TStream_ReadByte,
  TStream_ReadWord,
  TStream_ReadDWord,
  TStream_ReadQWord,
  TStream_ReadAnsiString,
  TStream_ReadBuffer,
  TStream_WriteBuffer,
  TStream_WriteComponent,
  TStream_WriteComponentRes,
  TStream_WriteDescendent,
  TStream_WriteDescendentRes,
  TStream_WriteResourceHeader,
  TStream_FixupResourceHeader,
  TStream_ReadResHeader,
  TStream_WriteByte,
  TStream_WriteWord,
  TStream_WriteDWord,
  TStream_WriteQWord,
  TStream_WriteAnsiString,
  TStream_Position,
  TStream_Size;