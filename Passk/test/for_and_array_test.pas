program for_and_array;
  const
    s=2;
  type
    stu=array [1..8] of integer;
  var
    a:integer;
    t:stu;
  begin
    for a:=1 to 8
      do
        t[a]:=a
    ;
    for a:=8 downto 1
      do
        writeln(t[a])
    ;
  end.
