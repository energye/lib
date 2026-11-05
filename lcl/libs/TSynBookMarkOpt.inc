// constructor
function TSynBookMarkOpt_Create(AOwner: TComponent): TSynBookMarkOpt; extdecl;
begin
  {$define handleExceptionID := 35600}
  handleExceptionBegin
  Result := TSynBookMarkOpt.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynBookMarkOpt_BookmarkImages(ASet: LongBool; AObj: TSynBookMarkOpt; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 35601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BookmarkImages := AValue
  end else
    Result := AObj.BookmarkImages;
  handleExceptionEnd
end;

// property
function TSynBookMarkOpt_DrawBookmarksFirst(ASet: LongBool; AObj: TSynBookMarkOpt; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawBookmarksFirst := AValue
  end else
    Result := AObj.DrawBookmarksFirst;
  handleExceptionEnd
end;

// property
function TSynBookMarkOpt_EnableKeys(ASet: LongBool; AObj: TSynBookMarkOpt; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableKeys := AValue
  end else
    Result := AObj.EnableKeys;
  handleExceptionEnd
end;

// property
function TSynBookMarkOpt_GlyphsVisible(ASet: LongBool; AObj: TSynBookMarkOpt; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GlyphsVisible := AValue
  end else
    Result := AObj.GlyphsVisible;
  handleExceptionEnd
end;

// property
function TSynBookMarkOpt_LeftMargin(ASet: LongBool; AObj: TSynBookMarkOpt; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftMargin := AValue
  end else
    Result := AObj.LeftMargin;
  handleExceptionEnd
end;

// property
function TSynBookMarkOpt_Xoffset(ASet: LongBool; AObj: TSynBookMarkOpt; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 35606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Xoffset := AValue
  end else
    Result := AObj.Xoffset;
  handleExceptionEnd
end;

// event
procedure TSynBookMarkOpt_OnChange(AObj: TSynBookMarkOpt; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSynBookMarkOpt_Create,
  TSynBookMarkOpt_BookmarkImages,
  TSynBookMarkOpt_DrawBookmarksFirst,
  TSynBookMarkOpt_EnableKeys,
  TSynBookMarkOpt_GlyphsVisible,
  TSynBookMarkOpt_LeftMargin,
  TSynBookMarkOpt_Xoffset,
  TSynBookMarkOpt_OnChange;