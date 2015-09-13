program helloworld;
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
    a.level:=1.1;
    a.next:=0;
    writeln(a.old,a.level);
  end.
