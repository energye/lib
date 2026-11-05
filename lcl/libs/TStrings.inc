// function
function TStrings_ToObjectArrayWithIntX2(AObj: TStrings; aStart: Integer; aEnd: Integer): TObjectDynArray; extdecl;
begin
  {$define handleExceptionID := 11400}
  handleExceptionBegin
  Result := AObj.ToObjectArray(aStart, aEnd);
  handleExceptionEnd
end;

// function
function TStrings_ToObjectArrayToObjectDynArray(AObj: TStrings): TObjectDynArray; extdecl;
begin
  {$define handleExceptionID := 11401}
  handleExceptionBegin
  Result := AObj.ToObjectArray();
  handleExceptionEnd
end;

// function
function TStrings_ToStringArrayWithIntX2(AObj: TStrings; aStart: Integer; aEnd: Integer): TStringArrayWrap; extdecl;
begin
  {$define handleExceptionID := 11402}
  handleExceptionBegin
  Result := TStringArrayWrap.Create(AObj.ToStringArray(aStart, aEnd));
  handleExceptionEnd
end;

// function
function TStrings_ToStringArrayToStringDynArray(AObj: TStrings): TStringArrayWrap; extdecl;
begin
  {$define handleExceptionID := 11403}
  handleExceptionBegin
  Result := TStringArrayWrap.Create(AObj.ToStringArray());
  handleExceptionEnd
end;

// function
function TStrings_Add(AObj: TStrings; const S: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 11404}
  handleExceptionBegin
  Result := AObj.Add(S);
  handleExceptionEnd
end;

// function
function TStrings_AddObject(AObj: TStrings; const S: PChar; AObject: TObject): Integer; extdecl;
begin
  {$define handleExceptionID := 11405}
  handleExceptionBegin
  Result := AObj.AddObject(S, AObject);
  handleExceptionEnd
end;

// function
function TStrings_AddPairWithStrX2(AObj: TStrings; const AName: PChar; const AValue: PChar): TStrings; extdecl;
begin
  {$define handleExceptionID := 11406}
  handleExceptionBegin
  Result := AObj.AddPair(AName, AValue);
  handleExceptionEnd
end;

// function
function TStrings_AddPairWithStrX2Object(AObj: TStrings; const AName: PChar; const AValue: PChar; AObject: TObject): TStrings; extdecl;
begin
  {$define handleExceptionID := 11407}
  handleExceptionBegin
  Result := AObj.AddPair(AName, AValue, AObject);
  handleExceptionEnd
end;

// function
function TStrings_EqualsWithStrings(AObj: TStrings; TheStrings: TStrings): LongBool; extdecl;
begin
  {$define handleExceptionID := 11408}
  handleExceptionBegin
  Result := AObj.Equals(TheStrings);
  handleExceptionEnd
end;

// function
procedure TStrings_ExtractName(AObj: TStrings; const S: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11409}
  handleExceptionBegin
  StringBufferCreate(AObj.ExtractName(S), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TStrings_GetEnumerator(AObj: TStrings): TStringsEnumerator; extdecl;
begin
  {$define handleExceptionID := 11410}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TStrings_GetText(AObj: TStrings): PChar; extdecl;
begin
  {$define handleExceptionID := 11411}
  handleExceptionBegin
  Result := AObj.GetText();
  handleExceptionEnd
end;

// function
function TStrings_IndexOfWithStr(AObj: TStrings; const S: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 11412}
  handleExceptionBegin
  Result := AObj.IndexOf(S);
  handleExceptionEnd
end;

// function
function TStrings_IndexOfWithStrInt(AObj: TStrings; const S: PChar; aStart: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 11413}
  handleExceptionBegin
  Result := AObj.IndexOf(S, aStart);
  handleExceptionEnd
end;

// function
function TStrings_IndexOfName(AObj: TStrings; const Name: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 11414}
  handleExceptionBegin
  Result := AObj.IndexOfName(Name);
  handleExceptionEnd
end;

// function
function TStrings_IndexOfObject(AObj: TStrings; AObject: TObject): Integer; extdecl;
begin
  {$define handleExceptionID := 11415}
  handleExceptionBegin
  Result := AObj.IndexOfObject(AObject);
  handleExceptionEnd
end;

// function
function TStrings_LastIndexOfWithStrInt(AObj: TStrings; const S: PChar; aStart: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 11416}
  handleExceptionBegin
  Result := AObj.LastIndexOf(S, aStart);
  handleExceptionEnd
end;

// function
function TStrings_LastIndexOfWithStr(AObj: TStrings; const S: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 11417}
  handleExceptionBegin
  Result := AObj.LastIndexOf(S);
  handleExceptionEnd
end;

// function
procedure TStrings_Pop(AObj: TStrings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11418}
  handleExceptionBegin
  StringBufferCreate(AObj.Pop(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TStrings_Reverse(AObj: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 11419}
  handleExceptionBegin
  Result := AObj.Reverse();
  handleExceptionEnd
end;

// function
procedure TStrings_Shift(AObj: TStrings;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11420}
  handleExceptionBegin
  StringBufferCreate(AObj.Shift(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TStrings_Slice(AObj: TStrings; fromIndex: integer): TStrings; extdecl;
begin
  {$define handleExceptionID := 11421}
  handleExceptionBegin
  Result := AObj.Slice(fromIndex);
  handleExceptionEnd
end;

// procedure
procedure TStrings_AddStringsWithStrings(AObj: TStrings; TheStrings: TStrings); extdecl;
begin
  {$define handleExceptionID := 11422}
  handleExceptionBegin
  AObj.AddStrings(TheStrings);
  handleExceptionEnd
end;

// procedure
procedure TStrings_AddStringsWithStringsBool(AObj: TStrings; TheStrings: TStrings; ClearFirst: LongBool); extdecl;
begin
  {$define handleExceptionID := 11423}
  handleExceptionBegin
  AObj.AddStrings(TheStrings, ClearFirst);
  handleExceptionEnd
end;

// procedure
procedure TStrings_SetStringsWithStrings(AObj: TStrings; TheStrings: TStrings); extdecl;
begin
  {$define handleExceptionID := 11424}
  handleExceptionBegin
  AObj.SetStrings(TheStrings);
  handleExceptionEnd
end;

// procedure
procedure TStrings_AddText(AObj: TStrings; const S: PChar); extdecl;
begin
  {$define handleExceptionID := 11425}
  handleExceptionBegin
  AObj.AddText(S);
  handleExceptionEnd
end;

// procedure
procedure TStrings_AddCommaText(AObj: TStrings; const S: PChar); extdecl;
begin
  {$define handleExceptionID := 11426}
  handleExceptionBegin
  AObj.AddCommaText(S);
  handleExceptionEnd
end;

// procedure
procedure TStrings_AddDelimitedTextWithStrCharBool(AObj: TStrings; const S: PChar; ADelimiter: char; AStrictDelimiter: LongBool); extdecl;
begin
  {$define handleExceptionID := 11427}
  handleExceptionBegin
  AObj.AddDelimitedText(S, ADelimiter, AStrictDelimiter);
  handleExceptionEnd
end;

// procedure
procedure TStrings_AddDelimitedtextWithStr(AObj: TStrings; const S: PChar); extdecl;
begin
  {$define handleExceptionID := 11428}
  handleExceptionBegin
  AObj.AddDelimitedtext(S);
  handleExceptionEnd
end;

// procedure
procedure TStrings_Append(AObj: TStrings; const S: PChar); extdecl;
begin
  {$define handleExceptionID := 11429}
  handleExceptionBegin
  AObj.Append(S);
  handleExceptionEnd
end;

// procedure
procedure TStrings_BeginUpdate(AObj: TStrings); extdecl;
begin
  {$define handleExceptionID := 11430}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TStrings_Clear(AObj: TStrings); extdecl;
begin
  {$define handleExceptionID := 11431}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TStrings_Delete(AObj: TStrings; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 11432}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure
procedure TStrings_EndUpdate(AObj: TStrings); extdecl;
begin
  {$define handleExceptionID := 11433}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// procedure
procedure TStrings_Exchange(AObj: TStrings; Index1: Integer; Index2: Integer); extdecl;
begin
  {$define handleExceptionID := 11434}
  handleExceptionBegin
  AObj.Exchange(Index1, Index2);
  handleExceptionEnd
end;

// procedure
procedure TStrings_Fill(AObj: TStrings; const aValue: PChar; aStart: Integer; aEnd: Integer); extdecl;
begin
  {$define handleExceptionID := 11435}
  handleExceptionBegin
  AObj.Fill(aValue, aStart, aEnd);
  handleExceptionEnd
end;

// procedure
procedure TStrings_GetNameValue(AObj: TStrings; Index: Integer; var AName: PChar; var AValue: PChar); extdecl;
var
  OutAName: String;
  OutAValue: String;
begin
  {$define handleExceptionID := 11436}
  handleExceptionBegin
  AObj.GetNameValue(Index, OutAName, OutAValue);
  AName := ToPChar(OutAName);
  AValue := ToPChar(OutAValue);
  handleExceptionEnd
end;

// procedure
procedure TStrings_Insert(AObj: TStrings; Index: Integer; const S: PChar); extdecl;
begin
  {$define handleExceptionID := 11437}
  handleExceptionBegin
  AObj.Insert(Index, S);
  handleExceptionEnd
end;

// procedure
procedure TStrings_InsertObject(AObj: TStrings; Index: Integer; const S: PChar; AObject: TObject); extdecl;
begin
  {$define handleExceptionID := 11438}
  handleExceptionBegin
  AObj.InsertObject(Index, S, AObject);
  handleExceptionEnd
end;

// procedure
procedure TStrings_LoadFromFileWithStr(AObj: TStrings; const FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 11439}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TStrings_LoadFromFileWithStrBool(AObj: TStrings; const FileName: PChar; IgnoreEncoding: LongBool); extdecl;
begin
  {$define handleExceptionID := 11440}
  handleExceptionBegin
  AObj.LoadFromFile(FileName, IgnoreEncoding);
  handleExceptionEnd
end;

// procedure
procedure TStrings_LoadFromStreamWithStream(AObj: TStrings; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 11441}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TStrings_LoadFromStreamWithStreamBool(AObj: TStrings; Stream: TStream; IgnoreEncoding: LongBool); extdecl;
begin
  {$define handleExceptionID := 11442}
  handleExceptionBegin
  AObj.LoadFromStream(Stream, IgnoreEncoding);
  handleExceptionEnd
end;

// procedure
procedure TStrings_Move(AObj: TStrings; CurIndex: Integer; NewIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 11443}
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

// procedure
procedure TStrings_SaveToFileWithStr(AObj: TStrings; const FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 11444}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TStrings_SaveToFileWithStrBool(AObj: TStrings; const FileName: PChar; IgnoreEncoding: LongBool); extdecl;
begin
  {$define handleExceptionID := 11445}
  handleExceptionBegin
  AObj.SaveToFile(FileName, IgnoreEncoding);
  handleExceptionEnd
end;

// procedure
procedure TStrings_SaveToStreamWithStream(AObj: TStrings; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 11446}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TStrings_SaveToStreamWithStreamBool(AObj: TStrings; Stream: TStream; IgnoreEncoding: LongBool); extdecl;
begin
  {$define handleExceptionID := 11447}
  handleExceptionBegin
  AObj.SaveToStream(Stream, IgnoreEncoding);
  handleExceptionEnd
end;

// procedure
procedure TStrings_SetTextWithStr(AObj: TStrings; TheText: PChar); extdecl;
begin
  {$define handleExceptionID := 11448}
  handleExceptionBegin
  AObj.SetText(TheText);
  handleExceptionEnd
end;

// property
function TStrings_AlwaysQuote(ASet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11449}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlwaysQuote := AValue
  end else
    Result := AObj.AlwaysQuote;
  handleExceptionEnd
end;

// property
function TStrings_Capacity(ASet: LongBool; AObj: TStrings; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 11450}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Capacity := AValue
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

// property
procedure TStrings_CommaText(ASet: LongBool; AObj: TStrings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11451}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CommaText := AValue
  end else
    StringBufferCreate(AObj.CommaText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStrings_Count(AObj: TStrings): Integer; extdecl;
begin
  {$define handleExceptionID := 11452}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TStrings_DelimitedText(ASet: LongBool; AObj: TStrings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11453}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DelimitedText := AValue
  end else
    StringBufferCreate(AObj.DelimitedText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStrings_Delimiter(ASet: LongBool; AObj: TStrings; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionID := 11454}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Delimiter := AValue
  end else
    Result := AObj.Delimiter;
  handleExceptionEnd
end;

// property
procedure TStrings_LineBreak(ASet: LongBool; AObj: TStrings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11455}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineBreak := AValue
  end else
    StringBufferCreate(AObj.LineBreak, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStrings_MissingNameValueSeparatorAction(ASet: LongBool; AObj: TStrings; AValue: TMissingNameValueSeparatorAction): TMissingNameValueSeparatorAction; extdecl;
begin
  {$define handleExceptionID := 11456}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MissingNameValueSeparatorAction := AValue
  end else
    Result := AObj.MissingNameValueSeparatorAction;
  handleExceptionEnd
end;

// property
procedure TStrings_Names(AObj: TStrings; Index: Integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11457}
  handleExceptionBegin
  StringBufferCreate(AObj.Names[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStrings_NameValueSeparator(ASet: LongBool; AObj: TStrings; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionID := 11458}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NameValueSeparator := AValue
  end else
    Result := AObj.NameValueSeparator;
  handleExceptionEnd
end;

// property
function TStrings_Objects(ASet: LongBool; AObj: TStrings; Index: Integer; AValue: TObject): TObject; extdecl;
begin
  {$define handleExceptionID := 11459}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Objects[Index] := AValue
  end else
    Result := AObj.Objects[Index];
  handleExceptionEnd
end;

// property
function TStrings_Options(ASet: LongBool; AObj: TStrings; AValue: TStringsOptions): TStringsOptions; extdecl;
begin
  {$define handleExceptionID := 11460}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TStrings_QuoteChar(ASet: LongBool; AObj: TStrings; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionID := 11461}
  handleExceptionBegin
  if ASet then
  begin
    AObj.QuoteChar := AValue
  end else
    Result := AObj.QuoteChar;
  handleExceptionEnd
end;

// property
function TStrings_SkipLastLineBreak(ASet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11462}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SkipLastLineBreak := AValue
  end else
    Result := AObj.SkipLastLineBreak;
  handleExceptionEnd
end;

// property
function TStrings_TrailingLineBreak(ASet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11463}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TrailingLineBreak := AValue
  end else
    Result := AObj.TrailingLineBreak;
  handleExceptionEnd
end;

// property
function TStrings_StrictDelimiter(ASet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11464}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StrictDelimiter := AValue
  end else
    Result := AObj.StrictDelimiter;
  handleExceptionEnd
end;

// property
procedure TStrings_Strings(ASet: LongBool; AObj: TStrings; Index: Integer; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11465}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Strings[Index] := AValue
  end else
    StringBufferCreate(AObj.Strings[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TStrings_Text(ASet: LongBool; AObj: TStrings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11466}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStrings_TextLineBreakStyle(ASet: LongBool; AObj: TStrings; AValue: TTextLineBreakStyle): TTextLineBreakStyle; extdecl;
begin
  {$define handleExceptionID := 11467}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextLineBreakStyle := AValue
  end else
    Result := AObj.TextLineBreakStyle;
  handleExceptionEnd
end;

// property
function TStrings_UseLocale(ASet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11468}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseLocale := AValue
  end else
    Result := AObj.UseLocale;
  handleExceptionEnd
end;

// property
procedure TStrings_ValueFromIndex(ASet: LongBool; AObj: TStrings; Index: Integer; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11469}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ValueFromIndex[Index] := AValue
  end else
    StringBufferCreate(AObj.ValueFromIndex[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TStrings_Values(ASet: LongBool; AObj: TStrings; const Name: PChar; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11470}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Values[Name] := AValue
  end else
    StringBufferCreate(AObj.Values[Name], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStrings_WriteBOM(ASet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11471}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WriteBOM := AValue
  end else
    Result := AObj.WriteBOM;
  handleExceptionEnd
end;

exports
  TStrings_ToObjectArrayWithIntX2,
  TStrings_ToObjectArrayToObjectDynArray,
  TStrings_ToStringArrayWithIntX2,
  TStrings_ToStringArrayToStringDynArray,
  TStrings_Add,
  TStrings_AddObject,
  TStrings_AddPairWithStrX2,
  TStrings_AddPairWithStrX2Object,
  TStrings_EqualsWithStrings,
  TStrings_ExtractName,
  TStrings_GetEnumerator,
  TStrings_GetText,
  TStrings_IndexOfWithStr,
  TStrings_IndexOfWithStrInt,
  TStrings_IndexOfName,
  TStrings_IndexOfObject,
  TStrings_LastIndexOfWithStrInt,
  TStrings_LastIndexOfWithStr,
  TStrings_Pop,
  TStrings_Reverse,
  TStrings_Shift,
  TStrings_Slice,
  TStrings_AddStringsWithStrings,
  TStrings_AddStringsWithStringsBool,
  TStrings_SetStringsWithStrings,
  TStrings_AddText,
  TStrings_AddCommaText,
  TStrings_AddDelimitedTextWithStrCharBool,
  TStrings_AddDelimitedtextWithStr,
  TStrings_Append,
  TStrings_BeginUpdate,
  TStrings_Clear,
  TStrings_Delete,
  TStrings_EndUpdate,
  TStrings_Exchange,
  TStrings_Fill,
  TStrings_GetNameValue,
  TStrings_Insert,
  TStrings_InsertObject,
  TStrings_LoadFromFileWithStr,
  TStrings_LoadFromFileWithStrBool,
  TStrings_LoadFromStreamWithStream,
  TStrings_LoadFromStreamWithStreamBool,
  TStrings_Move,
  TStrings_SaveToFileWithStr,
  TStrings_SaveToFileWithStrBool,
  TStrings_SaveToStreamWithStream,
  TStrings_SaveToStreamWithStreamBool,
  TStrings_SetTextWithStr,
  TStrings_AlwaysQuote,
  TStrings_Capacity,
  TStrings_CommaText,
  TStrings_Count,
  TStrings_DelimitedText,
  TStrings_Delimiter,
  TStrings_LineBreak,
  TStrings_MissingNameValueSeparatorAction,
  TStrings_Names,
  TStrings_NameValueSeparator,
  TStrings_Objects,
  TStrings_Options,
  TStrings_QuoteChar,
  TStrings_SkipLastLineBreak,
  TStrings_TrailingLineBreak,
  TStrings_StrictDelimiter,
  TStrings_Strings,
  TStrings_Text,
  TStrings_TextLineBreakStyle,
  TStrings_UseLocale,
  TStrings_ValueFromIndex,
  TStrings_Values,
  TStrings_WriteBOM;