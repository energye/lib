//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uCEF_CustomCallbacks;

{$mode objfpc}{$H+}

interface

uses
  Classes,
  uCEFTypes, uCEFInterfaces, uCEFMiscFunctions, uCEFCookieVisitor,
  uCEFSetCookieCallback, uCEFDeleteCookiesCallback,
  uCEFRunFileDialogCallback, uCEFDomVisitor, uCEFMenuModelDelegate,
  uCEFSchemeHandlerFactory, uCEFResourceHandler,
  uCEFv8ArrayBufferReleaseCallback, uCEFv8Handler, uCEFv8Accessor,
  uCEFv8Interceptor, uCEFAccessibilityHandler,
  uCEFTask,
  uCEF_CustomEvents;

type

  /// <summary>
  /// Interface to implement for visiting cookie values. The functions of this
  /// interface will always be called on the UI thread.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefCookieVisitor">Implements TCefCookieVisitor</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_cookie_capi.h">CEF source file: /include/capi/cef_cookie_capi.h (cef_cookie_visitor_t)</see></para>
  /// </remarks>
  TCookieVisitor = class(TCefCookieVisitorOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefCookieVisitor;
  protected
    FOnCookieVisit: TOnCookieVisit;
    function visit(const Name, Value, domain, path: ustring; secure, httponly, hasExpires: boolean; const creation, lastAccess, expires: TDateTime;
      Count, total: integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: boolean): boolean; override;
  published
    /// <summary>
    /// Method that will be called once for each cookie. |count| is the 0-based
    /// index for the current cookie. |total| is the total number of cookies. Set
    /// |deleteCookie| to true (1) to delete the cookie currently being visited.
    /// Return false (0) to stop visiting cookies. This function may never be
    /// called if no cookies are found.
    /// </summary>
    property OnCookieVisit: TOnCookieVisit read FOnCookieVisit write FOnCookieVisit;
  end;

  /// <summary>
  /// Interface to implement to be notified of asynchronous completion via
  /// ICefCookieManager.SetCookie.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefSetCookieCallback">Implements TCefSetCookieCallback</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_cookie_capi.h">CEF source file: /include/capi/cef_cookie_capi.h (cef_set_cookie_callback_t)</see></para>
  /// </remarks>
  TSetCookieCallback = class(TCefSetCookieCallbackOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefSetCookieCallback;
  protected
    FOnSetCookieComplete: TOnSetCookieComplete;
    procedure OnComplete(success: boolean); override;
  published
    /// <summary>
    /// Method that will be called upon completion. |success| will be true (1) if
    /// the cookie was set successfully.
    /// </summary>
    property OnSetCookieComplete: TOnSetCookieComplete read FOnSetCookieComplete write FOnSetCookieComplete;
  end;

  /// <summary>
  /// Interface to implement to be notified of asynchronous completion via
  /// ICefCookieManager.DeleteCookies.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefDeleteCookiesCallback">Implements TCefDeleteCookiesCallback</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_cookie_capi.h">CEF source file: /include/capi/cef_cookie_capi.h (cef_delete_cookies_callback_t)</see></para>
  /// </remarks>
  TDeleteCookiesCallback = class(TCefDeleteCookiesCallbackOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefDeleteCookiesCallback;
  protected
    FOnDeleteCookiesComplete: TOnDeleteCookiesComplete;
    procedure OnComplete(numDeleted: integer); override;
  published
    /// <summary>
    /// Method that will be called upon completion. |num_deleted| will be the
    /// number of cookies that were deleted.
    /// </summary>
    property OnDeleteCookiesComplete: TOnDeleteCookiesComplete read FOnDeleteCookiesComplete write FOnDeleteCookiesComplete;
  end;

  /// <summary>
  /// Callback interface for ICefBrowserHost.RunFileDialog. The functions of
  /// this interface will be called on the browser process UI thread.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefRunFileDialogCallback">Implements TCefRunFileDialogCallback</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_browser_capi.h">CEF source file: /include/capi/cef_browser_capi.h (cef_run_file_dialog_callback_t)</see></para>
  /// </remarks>
  TRunFileDialogCallback = class(TCefRunFileDialogCallbackOwn)
  public
    constructor Create;
    destructor Destroy; override;
    function AsInterface(): ICefRunFileDialogCallback;
  protected
    FOnRunFileDialogDismissed: TOnRunFileDialogDismissed;
    procedure OnFileDialogDismissed(const filePaths: TStrings); override;
  published
    /// <summary>
    /// Called asynchronously after the file dialog is dismissed. |file_paths|
    /// will be a single value or a list of values depending on the dialog mode.
    /// If the selection was cancelled |file_paths| will be NULL.
    /// </summary>
    property OnRunFileDialogDismissed: TOnRunFileDialogDismissed read FOnRunFileDialogDismissed write FOnRunFileDialogDismissed;
  end;

  /// <summary>
  /// Interface to implement for visiting the DOM. The functions of this interface
  /// will be called on the render process main thread.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefDomVisitor">Implements TCefDomVisitor</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_dom_capi.h">CEF source file: /include/capi/cef_dom_capi.h (cef_domvisitor_t)</see></para>
  /// </remarks>
  TDomVisitor = class(TCefDomVisitorOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefDomVisitor;
  protected
    FOnDomVisitor: TOnDomVisitor;
    procedure visit(const document: ICefDomDocument); override;
  published
    /// <summary>
    /// Method executed for visiting the DOM. The document object passed to this
    /// function represents a snapshot of the DOM at the time this function is
    /// executed. DOM objects are only valid for the scope of this function. Do
    /// not keep references to or attempt to access any DOM objects outside the
    /// scope of this function.
    /// </summary>
    property OnDomVisitor: TOnDomVisitor read FOnDomVisitor write FOnDomVisitor;
  end;


  /// <summary>
  /// Implement this interface to handle menu model events. The functions of this
  /// interface will be called on the browser process UI thread unless otherwise
  /// indicated.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefMenuModelDelegate">Implements TCefMenuModelDelegate</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_menu_model_delegate_capi.h">CEF source file: /include/capi/cef_menu_model_delegate_capi.h (cef_menu_model_delegate_t)</see></para>
  /// </remarks>
  TMenuModelDelegate = class(TCefMenuModelDelegateOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefMenuModelDelegate;
  protected
    FOnExecuteCommand: TOnExecuteCommand;
    FOnMouseOutsideMenu: TOnMouseOutsideMenu;
    FOnUnhandledOpenSubmenu: TOnUnhandledOpenSubmenu;
    FOnUnhandledCloseSubmenu: TOnUnhandledCloseSubmenu;
    FOnMenuWillShow: TOnMenuWillShow;
    FOnMenuClosed: TOnMenuClosed;
    FOnFormatLabel: TOnFormatLabel;

    procedure ExecuteCommand(const menuModel: ICefMenuModel; commandId: integer; eventFlags: TCefEventFlags); override;
    procedure MouseOutsideMenu(const menuModel: ICefMenuModel; const screenPoint: PCefPoint); override;
    procedure UnhandledOpenSubmenu(const menuModel: ICefMenuModel; isRTL: boolean); override;
    procedure UnhandledCloseSubmenu(const menuModel: ICefMenuModel; isRTL: boolean); override;
    procedure MenuWillShow(const menuModel: ICefMenuModel); override;
    procedure MenuClosed(const menuModel: ICefMenuModel); override;
    function FormatLabel(const menuModel: ICefMenuModel; var label_: ustring): boolean; override;
  published
    /// <summary>
    /// Perform the action associated with the specified |command_id| and optional
    /// |event_flags|.
    /// </summary>
    property OnExecuteCommand: TOnExecuteCommand read FOnExecuteCommand write FOnExecuteCommand;
    /// <summary>
    /// Called when the user moves the mouse outside the menu and over the owning
    /// window.
    /// </summary>
    property OnMouseOutsideMenu: TOnMouseOutsideMenu read FOnMouseOutsideMenu write FOnMouseOutsideMenu;
    /// <summary>
    /// Called on unhandled open submenu keyboard commands. |is_rtl| will be true
    /// (1) if the menu is displaying a right-to-left language.
    /// </summary>
    property OnUnhandledOpenSubmenu: TOnUnhandledOpenSubmenu read FOnUnhandledOpenSubmenu write FOnUnhandledOpenSubmenu;
    /// <summary>
    /// Called on unhandled close submenu keyboard commands. |is_rtl| will be true
    /// (1) if the menu is displaying a right-to-left language.
    /// </summary>
    property OnUnhandledCloseSubmenu: TOnUnhandledCloseSubmenu read FOnUnhandledCloseSubmenu write FOnUnhandledCloseSubmenu;
    /// <summary>
    /// The menu is about to show.
    /// </summary>
    property OnMenuWillShow: TOnMenuWillShow read FOnMenuWillShow write FOnMenuWillShow;
    /// <summary>
    /// The menu has closed.
    /// </summary>
    property OnMenuClosed: TOnMenuClosed read FOnMenuClosed write FOnMenuClosed;
    /// <summary>
    /// Optionally modify a menu item label. Return true (1) if |label| was
    /// modified.
    /// </summary>
    property OnFormatLabel: TOnFormatLabel read FOnFormatLabel write FOnFormatLabel;
  end;


  /// <summary>
  /// Class that creates ICefResourceHandler instances for handling scheme
  /// requests.
  /// </summary>
  /// <remarks>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_scheme_capi.h">CEF source file: /include/capi/cef_scheme_capi.h (cef_scheme_handler_factory_t)</see></para>
  /// </remarks>
  TSchemeHandlerFactory = class(TCefSchemeHandlerFactoryOwn)
  public
    /// <summary>
    /// Constructor of the scheme handler factory.
    /// </summary>
    /// <param name="AClass">Class of the custom resource handler used to handle custom scheme requests.</param>
    constructor Create(const AClass: TCefResourceHandlerClass); override;
    destructor Destroy; override;
    function AsInterface(): ICefSchemeHandlerFactory;
  protected
    FOnNew: TOnSchemeHandlerFactoryNew;
    function New(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler; override;
  published
    /// <summary>
    /// Return a new resource handler instance to handle the request or an NULL
    /// reference to allow default handling of the request. |browser| and |frame|
    /// will be the browser window and frame respectively that originated the
    /// request or NULL if the request did not originate from a browser window
    /// (for example, if the request came from ICefUrlRequest). The |request|
    /// object passed to this function cannot be modified.
    /// </summary>
    property OnNew: TOnSchemeHandlerFactoryNew read FOnNew write FOnNew;
  end;


  /// <summary>
  /// Interface used to implement a custom request handler interface. The
  /// functions of this interface will be called on the IO thread unless otherwise
  /// indicated.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefResourceHandler">Implements TCefResourceHandler</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_resource_handler_capi.h">CEF source file: /include/capi/cef_resource_handler_capi.h (cef_resource_handler_t)</see></para>
  /// </remarks>
  TResourceHandler = class(TCefResourceHandlerOwn)
  public
    constructor Create(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest); override;
    destructor Destroy; override;
    function AsInterface(): ICefResourceHandler;
  protected
    FOnOpen: TOnResourceHandlerOpen;
    FOnProcessRequest: TOnResourceHandlerProcessRequest;
    FOnGetResponseHeaders: TOnResourceHandlerGetResponseHeaders;
    FOnSkip: TOnResourceHandlerSkip;
    FOnRead: TOnResourceHandlerRead;
    FOnReadResponse: TOnResourceHandlerReadResponse;
    FOnCancel: TOnResourceHandlerCancel;

    function Open(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean; override;
    function ProcessRequest(const request: ICefRequest; const callback: ICefCallback): boolean; override; // deprecated
    procedure GetResponseHeaders(const response: ICefResponse; out responseLength: int64; out redirectUrl: ustring); override;
    function Skip(bytes_to_skip: int64; var bytes_skipped: int64; const callback: ICefResourceSkipCallback): boolean; override;
    function Read(const data_out: Pointer; bytes_to_read: integer; var bytes_read: integer; const callback: ICefResourceReadCallback): boolean; override;
    function ReadResponse(const dataOut: Pointer; bytesToRead: integer; var bytesRead: integer; const callback: ICefCallback): boolean; override; // deprecated
    procedure Cancel; override;
  published
    /// <summary>
    /// Open the response stream. To handle the request immediately set
    /// |handle_request| to true (1) and return true (1). To decide at a later
    /// time set |handle_request| to false (0), return true (1), and execute
    /// |callback| to continue or cancel the request. To cancel the request
    /// immediately set |handle_request| to true (1) and return false (0). This
    /// function will be called in sequence but not from a dedicated thread. For
    /// backwards compatibility set |handle_request| to false (0) and return false
    /// (0) and the ProcessRequest function will be called.
    /// </summary>
    property OnOpen: TOnResourceHandlerOpen read FOnOpen write FOnOpen;
    /// <summary>
    /// Begin processing the request. To handle the request return true (1) and
    /// call ICefCallback.cont() once the response header information is
    /// available (ICefCallback.cont() can also be called from inside this
    /// function if header information is available immediately). To cancel the
    /// request return false (0).
    /// </summary>
    /// <remarks>
    /// WARNING: This function is deprecated. Use Open instead.
    /// </remarks>
    property OnProcessRequest: TOnResourceHandlerProcessRequest read FOnProcessRequest write FOnProcessRequest;
    /// <summary>
    /// Retrieve response header information. If the response length is not known
    /// set |response_length| to -1 and read_response() will be called until it
    /// returns false (0). If the response length is known set |response_length|
    /// to a positive value and read_response() will be called until it returns
    /// false (0) or the specified number of bytes have been read. Use the
    /// |response| object to set the mime type, http status code and other
    /// optional header values. To redirect the request to a new URL set
    /// |redirectUrl| to the new URL. |redirectUrl| can be either a relative or
    /// fully qualified URL. It is also possible to set |response| to a redirect
    /// http status code and pass the new URL via a Location header. Likewise with
    /// |redirectUrl| it is valid to set a relative or fully qualified URL as the
    /// Location header value. If an error occured while setting up the request
    /// you can call set_error() on |response| to indicate the error condition.
    /// </summary>
    property OnGetResponseHeaders: TOnResourceHandlerGetResponseHeaders read FOnGetResponseHeaders write FOnGetResponseHeaders;
    /// <summary>
    /// Skip response data when requested by a Range header. Skip over and discard
    /// |bytes_to_skip| bytes of response data. If data is available immediately
    /// set |bytes_skipped| to the number of bytes skipped and return true (1). To
    /// read the data at a later time set |bytes_skipped| to 0, return true (1)
    /// and execute |callback| when the data is available. To indicate failure set
    /// |bytes_skipped| to < 0 (e.g. -2 for ERR_FAILED) and return false (0). This
    /// function will be called in sequence but not from a dedicated thread.
    /// </summary>
    property OnSkip: TOnResourceHandlerSkip read FOnSkip write FOnSkip;
    /// <summary>
    /// Read response data. If data is available immediately copy up to
    /// |bytes_to_read| bytes into |data_out|, set |bytes_read| to the number of
    /// bytes copied, and return true (1). To read the data at a later time keep a
    /// pointer to |data_out|, set |bytes_read| to 0, return true (1) and execute
    /// |callback| when the data is available (|data_out| will remain valid until
    /// the callback is executed). To indicate response completion set
    /// |bytes_read| to 0 and return false (0). To indicate failure set
    /// |bytes_read| to < 0 (e.g. -2 for ERR_FAILED) and return false (0). This
    /// function will be called in sequence but not from a dedicated thread. For
    /// backwards compatibility set |bytes_read| to -1 and return false (0) and
    /// the ReadResponse function will be called.
    /// </summary>
    property OnRead: TOnResourceHandlerRead read FOnRead write FOnRead;
    /// <summary>
    /// Read response data. If data is available immediately copy up to
    /// |bytes_to_read| bytes into |data_out|, set |bytes_read| to the number of
    /// bytes copied, and return true (1). To read the data at a later time set
    /// |bytes_read| to 0, return true (1) and call ICefCallback.cont() when
    /// the data is available. To indicate response completion return false (0).
    /// </summary>
    /// <remarks>
    /// WARNING: This function is deprecated. Use Skip and Read instead.
    /// </remarks>
    property OnReadResponse: TOnResourceHandlerReadResponse read FOnReadResponse write FOnReadResponse;
    /// <summary>
    /// Request processing has been canceled.
    /// </summary>
    property OnCancel: TOnResourceHandlerCancel read FOnCancel write FOnCancel;
  end;



  /// <summary>
  /// Callback interface that is passed to ICefV8value.CreateArrayBuffer.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefv8ArrayBufferReleaseCallback">Implements TCefv8ArrayBufferReleaseCallback</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8array_buffer_release_callback_t)</see></para>
  /// </remarks>
  TV8ArrayBufferReleaseCallback = class(TCefv8ArrayBufferReleaseCallbackOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefv8ArrayBufferReleaseCallback;
  protected
    FOnReleaseBuffer: TOnV8ArrayBufferReleaseBuffer;
    procedure ReleaseBuffer(buffer: Pointer); override;
  published
    /// <summary>
    /// Called to release |buffer| when the ArrayBuffer JS object is garbage
    /// collected. |buffer| is the value that was passed to CreateArrayBuffer
    /// along with this object.
    /// </summary>
    property OnReleaseBuffer: TOnV8ArrayBufferReleaseBuffer read FOnReleaseBuffer write FOnReleaseBuffer;
  end;


  /// <summary>
  /// Interface that should be implemented to handle V8 function calls. The
  /// functions of this interface will be called on the thread associated with the
  /// V8 function.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefv8Handler">Implements TCefv8Handler</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8handler_t)</see></para>
  /// </remarks>
  TV8Handler = class(TCefv8HandlerOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefV8Handler;
  protected
    FOnExecute: TOnV8HandlerExecute;
    function Execute(const Name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var Exception: ustring): boolean; override;
  published
    /// <summary>
    /// Handle execution of the function identified by |name|. |object| is the
    /// receiver ('this' object) of the function. |arguments| is the list of
    /// arguments passed to the function. If execution succeeds set |retval| to
    /// the function return value. If execution fails set |exception| to the
    /// exception that will be thrown. Return true (1) if execution was handled.
    /// </summary>
    property OnExecute: TOnV8HandlerExecute read FOnExecute write FOnExecute;
  end;



  /// <summary>
  /// Interface that should be implemented to handle V8 accessor calls. Accessor
  /// identifiers are registered by calling ICefV8value.SetValue(). The
  /// functions of this interface will be called on the thread associated with the
  /// V8 accessor.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefV8Accessor">Implements TCefV8Accessor</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8accessor_t)</see></para>
  /// </remarks>
  TV8Accessor = class(TCefV8AccessorOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefV8Accessor;
  protected
    FOnGet: TOnV8AccessorGet;
    FOnSet: TOnV8AccessorSet;
    function Get(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean; override;
    function Set_(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean; override;
  published
    /// <summary>
    /// Handle retrieval the accessor value identified by |name|. |object| is the
    /// receiver ('this' object) of the accessor. If retrieval succeeds set
    /// |retval| to the return value. If retrieval fails set |exception| to the
    /// exception that will be thrown. Return true (1) if accessor retrieval was
    /// handled.
    /// </summary>
    property OnGet: TOnV8AccessorGet read FOnGet write FOnGet;
    /// <summary>
    /// Handle assignment of the accessor value identified by |name|. |object| is
    /// the receiver ('this' object) of the accessor. |value| is the new value
    /// being assigned to the accessor. If assignment fails set |exception| to the
    /// exception that will be thrown. Return true (1) if accessor assignment was
    /// handled.
    /// </summary>
    property OnSet: TOnV8AccessorSet read FOnSet write FOnSet;
  end;

  /// <summary>
  /// Interface that should be implemented to handle V8 interceptor calls. The
  /// functions of this interface will be called on the thread associated with the
  /// V8 interceptor. Interceptor's named property handlers (with first argument
  /// of type CefString) are called when object is indexed by string. Indexed
  /// property handlers (with first argument of type int) are called when object
  /// is indexed by integer.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefV8Interceptor">Implements TCefV8Interceptor</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_v8_capi.h">CEF source file: /include/capi/cef_v8_capi.h (cef_v8interceptor_t)</see></para>
  /// </remarks>
  TV8Interceptor = class(TCefV8InterceptorOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefV8Interceptor;
  protected
    FOnGetByName: TOnV8InterceptorGetByName;
    FOnGetByIndex: TOnV8InterceptorGetByIndex;
    FOnSetByName: TOnV8InterceptorSetByName;
    FOnSetByIndex: TOnV8InterceptorSetByIndex;
    function GetByName(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean; override;
    function GetByIndex(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean; override;
    function SetByName(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean; override;
    function SetByIndex(index: integer; const object_, Value: ICefv8Value; var Exception: ustring): boolean; override;
  published
    /// <summary>
    /// Handle retrieval of the interceptor value identified by |name|. |object|
    /// is the receiver ('this' object) of the interceptor. If retrieval succeeds,
    /// set |retval| to the return value. If the requested value does not exist,
    /// don't set either |retval| or |exception|. If retrieval fails, set
    /// |exception| to the exception that will be thrown. If the property has an
    /// associated accessor, it will be called only if you don't set |retval|.
    /// Return true (1) if interceptor retrieval was handled, false (0) otherwise.
    /// </summary>
    property OnGetByName: TOnV8InterceptorGetByName read FOnGetByName write FOnGetByName;
    /// <summary>
    /// Handle retrieval of the interceptor value identified by |index|. |object|
    /// is the receiver ('this' object) of the interceptor. If retrieval succeeds,
    /// set |retval| to the return value. If the requested value does not exist,
    /// don't set either |retval| or |exception|. If retrieval fails, set
    /// |exception| to the exception that will be thrown. Return true (1) if
    /// interceptor retrieval was handled, false (0) otherwise.
    /// </summary>
    property OnGetByIndex: TOnV8InterceptorGetByIndex read FOnGetByIndex write FOnGetByIndex;
    /// <summary>
    /// Handle assignment of the interceptor value identified by |name|. |object|
    /// is the receiver ('this' object) of the interceptor. |value| is the new
    /// value being assigned to the interceptor. If assignment fails, set
    /// |exception| to the exception that will be thrown. This setter will always
    /// be called, even when the property has an associated accessor. Return true
    /// (1) if interceptor assignment was handled, false (0) otherwise.
    /// </summary>
    property OnSetByName: TOnV8InterceptorSetByName read FOnSetByName write FOnSetByName;
    /// <summary>
    /// Handle assignment of the interceptor value identified by |index|. |object|
    /// is the receiver ('this' object) of the interceptor. |value| is the new
    /// value being assigned to the interceptor. If assignment fails, set
    /// |exception| to the exception that will be thrown. Return true (1) if
    /// interceptor assignment was handled, false (0) otherwise.
    /// </summary>
    property OnSetByIndex: TOnV8InterceptorSetByIndex read FOnSetByIndex write FOnSetByIndex;
  end;


  /// <summary>
  /// Implement this interface to receive accessibility notification when
  /// accessibility events have been registered. The functions of this interface
  /// will be called on the UI thread.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefAccessibilityHandler">Implements TCefAccessibilityHandler</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_accessibility_handler_capi.h">CEF source file: /include/capi/cef_accessibility_handler_capi.h (cef_accessibility_handler_t)</see></para>
  /// </remarks>
  TAccessibilityHandler = class(TCEFAccessibilityHandlerOwn)
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefAccessibilityHandler;
  protected
    FOnTreeChange: TOnAccessibilityEvent;
    FOnLocationChange: TOnAccessibilityEvent;
    procedure OnAccessibilityTreeChange(const Value: ICefValue); override;
    procedure OnAccessibilityLocationChange(const Value: ICefValue); override;
  published
    /// <summary>
    /// Called after renderer process sends accessibility tree changes to the
    /// browser process.
    /// </summary>
    property OnTreeChange: TOnAccessibilityEvent read FOnTreeChange write FOnTreeChange;
    /// <summary>
    /// Called after renderer process sends accessibility location changes to the
    /// browser process.
    /// </summary>
    property OnLocationChange: TOnAccessibilityEvent read FOnLocationChange write FOnLocationChange;
  end;


  /// <summary>
  /// Implement this interface to filter resource response content. The functions
  /// of this interface will be called on the browser process IO thread.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefResponseFilter">Implements TCefResponseFilter</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_response_filter_capi.h">CEF source file: /include/capi/cef_response_filter_capi.h (cef_response_filter_t)</see></para>
  /// </remarks>
  //TResponseFilter = class(TCefResponseFilterOwn)
  //protected
  //  FOnFilter: TOnFilterEvent;
  //  FOnInitFilter: TOnInitFilterEvent;

  //  function InitFilter: boolean; override;
  //  function Filter(data_in: Pointer; data_in_size: nativeuint; var data_in_read: nativeuint; data_out: Pointer; data_out_size: nativeuint;
  //    var data_out_written: nativeuint): TCefResponseFilterStatus; override;
  //public
  //  constructor Create; override;

  //  property OnFilter: TOnFilterEvent read FOnFilter write FOnFilter;
  //  property OnInitFilter: TOnInitFilterEvent read FOnInitFilter write FOnInitFilter;
  //end;



  /// <summary>
  /// Implement this interface for asynchronous task execution. If the task is
  /// posted successfully and if the associated message loop is still running then
  /// the execute() function will be called on the target thread. If the task
  /// fails to post then the task object may be destroyed on the source thread
  /// instead of the target thread. For this reason be cautious when performing
  /// work in the task object destructor.
  /// </summary>
  /// <remarks>
  /// <para><see cref="uCEFTypes|TCefTask">Implements TCefTask</see></para>
  /// <para><see href="https://bitbucket.org/chromiumembedded/cef/src/master/include/capi/cef_task_capi.h">CEF source file: /include/capi/cef_task_capi.h (cef_task_t)</see></para>
  /// </remarks>
  TTask = class(TCefTaskOwn)
  protected
    FOnly: boolean;
    FOnExecute: TTaskExecute;
    /// <summary>
    /// Method that will be executed on the target thread.
    /// </summary>
    procedure Execute; override;
  public
    constructor Create; override;
    destructor Destroy; override;
    function AsInterface(): ICefTask;
    function OnlyPostTask(threadId: TCefThreadId): boolean;
    function OnlyPostDelayedTask(threadId: TCefThreadId; Delay: int64): boolean;
  published
    /// <summary>
    /// Method that will be executed on the target thread.
    /// </summary>
    property OnExecute: TTaskExecute read FOnExecute write FOnExecute;
  end;

implementation

// CookieVisitor
function TCookieVisitor.visit(const Name, Value, domain, path: ustring; secure, httponly, hasExpires: boolean; const creation, lastAccess, expires: TDateTime;
  Count, total: integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: boolean): boolean;
begin
  Result := False;
  if assigned(FOnCookieVisit) then
  begin
    Result := FOnCookieVisit(Name, Value, domain, path, secure, httponly, hasExpires, creation, lastAccess, expires, Count, total, same_site, priority, deleteCookie);
  end;
end;

constructor TCookieVisitor.Create;
begin
  inherited Create;
  FOnCookieVisit := nil;
end;

destructor TCookieVisitor.Destroy;
begin
  inherited Destroy;
  FOnCookieVisit := nil;
end;

function TCookieVisitor.AsInterface(): ICefCookieVisitor;
begin
  Result := self as ICefCookieVisitor;
end;

// SetCookieCallback
procedure TSetCookieCallback.OnComplete(success: boolean);
begin
  if assigned(FOnSetCookieComplete) then
  begin
    FOnSetCookieComplete(success);
  end;
end;

constructor TSetCookieCallback.Create;
begin
  inherited Create;
  FOnSetCookieComplete := nil;
end;

destructor TSetCookieCallback.Destroy;
begin
  inherited Destroy;
  FOnSetCookieComplete := nil;
end;

function TSetCookieCallback.AsInterface(): ICefSetCookieCallback;
begin
  Result := self as ICefSetCookieCallback;
end;

// DeleteCookiesCallback
procedure TDeleteCookiesCallback.OnComplete(numDeleted: integer);
begin
  if assigned(FOnDeleteCookiesComplete) then
  begin
    FOnDeleteCookiesComplete(numDeleted);
  end;
end;

constructor TDeleteCookiesCallback.Create;
begin
  inherited Create;
  FOnDeleteCookiesComplete := nil;
end;

destructor TDeleteCookiesCallback.Destroy;
begin
  inherited Destroy;
  FOnDeleteCookiesComplete := nil;
end;

function TDeleteCookiesCallback.AsInterface(): ICefDeleteCookiesCallback;
begin
  Result := self as ICefDeleteCookiesCallback;
end;

// RunFileDialogCallback
procedure TRunFileDialogCallback.OnFileDialogDismissed(const filePaths: TStrings);
begin
  if assigned(FOnRunFileDialogDismissed) then
  begin
    FOnRunFileDialogDismissed(filePaths);
  end;
end;

constructor TRunFileDialogCallback.Create;
begin
  inherited Create;
  FOnRunFileDialogDismissed := nil;
end;

destructor TRunFileDialogCallback.Destroy;
begin
  inherited Destroy;
  FOnRunFileDialogDismissed := nil;
end;

function TRunFileDialogCallback.AsInterface(): ICefRunFileDialogCallback;
begin
  Result := self as ICefRunFileDialogCallback;
end;

// DomVisitor
procedure TDomVisitor.visit(const document: ICefDomDocument);
begin
  if assigned(FOnDomVisitor) then
  begin
    FOnDomVisitor(document);
  end;
end;

constructor TDomVisitor.Create;
begin
  inherited Create;
  FOnDomVisitor := nil;
end;

destructor TDomVisitor.Destroy;
begin
  inherited Destroy;
  FOnDomVisitor := nil;
end;

function TDomVisitor.AsInterface(): ICefDomVisitor;
begin
  Result := self as ICefDomVisitor;
end;

// TMenuModelDelegate
procedure TMenuModelDelegate.ExecuteCommand(const menuModel: ICefMenuModel; commandId: integer; eventFlags: TCefEventFlags);
begin
  if assigned(FOnExecuteCommand) then
  begin
    FOnExecuteCommand(menuModel, commandId, eventFlags);
  end;
end;

procedure TMenuModelDelegate.MouseOutsideMenu(const menuModel: ICefMenuModel; const screenPoint: PCefPoint);
begin
  if assigned(FOnMouseOutsideMenu) then
  begin
    FOnMouseOutsideMenu(menuModel, screenPoint);
  end;
end;

procedure TMenuModelDelegate.UnhandledOpenSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  if assigned(FOnUnhandledOpenSubmenu) then
  begin
    FOnUnhandledOpenSubmenu(menuModel, isRTL);
  end;
end;

procedure TMenuModelDelegate.UnhandledCloseSubmenu(const menuModel: ICefMenuModel; isRTL: boolean);
begin
  if assigned(FOnUnhandledCloseSubmenu) then
  begin
    FOnUnhandledCloseSubmenu(menuModel, isRTL);
  end;
end;

procedure TMenuModelDelegate.MenuWillShow(const menuModel: ICefMenuModel);
begin
  if assigned(FOnMenuWillShow) then
  begin
    FOnMenuWillShow(menuModel);
  end;
end;

procedure TMenuModelDelegate.MenuClosed(const menuModel: ICefMenuModel);
begin
  if assigned(FOnMenuClosed) then
  begin
    FOnMenuClosed(menuModel);
  end;
end;

function TMenuModelDelegate.FormatLabel(const menuModel: ICefMenuModel; var label_: ustring): boolean;
begin
  Result := False;
  if assigned(FOnFormatLabel) then
  begin
    Result := FOnFormatLabel(menuModel, label_);
  end;
end;

constructor TMenuModelDelegate.Create;
begin
  inherited Create;
  FOnExecuteCommand := nil;
  FOnMouseOutsideMenu := nil;
  FOnUnhandledOpenSubmenu := nil;
  FOnUnhandledCloseSubmenu := nil;
  FOnMenuWillShow := nil;
  FOnMenuClosed := nil;
  FOnFormatLabel := nil;
end;

destructor TMenuModelDelegate.Destroy;
begin
  inherited Destroy;
  FOnExecuteCommand := nil;
  FOnMouseOutsideMenu := nil;
  FOnUnhandledOpenSubmenu := nil;
  FOnUnhandledCloseSubmenu := nil;
  FOnMenuWillShow := nil;
  FOnMenuClosed := nil;
  FOnFormatLabel := nil;
end;

function TMenuModelDelegate.AsInterface(): ICefMenuModelDelegate;
begin
  Result := self as ICefMenuModelDelegate;
end;

// TSchemeHandlerFactory
function TSchemeHandlerFactory.New(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler;
begin
  Result := nil;
  if assigned(FOnNew) then
  begin
    Result := FOnNew(browser, frame, schemeName, request);
  end;
end;

constructor TSchemeHandlerFactory.Create(const AClass: TCefResourceHandlerClass);
begin
  inherited Create(AClass);
  FOnNew := nil;
end;

destructor TSchemeHandlerFactory.Destroy;
begin
  FOnNew := nil;
  inherited Destroy;
end;

function TSchemeHandlerFactory.AsInterface(): ICefSchemeHandlerFactory;
begin
  Result := self as ICefSchemeHandlerFactory;
end;

// TResourceHandler
function TResourceHandler.Open(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean;
begin
  Result := False;
  if assigned(FOnOpen) then
  begin
    Result := FOnOpen(request, handle_request, callback);
  end;
end;

function TResourceHandler.ProcessRequest(const request: ICefRequest; const callback: ICefCallback): boolean; // deprecated
begin
  Result := False;
  if assigned(FOnProcessRequest) then
  begin
    Result := FOnProcessRequest(request, callback);
  end;
end;

procedure TResourceHandler.GetResponseHeaders(const response: ICefResponse; out responseLength: int64; out redirectUrl: ustring);
begin
  if assigned(FOnGetResponseHeaders) then
  begin
    FOnGetResponseHeaders(response, responseLength, redirectUrl);
  end;
end;

function TResourceHandler.Skip(bytes_to_skip: int64; var bytes_skipped: int64; const callback: ICefResourceSkipCallback): boolean;
begin
  Result := False;
  if assigned(FOnSkip) then
  begin
    Result := FOnSkip(bytes_to_skip, bytes_skipped, callback);
  end;
end;

function TResourceHandler.Read(const data_out: Pointer; bytes_to_read: integer; var bytes_read: integer; const callback: ICefResourceReadCallback): boolean;
begin
  Result := False;
  if assigned(FOnRead) then
  begin
    Result := FOnRead(data_out, bytes_to_read, bytes_read, callback);
  end;
end;

function TResourceHandler.ReadResponse(const dataOut: Pointer; bytesToRead: integer; var bytesRead: integer; const callback: ICefCallback): boolean;
  // deprecated
begin
  Result := False;
  if assigned(FOnReadResponse) then
  begin
    Result := FOnReadResponse(dataOut, bytesToRead, bytesRead, callback);
  end;
end;

procedure TResourceHandler.Cancel;
begin
  if assigned(FOnCancel) then
  begin
    FOnCancel();
  end;
end;

constructor TResourceHandler.Create(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest);
begin
  inherited Create(browser, frame, schemeName, request);
  FOnOpen := nil;
  FOnProcessRequest := nil;
  FOnGetResponseHeaders := nil;
  FOnSkip := nil;
  FOnRead := nil;
  FOnReadResponse := nil;
  FOnCancel := nil;
end;

destructor TResourceHandler.Destroy;
begin
  inherited Destroy;
  FOnOpen := nil;
  FOnProcessRequest := nil;
  FOnGetResponseHeaders := nil;
  FOnSkip := nil;
  FOnRead := nil;
  FOnReadResponse := nil;
  FOnCancel := nil;
end;

function TResourceHandler.AsInterface(): ICefResourceHandler;
begin
  Result := self as ICefResourceHandler;
end;

// TV8ArrayBufferReleaseCallback
procedure TV8ArrayBufferReleaseCallback.ReleaseBuffer(buffer: Pointer);
begin
  if assigned(FOnReleaseBuffer) then
  begin
    FOnReleaseBuffer(buffer);
  end;
end;

constructor TV8ArrayBufferReleaseCallback.Create();
begin
  inherited Create();
  FOnReleaseBuffer := nil;
end;

destructor TV8ArrayBufferReleaseCallback.Destroy;
begin
  inherited Destroy;
  FOnReleaseBuffer := nil;
end;

function TV8ArrayBufferReleaseCallback.AsInterface(): ICefv8ArrayBufferReleaseCallback;
begin
  Result := self as ICefv8ArrayBufferReleaseCallback;
end;

// TV8Handler
function TV8Handler.Execute(const Name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value; var Exception: ustring): boolean;
begin
  Result := False;
  if assigned(FOnExecute) then
  begin
    Result := FOnExecute(Name, object_, arguments, retval, Exception);
  end;
end;

constructor TV8Handler.Create();
begin
  inherited Create();
  FOnExecute := nil;
end;

destructor TV8Handler.Destroy;
begin
  inherited Destroy;
  FOnExecute := nil;
end;

function TV8Handler.AsInterface(): ICefV8Handler;
begin
  Result := self as ICefv8Handler;
end;

// TV8Accessor
function TV8Accessor.Get(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
begin
  Result := False;
  if assigned(FOnGet) then
  begin
    Result := FOnGet(Name, object_, retval, Exception);
  end;
end;

function TV8Accessor.Set_(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean;
begin
  Result := False;
  if assigned(FOnSet) then
  begin
    Result := FOnSet(Name, object_, Value, Exception);
  end;
end;

constructor TV8Accessor.Create();
begin
  inherited Create();
  FOnGet := nil;
  FOnSet := nil;
end;

destructor TV8Accessor.Destroy;
begin
  inherited Destroy;
  FOnGet := nil;
  FOnSet := nil;
end;

function TV8Accessor.AsInterface(): ICefV8Accessor;
begin
  Result := self as ICefV8Accessor;
end;

// TV8Interceptor
function TV8Interceptor.GetByName(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
begin
  Result := False;
  if assigned(FOnGetByName) then
  begin
    Result := FOnGetByName(Name, object_, retval, Exception);
  end;
end;

function TV8Interceptor.GetByIndex(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean;
begin
  Result := False;
  if assigned(FOnGetByIndex) then
  begin
    Result := FOnGetByIndex(index, object_, retval, Exception);
  end;
end;

function TV8Interceptor.SetByName(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean;
begin
  Result := False;
  if assigned(FOnSetByName) then
  begin
    Result := FOnSetByName(Name, object_, Value, Exception);
  end;
end;

function TV8Interceptor.SetByIndex(index: integer; const object_, Value: ICefv8Value; var Exception: ustring): boolean;
begin
  Result := False;
  if assigned(FOnSetByIndex) then
  begin
    Result := FOnSetByIndex(index, object_, Value, Exception);
  end;
end;

constructor TV8Interceptor.Create();
begin
  inherited Create();
  FOnGetByName := nil;
  FOnGetByIndex := nil;
  FOnSetByName := nil;
  FOnSetByIndex := nil;
end;

destructor TV8Interceptor.Destroy;
begin
  inherited Destroy;
  FOnGetByName := nil;
  FOnGetByIndex := nil;
  FOnSetByName := nil;
  FOnSetByIndex := nil;
end;

function TV8Interceptor.AsInterface(): ICefV8Interceptor;
begin
  Result := self as ICefV8Interceptor;
end;

// TAccessibilityHandler
procedure TAccessibilityHandler.OnAccessibilityTreeChange(const Value: ICefValue);
begin
  if assigned(FOnTreeChange) then
  begin
    FOnTreeChange(self, Value);
  end;
end;

procedure TAccessibilityHandler.OnAccessibilityLocationChange(const Value: ICefValue);
begin
  if assigned(FOnLocationChange) then
  begin
    FOnLocationChange(self, Value);
  end;
end;

constructor TAccessibilityHandler.Create();
begin
  inherited Create();
  FOnTreeChange := nil;
  FOnLocationChange := nil;
end;

destructor TAccessibilityHandler.Destroy;
begin
  inherited Destroy;
  FOnTreeChange := nil;
  FOnLocationChange := nil;
end;

function TAccessibilityHandler.AsInterface(): ICefAccessibilityHandler;
begin
  Result := self as ICefAccessibilityHandler;
end;


// TResponseFilter
//constructor TResponseFilter.Create;
//begin
//  inherited Create;
//  FOnFilter := nil;
//  FOnInitFilter := nil;
//end;

//function TResponseFilter.InitFilter: boolean;
//begin
//  Result := True;
//  if assigned(FOnInitFilter) then FOnInitFilter(self, Result);
//end;

//function TResponseFilter.Filter(data_in: Pointer; data_in_size: nativeuint; var data_in_read: nativeuint; data_out: Pointer; data_out_size: nativeuint;
//  var data_out_written: nativeuint): TCefResponseFilterStatus;
//begin
//  Result := RESPONSE_FILTER_DONE;
//  if assigned(FOnFilter) then
//    FOnFilter(self, data_in, data_in_size, data_in_read, data_out, data_out_size, data_out_written, Result);
//end;


constructor TTask.Create();
begin
  inherited Create;
  FOnExecute := nil;
  FOnly := True;
end;

destructor TTask.Destroy;
begin
  inherited Destroy;
  FOnExecute := nil;
end;

function TTask.OnlyPostTask(threadId: TCefThreadId): boolean;
begin
  Result := False;
  if FOnly and assigned(FOnExecute) then
  begin
    CefPostTask(threadId, self);
    FOnly := False;
    Result := True;
  end;
end;

function TTask.OnlyPostDelayedTask(threadId: TCefThreadId; Delay: int64): boolean;
begin
  Result := False;
  if FOnly and assigned(FOnExecute) then
  begin
    CefPostDelayedTask(threadId, self, Delay);
    FOnly := False;
    Result := True;
  end;
end;

procedure TTask.Execute;
begin
  if assigned(FOnExecute) then
  begin
    FOnExecute();
  end;
end;

function TTask.AsInterface(): ICefTask;
begin
  Result := self as ICefTask;
end;

end.
