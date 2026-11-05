
procedure Test_TTabStopListToPas(var AObj: TTabStopListPtr); extdecl;
var
  i: Integer;
  TempStopList: TTabStopList;
begin
  WriteLn('pas= 1 ', AObj.Count);
  TempStopList := TTabStopListToPas(AObj);
  WriteLn('pas= 2 ', TempStopList.Count);
  for i := 0 to Length(TempStopList.Tabs) - 1 do
  begin
    WriteLn('pas= for: ', FloatToStr(TempStopList.Tabs[i].Offset), ' ',  TempStopList.Tabs[i].Align);
  end;
end;

// procedure
procedure Test_TTabStopListToGo(var Result: TTabStopListPtr); extdecl;
var
  i: Integer;
  TempStopList: TTabStopList;
  TempResult: TTabStopListPtr;
begin
  TempStopList.Count := 100;
  SetLength(TempStopList.Tabs, TempStopList.Count);
  for i := 0 to TempStopList.Count - 1 do
  begin
    TempStopList.Tabs[i].Align := TTabAlignment(1);
    TempStopList.Tabs[i].Offset := 100.336 * (i + 10);
  end;
  WriteLn('pas= Count: ', TempStopList.Count);
  TempResult := TTabStopListToGo(TempStopList);
  Result := TempResult;
  WriteLn('pas= Count: ', TempStopList.Count);
  WriteLn('pas= SizeOf: ', IntToStr(SizeOf(TTabStopPtr)))
end;

procedure Test_TPrintParamsToPas(var AObj: TPrintParamsPtr; var AObj1: TPrintParamsPtr); extdecl;
var
  TempPrintParams: TPrintParams;
begin
  TempPrintParams := TPrintParamsToPas(AObj);
  WriteLn('pas= JobTitle: ', TempPrintParams.JobTitle);
  WriteLn('pas= SelLength: ', TempPrintParams.SelLength);
  WriteLn('pas= SelStart: ', TempPrintParams.SelStart);
  WriteLn('pas= Margins.Left: ', FloatToStr(TempPrintParams.Margins.Left));
  WriteLn('pas= Margins.Top: ', FloatToStr(TempPrintParams.Margins.Top));
  WriteLn('pas= Margins.Right: ', FloatToStr(TempPrintParams.Margins.Right));
  WriteLn('pas= Margins.Bottom: ', FloatToStr(TempPrintParams.Margins.Bottom));
  TempPrintParams := TPrintParamsToPas(AObj1);
  WriteLn('pas===================================');
  WriteLn('pas= JobTitle: ', TempPrintParams.JobTitle);
  WriteLn('pas= SelLength: ', TempPrintParams.SelLength);
  WriteLn('pas= SelStart: ', TempPrintParams.SelStart);
  WriteLn('pas= Margins.Left: ', FloatToStr(TempPrintParams.Margins.Left));
  WriteLn('pas= Margins.Top: ', FloatToStr(TempPrintParams.Margins.Top));
  WriteLn('pas= Margins.Right: ', FloatToStr(TempPrintParams.Margins.Right));
  WriteLn('pas= Margins.Bottom: ', FloatToStr(TempPrintParams.Margins.Bottom));
end;

procedure Test_TCefPdfPrintSettings(var AObj: TCefPdfPrintSettingsPtr; var Result: TCefPdfPrintSettingsPtr); extdecl;
var
  Temp: TCefPdfPrintSettings;
begin
  WriteLn('Pas=Test_TCefPdfPrintSettings SizeOf: ', SizeOf(TCefPdfPrintSettingsPtr));
  Temp := TCefPdfPrintSettingsToPas(AObj);
  WriteLn('Pas=landscape: ', Temp.landscape);
  WriteLn('Pas=print_background: ', Temp.print_background);
  WriteLn('Pas=scale: ', Temp.scale);
  WriteLn('Pas=paper_width: ', Temp.paper_width);
  WriteLn('Pas=paper_height: ', Temp.paper_height);
  WriteLn('Pas=prefer_css_page_size: ', Temp.prefer_css_page_size);
  WriteLn('Pas=margin_type: ', Temp.margin_type);
  WriteLn('Pas=margin_top: ', Temp.margin_top);
  WriteLn('Pas=margin_right: ', Temp.margin_right);
  WriteLn('Pas=margin_bottom: ', Temp.margin_bottom);
  WriteLn('Pas=margin_left: ', Temp.margin_left);
  WriteLn('Pas=page_ranges: ', CefString(@Temp.page_ranges), ' - ', PCharToUStr(AObj.page_ranges));
  WriteLn('Pas=display_header_footer: ', Temp.display_header_footer);
  WriteLn('Pas=header_template: ', CefString(@Temp.header_template), ' - ', PCharToUStr(AObj.header_template));
  WriteLn('Pas=footer_template: ', CefString(@Temp.footer_template), ' - ', PCharToUStr(AObj.footer_template));
  WriteLn('Pas=generate_tagged_pdf: ', Temp.generate_tagged_pdf);
  WriteLn('Pas=generate_document_outline: ', Temp.generate_document_outline);

  Result := TCefPdfPrintSettingsToGo(Temp);

end;


procedure Test_TestClassArray(ACount: NativeUInt; var AResult: TTestClsArray); extdecl;
var
  i : NativeUInt;
  TempCls: TTestClsArray = nil;
begin
  WriteLn('pas=Test_TestClassArray ', ACount);
  if ACount > 0 then
  begin
     SetLength(TempCls, ACount);
     i := 0;
     while (i < ACount) do
     begin
       TempCls[i] := TTestCls.Create(i);
       WriteLn('pas=Test_TestClassArray ', TempCls[i].Test());
       inc(i);
     end;
     AResult := TempCls;
  end;
end;

procedure Test_TestClass(AObj: TTestCls); extdecl;
begin
  WriteLn('pas=Test_TestClass ', AObj.Test());
end;


procedure Test_TCefRectDynArray(ACount: NativeUInt; const AData: TCefRectDynArray); extdecl;
var
  i : NativeUInt;
  TempCls: TCefRect;
begin
  WriteLn('pas=Test_TCefRectDynArray ', ACount);
  if ACount > 0 then
  begin
     i := 0;
     while (i < ACount) do
     begin
       TempCls := AData[i];
       WriteLn('pas=Test_TCefRectDynArray width: ', TempCls.width, ' height: ', TempCls.height, ' x: ',  TempCls.x, ' y: ',  TempCls.y);
       inc(i);
     end;
  end;
end;


// event

procedure TestSetEventCallback(APtr: Pointer); extdecl;
begin
  GCEFEventCallbackPtr := TCEFEventCallbackPtr(APtr);
end;

function TestTTestCls_Create(i: Integer): TTestCls; extdecl;
begin
  Result := TTestCls.Create(i);
end;

procedure Test_TTestCls_BrushPattern(AObj: TTestCls; var Result: TBrushPatternWrap);
begin
  Result := TBrushPatternWrap.Create(AObj.BrushPattern);
end;

procedure Test_TTestCls_SetBrushPattern(AValue: PBrushPattern);
var
  idx: integer;
begin
  idx := 0;
  WriteLn('pas=Test_TTestCls_SetBrushPattern');
  for idx := 0 to 32 - 1 do
  begin
    WriteLn('pas=Test_TTestCls_SetBrushPattern ', IntToStr(AValue^[idx]));
  end;
end;

function TTestEvent_Create(): TTestEvent; extdecl;
begin
  Result := TTestEvent.Create();
end;

function TTestEvent_CallTestEvent(AObj: TTestEvent; const AParam1: Integer; AParam2: boolean): Integer; extdecl;
begin
  Result := AObj.TestEvent(AParam1, AParam2);
end;

procedure TTestEvent_OnTestEvent(AObj: TTestEvent; AEventData: Pointer); extdecl;
begin
  //AObj.OnTestEvent := TEvent.Create(AEventData).TTestEvent_TTestEvent;
end;

procedure TTestEvent_OnTestArrayEvent(AObj: TTestEvent; AEventData: Pointer); extdecl;
begin
  AObj.OnTestArrayEvent := TEvent.Create(AEventData).TTestEvent_TTestArrayEvent;
end;

procedure TTestEvent_TTestArrayEvent(AObj: TTestEvent); extdecl;
begin
  AObj.CallOnTTestArrayEvent();
end;

procedure TTestEvent_OnTCefBrowserSettings(AObj: TTestEvent; AEventData: Pointer); extdecl;
begin
  AObj.OnTestTCefBrowserSettings := TEvent.Create(AEventData).TTestEvent_TCefBrowserSettings;
end;

procedure TTestEvent_CallOnTestTCefBrowserSettings(AObj: TTestEvent); extdecl;
begin
  AObj.CallOnTestTCefBrowserSettings();
end;

procedure TTestEvent_Free(AObj: TTestEvent); extdecl;
begin
  AObj.Free;
end;

procedure Test_PPSingle(var AValue: PPSingle); extdecl;
begin
  WriteLn('pas=Test_PPSingle 1 ');
  WriteLn('pas=Test_PPSingle 2 ', FloatToStr(AValue^^));
end;

procedure Test_PChar(AVal: TStringWrap); extdecl;
var
  TempStr: string;
  Idx: integer;
begin
   WriteLn('pas=Test_PChar');
   Idx := 0;
   TempStr := '';
   while (Idx < 100000) do
   begin
     TempStr := TempStr + '返回值Result ['+ IntToStr(Idx + 1) + ']';
     inc(Idx);
   end;
   AVal.Value := TempStr;
   WriteLn('pas=Test_PChar Length: ', AVal.Len);
end;

procedure Test_TObjectFree(AObj: TObject); extdecl;
begin
  AObj.Free;
end;

procedure Test_TTestRecordClass(var AObj: TTestRecordClass); extdecl;
begin
  WriteLn('pas=Test_TTestRecordClass SizeOF: ', IntToStr(SizeOf(TTestRecordClass)));
  WriteLn('pas= ', string(AObj.FStr));
  WriteLn('pas= ', AObj.FTestClass.TestEvent(100, True));
  WriteLn('pas= ', AObj.FInt);
  WriteLn('pas= ', AObj.FTestClass2.Test());
end;

procedure Test_VarBool(var AValue: LongBool); extdecl;
var
  aBool: Boolean;
begin
  aBool := AValue;
  WriteLn('pas=Test_VarBool: ', BoolToStr(AValue, true), ' ', BoolToStr(aBool, true));
  AValue := False;
end;

procedure Test_VarInteger(var AValue: Integer); extdecl;
var
  aval: Integer;
begin
  aval := AValue;
  WriteLn('pas=Test_VarBool: ', aval);
  AValue := 15689;
end;

procedure Test_VarString(var AValue: PChar); extdecl;
var
  aStr: string;
begin
  //WriteLn('pas=Test_VarString');
  aStr := AValue;
  //WriteLn('pas=Test_VarString: ', aStr);
  AValue := PChar('ReturnValue');
end;

procedure Test_VarRect(var ARect: TRect); extdecl;
var
  OutRect: TRect;
begin
  {$define handleExceptionID := 528}
  handleExceptionBegin
  OutRect := ARect;
  OutRect.Top:=10;
  OutRect.Left:=10;
  OutRect.Right:=10;
  OutRect.Bottom:=10;
  ARect := OutRect;
  handleExceptionEnd
end;

// const 测试数组, 在调用时需要传递数组首地址 Go: uintptr(unsafe.Pointer(&underlines[0]))
procedure Test_PrintlnCompositionArray(const underlines: TCefCompositionUnderlineDynArray; underlinesCount: Integer); extdecl;
var
  Tempunderlines: TCefCompositionUnderlineDynArray = nil;
  TempunderlinesIdx: Integer;
  aComp: TCefCompositionUnderline;
begin
  handleExceptionBegin
  WriteLn('pas=', Length(underlines));
  SetLength(Tempunderlines, underlinesCount);
  for TempunderlinesIdx := 0 to underlinesCount - 1 do
  begin
    Tempunderlines[TempunderlinesIdx] := underlines[TempunderlinesIdx]
  end;
  for TempunderlinesIdx := 0 to underlinesCount - 1 do
  begin
    aComp := Tempunderlines[TempunderlinesIdx];
    WriteLn('pas= range.from:', aComp.range.from, ' range.to: ',  aComp.range.to_, ' thick ', aComp.thick);
  end;
  handleExceptionEnd
end;


// var 测试数组, 在调用时需要传递数组地址 Go: uintptr(unsafe.Pointer(&underlinesPtr))
procedure Test_GetCompositionArray(AObj: TTestCls; var underlines: TCefCompositionUnderlineDynArray; var underlinesCount: Integer); extdecl;
var
  ar: TCefCompositionUnderlineDynArray;
begin
  handleExceptionBegin
  ar := AObj.TestCompositionUnderlineDynArray();
  underlines := ar;
  underlinesCount := Length(ar);
  handleExceptionEnd
end;

procedure Test_Bit8Int64Float64Float32(var Aint64: int64; var ADouble: Double; var ASingle: Single); extdecl;
begin
  handleExceptionBegin;
  WriteLn('pas= Aint64: ', IntToStr(Aint64), ' ADouble: ', FloatToStr(ADouble), ' ASingle: ', FloatToStr(ASingle));
  Aint64 := 99999;
  ADouble := 99999.9999;
  ASingle := 8888.88;
  handleExceptionEnd
end;

procedure Test_SetEventCallback(APtr: Pointer); extdecl;
begin
  GTestEventCallbackPtr := TTestEventCallbackPtr(APtr);
end;

procedure Test_SizeOfTCefBrowserSettings(APtr: Pointer); extdecl;
begin
  WriteLn('pas=SizeOf(TCefBrowserSettings): ', SizeOf(TCefBrowserSettings));
  WriteLn('pas=SizeOf(TCefBrowserSettingsPtr): ', SizeOf(TCefBrowserSettingsPtr));
end;

function Test_IsValid(APtr: Pointer): LongBool; extdecl;
begin
end;

exports
  Test_TTabStopListToPas,
  Test_TTabStopListToGo,
  Test_TPrintParamsToPas,
  Test_TCefPdfPrintSettings,
  Test_TestClassArray,
  Test_TestClass,
  Test_TCefRectDynArray,
  // event
  TestSetEventCallback,
  TestTTestCls_Create,
  TTestEvent_Create,
  Test_TTestCls_BrushPattern,
  Test_TTestCls_SetBrushPattern,
  TTestEvent_CallTestEvent,
  TTestEvent_OnTestEvent,
  TTestEvent_Free,
  Test_PPSingle,
  Test_PChar,
  Test_TObjectFree,
  Test_TTestRecordClass,
  //
  Test_VarBool,
  Test_VarInteger,
  Test_VarString,
  Test_VarRect,
  Test_PrintlnCompositionArray,
  Test_GetCompositionArray,
  //
  Test_Bit8Int64Float64Float32,
  // 事件回调
  Test_SetEventCallback,
  // 数组测试
  TTestEvent_OnTestArrayEvent,
  TTestEvent_TTestArrayEvent,
  Test_SizeOfTCefBrowserSettings,
  TTestEvent_OnTCefBrowserSettings,
  TTestEvent_CallOnTestTCefBrowserSettings;
