program helloworld;
  const
    s=2;
  type
    worker=record
      old:integer;
      level:real;
    end;
  var
    a:workers;
  begin
    a.old:=1;
    a.level:=1.1;
    writeln(a.old,a.level);
  end.
