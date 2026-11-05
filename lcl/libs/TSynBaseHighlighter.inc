// constructor
function TSynBaseHighlighter_Create(AOwner: TComponent): TSynBaseHighlighter; extdecl;
begin
  {$define handleExceptionID := 45600}
  handleExceptionBegin
  Result := TSynBaseHighlighter.Create(AOwner);
  handleExceptionEnd
end;

// event
procedure TSynBaseHighlighter_OnGetInstanceLanguageName(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRStrEvent}
  {$DEFINE EventName := OnGetInstanceLanguageName}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetAttribCount(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRIntEvent}
  {$DEFINE EventName := OnGetAttribCount}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetAttribute(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntRHAttrEvent}
  {$DEFINE EventName := OnGetAttribute}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetDefaultAttribute(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntRHAttrEvent}
  {$DEFINE EventName := OnGetDefaultAttribute}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetDefaultFilter(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRStrEvent}
  {$DEFINE EventName := OnGetDefaultFilter}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetIdentChars(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRIdeCharEvent}
  {$DEFINE EventName := OnGetIdentChars}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnSetWordBreakChars(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIdeCharEvent}
  {$DEFINE EventName := OnSetWordBreakChars}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetSampleSource(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRStrEvent}
  {$DEFINE EventName := OnGetSampleSource}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnIsFilterStored(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRBoolEvent}
  {$DEFINE EventName := OnIsFilterStored}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnSetDefaultFilter(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIStrEvent}
  {$DEFINE EventName := OnSetDefaultFilter}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnSetSampleSource(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIStrEvent}
  {$DEFINE EventName := OnSetSampleSource}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetRangeIdentifier(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRPtrEvent}
  {$DEFINE EventName := OnGetRangeIdentifier}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnCreateRangeList(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIEsbRHrlCharEvent}
  {$DEFINE EventName := OnCreateRangeList}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnAfterAttachedToRangeList(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIHrlCharEvent}
  {$DEFINE EventName := OnAfterAttachedToRangeList}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnBeforeDetachedFromRangeList(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIHrlCharEvent}
  {$DEFINE EventName := OnBeforeDetachedFromRangeList}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnUpdateRangeInfoAtLine(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntRBoolEvent}
  {$DEFINE EventName := OnUpdateRangeInfoAtLine}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnDoCurrentLinesChanged(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterEvent}
  {$DEFINE EventName := OnDoCurrentLinesChanged}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetDrawDivider(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntRDdcsEvent}
  {$DEFINE EventName := OnGetDrawDivider}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetDividerDrawConfig(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntRDdcEvent}
  {$DEFINE EventName := OnGetDividerDrawConfig}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetDividerDrawConfigCount(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRIntEvent}
  {$DEFINE EventName := OnGetDividerDrawConfigCount}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnPerformScan(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntBoolRIntEvent}
  {$DEFINE EventName := OnPerformScan}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetEol(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRBoolEvent}
  {$DEFINE EventName := OnGetEol}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetRange(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRPtrEvent}
  {$DEFINE EventName := OnGetRange}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetToken(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRStrEvent}
  {$DEFINE EventName := OnGetToken}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetTokenEx(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterOStrIntEvent}
  {$DEFINE EventName := OnGetTokenEx}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetEndOfLineAttribute(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRHAttrEvent}
  {$DEFINE EventName := OnGetEndOfLineAttribute}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetTokenAttribute(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRHAttrEvent}
  {$DEFINE EventName := OnGetTokenAttribute}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetTokenKind(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRIntEvent}
  {$DEFINE EventName := OnGetTokenKind}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetTokenPos(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRIntEvent}
  {$DEFINE EventName := OnGetTokenPos}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnGetTokenLen(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterRIntEvent}
  {$DEFINE EventName := OnGetTokenLen}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnIsKeyword(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIStrRBoolEvent}
  {$DEFINE EventName := OnIsKeyword}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnNext(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterEvent}
  {$DEFINE EventName := OnNext}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnStartAtLineIndex(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntEvent}
  {$DEFINE EventName := OnStartAtLineIndex}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnSetRange(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIPtrEvent}
  {$DEFINE EventName := OnSetRange}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnResetRange(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterEvent}
  {$DEFINE EventName := OnResetRange}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnSetLine(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIStrIntEvent}
  {$DEFINE EventName := OnSetLine}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnUseUserSettings(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIIntRBoolEvent}
  {$DEFINE EventName := OnUseUserSettings}
  LCLEventMethodCode
end;

// event
procedure TSynBaseHighlighter_OnEnumUserSettings(AObj: TSynBaseHighlighter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBaseHighlighterIStrsEvent}
  {$DEFINE EventName := OnEnumUserSettings}
  LCLEventMethodCode
end;

function TSynBaseHighlighter_TClass(): TClass; extdecl;
begin
  Result := TSynBaseHighlighter;
end;

exports
  TSynBaseHighlighter_Create,
  TSynBaseHighlighter_OnGetInstanceLanguageName,
  TSynBaseHighlighter_OnGetAttribCount,
  TSynBaseHighlighter_OnGetAttribute,
  TSynBaseHighlighter_OnGetDefaultAttribute,
  TSynBaseHighlighter_OnGetDefaultFilter,
  TSynBaseHighlighter_OnGetIdentChars,
  TSynBaseHighlighter_OnSetWordBreakChars,
  TSynBaseHighlighter_OnGetSampleSource,
  TSynBaseHighlighter_OnIsFilterStored,
  TSynBaseHighlighter_OnSetDefaultFilter,
  TSynBaseHighlighter_OnSetSampleSource,
  TSynBaseHighlighter_OnGetRangeIdentifier,
  TSynBaseHighlighter_OnCreateRangeList,
  TSynBaseHighlighter_OnAfterAttachedToRangeList,
  TSynBaseHighlighter_OnBeforeDetachedFromRangeList,
  TSynBaseHighlighter_OnUpdateRangeInfoAtLine,
  TSynBaseHighlighter_OnDoCurrentLinesChanged,
  TSynBaseHighlighter_OnGetDrawDivider,
  TSynBaseHighlighter_OnGetDividerDrawConfig,
  TSynBaseHighlighter_OnGetDividerDrawConfigCount,
  TSynBaseHighlighter_OnPerformScan,
  TSynBaseHighlighter_OnGetEol,
  TSynBaseHighlighter_OnGetRange,
  TSynBaseHighlighter_OnGetToken,
  TSynBaseHighlighter_OnGetTokenEx,
  TSynBaseHighlighter_OnGetEndOfLineAttribute,
  TSynBaseHighlighter_OnGetTokenAttribute,
  TSynBaseHighlighter_OnGetTokenKind,
  TSynBaseHighlighter_OnGetTokenPos,
  TSynBaseHighlighter_OnGetTokenLen,
  TSynBaseHighlighter_OnIsKeyword,
  TSynBaseHighlighter_OnNext,
  TSynBaseHighlighter_OnStartAtLineIndex,
  TSynBaseHighlighter_OnSetRange,
  TSynBaseHighlighter_OnResetRange,
  TSynBaseHighlighter_OnSetLine,
  TSynBaseHighlighter_OnUseUserSettings,
  TSynBaseHighlighter_OnEnumUserSettings,
  TSynBaseHighlighter_TClass;