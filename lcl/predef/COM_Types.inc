// ISequentialStream
function COMSequentialStream_Read(AObj: ISequentialStream; pv: Pointer; cb: DWORD; pcbRead: PDWORD):HRESULT ; extdecl;
begin
  {$define handleExceptionFuncName :='Read'}
  handleExceptionBegin
  Result := AObj.Read(pv, cb, pcbRead);
  handleExceptionEnd
end;

function COMSequentialStream_Write(AObj: ISequentialStream; pv: Pointer; cb: DWORD; pcbWritten: PDWORD):HRESULT ; extdecl;
begin
  {$define handleExceptionFuncName :='Write'}
  handleExceptionBegin
  Result := AObj.Write(pv, cb, pcbWritten);
  handleExceptionEnd
end;

function COMStream_Seek(AObj: IStream; dlibMove: LargeInt; dwOrigin: DWORD; out libNewPosition: LargeUInt): HRESULT; extdecl;
begin
  {$define handleExceptionFuncName :='Seek'}
  handleExceptionBegin
  Result := AObj.Seek(dlibMove, dwOrigin, libNewPosition);
  handleExceptionEnd
end;

// IStream
function COMStream_SetSize(AObj: IStream; libNewSize : LargeUInt): HRESULT; extdecl;
begin
  {$define handleExceptionFuncName :='SetSize'}
  handleExceptionBegin
  Result := AObj.SetSize(libNewSize);
  handleExceptionEnd
end;

function COMStream_CopyTo(AObj: IStream; stm: IStream; cb: LargeUInt; out cbRead: LargeUInt; out cbWritten: LargeUInt): HRESULT; extdecl;
begin
  {$define handleExceptionFuncName :='CopyTo'}
  handleExceptionBegin
  Result := AObj.CopyTo(stm, cb, cbRead, cbWritten);
  handleExceptionEnd
end;

function COMStream_Commit(AObj: IStream; grfCommitFlags : DWORD): HRESULT; extdecl;
begin
  {$define handleExceptionFuncName :='Commit'}
  handleExceptionBegin
  Result := AObj.Commit(grfCommitFlags);
  handleExceptionEnd
end;

function COMStream_Revert(AObj: IStream): HRESULT; extdecl;
begin
  {$define handleExceptionFuncName :='Revert'}
  handleExceptionBegin
  Result := AObj.Revert();
  handleExceptionEnd
end;

function COMStream_LockRegion(AObj: IStream; libOffset: LargeUInt; cb: LargeUInt; dwLockType: DWORD): HRESULT; extdecl;
begin
  {$define handleExceptionFuncName :=''}
  handleExceptionBegin
  Result := AObj.LockRegion(libOffset, cb, dwLockType);
  handleExceptionEnd
end;

function COMStream_UnlockRegion(AObj: IStream; libOffset: LargeUInt; cb: LargeUInt; dwLockType: DWORD): HRESULT; extdecl;
begin
  {$define handleExceptionFuncName :='UnlockRegion'}
  handleExceptionBegin
  Result := AObj.UnlockRegion(libOffset, cb, dwLockType);
  handleExceptionEnd
end;

function COMStream_Stat(AObj: IStream; out ResultStatstg: PStatStgPtr; grfStatFlag: DWORD): HRESULT; extdecl;
var
  aStatstg : TStatStg;
  aStat: TStatStgPtr;
begin
  {$define handleExceptionFuncName :='Stat'}
  handleExceptionBegin
  Result := AObj.Stat(aStatstg, grfStatFlag);
  aStat.pwcsName := ToPChar(aStatstg.pwcsName);
  aStat.dwType := @(aStatstg.dwType);
  aStat.cbSize := @(aStatstg.cbSize);
  aStat.mtime := ToPChar(DateTimeToStr(FileTimeToDateTime(aStatstg.mtime)));
  aStat.ctime := ToPChar(DateTimeToStr(FileTimeToDateTime(aStatstg.ctime)));
  aStat.atime := ToPChar(DateTimeToStr(FileTimeToDateTime(aStatstg.atime)));
  aStat.grfMode := @(aStatstg.grfMode);
  aStat.grfLocksSupported := @(aStatstg.grfLocksSupported);
  aStat.clsid := ToPChar(aStatstg.clsid.ToString(True));
  aStat.grfStateBits := @(aStatstg.grfStateBits);
  aStat.reserved := @(aStatstg.reserved);
  // return statstg
  ResultStatstg := @aStat;
  handleExceptionEnd
end;

function COMStream_Clone(AObj: IStream; out ResultStm: IStream): HRESULT; extdecl;
var
  stm: IStream;
begin
  {$define handleExceptionFuncName :='Clone'}
  handleExceptionBegin
  Result := AObj.Clone(stm);
  // return stm
  ResultStm := stm;
  handleExceptionEnd
end;

exports
  COMStream_Seek,
  COMStream_SetSize,
  COMStream_CopyTo,
  COMStream_Commit,
  COMStream_Revert,
  COMStream_LockRegion,
  COMStream_UnlockRegion,
  COMStream_Stat,
  COMStream_Clone,
  COMSequentialStream_Read,
  COMSequentialStream_Write;
