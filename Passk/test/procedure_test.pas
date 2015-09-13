program proced_t;
  const
    s=2;
  var
    t:real;
  procedure test(f:integer; g:real);
    begin
      g:=g+1;
      writeln(f,g);
    end;
  begin
    t:=1.5;
    test(s, t);
    writeln(s,t);      
  end.
