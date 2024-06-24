
//constructor
function RichEdit_Create(AOnwer: TComponent): TRichEdit; extdecl;
begin
  handleExceptionBegin
  Result := TRichEdit.Create(AOnwer);
  handleExceptionEnd
end;

//property
function RichEdit_Zoom(AIsSet: LongBool; AObj: TRichEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Zoom := AValue;
  end else
    Result := AObj.Zoom;
  handleExceptionEnd
end;

//property
function RichEdit_HideScrollBars(AIsSet: LongBool; AObj: TRichEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HideScrollBars := AValue;
  end else
    Result := AObj.HideScrollBars;
  handleExceptionEnd
end;

//property
function RichEdit_PlainText(AIsSet: LongBool; AObj: TRichEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PlainText := AValue;
  end else
    Result := AObj.PlainText;
  handleExceptionEnd
end;

//property
function RichEdit_DefAttributes(AIsSet: LongBool; AObj: TRichEdit; AValue: TTextAttributes): TTextAttributes; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefAttributes := AValue;
  end else
    Result := AObj.DefAttributes;
  handleExceptionEnd
end;

//property
function RichEdit_SelAttributes(AIsSet: LongBool; AObj: TRichEdit; AValue: TTextAttributes): TTextAttributes; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelAttributes := AValue;
  end else
    Result := AObj.SelAttributes;
  handleExceptionEnd
end;

//property
function RichEdit_Paragraph(AIsSet: LongBool; AObj: TRichEdit; AValue: TParaAttributes): TParaAttributes; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Paragraph := AValue;
  end else
    Result := AObj.Paragraph;
  handleExceptionEnd
end;

//function
function RichEdit_FindText(AObj: TRichEdit; ASearchStr: PChar; AStartPos: Integer; ALength: Integer; AOptions: TSearchTypes): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindText(ASearchStr, AStartPos, ALength, AOptions);
  handleExceptionEnd
end;

//function
function RichEdit_Class(): TClass; extdecl;
begin
  Result := TRichEdit;
end;


exports
  RichEdit_Create,
  RichEdit_Zoom,
  RichEdit_HideScrollBars,
  RichEdit_PlainText,
  RichEdit_DefAttributes,
  RichEdit_SelAttributes,
  RichEdit_Paragraph,
  RichEdit_FindText,
  RichEdit_Class;