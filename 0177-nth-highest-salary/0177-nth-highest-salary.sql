CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N - 1;
  RETURN (
    SELECT DISTINcT(salary) from Employee order by salary DESC
    limit 1 offset N
      # Write your MySQL query statement below.

  );
END