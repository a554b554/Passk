program helloworld;
  const
    s=2;
  var
    a:integer;
    t:real;
  begin
    a:=s+4*s*(s-1)/4;
    t:=s+a;
    writeln(s,a,t);
  end
