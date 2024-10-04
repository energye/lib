unit uWkWebviewParent;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Controls,
  MacOSAll, CocoaAll, uWebKit, CocoaUtils, CocoaPrivate,
  CocoaWSCommon;


type


  TWkWebviewParent = class(TCustomControl)
  private
    FDelegateProtocol: WKWebViewConfiguration;
  end;

implementation

end.
