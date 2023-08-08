DECLARE
a NUMBER;
b NUMBER; 
c number;
procedure Max(X in number, Y in number, Z out number) is
begin
if(X>Y) then
Z:=X;
ELSE
Z:=Y;
End if;
end;
begin
a:=20;
b:=30;
Max(a,b,c);
dbms_output.put_line('output is ' || c);
end;
/