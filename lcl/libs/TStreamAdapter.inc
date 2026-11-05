// constructor
function TStreamAdapter_Create(Stream: TStream; Ownership: TStreamOwnership; out IntfStream: IStream): TStreamAdapter; extdecl;
begin
  {$define handleExceptionID := 31700}
  handleExceptionBegin
  Result := TStreamAdapter.Create(Stream, Ownership);
  IntfStream := Result as IStream;
  handleExceptionEnd
end;

// function
function TStreamAdapter_Read(AObj: TStreamAdapter; pv: Pointer; cb: DWORD; pcbRead: PDWORD): HResult; extdecl;
begin
  {$define handleExceptionID := 31701}
  handleExceptionBegin
  Result := AObj.Read(pv, cb, pcbRead);
  handleExceptionEnd
end;

// function
function TStreamAdapter_Write(AObj: TStreamAdapter; pv: Pointer; cb: DWORD; pcbWritten: PDWORD): HResult; extdecl;
begin
  {$define handleExceptionID := 31702}
  handleExceptionBegin
  Result := AObj.Write(pv, cb, pcbWritten);
  handleExceptionEnd
end;

// function
function TStreamAdapter_Seek(AObj: TStreamAdapter; var dlibMove: int64; dwOrigin: DWORD; var libNewPosition: int64): HResult; extdecl;
var
  OutlibNewPosition: LargeUint;
begin
  {$define handleExceptionID := 31703}
  handleExceptionBegin
  Result := AObj.Seek(dlibMove, dwOrigin, OutlibNewPosition);
  libNewPosition := OutlibNewPosition;
  handleExceptionEnd
end;

// function
function TStreamAdapter_SetSize(AObj: TStreamAdapter; var libNewSize: int64): HResult; extdecl;
begin
  {$define handleExceptionID := 31704}
  handleExceptionBegin
  Result := AObj.SetSize(libNewSize);
  handleExceptionEnd
end;

// function
function TStreamAdapter_CopyTo(AObj: TStreamAdapter; stm: IStream; var cb: int64; var cbRead: int64; var cbWritten: int64): HResult; extdecl;
var
  OutcbRead: LargeUint;
  OutcbWritten: LargeUint;
begin
  {$define handleExceptionID := 31705}
  handleExceptionBegin
  Result := AObj.CopyTo(stm, cb, OutcbRead, OutcbWritten);
  cbRead := OutcbRead;
  cbWritten := OutcbWritten;
  handleExceptionEnd
end;

// function
function TStreamAdapter_Commit(AObj: TStreamAdapter; grfCommitFlags: DWORD): HResult; extdecl;
begin
  {$define handleExceptionID := 31706}
  handleExceptionBegin
  Result := AObj.Commit(grfCommitFlags);
  handleExceptionEnd
end;

// function
function TStreamAdapter_Revert(AObj: TStreamAdapter): HResult; extdecl;
begin
  {$define handleExceptionID := 31707}
  handleExceptionBegin
  Result := AObj.Revert();
  handleExceptionEnd
end;

// function
function TStreamAdapter_LockRegion(AObj: TStreamAdapter; var libOffset: int64; var cb: int64; dwLockType: DWORD): HResult; extdecl;
begin
  {$define handleExceptionID := 31708}
  handleExceptionBegin
  Result := AObj.LockRegion(libOffset, cb, dwLockType);
  handleExceptionEnd
end;

// function
function TStreamAdapter_UnlockRegion(AObj: TStreamAdapter; var libOffset: int64; var cb: int64; dwLockType: DWORD): HResult; extdecl;
begin
  {$define handleExceptionID := 31709}
  handleExceptionBegin
  Result := AObj.UnlockRegion(libOffset, cb, dwLockType);
  handleExceptionEnd
end;

// function
function TStreamAdapter_Stat(AObj: TStreamAdapter; var statstg: TStatStgPtr; grfStatFlag: DWORD): HResult; extdecl;
var
  Outstatstg: TStatStg;
begin
  {$define handleExceptionID := 31710}
  handleExceptionBegin
  Result := AObj.Stat(Outstatstg, grfStatFlag);
  statstg := TStatStgToGo(Outstatstg);
  handleExceptionEnd
end;

// function
function TStreamAdapter_Clone(AObj: TStreamAdapter; var stm: IStream): HResult; extdecl;
var
  Outstm: IStream = nil;
begin
  {$define handleExceptionID := 31711}
  handleExceptionBegin
  Result := AObj.Clone(Outstm);
  stm := Outstm;
  handleExceptionEnd
end;

// property
function TStreamAdapter_Stream(AObj: TStreamAdapter): TStream; extdecl;
begin
  {$define handleExceptionID := 31712}
  handleExceptionBegin
  Result := AObj.Stream;
  handleExceptionEnd
end;

// property
function TStreamAdapter_StreamOwnership(ASet: LongBool; AObj: TStreamAdapter; AValue: TStreamOwnership): TStreamOwnership; extdecl;
begin
  {$define handleExceptionID := 31713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StreamOwnership := AValue
  end else
    Result := AObj.StreamOwnership;
  handleExceptionEnd
end;

exports
  TStreamAdapter_Create,
  TStreamAdapter_Read,
  TStreamAdapter_Write,
  TStreamAdapter_Seek,
  TStreamAdapter_SetSize,
  TStreamAdapter_CopyTo,
  TStreamAdapter_Commit,
  TStreamAdapter_Revert,
  TStreamAdapter_LockRegion,
  TStreamAdapter_UnlockRegion,
  TStreamAdapter_Stat,
  TStreamAdapter_Clone,
  TStreamAdapter_Stream,
  TStreamAdapter_StreamOwnership;