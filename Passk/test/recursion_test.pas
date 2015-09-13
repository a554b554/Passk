program recursion;
  const
    s=10;
  var
    a:integer;
    t:real;
  function test(var f:integer):integer;
    begin
      if f=1
        then
          test:=1
        else
        test:=f+test(f-1)
      ;
    end;
  begin
    a:=test(s);
    writeln(a);      
  end.
