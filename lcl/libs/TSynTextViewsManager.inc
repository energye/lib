// constructor
function TSynTextViewsManager_Create(ATextBuffer: TSynEditStringListBase; ATopViewChangedCallback: TNotifyEventDelegate): TSynTextViewsManager; extdecl;
begin
  {$define handleExceptionID := 36200}
  handleExceptionBegin
  Result := TSynTextViewsManager.Create(ATextBuffer, ATopViewChangedCallback.OnNotify);
  handleExceptionEnd
end;

// function
function TSynTextViewsManager_IndexOf(AObj: TSynTextViewsManager; aTextView: TSynEditStringsLinked): integer; extdecl;
begin
  {$define handleExceptionID := 36201}
  handleExceptionBegin
  Result := AObj.IndexOf(aTextView);
  handleExceptionEnd
end;

// function
function TSynTextViewsManager_Count(AObj: TSynTextViewsManager): Integer; extdecl;
begin
  {$define handleExceptionID := 36202}
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

// procedure
procedure TSynTextViewsManager_ReconnectViews(AObj: TSynTextViewsManager); extdecl;
begin
  {$define handleExceptionID := 36203}
  handleExceptionBegin
  AObj.ReconnectViews();
  handleExceptionEnd
end;

// procedure
procedure TSynTextViewsManager_AddTextViewWithSynEditStringsLinkedBool(AObj: TSynTextViewsManager; aTextView: TSynEditStringsLinked; AsFirst: LongBool); extdecl;
begin
  {$define handleExceptionID := 36204}
  handleExceptionBegin
  AObj.AddTextView(aTextView, AsFirst);
  handleExceptionEnd
end;

// procedure
procedure TSynTextViewsManager_AddTextViewWithSynEditStringsLinkedInt(AObj: TSynTextViewsManager; aTextView: TSynEditStringsLinked; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 36205}
  handleExceptionBegin
  AObj.AddTextView(aTextView, AIndex);
  handleExceptionEnd
end;

// procedure
procedure TSynTextViewsManager_AddTextViewWithSynEditStringsLinkedX2(AObj: TSynTextViewsManager; aTextView: TSynEditStringsLinked; AnAfter: TSynEditStringsLinked); extdecl;
begin
  {$define handleExceptionID := 36206}
  handleExceptionBegin
  AObj.AddTextView(aTextView, AnAfter);
  handleExceptionEnd
end;

// procedure
procedure TSynTextViewsManager_RemoveSynTextView(AObj: TSynTextViewsManager; aTextView: TSynEditStringsLinked; aDestroy: LongBool); extdecl;
begin
  {$define handleExceptionID := 36207}
  handleExceptionBegin
  AObj.RemoveSynTextView(aTextView, aDestroy);
  handleExceptionEnd
end;

// property
function TSynTextViewsManager_SynTextView(AObj: TSynTextViewsManager; Index: integer): TSynEditStringsLinked; extdecl;
begin
  {$define handleExceptionID := 36208}
  handleExceptionBegin
  Result := AObj.SynTextView[Index];
  handleExceptionEnd
end;

// property
function TSynTextViewsManager_SynTextViewByClass(AObj: TSynTextViewsManager; Index: TSynEditStringsLinkedClass): TSynEditStringsLinked; extdecl;
begin
  {$define handleExceptionID := 36209}
  handleExceptionBegin
  Result := AObj.SynTextViewByClass[Index];
  handleExceptionEnd
end;

exports
  TSynTextViewsManager_Create,
  TSynTextViewsManager_IndexOf,
  TSynTextViewsManager_Count,
  TSynTextViewsManager_ReconnectViews,
  TSynTextViewsManager_AddTextViewWithSynEditStringsLinkedBool,
  TSynTextViewsManager_AddTextViewWithSynEditStringsLinkedInt,
  TSynTextViewsManager_AddTextViewWithSynEditStringsLinkedX2,
  TSynTextViewsManager_RemoveSynTextView,
  TSynTextViewsManager_SynTextView,
  TSynTextViewsManager_SynTextViewByClass;