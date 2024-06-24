//----------------------------------------
// Copyright © yanghy. All Rights Reserved.

// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

unit uCEF_CustomEvents;

{$IFDEF FPC}
  {$MODE OBJFPC}{$H+}
{$ENDIF}

{$IFNDEF TARGET_64BITS}{$ALIGN ON}{$ENDIF}
{$MINENUMSIZE 4}

{$Z4+}

interface

uses
  Classes,
  uCEFTypes, uCEFInterfaces;

type
  // TCookieVisitor
  TOnCookieVisit = function(const Name, Value, domain, path: ustring; secure, httponly, hasExpires: boolean; const creation, lastAccess, expires: TDateTime;
    Count, total: integer; same_site: TCefCookieSameSite; priority: TCefCookiePriority; out deleteCookie: boolean): boolean of object;

  // TSetCookieCallback
  TOnSetCookieComplete = procedure(success: boolean) of object;

  // TDeleteCookiesCallback
  TOnDeleteCookiesComplete = procedure(numDeleted: integer) of object;

  // TRunFileDialogCallback
  TOnRunFileDialogDismissed = procedure(const filePaths: TStrings) of object;

  // TDomVisitor
  TOnDomVisitor = procedure(const document: ICefDomDocument) of object;

  // TMenuModelDelegate
  TOnExecuteCommand = procedure(const menuModel: ICefMenuModel; commandId: integer; eventFlags: TCefEventFlags) of object;
  TOnMouseOutsideMenu = procedure(const menuModel: ICefMenuModel; const screenPoint: PCefPoint) of object;
  TOnUnhandledOpenSubmenu = procedure(const menuModel: ICefMenuModel; isRTL: boolean) of object;
  TOnUnhandledCloseSubmenu = procedure(const menuModel: ICefMenuModel; isRTL: boolean) of object;
  TOnMenuWillShow = procedure(const menuModel: ICefMenuModel) of object;
  TOnMenuClosed = procedure(const menuModel: ICefMenuModel) of object;
  TOnFormatLabel = function(const menuModel: ICefMenuModel; var label_: ustring): boolean of object;

  // TSchemeHandlerFactory
  TOnSchemeHandlerFactoryNew = function(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: ustring; const request: ICefRequest): ICefResourceHandler of object;

  // TResourceHandler
  TOnResourceHandlerOpen = function(const request: ICefRequest; var handle_request: boolean; const callback: ICefCallback): boolean of object;
  TOnResourceHandlerProcessRequest = function(const request: ICefRequest; const callback: ICefCallback): boolean of object; // deprecated
  TOnResourceHandlerGetResponseHeaders = procedure(const response: ICefResponse; out responseLength: int64; out redirectUrl: ustring) of object;
  TOnResourceHandlerSkip = function(bytes_to_skip: int64; var bytes_skipped: int64; const callback: ICefResourceSkipCallback): boolean of object;
  TOnResourceHandlerRead = function(const data_out: Pointer; bytes_to_read: integer; var bytes_read: integer; const callback: ICefResourceReadCallback): boolean of object;
  TOnResourceHandlerReadResponse = function(const dataOut: Pointer; bytesToRead: integer; var bytesRead: integer; const callback: ICefCallback): boolean of object; // deprecated
  TOnResourceHandlerCancel = procedure() of object;

  // TV8ArrayBufferReleaseCallback
  TOnV8ArrayBufferReleaseBuffer = procedure(buffer: Pointer) of object;

  // TV8Handler
  TOnV8HandlerExecute = function(const Name: ustring; const object_: ICefv8Value; const arguments: TCefv8ValueArray; var retval: ICefv8Value;
    var Exception: ustring): boolean of object;

  // TV8Accessor
  TOnV8AccessorGet = function(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean of object;
  TOnV8AccessorSet = function(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean of object;

  // TV8Interceptor
  TOnV8InterceptorGetByName = function(const Name: ustring; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean of object;
  TOnV8InterceptorGetByIndex = function(index: integer; const object_: ICefv8Value; var retval: ICefv8Value; var Exception: ustring): boolean of object;
  TOnV8InterceptorSetByName = function(const Name: ustring; const object_, Value: ICefv8Value; var Exception: ustring): boolean of object;
  TOnV8InterceptorSetByIndex = function(index: integer; const object_, Value: ICefv8Value; var Exception: ustring): boolean of object;

  // TTask
  TTaskExecute = procedure() of object;
implementation

end.
