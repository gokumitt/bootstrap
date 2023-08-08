DECLARE
  n NUMBER := 0;
BEGIN
  LOOP
    DBMS_OUTPUT.PUT_LINE('The value of n inside the loop is: ' || TO_CHAR(n));
    n := n + 1; 
    EXIT WHEN n > 5;
  END LOOP;
    DBMS_OUTPUT.PUT_LINE('The value of n after exit from the loop is: ' || TO_CHAR(n));
END;
/