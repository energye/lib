unit uWkWebviewParent;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Controls,
  uWebKit;


type


  TWkWebviewParent = class(TCustomControl)
  private
    FDelegateProtocol: WKWebViewConfiguration;
    //NSStringUTF8
  end;

implementation

end.
