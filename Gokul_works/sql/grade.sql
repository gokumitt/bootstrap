declare 
 mat int;
 eng int;
 science int;
 ave int;
begin
mat:=:mat;
eng:=:eng;
science:=:science;
ave:=mat+eng+science;
ave:=(ave/3);
if (ave>79) then
dbms_output.put_line('Grade is A');
elsif(ave>59) then
dbms_output.put_line('Grade is B');
elsif(ave>39)then
dbms_output.put_line('Grade is C');
else
dbms_output.put_line('You failed!');
end if;
end;
