program case_Test;
  const
    s=2;
  type
    stu=array [1..8] of integer;
  var
    a:integer;
    t:stu;
  begin
    a:=1;
    case s of
      a.1:writeln('first!');
      s:  writeln('second!');
      3:  writeln('third!');
      end;
  end.

