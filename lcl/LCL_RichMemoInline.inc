
//constructor
function RichMemoInline_Create(): TRichMemoInline; extdecl;
begin
  handleExceptionBegin
  Result := TRichMemoInline.Create();
  handleExceptionEnd
end;

//property
function RichMemoInline_Owner(AObj: TRichMemoInline): TCustomRichMemo; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//function
function RichMemoInline_Class(): TClass; extdecl;
begin
  Result := TRichMemoInline;
end;

//procedure
procedure RichMemoInline_Draw(AObj: TRichMemoInline; Canvas: TCanvas; var ASize: TSize); extdecl;
begin
  handleExceptionBegin
  AObj.Draw(Canvas, ASize);
  handleExceptionEnd
end;

//procedure
procedure RichMemoInline_SetVisible(AObj: TRichMemoInline; AVisible: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetVisible(AVisible);
  handleExceptionEnd
end;

//procedure
procedure RichMemoInline_Invalidate(AObj: TRichMemoInline); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate();
  handleExceptionEnd
end;


exports
  RichMemoInline_Create,
  RichMemoInline_Owner,
  RichMemoInline_Class,
  RichMemoInline_Draw,
  RichMemoInline_SetVisible,
  RichMemoInline_Invalidate;