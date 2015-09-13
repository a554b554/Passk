program record_test;
  const
    s=2;
  type
    worker=record
      old:integer;
      level:real;
    end;
  var
    a:worker;
  begin
    a.old:=1;
    a.level:=1.5;
    writeln(a.old,a.level);
  end.
