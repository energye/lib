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
  DefinedClassesWebKit, CocoaAll, CGBase, CGGeometry, MacTypes;


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

end.
