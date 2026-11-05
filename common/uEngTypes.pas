//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uEngTypes;

{$mode objfpc}{$H+}

interface

uses Classes;


type

  // 事件回调类型
  // 普通事件: LCL, CEF, Webview 事件
  // 消息事件: 特殊消息
  // 异常事件: 异常消息
  // UI线程回调: UI线程同步, UI线程异步
  // 窗口创建事件: FormCreate
  // 创建参数事件: CreateParams
  EventCallbackType = (EctLCL, EctCEF, EctWV,
                    EctLCLRemove, EctCEFRemove, EctWVRemove,
                    EctMessage,
                    EctExceptionHandler,
                    EctUIThreadSync, EctUIThreadAsync,
                    EctFormCreate, EctCreateParams);


implementation

end.
