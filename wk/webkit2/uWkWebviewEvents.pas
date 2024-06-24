unit uWkWebviewEvents;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  uLibWebkit, uWkInterfaces, uWkTypes, uWkJSValue;

type

  TWkLoadChangeEvent = procedure(Sender: TObject; loadEvent: WebKitLoadEvent) of object;
  TWkExecuteScriptFinishedEvent = procedure(Sender: TObject; const jsValue: TWkJSValue) of object;
  TWkLoadFailedEvent = function(Sender: TObject; loadEvent: WebKitLoadEvent; failingUri: string; error: string): boolean of object;
  TWkURISchemeRequestEvent = procedure(Sender: TObject; const uriSchemeRequest: IWkURISchemeRequest) of object;
  TWkProcessMessageEvent = procedure(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId) of object;
  TWkMousePressEvent = function(Sender: TObject; event: PWkButtonEvent): boolean of object;
  TWkMouseReleaseEvent = function(Sender: TObject; event: PWkButtonEvent): boolean of object;
  TWkGetAcceptPolicyFinishEvent = procedure(Sender: TObject; policy: WebKitCookieAcceptPolicy; error: string) of object;
  TWkAddCookieFinishEvent = procedure(Sender: TObject; Result: boolean; error: string) of object;
  TWkGetCookiesFinishEvent = procedure(Sender: TObject; cookieList: IWkCookieList; error: string) of object;
  TWkDeleteCookieFinishEvent = procedure(Sender: TObject; Result: boolean; error: string) of object;
  TWkDecidePolicyEvent = function(Sender: TObject; decision: IWkPolicyDecision; type_: WebKitPolicyDecisionType): boolean of object;
  TWkWebProcessTerminatedEvent = procedure(Sender: TObject; reason: WebKitWebProcessTerminationReason) of object;
  TWkContextMenuEvent = function(Sender: TObject; contextMenu: IWkContextMenu; defaultAction: WkAction): boolean of object;
  TWkContextMenuCommandEvent = procedure(Sender: TObject; menuID: integer) of object;
  TWkContextMenuDismissedEvent = procedure(Sender: TObject) of object;

implementation

end.

