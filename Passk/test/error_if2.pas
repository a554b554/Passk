program iferror;
  const
    s=2;
  var
    a:integer;
    t:real;
  begin
    if s>2
      then a:=1;
      else
          if s=2
            then a:=2
          else
            a:=3
    ;
    writeln(a);
  end.
