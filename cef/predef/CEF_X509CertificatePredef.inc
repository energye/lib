
//procedure
procedure ICefX509Certificate_GetDEREncodedIssuerChain(AObj: ICefX509Certificate; var chainCount: NativeUInt; var chain: TCefBinaryValueArray); extdecl;
var
  RetchainCount: NativeUInt;
  Retchain: TCefBinaryValueArray;
begin
  handleExceptionBegin
  RetchainCount := chainCount;
  Retchain := chain;
  AObj.GetDEREncodedIssuerChain(RetchainCount, Retchain);
  chainCount := Length(Retchain); // 由于非 var 修饰，这里获取数组长度
  chain := Retchain;
  handleExceptionEnd
end;

//procedure
procedure ICefX509Certificate_GetPEMEncodedIssuerChain(AObj: ICefX509Certificate; var chainCount: NativeUInt; var chain: TCefBinaryValueArray); extdecl;
var
  RetchainCount: NativeUInt;
  Retchain: TCefBinaryValueArray;
begin
  handleExceptionBegin
  RetchainCount := chainCount;
  Retchain := chain;
  AObj.GetPEMEncodedIssuerChain(RetchainCount, Retchain);
  chainCount := Length(Retchain); // 由于非 var 修饰，这里获取数组长度
  chain := Retchain;
  handleExceptionEnd
end;


exports
  ICefX509Certificate_GetDEREncodedIssuerChain,
  ICefX509Certificate_GetPEMEncodedIssuerChain;
