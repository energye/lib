
//constructor
function StreamAdapter_Create(Stream: TStream; Ownership: TStreamOwnership): TStreamAdapter; extdecl;
begin
  {$define handleExceptionFuncName :='TStreamAdapter.Create'}
  handleExceptionBegin
  Result := TStreamAdapter.Create(Stream, Ownership);
  handleExceptionEnd
end;

//property
function StreamAdapter_Stream(AObj: TStreamAdapter): TStream; extdecl;
begin
  {$define handleExceptionFuncName :='Stream'}
  handleExceptionBegin
  Result := AObj.Stream;
  handleExceptionEnd
end;

//property
function StreamAdapter_StreamOwnership(AIsSet: LongBool; AObj: TStreamAdapter; AValue: TStreamOwnership): TStreamOwnership; extdecl;
begin
  {$define handleExceptionFuncName :='StreamOwnership'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StreamOwnership := AValue;
  end else
    Result := AObj.StreamOwnership;
  handleExceptionEnd
end;

//function
function StreamAdapter_Read(AObj: TStreamAdapter; pv: Pointer; cb: DWORD; pcbRead: PDWORD): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Read'}
  handleExceptionBegin
  Result := AObj.Read(pv, cb, pcbRead);
  handleExceptionEnd
end;

//function
function StreamAdapter_Write(AObj: TStreamAdapter; pv: Pointer; cb: DWORD; pcbWritten: PDWORD): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Write'}
  handleExceptionBegin
  Result := AObj.Write(pv, cb, pcbWritten);
  handleExceptionEnd
end;

//function
function StreamAdapter_Seek(AObj: TStreamAdapter; dlibMove: LargeInt; dwOrigin: DWORD; var OutLibNewPosition: LargeUInt): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Seek'}
  handleExceptionBegin
  Result := AObj.Seek(dlibMove, dwOrigin, OutLibNewPosition);
  handleExceptionEnd
end;

//function
function StreamAdapter_SetSize(AObj: TStreamAdapter; var libNewSize: int64): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SetSize'}
  handleExceptionBegin
  Result := AObj.SetSize(libNewSize);
  handleExceptionEnd
end;

//function
function StreamAdapter_CopyTo(AObj: TStreamAdapter; stm: IStream; var cb: int64; var OutCbRead: LargeUInt; var OutCbWritten: LargeUInt): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='CopyTo'}
  handleExceptionBegin
  Result := AObj.CopyTo(stm, cb, OutCbRead, OutCbWritten);
  handleExceptionEnd
end;

//function
function StreamAdapter_Commit(AObj: TStreamAdapter; grfCommitFlags: DWORD): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Commit'}
  handleExceptionBegin
  Result := AObj.Commit(grfCommitFlags);
  handleExceptionEnd
end;

//function
function StreamAdapter_Revert(AObj: TStreamAdapter): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Revert'}
  handleExceptionBegin
  Result := AObj.Revert();
  handleExceptionEnd
end;

//function
function StreamAdapter_LockRegion(AObj: TStreamAdapter; var libOffset: int64; var cb: int64; dwLockType: DWORD): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='LockRegion'}
  handleExceptionBegin
  Result := AObj.LockRegion(libOffset, cb, dwLockType);
  handleExceptionEnd
end;

//function
function StreamAdapter_UnlockRegion(AObj: TStreamAdapter; var libOffset: int64; var cb: int64; dwLockType: DWORD): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='UnlockRegion'}
  handleExceptionBegin
  Result := AObj.UnlockRegion(libOffset, cb, dwLockType);
  handleExceptionEnd
end;

//function
function StreamAdapter_Stat(AObj: TStreamAdapter; out OutStatstg: TStatStg; grfStatFlag: DWORD): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Stat'}
  handleExceptionBegin
  Result := AObj.Stat(OutStatstg, grfStatFlag);
  handleExceptionEnd
end;

//function
function StreamAdapter_Clone(AObj: TStreamAdapter; out OutStm: IStream): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Clone'}
  handleExceptionBegin
  Result := AObj.Clone(OutStm);
  handleExceptionEnd
end;

//function
function StreamAdapter_Class(): TClass;
begin
  Result := TStreamAdapter;
end;


exports
  StreamAdapter_Create,
  StreamAdapter_Stream,
  StreamAdapter_StreamOwnership,
  StreamAdapter_Read,
  StreamAdapter_Write,
  StreamAdapter_Seek,
  StreamAdapter_SetSize,
  StreamAdapter_CopyTo,
  StreamAdapter_Commit,
  StreamAdapter_Revert,
  StreamAdapter_LockRegion,
  StreamAdapter_UnlockRegion,
  StreamAdapter_Stat,
  StreamAdapter_Clone,
  StreamAdapter_Class;
