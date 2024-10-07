unit uWkInterface;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, uWebKit;

type
  IWKUserScript = interface;
  IWKScriptMessageHandler = interface;

  IWkBase = interface
    ['{CA5E93CB-EC40-B968-990B-729497C8927A}']
  end;

  IWkWebviewDelegateEvent = interface
    ['{CA5E93CB-EC40-B968-990B-729497C8B869}']
  end;

  IWkSchemeRequestDelegateEvent = interface
    ['{CA5E93CB-EC40-B968-990A-729497CD6537}']
  end;

  IWKPreferences = interface
    ['{CA5E93CB-EC40-B968-456A-729497C8927D}']
    function Data(): WKPreferences;
    procedure SetMinimumFontSize(newValue: double);
    function MinimumFontSize: double;
    procedure SetJavaScriptEnabled(newValue: LongBool);
    function JavaScriptEnabled: LongBool;
    procedure SetJavaScriptCanOpenWindowsAutomatically(newValue: LongBool);
    function JavaScriptCanOpenWindowsAutomatically: LongBool;
    procedure SetJavaEnabled(newValue: LongBool);
    function JavaEnabled: LongBool;
    procedure SetPlugInsEnabled(newValue: LongBool);
    function PlugInsEnabled: LongBool;
  end;

  IWKUserContentController = interface
    ['{CA5E93CB-EC40-B968-456A-729497C89865}']
    function Data(): WKUserContentController;
    function UserScripts: TStrings;
    procedure AddUserScript (userScript: IWKUserScript);
    procedure RemoveAllUserScripts;
    procedure AddScriptMessageHandlerName (scriptMessageHandler: IWKScriptMessageHandler; name: string);
    procedure RemoveScriptMessageHandlerForName (name: string);
  end;

  IWKWebViewConfiguration = interface
    ['{CA5E93CB-6734-B968-565A-729497C81234}']
    function Data(): WKWebViewConfiguration;
    procedure SetPreferences(newValue: IWKPreferences);
    function Preferences: IWKPreferences;
    procedure SetUserContentController(newValue: IWKUserContentController);
    function UserContentController: IWKUserContentController;
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    function SuppressesIncrementalRendering: LongBool;
  end;

  IWKUserScript = interface
    ['{CA5E93CB-6734-B968-565A-729497C86537}']
    function Data(): WKUserScript;
    function Source: string;
    function InjectionTime: int64;
    function IsForMainFrameOnly: LongBool;
    function InitWithSourceInjectionTimeForMainFrameOnly(ASource: string; AInjectionTime: int64; AForMainFrameOnly: LongBool): IWKUserScript;
  end;

  IWKScriptMessageHandler = interface
    ['{CA5E93CB-6734-B968-565A-729497C74563}']
    function Data(): WKScriptMessageHandlerProtocol;
  end;

implementation

end.
