DECLARE
    i NUMBER(3);
    j NUMBER(3);
BEGIN
dbms_output.Put_line('The prime numbers are:');
	dbms_output.new_line;
    i := 2;
    LOOP
        j := 2;
        LOOP
            EXIT WHEN( ( MOD(i, j) = 0 )
                        OR ( j = i ) );
            j := j + 1;
        END LOOP;
        IF( j = i )THEN
          dbms_output.Put(i||'   ');							   
        END IF;
        i := i + 1;
        exit WHEN i = 100;
    END LOOP;
	dbms_output.new_line;
END;
/
