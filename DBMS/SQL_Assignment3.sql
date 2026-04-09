SELECT * 
FROM customers
WHERE order_value > (
  SELECT AVG(order_value) AS order_value 
  FROM customers
  ) AS t_table;

SELECT name, email FROM employees;
UNION
SELECT name, email FROM interns;
