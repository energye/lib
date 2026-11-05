// constructor
function TCoreWebView2Notification_Create(const aBaseIntf: ICoreWebView2Notification): TCoreWebView2Notification; extdecl;
begin
  {$define handleExceptionID := 7900}
  handleExceptionBegin
  Result := TCoreWebView2Notification.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2Notification_AddAllBrowserEvents(AObj: TCoreWebView2Notification; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 7901}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2Notification_ReportShown(AObj: TCoreWebView2Notification): LongBool; extdecl;
begin
  {$define handleExceptionID := 7902}
  handleExceptionBegin
  Result := AObj.ReportShown();
  handleExceptionEnd
end;

// function
function TCoreWebView2Notification_ReportClicked(AObj: TCoreWebView2Notification): LongBool; extdecl;
begin
  {$define handleExceptionID := 7903}
  handleExceptionBegin
  Result := AObj.ReportClicked();
  handleExceptionEnd
end;

// function
function TCoreWebView2Notification_ReportClosed(AObj: TCoreWebView2Notification): LongBool; extdecl;
begin
  {$define handleExceptionID := 7904}
  handleExceptionBegin
  Result := AObj.ReportClosed();
  handleExceptionEnd
end;

// property
function TCoreWebView2Notification_Initialized(AObj: TCoreWebView2Notification): LongBool; extdecl;
begin
  {$define handleExceptionID := 7905}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_BaseIntf(ASet: LongBool; AObj: TCoreWebView2Notification; AValue: ICoreWebView2Notification; var Result: ICoreWebView2Notification); extdecl;
begin
  {$define handleExceptionID := 7906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_Body(AObj: TCoreWebView2Notification; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7907}
  handleExceptionBegin
  StringBufferCreate(AObj.Body, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Notification_Direction(AObj: TCoreWebView2Notification): TWVTextDirectionKind; extdecl;
begin
  {$define handleExceptionID := 7908}
  handleExceptionBegin
  Result := AObj.Direction;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_Language(AObj: TCoreWebView2Notification; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7909}
  handleExceptionBegin
  StringBufferCreate(AObj.Language, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_Tag(AObj: TCoreWebView2Notification; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7910}
  handleExceptionBegin
  StringBufferCreate(AObj.Tag, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_IconUri(AObj: TCoreWebView2Notification; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7911}
  handleExceptionBegin
  StringBufferCreate(AObj.IconUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_Title(AObj: TCoreWebView2Notification; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7912}
  handleExceptionBegin
  StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_BadgeUri(AObj: TCoreWebView2Notification; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7913}
  handleExceptionBegin
  StringBufferCreate(AObj.BadgeUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_BodyImageUri(AObj: TCoreWebView2Notification; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7914}
  handleExceptionBegin
  StringBufferCreate(AObj.BodyImageUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Notification_ShouldRenotify(AObj: TCoreWebView2Notification): LongBool; extdecl;
begin
  {$define handleExceptionID := 7915}
  handleExceptionBegin
  Result := AObj.ShouldRenotify;
  handleExceptionEnd
end;

// property
function TCoreWebView2Notification_RequiresInteraction(AObj: TCoreWebView2Notification): LongBool; extdecl;
begin
  {$define handleExceptionID := 7916}
  handleExceptionBegin
  Result := AObj.RequiresInteraction;
  handleExceptionEnd
end;

// property
function TCoreWebView2Notification_IsSilent(AObj: TCoreWebView2Notification): LongBool; extdecl;
begin
  {$define handleExceptionID := 7917}
  handleExceptionBegin
  Result := AObj.IsSilent;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Notification_Timestamp(AObj: TCoreWebView2Notification; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 7918}
  handleExceptionBegin
  Result := AObj.Timestamp;
  handleExceptionEnd
end;

// property
function TCoreWebView2Notification_VibrationPattern(AObj: TCoreWebView2Notification): TUint64ArrayWrap; extdecl;
begin
  {$define handleExceptionID := 7919}
  handleExceptionBegin
  Result := TUint64ArrayWrap.Create(AObj.VibrationPattern);
  handleExceptionEnd
end;

exports
  TCoreWebView2Notification_Create,
  TCoreWebView2Notification_AddAllBrowserEvents,
  TCoreWebView2Notification_ReportShown,
  TCoreWebView2Notification_ReportClicked,
  TCoreWebView2Notification_ReportClosed,
  TCoreWebView2Notification_Initialized,
  TCoreWebView2Notification_BaseIntf,
  TCoreWebView2Notification_Body,
  TCoreWebView2Notification_Direction,
  TCoreWebView2Notification_Language,
  TCoreWebView2Notification_Tag,
  TCoreWebView2Notification_IconUri,
  TCoreWebView2Notification_Title,
  TCoreWebView2Notification_BadgeUri,
  TCoreWebView2Notification_BodyImageUri,
  TCoreWebView2Notification_ShouldRenotify,
  TCoreWebView2Notification_RequiresInteraction,
  TCoreWebView2Notification_IsSilent,
  TCoreWebView2Notification_Timestamp,
  TCoreWebView2Notification_VibrationPattern;