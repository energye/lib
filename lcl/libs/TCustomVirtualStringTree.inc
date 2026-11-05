// constructor
function TCustomVirtualStringTree_Create(AOwner: TComponent): TCustomVirtualStringTree; extdecl;
begin
  {$define handleExceptionID := 29000}
  handleExceptionBegin
  Result := TCustomVirtualStringTree.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomVirtualStringTree_ComputeNodeHeight(AObj: TCustomVirtualStringTree; Canvas: TCanvas; Node: PVirtualNode; Column: Integer; S: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 29001}
  handleExceptionBegin
  Result := AObj.ComputeNodeHeight(Canvas, Node, Column, S);
  handleExceptionEnd
end;

// function
function TCustomVirtualStringTree_ContentToClipboard(AObj: TCustomVirtualStringTree; Format: TClipboardFormat; Source: TVSTTextSourceType): HGLOBAL; extdecl;
begin
  {$define handleExceptionID := 29002}
  handleExceptionBegin
  Result := AObj.ContentToClipboard(Format, Source);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_ContentToHTML(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Caption: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29003}
  handleExceptionBegin
  StringBufferCreate(AObj.ContentToHTML(Source, Caption), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_ContentToRTF(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29004}
  handleExceptionBegin
  StringBufferCreate(AObj.ContentToRTF(Source), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_ContentToAnsi(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29005}
  handleExceptionBegin
  StringBufferCreate(AObj.ContentToAnsi(Source, Separator), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_ContentToText(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29006}
  handleExceptionBegin
  StringBufferCreate(AObj.ContentToText(Source, Separator), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_ContentToUnicode(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29007}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ContentToUnicode(Source, Separator)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_ContentToUTF16(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29008}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ContentToUTF16(Source, Separator)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_ContentToUTF8(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29009}
  handleExceptionBegin
  StringBufferCreate(AObj.ContentToUTF8(Source, Separator), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomVirtualStringTree_Path(AObj: TCustomVirtualStringTree; Node: PVirtualNode; Column: Integer; TextType: TVSTTextType; Delimiter: Char;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29010}
  handleExceptionBegin
  StringBufferCreate(AObj.Path(Node, Column, TextType, Delimiter), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCustomVirtualStringTree_SaveToCSVFile(AObj: TCustomVirtualStringTree; const FileNameWithPath: TFileName; const IncludeHeading: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29011}
  handleExceptionBegin
  Result := AObj.SaveToCSVFile(FileNameWithPath, IncludeHeading);
  handleExceptionEnd
end;

// procedure
procedure TCustomVirtualStringTree_ContentToCustom(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType); extdecl;
begin
  {$define handleExceptionID := 29012}
  handleExceptionBegin
  AObj.ContentToCustom(Source);
  handleExceptionEnd
end;

// procedure
procedure TCustomVirtualStringTree_AddToSelection(AObj: TCustomVirtualStringTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 29013}
  handleExceptionBegin
  AObj.AddToSelection(Node);
  handleExceptionEnd
end;

// procedure
procedure TCustomVirtualStringTree_RemoveFromSelection(AObj: TCustomVirtualStringTree; Node: PVirtualNode); extdecl;
begin
  {$define handleExceptionID := 29014}
  handleExceptionBegin
  AObj.RemoveFromSelection(Node);
  handleExceptionEnd
end;

// property
procedure TCustomVirtualStringTree_ImageText(AObj: TCustomVirtualStringTree; Node: PVirtualNode; Kind: TVTImageKind; Column: Integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29015}
  handleExceptionBegin
  StringBufferCreate(AObj.ImageText[Node, Kind, Column], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomVirtualStringTree_StaticText(AObj: TCustomVirtualStringTree; Node: PVirtualNode; Column: Integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29016}
  handleExceptionBegin
  StringBufferCreate(AObj.StaticText[Node, Column], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomVirtualStringTree_Text(ASet: LongBool; AObj: TCustomVirtualStringTree; Node: PVirtualNode; Column: Integer; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text[Node, Column] := AValue
  end else
    StringBufferCreate(AObj.Text[Node, Column], AStrData, AStrSize);
  handleExceptionEnd
end;

function TCustomVirtualStringTree_TClass(): TClass; extdecl;
begin
  Result := TCustomVirtualStringTree;
end;

exports
  TCustomVirtualStringTree_Create,
  TCustomVirtualStringTree_ComputeNodeHeight,
  TCustomVirtualStringTree_ContentToClipboard,
  TCustomVirtualStringTree_ContentToHTML,
  TCustomVirtualStringTree_ContentToRTF,
  TCustomVirtualStringTree_ContentToAnsi,
  TCustomVirtualStringTree_ContentToText,
  TCustomVirtualStringTree_ContentToUnicode,
  TCustomVirtualStringTree_ContentToUTF16,
  TCustomVirtualStringTree_ContentToUTF8,
  TCustomVirtualStringTree_Path,
  TCustomVirtualStringTree_SaveToCSVFile,
  TCustomVirtualStringTree_ContentToCustom,
  TCustomVirtualStringTree_AddToSelection,
  TCustomVirtualStringTree_RemoveFromSelection,
  TCustomVirtualStringTree_ImageText,
  TCustomVirtualStringTree_StaticText,
  TCustomVirtualStringTree_Text,
  TCustomVirtualStringTree_TClass;