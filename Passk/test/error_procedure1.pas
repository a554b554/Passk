program helloworld;
  const
    s=2;
  var
    a:integer;
    t:real;
  procedure test(var f,h,i:integer);
    begin
      writeln(f+1,h,i);
    end;
  begin
    a:=30;
    test(a,s);
    writeln(a);      
  end.
