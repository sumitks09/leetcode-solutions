

SELECT employee_id, 
IF( (employee_id%2!=0) AND (name NOT LIKE "M%"), salary, 0 ) 
AS bonus 

from Employees
order by employee_id;


