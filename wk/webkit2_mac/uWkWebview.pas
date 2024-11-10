unit uWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}


interface


uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils, CGGeometry, CGBase,
  uWebKit, uWkInterface, uWkWebviewEvents;

type

  TWkWebview = class(TComponent, IReceiveScriptMessageDelegateEvent, IWKNavigationDelegateEvent, IWKURLSchemeHandlerDelegateEvent, IWKUIDelegateEvent, IWKDownloadDelegateEvent)
  private
    FData: WkWebview;
  protected
    procedure FieldEmpty();
  private
    // WKScriptMessageHandlerProtocol
    FOnProcessMessage: TWkProcessMessageEvent;
    // WKNavigationDelegateProtocol
    FOnDecidePolicyForNavigationActionPreferences: TWKDecidePolicyForNavigationActionPreferences;
    FOnDecidePolicyForNavigationResponse: TWKDecidePolicyForNavigationResponse;
    FOnStartProvisionalNavigation: TWkStartProvisionalNavigation;
    FOnReceiveServerRedirectForProvisionalNavigation: TWkReceiveServerRedirectForProvisionalNavigation;
    FOnFailProvisionalNavigationWithError: TWkFailProvisionalNavigationWithError;
    FOnCommitNavigation: TWkCommitNavigation;
    FOnFinishNavigation: TWkFinishNavigation;
    FOnFailNavigationWithError: TWkFailNavigationWithError;
    FOnWebContentProcessDidTerminate: TWkWebContentProcessDidTerminate;
    FOnNavigationActionDidBecomeDownload: TWkNavigationActionDidBecomeDownload;
    FOnNavigationResponseDidBecomeDownload: TWkNavigationResponseDidBecomeDownload;
    // WKURLSchemeHandlerProtocol
    FOnStartURLSchemeTask: TWKStartURLSchemeTask;
    FOnStopURLSchemeTask: TWKStopURLSchemeTask;
    // WKUIDelegateProtocol
    FOnCreateWebView: TWKCreateWebView;
    FOnRunJavaScriptAlert: TWKRunJavaScriptAlert;
    FOnRunJavaScriptConfirmCompletion: TWKRunJavaScriptConfirmCompletion;
    FOnRunJavaScriptTextInputCompletion: TWKRunJavaScriptTextInputCompletion;
    FOnWebViewDidClose: TWKWebViewDidClose;
    // WKDownload
    FOnDownloadCancelCompletionHandler: TWKDownloadCancelCompletionHandler;
    FOnDownloadDecideDestinationUsingResponseSuggestedFilename: TWKDownloadDecideDestinationUsingResponseSuggestedFilename;
    FOnDownloadWillPerformHTTPRedirectionNewRequest: TWKDownloadWillPerformHTTPRedirectionNewRequest;
    FOnDownloadFinish: TWKDownloadFinish;
    FOnDownloadFailWithError: TWKDownloadFailWithError;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WkWebview;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Loads the contents of the specified HTML string and navigates to it.
    procedure LoadHTML(AHtml, ABaseURL: string);
    // Load the specified url
    procedure LoadURL(AURL: string);
    // The object that contains the configuration details for the web view.
    function Configuration: WKWebViewConfiguration;
    // Loads the web content that the specified URL request object references and navigates to that content.
    function LoadRequest (request: NSURLRequest): WKNavigation;
    // The object you use to manage navigation behavior for the web view.
    procedure SetNavigationDelegate(navigationDelegate: WKNavigationDelegate);
    // The object you use to integrate custom user interface elements, such as contextual menus or panels, into web view interactions.
    procedure SetUIDelegate(uiDelegate: WKUIDelegate);
    // Creates a web view and initializes it with the specified frame and configuration data.
    procedure InitWithFrameConfiguration (AFrame: TRect; AConfiguration: WKWebViewConfiguration);
    // The page title
    function Title: string;
    // The URL for the current webpage.
    function URL: NSURL;
    // A Boolean value that indicates whether the view is currently loading content.
    function IsLoading: LongBool;
    // This value ranges from 0.0 to 1.0 based on the total number of bytes received,
    // including the main document and all of its potential subresources.
    // After navigation loading completes, the estimatedProgress value remains at 1.0 until a new navigation starts,
    // at which point the estimatedProgress value resets to 0.0. The WKWebView class
    // is key-value observing (KVO) compliant for this property.
    function EstimatedProgress: double;
    // A Boolean value that indicates whether the web view loaded all resources on the page through securely encrypted connections.
    function HasOnlySecureContent: LongBool;
    // A Boolean value that indicates whether there is a valid back item in the back-forward list.
    function CanGoBack: LongBool;
    // A Boolean value that indicates whether there is a valid forward item in the back-forward list.
    function CanGoForward: LongBool;
    // Navigates to the back item in the back-forward list.
    function GoBack: WKNavigation;
    // Navigates to the forward item in the back-forward list.
    function GoForward: WKNavigation;
    // Reloads the current webpage.
    function Reload: WKNavigation;
    // Reloads the current webpage, and performs end-to-end revalidation of the content using cache-validating conditionals, if possible.
    function ReloadFromOrigin: WKNavigation;
    // Stops loading all resources on the current page.
    procedure StopLoading;
    // Evaluates the specified JavaScript string.
    procedure EvaluateJavaScript(javaScriptString: string);
    // Sets A Boolean value that indicates whether horizontal swipe gestures trigger backward and forward page navigation.
    procedure SetAllowsBackForwardNavigationGestures(newValue: LongBool);
    // Returns A Boolean value that indicates whether horizontal swipe gestures trigger backward and forward page navigation.
    function AllowsBackForwardNavigationGestures: LongBool;
    // Sets A Boolean value that indicates whether magnify gestures change the web view’s magnification.
    procedure SetAllowsMagnification(newValue: LongBool);
    // Returns A Boolean value that indicates whether magnify gestures change the web view’s magnification.
    function AllowsMagnification: LongBool;
    // Sets The factor by which the page content is currently scaled.
    procedure SetMagnification(newValue: double);
    // Returns The factor by which the page content is currently scaled.
    function Magnification: double;
    // Scales the page content and centers the result on the specified point.
    procedure SetMagnificationCenteredAtPoint (magnification_: double; point: TPoint);
    // Called when closing the window properly closes the webview
    procedure RemoveFromSuperview();
    // Must display conversion to interface type
    function AsReceiveScriptMessageDelegate(): IReceiveScriptMessageDelegateEvent;
    // Must display conversion to interface type
    function AsWKNavigationDelegate(): IWKNavigationDelegateEvent;
    // Must display conversion to interface type
    function AsWKURLSchemeHandlerDelegate(): IWKURLSchemeHandlerDelegateEvent;
    // Must display conversion to interface type
    function AsWKUIDelegate(): IWKUIDelegateEvent;
    // Must display conversion to interface type
    function AsWKDownloadDelegate(): IWKDownloadDelegateEvent;
  protected
    // WKScriptMessageHandlerProtocol
    procedure doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
    // WKNavigationDelegateProtocol
    procedure doDecidePolicyForNavigationActionPreferences(webView: WKWebView; navigationAction: WKNavigationAction; var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences);
    procedure doDecidePolicyForNavigationResponse(webView: WKWebView; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
    procedure doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    procedure doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
    procedure doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
    //procedure doReceiveAuthenticationChallenge(webView: WKWebView; challenge: NSURLAuthenticationChallenge; var disposition: NSURLSessionAuthChallengeDisposition; var credential: NSURLCredential);
    procedure doWebContentProcessDidTerminate (webView: WKWebView);
    //function doAuthenticationChallengeShouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge): Boolean;
    procedure doNavigationActionDidBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
    procedure doNavigationResponseDidBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
    // WKURLSchemeHandlerProtocol
    procedure doStartURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
    procedure doStopURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
    // WKUIDelegateProtocol
    function doCreateWebView (webView: WKWebView; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
    procedure doRunJavaScriptAlert (webView: WKWebView; message_: NSString; frame: WKFrameInfo);
    function doRunJavaScriptConfirmCompletion (webView: WKWebView; message_: NSString; frame: WKFrameInfo): Boolean;
    function doRunJavaScriptTextInputCompletion (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo): string;
    procedure doWebViewDidClose(webView: WKWebView);
    // WKDownload
    procedure doDownloadCancelCompletionHandler(download: WKDownload; aData: Pointer; aLength: Integer);
    procedure doDownloadDecideDestinationUsingResponseSuggestedFilename(download: WKDownload; response: NSURLResponse; suggestedFilename: NSString);
    procedure doDownloadWillPerformHTTPRedirectionNewRequest(download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest);
    //procedure doDownloadReceiveAuthenticationChallenge(download: WKDownload; challenge: NSURLAuthenticationChallenge);
    procedure doDownloadFinish (download: WKDownload);
    procedure doDownloadFailWithError(download: WKDownload; error: NSError; resumeData: NSData);
  published
    // WKScriptMessageHandlerProtocol
    // Tells the handler that a webpage sent a script message.
    property OnProcessMessage: TWkProcessMessageEvent read FOnProcessMessage write FOnProcessMessage;
    // WKNavigationDelegateProtocol
    // Asks the delegate for permission to navigate to new content based on the specified preferences and action information.
    // Use this method to allow or deny a navigation request that originated with the specified action.
    // The web view calls this method after the interaction occurs but before it attempts to load any content.
    property OnDecidePolicyForNavigationActionPreferences: TWKDecidePolicyForNavigationActionPreferences read FOnDecidePolicyForNavigationActionPreferences write FOnDecidePolicyForNavigationActionPreferences;
    // Asks the delegate for permission to navigate to new content after the response to the navigation request is known.
    // Use this method to allow or deny a navigation request after the web view receives the response to its original URL request.
    // The navigationResponse parameter contains the details of the response, including the type of data that the response contains.
    property OnDecidePolicyForNavigationResponse: TWKDecidePolicyForNavigationResponse read FOnDecidePolicyForNavigationResponse write FOnDecidePolicyForNavigationResponse;
    // Tells the delegate that navigation from the main frame has started.
    // The web view calls this method after it receives provisional approval to process a navigation request, but before it receives a response to that request.
    property OnStartProvisionalNavigation: TWkStartProvisionalNavigation read FOnStartProvisionalNavigation write FOnStartProvisionalNavigation;
    // Tells the delegate that the web view received a server redirect for a request.
    property OnReceiveServerRedirectForProvisionalNavigation: TWkReceiveServerRedirectForProvisionalNavigation read FOnReceiveServerRedirectForProvisionalNavigation write FOnReceiveServerRedirectForProvisionalNavigation;
    // Tells the delegate that an error occurred during the early navigation process.
    property OnFailProvisionalNavigationWithError: TWkFailProvisionalNavigationWithError read FOnFailProvisionalNavigationWithError write FOnFailProvisionalNavigationWithError;
    // Tells the delegate that the web view has started to receive content for the main frame.
    property OnCommitNavigation: TWkCommitNavigation read FOnCommitNavigation write FOnCommitNavigation;
    // Tells the delegate that navigation is complete.
    property OnFinishNavigation: TWkFinishNavigation read FOnFinishNavigation write FOnFinishNavigation;
    // Tells the delegate that an error occurred during navigation.
    property OnFailNavigationWithError: TWkFailNavigationWithError read FOnFailNavigationWithError write FOnFailNavigationWithError;
    // Asks the delegate to respond to an authentication challenge.
    //property OnReceiveAuthenticationChallenge: TWkReceiveAuthenticationChallenge read FOnReceiveAuthenticationChallenge write FOnReceiveAuthenticationChallenge;
    // Tells the delegate that the web view’s content process was terminated.
    property OnWebContentProcessDidTerminate: TWkWebContentProcessDidTerminate read FOnWebContentProcessDidTerminate write FOnWebContentProcessDidTerminate;
    // Asks the delegate whether to continue with a connection that uses a deprecated version of TLS.
    //property OnAuthenticationChallengeShouldAllowDeprecatedTLS: TWkAuthenticationChallengeShouldAllowDeprecatedTLS read FOnAuthenticationChallengeShouldAllowDeprecatedTLS write FOnAuthenticationChallengeShouldAllowDeprecatedTLS;
    // Tells the delegate that a navigation action became a download.
    property OnNavigationActionDidBecomeDownload: TWkNavigationActionDidBecomeDownload read FOnNavigationActionDidBecomeDownload write FOnNavigationActionDidBecomeDownload;
    // Tells the delegate that a navigation response became a download.
    property OnNavigationResponseDidBecomeDownload: TWkNavigationResponseDidBecomeDownload read FOnNavigationResponseDidBecomeDownload write FOnNavigationResponseDidBecomeDownload;
    // WKURLSchemeHandlerProtocol
    // Asks your handler to begin loading the data for the specified resource.
    property OnStartURLSchemeTask: TWKStartURLSchemeTask read FOnStartURLSchemeTask write FOnStartURLSchemeTask;
    // Asks your handler to stop loading the data for the specified resource.
    property OnStopURLSchemeTask: TWKStopURLSchemeTask read FOnStopURLSchemeTask write FOnStopURLSchemeTask;
    // WKUIDelegateProtocol
    // Creates a new web view.
    property OnCreateWebView: TWKCreateWebView read FOnCreateWebView write FOnCreateWebView;
    // Displays a JavaScript alert panel.
    property OnRunJavaScriptAlert: TWKRunJavaScriptAlert read FOnRunJavaScriptAlert write FOnRunJavaScriptAlert;
    // Displays a JavaScript confirm panel.
    property OnRunJavaScriptConfirmCompletion: TWKRunJavaScriptConfirmCompletion read FOnRunJavaScriptConfirmCompletion write FOnRunJavaScriptConfirmCompletion;
    // Displays a JavaScript text input panel.
    property OnRunJavaScriptTextInputCompletion: TWKRunJavaScriptTextInputCompletion read FOnRunJavaScriptTextInputCompletion write FOnRunJavaScriptTextInputCompletion;
    // Notifies your app that the DOM window closed successfully.
    property OnWebViewDidClose: TWKWebViewDidClose read FOnWebViewDidClose write FOnWebViewDidClose;
    // WKDownload
    property OnDownloadCancelCompletionHandler: TWKDownloadCancelCompletionHandler read FOnDownloadCancelCompletionHandler write FOnDownloadCancelCompletionHandler;
    // Asks the delegate to provide a file destination where the system should write the download data.
    property OnDownloadDecideDestinationUsingResponseSuggestedFilename: TWKDownloadDecideDestinationUsingResponseSuggestedFilename read FOnDownloadDecideDestinationUsingResponseSuggestedFilename write FOnDownloadDecideDestinationUsingResponseSuggestedFilename;
    // Asks the delegate to respond to the download’s redirect response.
    property OnDownloadWillPerformHTTPRedirectionNewRequest: TWKDownloadWillPerformHTTPRedirectionNewRequest read FOnDownloadWillPerformHTTPRedirectionNewRequest write FOnDownloadWillPerformHTTPRedirectionNewRequest;
    // Asks the delegate to respond to an authentication challenge.
    //property OnDownloadReceiveAuthenticationChallenge: TWKDownloadReceiveAuthenticationChallenge read FOnDownloadReceiveAuthenticationChallenge write FOnDownloadReceiveAuthenticationChallenge;
    // Tells the delegate that the download finished.
    property OnDownloadFinish: TWKDownloadFinish read FOnDownloadFinish write FOnDownloadFinish;
    // Tells the delegate that the download failed, with error information and data you can use to restart the download.
    property OnDownloadFailWithError: TWKDownloadFailWithError read FOnDownloadFailWithError write FOnDownloadFailWithError;
  end;


implementation

constructor TWkWebview.Create(AOwner: TComponent);
begin
  FieldEmpty();
  inherited Create(AOwner);
end;

destructor TWkWebview.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  FieldEmpty();
  inherited Destroy;
end;

procedure TWkWebview.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
end;

procedure TWkWebview.FieldEmpty();
begin
  FOnProcessMessage := nil;
  FOnStartProvisionalNavigation := nil;
  FOnReceiveServerRedirectForProvisionalNavigation := nil;
  FOnFailProvisionalNavigationWithError := nil;
  FOnCommitNavigation := nil;
  FOnFinishNavigation := nil;
  FOnFailNavigationWithError := nil;
  FOnStartURLSchemeTask := nil;
  FOnStopURLSchemeTask := nil;
  FOnCreateWebView := nil;
  FOnRunJavaScriptAlert := nil;
  FOnRunJavaScriptConfirmCompletion := nil;
  FOnRunJavaScriptTextInputCompletion := nil;
  FOnWebViewDidClose := nil;
end;

function TWkWebview.Data(): WkWebview;
begin
  Result := FData;
end;

// event do

procedure TWkWebview.doReceiveScriptMessage(userContentController: WKUserContentController; message_: WKScriptMessage);
var
  tempName, tempBody: string;
begin
  if Assigned(FOnProcessMessage) then
  begin
    tempName := NSStringToString(message_.name);
    tempBody := NSStringToString(NSString(message_.body));
    FOnProcessMessage(self, userContentController, tempName, tempBody);
  end;
end;

procedure TWkWebview.doDecidePolicyForNavigationActionPreferences(webView: WKWebView; navigationAction: WKNavigationAction;
  var actionPolicy: WKNavigationActionPolicy; var preferences: WKWebpagePreferences);
var
  TempPreferences: WKWebpagePreferences;
begin
  TempPreferences := nil;
  if Assigned(FOnDecidePolicyForNavigationActionPreferences) then
  begin
    FOnDecidePolicyForNavigationActionPreferences(self, navigationAction, actionPolicy, TempPreferences);
    if TempPreferences <> nil then
      preferences := TempPreferences;
  end;
end;

procedure TWkWebview.doDecidePolicyForNavigationResponse(webView: WKWebView; navigationResponse: WKNavigationResponse; var responsePolicy: WKNavigationResponsePolicy);
begin
  if Assigned(FOnDecidePolicyForNavigationResponse) then
  begin
    FOnDecidePolicyForNavigationResponse(self, navigationResponse, responsePolicy);
  end;
end;

procedure TWkWebview.doStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnStartProvisionalNavigation) then
  begin
    FOnStartProvisionalNavigation(self, navigation);
  end;
end;

procedure TWkWebview.doReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnReceiveServerRedirectForProvisionalNavigation) then
  begin
    FOnReceiveServerRedirectForProvisionalNavigation(self, navigation);
  end;
end;

procedure TWkWebview.doFailProvisionalNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FOnFailProvisionalNavigationWithError) then
  begin
    FOnFailProvisionalNavigationWithError(self, navigation, NSStringToString(error.localizedDescription));
  end;
end;

procedure TWkWebview.doCommitNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnCommitNavigation) then
  begin
    FOnCommitNavigation(self, navigation);
  end;
end;

procedure TWkWebview.doFinishNavigation (webView: WKWebView; navigation: WKNavigation);
begin
  if Assigned(FOnFinishNavigation) then
  begin
    FOnFinishNavigation(self, navigation);
  end;
end;

procedure TWkWebview.doFailNavigationWithError (webView: WKWebView; navigation: WKNavigation; error: NSError);
begin
  if Assigned(FOnFailNavigationWithError) then
  begin
    FOnFailNavigationWithError(self, navigation, NSStringToString(error.localizedDescription));
  end;
end;

//procedure TWkWebview.doReceiveAuthenticationChallenge(webView: WKWebView; challenge: NSURLAuthenticationChallenge;
//  var disposition: NSURLSessionAuthChallengeDisposition; var credential: NSURLCredential);
//begin
//
//end;

procedure TWkWebview.doWebContentProcessDidTerminate (webView: WKWebView);
begin
  if Assigned(FOnWebContentProcessDidTerminate) then
  begin
    FOnWebContentProcessDidTerminate(self);
  end;
end;

//function TWkWebview.doAuthenticationChallengeShouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge): Boolean;
//begin
//  Result := true;
//end;

procedure TWkWebview.doNavigationActionDidBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload);
begin
  if Assigned(FOnNavigationActionDidBecomeDownload) then
  begin
    FOnNavigationActionDidBecomeDownload(self, navigationAction, download);
  end;
end;

procedure TWkWebview.doNavigationResponseDidBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload);
begin
  if Assigned(FOnNavigationResponseDidBecomeDownload) then
  begin
    FOnNavigationResponseDidBecomeDownload(self, navigationResponse, download);
  end;
end;

procedure TWkWebview.doStartURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if Assigned(FOnStartURLSchemeTask) then
  begin
    FOnStartURLSchemeTask(self, urlSchemeTask);
  end;
end;

procedure TWkWebview.doStopURLSchemeTask(webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if Assigned(FOnStopURLSchemeTask) then
  begin
    FOnStopURLSchemeTask(self, urlSchemeTask);
  end;
end;

function TWkWebview.doCreateWebView (webView: WKWebView; configuration_: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView;
begin
  Result := nil;
  if Assigned(FOnCreateWebView) then
  begin
    Result := FOnCreateWebView(self, configuration_, navigationAction, windowFeatures);
  end;
end;

procedure TWkWebview.doRunJavaScriptAlert (webView: WKWebView; message_: NSString; frame: WKFrameInfo);
begin
  if Assigned(FOnRunJavaScriptAlert) then
  begin
    FOnRunJavaScriptAlert(self, NSStringToString(message_), frame);
  end;
end;

function TWkWebview.doRunJavaScriptConfirmCompletion (webView: WKWebView; message_: NSString; frame: WKFrameInfo): Boolean;
begin
  Result := False;
  if Assigned(FOnRunJavaScriptConfirmCompletion) then
  begin
    Result := FOnRunJavaScriptConfirmCompletion(self, NSStringToString(message_), frame);
  end;
end;

function TWkWebview.doRunJavaScriptTextInputCompletion (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo): string;
begin
  Result := '';
  if Assigned(FOnRunJavaScriptTextInputCompletion) then
  begin
    Result := FOnRunJavaScriptTextInputCompletion(self, NSStringToString(prompt), NSStringToString(defaultText), frame);
  end;
end;

procedure TWkWebview.doWebViewDidClose(webView: WKWebView);
begin
  if Assigned(FOnWebViewDidClose) then
  begin
    FOnWebViewDidClose(self);
  end;
end;


// WKDownload
procedure TWkWebview.doDownloadCancelCompletionHandler(download: WKDownload; aData: Pointer; aLength: Integer);
begin
  if Assigned(FOnDownloadCancelCompletionHandler) then
  begin
    FOnDownloadCancelCompletionHandler(self, download, aData, aLength);
  end;
end;

procedure TWkWebview.doDownloadDecideDestinationUsingResponseSuggestedFilename(download: WKDownload; response: NSURLResponse; suggestedFilename: NSString);
begin
  if Assigned(FOnDownloadDecideDestinationUsingResponseSuggestedFilename) then
  begin
    FOnDownloadDecideDestinationUsingResponseSuggestedFilename(self, download, response, NSStringToString(suggestedFilename));
  end;
end;

procedure TWkWebview.doDownloadWillPerformHTTPRedirectionNewRequest(download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest);
begin
  if Assigned(FOnDownloadWillPerformHTTPRedirectionNewRequest) then
  begin
    FOnDownloadWillPerformHTTPRedirectionNewRequest(self, download, response, request);
  end;
end;

//procedure TWkWebview.doDownloadReceiveAuthenticationChallenge(download: WKDownload; challenge: NSURLAuthenticationChallenge);
//begin
//
//end;

procedure TWkWebview.doDownloadFinish (download: WKDownload);
begin
  if Assigned(FOnDownloadFinish) then
  begin
    FOnDownloadFinish(self, download);
  end;
end;

procedure TWkWebview.doDownloadFailWithError(download: WKDownload; error: NSError; resumeData: NSData);
var
  TempError: string;
  TempData: Pointer;
  TempDataLength: Integer;
begin
  TempData := nil;
  if Assigned(FOnDownloadFailWithError) then
  begin
    TempError := NSStringToString(error.localizedDescription);
    TempData := resumeData.bytes;
    TempDataLength := Integer(resumeData.length);
    FOnDownloadFailWithError(self, download, TempError, TempData, TempDataLength);
  end;
end;


// 功能方法

procedure TWkWebview.LoadHTML(AHtml, ABaseURL: string);
var
  AutoPool: NSAutoreleasePool;
  baseURL: NSURL;
begin
  if Assigned(FData) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      if ABaseURL <> '' then
      begin
        baseURL := NSURL.URLWithString(NSStringUtf8(ABaseURL));
        FData.loadHTMLString_baseURL(NSStringUtf8(AHtml), baseURL);
      end
      else
        FData.loadHTMLString_baseURL(NSStringUtf8(AHtml), nil);
    finally
      AutoPool.Release;
    end;
  end;
end;

procedure TWkWebview.LoadURL(AURL: string);
var
  URLReq: NSURLRequest;
  AutoPool: NSAutoreleasePool;
begin
  if Assigned(FData) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      URLReq := NSURLRequest.requestWithURL(NSURL.URLWithString(NSStringUTF8(AURL)));
      FData.loadRequest(URLReq);
    finally
      AutoPool.Release;
    end;
  end;
end;


function TWkWebview.Configuration: WKWebViewConfiguration;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.configuration;
  end;
end;

function TWkWebview.LoadRequest(request: NSURLRequest): WKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.loadRequest(request);
  end;
end;

procedure TWkWebview.SetNavigationDelegate(navigationDelegate: WKNavigationDelegate);
begin
  if Assigned(FData) then
  begin
    FData.setNavigationDelegate(navigationDelegate);
  end;
end;

procedure TWkWebview.SetUIDelegate(uiDelegate: WKUIDelegate);
begin
  if Assigned(FData) then
  begin
    FData.setUIDelegate(uiDelegate);
  end;
end;

procedure TWkWebview.InitWithFrameConfiguration (AFrame: TRect; AConfiguration: WKWebViewConfiguration);
var
  TempFrame: CGRect;
begin
  if (FData = nil) and Assigned(AConfiguration) then
  begin
    TempFrame.origin.x := CGFloat(AFrame.Left);
    TempFrame.origin.y := CGFloat(AFrame.Top);
    TempFrame.size.Width := CGFloat(AFrame.Width);
    TempFrame.size.Height := CGFloat(AFrame.Height);

    FData := WKWebView.alloc.initWithFrame_configuration(TempFrame, AConfiguration);
  end;
end;

function TWkWebview.Title: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.title);
  end;
end;

function TWkWebview.URL: NSURL;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.URL;
  end;
end;

function TWkWebview.IsLoading: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isLoading);
  end;
end;

function TWkWebview.EstimatedProgress: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := FData.estimatedProgress;
  end;
end;

function TWkWebview.HasOnlySecureContent: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.hasOnlySecureContent);
  end;
end;

function TWkWebview.CanGoBack: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.canGoBack);
  end;
end;

function TWkWebview.CanGoForward: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.canGoForward);
  end;
end;

function TWkWebview.GoBack: WKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.goBack;
  end;
end;

function TWkWebview.GoForward: WKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.goForward;
  end;
end;

function TWkWebview.Reload: WKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.reload;
  end;
end;

function TWkWebview.ReloadFromOrigin: WKNavigation;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.reloadFromOrigin;
  end;
end;

procedure TWkWebview.StopLoading;
begin
  if Assigned(FData) then
  begin
    FData.stopLoading;
  end;
end;

procedure TWkWebview.EvaluateJavaScript(javaScriptString: string);
begin
  if Assigned(FData) then
  begin
    FData.evaluateJavaScript_completionHandler(NSStringUtf8(javaScriptString), nil);
  end;
end;

procedure TWkWebview.SetAllowsBackForwardNavigationGestures(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setAllowsBackForwardNavigationGestures(ObjCBOOL(newValue));
  end;
end;

function TWkWebview.AllowsBackForwardNavigationGestures: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.allowsBackForwardNavigationGestures);
  end;
end;

procedure TWkWebview.SetAllowsMagnification(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setAllowsMagnification(ObjCBOOL(newValue));
  end;
end;

function TWkWebview.AllowsMagnification: LongBool;
begin
  Result := false;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.allowsMagnification);
  end;
end;

procedure TWkWebview.SetMagnification(newValue: double);
begin
  if Assigned(FData) then
  begin
    FData.setMagnification(CGFloat(newValue));
  end;
end;

function TWkWebview.Magnification: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := double(FData.magnification);
  end;
end;

procedure TWkWebview.SetMagnificationCenteredAtPoint (magnification_: double; point: TPoint);
var
  TempPoint: CGPoint;
begin
  if Assigned(FData) then
  begin
    TempPoint.x := CGFloat(point.X);
    TempPoint.y := CGFloat(point.Y);
    FData.setMagnification_centeredAtPoint(CGFloat(magnification_), TempPoint);
  end;
end;

procedure TWkWebview.RemoveFromSuperview();
begin
  if Assigned(FData) then
  begin
    FData.removeFromSuperview;
  end;
end;

//procedure TWkWebview.RemoveAllSubviews();
//var
//  TempViews: NSArray;
//  Idx, TempCount: Integer;
//  TempView: WkWebview;
//begin
//  if Assigned(FData) then
//  begin
//    TempViews := FData.subviews;
//    if Assigned(TempViews) then
//    begin
//      TempCount := Integer(TempViews.count);
//      for Idx := 0 to TempCount - 1 do
//      begin
//        TempView := WkWebview(TempViews.objectAtIndex(NSUInteger(Idx)));
//        TempView.removeFromSuperview;
//      end;
//      TempViews.release;
//    end;
//  end;
//end;

function TWkWebview.AsReceiveScriptMessageDelegate(): IReceiveScriptMessageDelegateEvent;
begin
  Result := self as IReceiveScriptMessageDelegateEvent;
end;

function TWkWebview.AsWKNavigationDelegate(): IWKNavigationDelegateEvent;
begin
  Result := self as IWKNavigationDelegateEvent;
end;

function TWkWebview.AsWKURLSchemeHandlerDelegate(): IWKURLSchemeHandlerDelegateEvent;
begin
  Result := self as IWKURLSchemeHandlerDelegateEvent;
end;

function TWkWebview.AsWKUIDelegate(): IWKUIDelegateEvent;
begin
  Result := self as IWKUIDelegateEvent;
end;

function TWkWebview.AsWKDownloadDelegate(): IWKDownloadDelegateEvent;
begin
  Result := self as IWKDownloadDelegateEvent;
end;


end.
