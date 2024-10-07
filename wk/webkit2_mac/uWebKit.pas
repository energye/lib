{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

{$macro on}

{$define instancetype := id}

{$ifndef LOADED_AVAILABILITY_MACROS}
{$define LOADED_AVAILABILITY_MACROS}

{$endif}

unit uWebKit;

interface

{$linkframework WebKit}

uses
  Forms,
  DefinedClassesWebKit, CocoaAll, CGBase, CGGeometry, MacTypes, CocoaUtils;


{$define INTERFACE}
{$define CGFLOAT_DEFINED}
{$define NSINTEGER_DEFINED}

type
  OpaqueRecord = record end;
  OpaqueCBlock = pointer;
  OpaqueType = ^SInt32;
  objc_protocol = protocol;
  idPtr = ^id;
  SELPtr = ^SEL;
  va_list_rec = OpaqueRecord;
  va_list = ^va_list_rec;

{$define TYPES}
{$define WK_API_ENABLED}
{$define PROTOCOLS}
{$define CLASSES}

{$include WKTypes.inc}

{$undef TYPES}
{$undef WK_API_ENABLED}
{$undef PROTOCOLS}
{$undef CLASSES}


implementation

// WKNavigationDelegateProtocol
procedure WKNavigationDelegateProtocol.webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);// message 'webView:didStartProvisionalNavigation:';
begin

end;

procedure WKNavigationDelegateProtocol.webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation); //message 'webView:didReceiveServerRedirectForProvisionalNavigation:';
begin

end;

procedure WKNavigationDelegateProtocol.webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError); //message 'webView:didFailProvisionalNavigation:withError:';
begin

end;

procedure WKNavigationDelegateProtocol.webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation);// message 'webView:didCommitNavigation:';
begin

end;

procedure WKNavigationDelegateProtocol.webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation); //message 'webView:didFinishNavigation:';
begin

end;

procedure WKNavigationDelegateProtocol.webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError);// message 'webView:didFailNavigation:withError:';
begin

end;

function TWKUIDelegate.webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin

end;

end.
