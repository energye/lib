{ Parsed from WebKit.framework WKScriptMessageHandler.h }


{$ifdef TYPES}
type
  WKScriptMessageHandlerProtocolPtr = ^WKScriptMessageHandlerProtocol;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef PROTOCOLS}

type
  WKScriptMessageHandlerProtocol = objcclass(NSObject)//objcprotocol external name 'WKScriptMessageHandler' (NSObjectProtocol)
  public
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage); message 'userContentController:didReceiveScriptMessage:';
  end;
{$endif}

{$endif}
