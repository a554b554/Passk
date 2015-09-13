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
    t:=1.5;
    test(a,s,t);
    writeln(a);      
  end.
