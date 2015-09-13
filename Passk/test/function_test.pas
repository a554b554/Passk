program func;
  const
    s=2;
  var
    a:integer;
  function test(var f:integer):integer;
    begin
      writeln(f+1);
      test:=10;
    end;
  begin
    a:=test(s);
    writeln(a);      
  end.
