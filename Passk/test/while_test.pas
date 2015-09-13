program while_Test;
  const
    s=2;
  type
    stu=array [1..8] of integer;
  var
    a:integer;
    t:stu;
  begin
    a:=1;
    while a<=8
      do
        begin
          t[a]:=a;
          a:=a+1;
        end
      ;
    a:=a-1;
    while a>=1
      do
        begin
          writeln(t[a]);
          a:=a-1;
        end
      ;
  end.

