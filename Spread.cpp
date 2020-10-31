{FP}
{$M 64000000,0}
{$MODE OBJFPC}
{$INLINE ON}
{$H-,I-,Q-,R-,S-}

// Solution to problem: spread
program spread_AnhDQ;

const
  FI_NAME = '';
  FO_NAME = '';
  MaxN    = 1000000;

var
  Fi, Fo          : Text;
  n, m, c, u, v, k: LongInt;
  ch              : Char;
  T               : array[1..MaxN] of Int64;
(*------------------------------*)
  procedure Update(x, val: LongInt); inline;
  begin
    while x <= n do
    begin
      Inc(T[x], val);
      Inc(x, x and -x);
    end;
  end;
(*------------------------------*)
  function Query(x: LongInt): Int64; inline;
  begin
    result := 0;
    while x > 0 do
    begin
      Inc(result, T[x]);
      Dec(x, x and -x);
    end;
  end;
(*------------------------------*)
begin

  Assign(Fi, FI_NAME); Reset(Fi);
  Assign(Fo, FO_NAME); Rewrite(Fo);
  ReadLn(Fi, n, m, c);
  while m > 0 do
  begin
    Dec(m);
    read(Fi, ch);
    if ch = 'S' then
    begin
      ReadLn(Fi, u, v, k);
      Update(u, k);
      Update(v + 1, -k);
    end
    else
    begin
      ReadLn(Fi, k);
      WriteLn(Fo, Query(k) + c);
    end;
  end;
  Close(Fi); Close(Fo);

end.

