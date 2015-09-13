program helloworld;
  const
    s=2;
  var
    a:integer;
    t:real;
  function test(var f:real):integer;
    begin
      writeln(f+1);
      test:=10;
    end;
  begin
    a:=test(s);
    writeln(a);      
  end.
