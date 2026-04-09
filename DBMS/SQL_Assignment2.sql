
SELECT c.id, c.name, c.mail, c.address
FROM orders o
JOIN customers c
ON o.customer_id = c.id
WHERE c.region = 'London';

SELECT c.id, c.name, c.mail, c.address
FROM customers c
LEFT JOIN orders o
ON c.id = o.customer_id;
