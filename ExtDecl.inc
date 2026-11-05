//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

{$MACRO ON}
{$IFDEF Windows}
  {$DEFINE extdecl := stdcall}
{$ELSE}
  {$DEFINE extdecl := cdecl}
{$ENDIF}

// 枚举都按4字节对齐
{$Z4+}

// 开启异步处理
{$define UsehandleException}

// 异常宏定义
{$ifdef UsehandleException}
  {$define handleExceptionID := 0}
  {$define handleExceptionBegin :=try}
  {$define handleExceptionEnd :=
     except
       on E: Exception do
         CallException(handleExceptionID, E);
     end;
  }
{$else}
  {$define handleExceptionID :=}
  {$define handleExceptionBegin :=}
  {$define handleExceptionEnd :=}
{$endif}

(*
   EventMethodName 实际的方法名称
   EventName 组件的方法名称
   EventMethod 方法
*)

// 宏事件方法定义 LCL
{$DEFINE LCLEventMethodCode :=
  try
    if AEventData = nil then
    begin
      // 这里移除掉对象
      TLCLEvent.Remove(TMethod(AObj.EventName));
      AObj.EventName := nil;
      Exit;
    end;
    if TLCLEvent.CheckAndUpdate(TMethod(AObj.EventName), AEventData) then
      Exit;
    // 创建一个事件对象
    AObj.EventName := TLCLEvent.Create(AEventData).EventMethodName;
  except
     on E: Exception do
       CallException(E);
  end;
}

// 宏事件方法定义 只写 LCL
{$DEFINE LCLEventOnlyWriteMethodCode :=
  try
    AObj.EventName := TLCLEvent.Create(AEventData).EventMethodName;
  except
     on E: Exception do
       CallException(E);
  end;
}

// 宏事件方法定义 CEF of object
{$DEFINE CEFEventMethodCode :=
  try
    if AEventData = nil then
    begin
      TCEFEvent.Remove(TMethod(AObj.EventName));
      AObj.EventName := nil;
      Exit;
    end;
    if TCEFEvent.CheckAndUpdate(TMethod(AObj.EventName), AEventData) then
      Exit;
    AObj.EventName := TCEFEvent.Create(AEventData).EventMethodName;
  except
     on E: Exception do
       CallException(E);
  end;
}
{$DEFINE CEFEventMethodCodeNotObject :=
  try
    if AEventData = nil then
    begin
      EventMethodPtr := nil;
      AObj.EventName := nil;
      Exit;
    end;
    EventMethodPtr := AEventData;
    AObj.EventName := EventMethodName;
  except
     on E: Exception do
       CallException(E);
  end;
}


// 宏事件方法定义 Webview(Webview2, Webkit2)
{$DEFINE WVEventMethodCode :=
  try
    if AEventData = nil then
    begin
      TWVEvent.Remove(TMethod(AObj.EventName));
      AObj.EventName := nil;
      Exit;
    end;
    if TWVEvent.CheckAndUpdate(TMethod(AObj.EventName), AEventData) then
      Exit;
    AObj.EventName := TWVEvent.Create(AEventData).EventMethodName;
  except
     on E: Exception do
       CallException(E);
  end;
}
{$DEFINE WVEventMethodCodeNotObject :=
  try
    if AEventData = nil then
    begin
      EventMethodPtr := nil;
      AObj.EventName := nil;
      Exit;
    end;
    EventMethodPtr := AEventData;
    AObj.EventName := EventMethodName;
  except
     on E: Exception do
       CallException(E);
  end;
}
