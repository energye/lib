{$mode delphi}
{$modeswitch objectivec2}
{$modeswitch cvar}
{$packrecords c}

unit uDefinedClassesWebKit;
interface

type
  WKURLSchemeTask = objcclass external;
  WKDownload = objcclass external;
  WKWebpagePreferences = objcclass external;
  WKURLSchemeHandlerProtocol = objcprotocol external name 'WKURLSchemeHandler';
  NSProgressReportingProtocol = objcprotocol external name 'NSProgressReporting';
  WKDownloadDelegateProtocol = objcprotocol external name 'WKDownloadDelegate';

implementation
end.
