// constructor
function TSynSizedDifferentialAVLTree_Create(): TSynSizedDifferentialAVLTree; extdecl;
begin
  {$define handleExceptionID := 41000}
  handleExceptionBegin
  Result := TSynSizedDifferentialAVLTree.Create();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLTree_FirstToSynSizedDifferentialAVLNode(AObj: TSynSizedDifferentialAVLTree): TSynSizedDifferentialAVLNode; extdecl;
begin
  {$define handleExceptionID := 41001}
  handleExceptionBegin
  Result := AObj.First();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLTree_LastToSynSizedDifferentialAVLNode(AObj: TSynSizedDifferentialAVLTree): TSynSizedDifferentialAVLNode; extdecl;
begin
  {$define handleExceptionID := 41002}
  handleExceptionBegin
  Result := AObj.Last();
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLTree_FirstWithIntX2(AObj: TSynSizedDifferentialAVLTree; var aStartPosition: Integer; var aSizesBeforeSum: Integer): TSynSizedDifferentialAVLNode; extdecl;
var
  OutaStartPosition: Integer;
  OutaSizesBeforeSum: Integer;
begin
  {$define handleExceptionID := 41003}
  handleExceptionBegin
  Result := AObj.First(OutaStartPosition, OutaSizesBeforeSum);
  aStartPosition := OutaStartPosition;
  aSizesBeforeSum := OutaSizesBeforeSum;
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLTree_LastWithIntX2(AObj: TSynSizedDifferentialAVLTree; var aStartPosition: Integer; var aSizesBeforeSum: Integer): TSynSizedDifferentialAVLNode; extdecl;
var
  OutaStartPosition: Integer;
  OutaSizesBeforeSum: Integer;
begin
  {$define handleExceptionID := 41004}
  handleExceptionBegin
  Result := AObj.Last(OutaStartPosition, OutaSizesBeforeSum);
  aStartPosition := OutaStartPosition;
  aSizesBeforeSum := OutaSizesBeforeSum;
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLTree_FindNodeAtLeftSize(AObj: TSynSizedDifferentialAVLTree; ALeftSum: INteger; var aStartPosition: Integer; var aSizesBeforeSum: Integer): TSynSizedDifferentialAVLNode; extdecl;
var
  OutaStartPosition: Integer;
  OutaSizesBeforeSum: Integer;
begin
  {$define handleExceptionID := 41005}
  handleExceptionBegin
  Result := AObj.FindNodeAtLeftSize(ALeftSum, OutaStartPosition, OutaSizesBeforeSum);
  aStartPosition := OutaStartPosition;
  aSizesBeforeSum := OutaSizesBeforeSum;
  handleExceptionEnd
end;

// function
function TSynSizedDifferentialAVLTree_FindNodeAtPosition(AObj: TSynSizedDifferentialAVLTree; APosition: INteger; AMode: TSynSizedDiffAVLFindMode; var aStartPosition: Integer; var aSizesBeforeSum: Integer): TSynSizedDifferentialAVLNode; extdecl;
var
  OutaStartPosition: Integer;
  OutaSizesBeforeSum: Integer;
begin
  {$define handleExceptionID := 41006}
  handleExceptionBegin
  Result := AObj.FindNodeAtPosition(APosition, AMode, OutaStartPosition, OutaSizesBeforeSum);
  aStartPosition := OutaStartPosition;
  aSizesBeforeSum := OutaSizesBeforeSum;
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLTree_Clear(AObj: TSynSizedDifferentialAVLTree); extdecl;
begin
  {$define handleExceptionID := 41007}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLTree_AdjustForLinesInserted(AObj: TSynSizedDifferentialAVLTree; AStartLine: Integer; ALineCount: Integer); extdecl;
begin
  {$define handleExceptionID := 41008}
  handleExceptionBegin
  AObj.AdjustForLinesInserted(AStartLine, ALineCount);
  handleExceptionEnd
end;

// procedure
procedure TSynSizedDifferentialAVLTree_AdjustForLinesDeleted(AObj: TSynSizedDifferentialAVLTree; AStartLine: Integer; ALineCount: Integer); extdecl;
begin
  {$define handleExceptionID := 41009}
  handleExceptionBegin
  AObj.AdjustForLinesDeleted(AStartLine, ALineCount);
  handleExceptionEnd
end;

exports
  TSynSizedDifferentialAVLTree_Create,
  TSynSizedDifferentialAVLTree_FirstToSynSizedDifferentialAVLNode,
  TSynSizedDifferentialAVLTree_LastToSynSizedDifferentialAVLNode,
  TSynSizedDifferentialAVLTree_FirstWithIntX2,
  TSynSizedDifferentialAVLTree_LastWithIntX2,
  TSynSizedDifferentialAVLTree_FindNodeAtLeftSize,
  TSynSizedDifferentialAVLTree_FindNodeAtPosition,
  TSynSizedDifferentialAVLTree_Clear,
  TSynSizedDifferentialAVLTree_AdjustForLinesInserted,
  TSynSizedDifferentialAVLTree_AdjustForLinesDeleted;