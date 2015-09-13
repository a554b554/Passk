program _repeat;
  const
    s=2;
  var
    a:integer;
    t:real;
  begin
    a:=1;
    t:=1.1;
    repeat
      a:=a+1;
      t:=t+1.1;
    until a>=5
    ;
    writeln(a,t);      
  end.

