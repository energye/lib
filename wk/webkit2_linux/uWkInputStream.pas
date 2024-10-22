unit uWkInputStream;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, SysUtils,
  LazGLib2, LazGio2,
  uLibWebkit, uWkInterfaces;

type

  TWkInputStream = class(TInterfacedObject, IWkInputStream)
  private
    FInputStream: PInputStream;
    FClosed: boolean;
  public
    constructor Create(aInputStream: PInputStream);
    constructor Create(const aBuf: Pointer; aStreamLength: int64);
    destructor Destroy; override;
    function Data(): PInputStream;
    procedure Read(const buf: Pointer; bufSize: integer; var readCount: integer; var errorMsg: string);
    procedure Close();
  end;

implementation

constructor TWkInputStream.Create(aInputStream: PInputStream);
begin
  FInputStream := aInputStream;
end;

constructor TWkInputStream.Create(const aBuf: Pointer; aStreamLength: gssize);
begin
  FInputStream := g_memory_input_stream_new_from_data(aBuf, gssize(aStreamLength), TGDestroyNotify(@g_free));
end;

destructor TWkInputStream.Destroy;
begin
  inherited Destroy;
  FInputStream := nil;
end;

function TWkInputStream.Data(): PGInputStream;
begin
  Result := FInputStream;
end;

procedure TWkInputStream.Read(const buf: Pointer; bufSize: integer; var readCount: integer; var errorMsg: string);
var
  err: PGError;
  aReadCount: gsize;
begin
  if not Assigned(FInputStream) then
  begin
    readCount := 0;
    errorMsg := 'Invalid input stream, is nil';
    exit;
  end;
  err := nil;
  aReadCount := 0;
  // @bytes[0], Length(bytes)
  if boolean(FInputStream^.read_all(buf, gsize(bufSize), @aReadCount, nil, @err)) then
  begin
    if aReadCount = 0 then
    begin
      errorMsg := 'EOF';
    end;
    readCount := integer(aReadCount);
  end
  else
  begin
    readCount := 0;
    errorMsg := string(err^.message);
  end;
  g_error_free(err);
  err := nil;
end;

procedure TWkInputStream.Close();
var
  err: PGError;
begin
  if FClosed or not Assigned(FInputStream) then
  begin
    exit;
  end;
  FClosed := True;
  err := nil;
  if not boolean(FInputStream^.Close(nil, @err)) then
  begin
    //g_object_unref(gpointer(FInputStream));
    WriteLn('stream close error: ', string(err^.message), ' code: ', err^.code);
  end;
  // g_object_unref(gpointer(FInputStream));
  FInputStream := nil;
  g_error_free(err);
  err := nil;
end;

end.
