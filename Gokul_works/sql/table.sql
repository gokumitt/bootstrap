DROP TABLE emp_temp;
CREATE TABLE emp_temp (
  emp_id      NUMBER,
  emp_email  VARCHAR2(40)
);
 
DECLARE
  number_of_emp  NUMBER;
BEGIN
  SELECT COUNT(employee_id) INTO number_of_emp
  FROM employees;
  
  FOR i IN 1..number_of_emp LOOP
    INSERT INTO emp_temp (emp_id, emp_email)
    VALUES(i, 'not available now');
  END LOOP;
END;
/