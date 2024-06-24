
//property
function Strings_AlwaysQuote(AIsSet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlwaysQuote := AValue;
  end else
    Result := AObj.AlwaysQuote;
  handleExceptionEnd
end;

//property
function Strings_Capacity(AIsSet: LongBool; AObj: TStrings; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Capacity := AValue;
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

//property
function Strings_CommaText(AIsSet: LongBool; AObj: TStrings; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CommaText := AValue;
  end else
    Result := ToPChar(AObj.CommaText);
  handleExceptionEnd
end;

//property
function Strings_Count(AObj: TStrings): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function Strings_DelimitedText(AIsSet: LongBool; AObj: TStrings; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DelimitedText := AValue;
  end else
    Result := ToPChar(AObj.DelimitedText);
  handleExceptionEnd
end;

//property
function Strings_Delimiter(AIsSet: LongBool; AObj: TStrings; AValue: Char): Char; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Delimiter := AValue;
  end else
    Result := AObj.Delimiter;
  handleExceptionEnd
end;

//property
function Strings_LineBreak(AIsSet: LongBool; AObj: TStrings; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LineBreak := AValue;
  end else
    Result := ToPChar(AObj.LineBreak);
  handleExceptionEnd
end;

//property
function Strings_MissingNameValueSeparatorAction(AIsSet: LongBool; AObj: TStrings; AValue: TMissingNameValueSeparatorAction): TMissingNameValueSeparatorAction; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MissingNameValueSeparatorAction := AValue;
  end else
    Result := AObj.MissingNameValueSeparatorAction;
  handleExceptionEnd
end;

//property
function Strings_Names(AObj: TStrings; Index: Integer): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Names[Index]);
  handleExceptionEnd
end;

//property
function Strings_NameValueSeparator(AIsSet: LongBool; AObj: TStrings; AValue: Char): Char; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NameValueSeparator := AValue;
  end else
    Result := AObj.NameValueSeparator;
  handleExceptionEnd
end;

//property
function Strings_Objects(AIsSet: LongBool; AObj: TStrings; Index: Integer; AValue: TObject): TObject; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Objects[Index] := AValue;
  end else
    Result := AObj.Objects[Index];
  handleExceptionEnd
end;

//property
function Strings_Options(AIsSet: LongBool; AObj: TStrings; AValue: TStringsOptions): TStringsOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function Strings_QuoteChar(AIsSet: LongBool; AObj: TStrings; AValue: Char): Char; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.QuoteChar := AValue;
  end else
    Result := AObj.QuoteChar;
  handleExceptionEnd
end;

//property
function Strings_SkipLastLineBreak(AIsSet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SkipLastLineBreak := AValue;
  end else
    Result := AObj.SkipLastLineBreak;
  handleExceptionEnd
end;

//property
function Strings_TrailingLineBreak(AIsSet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TrailingLineBreak := AValue;
  end else
    Result := AObj.TrailingLineBreak;
  handleExceptionEnd
end;

//property
function Strings_StrictDelimiter(AIsSet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StrictDelimiter := AValue;
  end else
    Result := AObj.StrictDelimiter;
  handleExceptionEnd
end;

//property
function Strings_Strings(AIsSet: LongBool; AObj: TStrings; Index: Integer; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Strings[Index] := AValue;
  end else
    Result := ToPChar(AObj.Strings[Index]);
  handleExceptionEnd
end;

//property
function Strings_Text(AIsSet: LongBool; AObj: TStrings; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function Strings_TextLineBreakStyle(AIsSet: LongBool; AObj: TStrings; AValue: TTextLineBreakStyle): TTextLineBreakStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextLineBreakStyle := AValue;
  end else
    Result := AObj.TextLineBreakStyle;
  handleExceptionEnd
end;

//property
function Strings_UseLocale(AIsSet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseLocale := AValue;
  end else
    Result := AObj.UseLocale;
  handleExceptionEnd
end;

//property
function Strings_ValueFromIndex(AIsSet: LongBool; AObj: TStrings; Index: Integer; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ValueFromIndex[Index] := AValue;
  end else
    Result := ToPChar(AObj.ValueFromIndex[Index]);
  handleExceptionEnd
end;

//property
function Strings_Values(AIsSet: LongBool; AObj: TStrings; const Name: PChar; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Values[Name] := AValue;
  end else
    Result := ToPChar(AObj.Values[Name]);
  handleExceptionEnd
end;

//property
function Strings_WriteBOM(AIsSet: LongBool; AObj: TStrings; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WriteBOM := AValue;
  end else
    Result := AObj.WriteBOM;
  handleExceptionEnd
end;

//function
function Strings_ToObjectArray(AObj: TStrings; aStart, aEnd: Integer): TObjectDynArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ToObjectArray(aStart, aEnd);
  handleExceptionEnd
end;

//function
function Strings_ToObjectArray1(AObj: TStrings): TObjectDynArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ToObjectArray();
  handleExceptionEnd
end;

//function
function Strings_ToStringArray(AObj: TStrings; aStart, aEnd: Integer): TStringDynArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ToStringArray(aStart, aEnd);
  handleExceptionEnd
end;

//function
function Strings_ToStringArray1(AObj: TStrings): TStringDynArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ToStringArray();
  handleExceptionEnd
end;

//function
function Strings_Add(AObj: TStrings; const S: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add(S);
  handleExceptionEnd
end;

//function
function Strings_AddObject(AObj: TStrings; const S: PChar; AObject: TObject): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddObject(S, AObject);
  handleExceptionEnd
end;

//function
function Strings_AddPair(AObj: TStrings; const AName, AValue: PChar): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddPair(AName, AValue);
  handleExceptionEnd
end;

//function
function Strings_AddPair1(AObj: TStrings; const AName, AValue: PChar; AObject: TObject): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddPair(AName, AValue, AObject);
  handleExceptionEnd
end;

//function
function Strings_EqualsForBool(AObj: TStrings; TheStrings: TStrings): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Equals(TheStrings);
  handleExceptionEnd
end;

//function
function Strings_ExtractName(AObj: TStrings; const S: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ExtractName(S));
  handleExceptionEnd
end;

//function
function Strings_GetEnumerator(AObj: TStrings): TStringsEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function Strings_GetText1(AObj: TStrings): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetText());
  handleExceptionEnd
end;

//function
function Strings_IndexOf(AObj: TStrings; const S: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(S);
  handleExceptionEnd
end;

//function
function Strings_IndexOf1(AObj: TStrings; const S: PChar; aStart: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(S, aStart);
  handleExceptionEnd
end;

//function
function Strings_IndexOfName(AObj: TStrings; const Name: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOfName(Name);
  handleExceptionEnd
end;

//function
function Strings_IndexOfObject(AObj: TStrings; AObject: TObject): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOfObject(AObject);
  handleExceptionEnd
end;

//function
function Strings_LastIndexOf(AObj: TStrings; const S: PChar; aStart: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LastIndexOf(S, aStart);
  handleExceptionEnd
end;

//function
function Strings_LastIndexOf1(AObj: TStrings; const S: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LastIndexOf(S);
  handleExceptionEnd
end;

//function
function Strings_Pop(AObj: TStrings): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Pop());
  handleExceptionEnd
end;

//function
function Strings_Reverse(AObj: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Reverse();
  handleExceptionEnd
end;

//function
function Strings_Shift(AObj: TStrings): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Shift());
  handleExceptionEnd
end;

//function
function Strings_Slice(AObj: TStrings; fromIndex: integer): TStrings; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Slice(fromIndex);
  handleExceptionEnd
end;

//function
function Strings_Class(): TClass; extdecl;
begin
  Result := TStrings;
end;

//procedure
procedure Strings_AddStrings(AObj: TStrings; TheStrings: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.AddStrings(TheStrings);
  handleExceptionEnd
end;

//procedure
procedure Strings_AddStrings1(AObj: TStrings; TheStrings: TStrings; ClearFirst: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AddStrings(TheStrings, ClearFirst);
  handleExceptionEnd
end;

//procedure
procedure Strings_SetStrings1(AObj: TStrings; TheStrings: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.SetStrings(TheStrings);
  handleExceptionEnd
end;

//procedure
procedure Strings_AddText(AObj: TStrings; const S: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AddText(S);
  handleExceptionEnd
end;

//procedure
procedure Strings_AddCommaText(AObj: TStrings; const S: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AddCommaText(S);
  handleExceptionEnd
end;

//procedure
procedure Strings_AddDelimitedText(AObj: TStrings; const S: PChar; ADelimiter: char; AStrictDelimiter: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AddDelimitedText(S, ADelimiter, AStrictDelimiter);
  handleExceptionEnd
end;

//procedure
procedure Strings_AddDelimitedtext1(AObj: TStrings; const S: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AddDelimitedtext(S);
  handleExceptionEnd
end;

//procedure
procedure Strings_Append(AObj: TStrings; const S: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Append(S);
  handleExceptionEnd
end;

//procedure
procedure Strings_BeginUpdate(AObj: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure Strings_Clear(AObj: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure Strings_Delete(AObj: TStrings; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//procedure
procedure Strings_EndUpdate(AObj: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//procedure
procedure Strings_Exchange(AObj: TStrings; Index1, Index2: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Exchange(Index1, Index2);
  handleExceptionEnd
end;

//procedure
procedure Strings_Fill(AObj: TStrings; const aValue: PChar; aStart, aEnd: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Fill(aValue, aStart, aEnd);
  handleExceptionEnd
end;

//procedure
procedure Strings_GetNameValue(AObj: TStrings; Index: Integer; out OutName, OutValue: PChar); extdecl;
var
  RetOutName: string;
  RetOutValue: string;
begin
  handleExceptionBegin
  RetOutName := OutName;
  RetOutValue := OutValue;
  AObj.GetNameValue(Index, RetOutName, RetOutValue);
  OutName := ToPChar(RetOutName);
  OutValue := ToPChar(RetOutValue);
  handleExceptionEnd
end;

//procedure
procedure Strings_Insert(AObj: TStrings; Index: Integer; const S: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(Index, S);
  handleExceptionEnd
end;

//procedure
procedure Strings_InsertObject(AObj: TStrings; Index: Integer; const S: PChar; AObject: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.InsertObject(Index, S, AObject);
  handleExceptionEnd
end;

//procedure
procedure Strings_LoadFromFile(AObj: TStrings; const FileName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure Strings_LoadFromFile1(AObj: TStrings; const FileName: PChar; IgnoreEncoding: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(FileName, IgnoreEncoding);
  handleExceptionEnd
end;

//procedure
procedure Strings_LoadFromStream(AObj: TStrings; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Strings_LoadFromStream1(AObj: TStrings; Stream: TStream; IgnoreEncoding: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream, IgnoreEncoding);
  handleExceptionEnd
end;

//procedure
procedure Strings_Move(AObj: TStrings; CurIndex, NewIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

//procedure
procedure Strings_Reverse1(AObj: TStrings; aList: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Reverse(aList);
  handleExceptionEnd
end;

//procedure
procedure Strings_SaveToFile(AObj: TStrings; const FileName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

//procedure
procedure Strings_SaveToFile1(AObj: TStrings; const FileName: PChar; IgnoreEncoding: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(FileName, IgnoreEncoding);
  handleExceptionEnd
end;

//procedure
procedure Strings_SaveToStream(AObj: TStrings; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure Strings_SaveToStream1(AObj: TStrings; Stream: TStream; IgnoreEncoding: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream, IgnoreEncoding);
  handleExceptionEnd
end;

//procedure
procedure Strings_Slice1(AObj: TStrings; fromIndex: integer; aList: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Slice(fromIndex, aList);
  handleExceptionEnd
end;

//procedure
procedure Strings_SetText1(AObj: TStrings; TheText: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetText(TheText);
  handleExceptionEnd
end;


exports
  Strings_AlwaysQuote,
  Strings_Capacity,
  Strings_CommaText,
  Strings_Count,
  Strings_DelimitedText,
  Strings_Delimiter,
  Strings_LineBreak,
  Strings_MissingNameValueSeparatorAction,
  Strings_Names,
  Strings_NameValueSeparator,
  Strings_Objects,
  Strings_Options,
  Strings_QuoteChar,
  Strings_SkipLastLineBreak,
  Strings_TrailingLineBreak,
  Strings_StrictDelimiter,
  Strings_Strings,
  Strings_Text,
  Strings_TextLineBreakStyle,
  Strings_UseLocale,
  Strings_ValueFromIndex,
  Strings_Values,
  Strings_WriteBOM,
  Strings_ToObjectArray,
  Strings_ToObjectArray1,
  Strings_ToStringArray,
  Strings_ToStringArray1,
  Strings_Add,
  Strings_AddObject,
  Strings_AddPair,
  Strings_AddPair1,
  Strings_EqualsForBool,
  Strings_ExtractName,
  Strings_GetEnumerator,
  Strings_GetText1,
  Strings_IndexOf,
  Strings_IndexOf1,
  Strings_IndexOfName,
  Strings_IndexOfObject,
  Strings_LastIndexOf,
  Strings_LastIndexOf1,
  Strings_Pop,
  Strings_Reverse,
  Strings_Shift,
  Strings_Slice,
  Strings_Class,
  Strings_AddStrings,
  Strings_AddStrings1,
  Strings_SetStrings1,
  Strings_AddText,
  Strings_AddCommaText,
  Strings_AddDelimitedText,
  Strings_AddDelimitedtext1,
  Strings_Append,
  Strings_BeginUpdate,
  Strings_Clear,
  Strings_Delete,
  Strings_EndUpdate,
  Strings_Exchange,
  Strings_Fill,
  Strings_GetNameValue,
  Strings_Insert,
  Strings_InsertObject,
  Strings_LoadFromFile,
  Strings_LoadFromFile1,
  Strings_LoadFromStream,
  Strings_LoadFromStream1,
  Strings_Move,
  Strings_Reverse1,
  Strings_SaveToFile,
  Strings_SaveToFile1,
  Strings_SaveToStream,
  Strings_SaveToStream1,
  Strings_Slice1,
  Strings_SetText1;