
//constructor
function CustomVirtualStringTree_Create(AOwner: TComponent): TCustomVirtualStringTree; extdecl;
begin
  handleExceptionBegin
  Result := TCustomVirtualStringTree.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomVirtualStringTree_ImageText(AObj: TCustomVirtualStringTree; Node: PVirtualNode; Kind: TVTImageKind; Column: TColumnIndex): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ImageText[Node, Kind, Column]);
  handleExceptionEnd
end;

//property
function CustomVirtualStringTree_StaticText(AObj: TCustomVirtualStringTree; Node: PVirtualNode; Column: TColumnIndex): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.StaticText[Node, Column]);
  handleExceptionEnd
end;

//property
function CustomVirtualStringTree_Text(AIsSet: LongBool; AObj: TCustomVirtualStringTree; Node: PVirtualNode; Column: TColumnIndex; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text[Node, Column] := AValue;
  end else
    Result := ToPChar(AObj.Text[Node, Column]);
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ComputeNodeHeight(AObj: TCustomVirtualStringTree; Canvas: TCanvas; Node: PVirtualNode; Column: TColumnIndex; S: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComputeNodeHeight(Canvas, Node, Column, S);
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToClipboard(AObj: TCustomVirtualStringTree; Format: TClipboardFormat; Source: TVSTTextSourceType): HGLOBAL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ContentToClipboard(Format, Source);
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToHTML(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Caption: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ContentToHTML(Source, Caption));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToRTF(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ContentToRTF(Source));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToAnsi(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ContentToAnsi(Source, Separator));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToText(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ContentToText(Source, Separator));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToUnicode(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ContentToUnicode(Source, Separator));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToUTF16(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ContentToUTF16(Source, Separator));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_ContentToUTF8(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType; const Separator: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ContentToUTF8(Source, Separator));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_Path(AObj: TCustomVirtualStringTree; Node: PVirtualNode; Column: TColumnIndex; TextType: TVSTTextType; Delimiter: Char): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Path(Node, Column, TextType, Delimiter));
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_SaveToCSVFile(AObj: TCustomVirtualStringTree; const FileNameWithPath: TFileName; const IncludeHeading: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveToCSVFile(FileNameWithPath, IncludeHeading);
  handleExceptionEnd
end;

//function
function CustomVirtualStringTree_Class(): TClass; extdecl;
begin
  Result := TCustomVirtualStringTree;
end;

//procedure
procedure CustomVirtualStringTree_ContentToCustom(AObj: TCustomVirtualStringTree; Source: TVSTTextSourceType); extdecl;
begin
  handleExceptionBegin
  AObj.ContentToCustom(Source);
  handleExceptionEnd
end;

//procedure
procedure CustomVirtualStringTree_AddToSelection(AObj: TCustomVirtualStringTree; Node: PVirtualNode); extdecl;
begin
  handleExceptionBegin
  AObj.AddToSelection(Node);
  handleExceptionEnd
end;

//procedure
procedure CustomVirtualStringTree_RemoveFromSelection(AObj: TCustomVirtualStringTree; Node: PVirtualNode); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveFromSelection(Node);
  handleExceptionEnd
end;


exports
  CustomVirtualStringTree_Create,
  CustomVirtualStringTree_ImageText,
  CustomVirtualStringTree_StaticText,
  CustomVirtualStringTree_Text,
  CustomVirtualStringTree_ComputeNodeHeight,
  CustomVirtualStringTree_ContentToClipboard,
  CustomVirtualStringTree_ContentToHTML,
  CustomVirtualStringTree_ContentToRTF,
  CustomVirtualStringTree_ContentToAnsi,
  CustomVirtualStringTree_ContentToText,
  CustomVirtualStringTree_ContentToUnicode,
  CustomVirtualStringTree_ContentToUTF16,
  CustomVirtualStringTree_ContentToUTF8,
  CustomVirtualStringTree_Path,
  CustomVirtualStringTree_SaveToCSVFile,
  CustomVirtualStringTree_Class,
  CustomVirtualStringTree_ContentToCustom,
  CustomVirtualStringTree_AddToSelection,
  CustomVirtualStringTree_RemoveFromSelection;