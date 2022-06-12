CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE OFF INT;
SET OFF = N-1;
  RETURN (

          SELECT DISTINCT salary
          FROM Employee
          ORDER BY salary DESC
          LIMIT 1 OFFSET OFF
  );
END