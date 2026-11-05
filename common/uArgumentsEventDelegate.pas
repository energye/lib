unit uArgumentsEventDelegate;

// API 入参数是方法类型，在此单元定义方法事件参数代理类

{$mode objfpc}{$H+}
{$Z4+}

interface

uses Types, Classes;

type

  // TNotifyEvent
  TNotifyEventDelegate = class
  protected
    FCallback: TNotifyEvent;
  public
    property OnNotify: TNotifyEvent read FCallback write FCallback;
  end;

implementation


end.
