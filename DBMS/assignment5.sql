CREATE TABLE Employees (
    emp_id INT PRIMARY KEY,
    name VARCHAR(100),
    department VARCHAR(50),
    salary INT
);

INSERT INTO Employees VALUES
(1, 'Amit', 'IT', 60000),
(2, 'Neha', 'HR', 50000),
(3, 'Raj', 'IT', 70000),
(4, 'Simran', 'Finance', 65000),
(5, 'Karan', 'IT', 55000);

select * from Employees;

CREATE INDEX idx_department
ON Employees(department);

explain select * from Employees where salary > 25000;
explain select * from Employees where department = 'IT';

DROP INDEX idx_department
ON Employees;

explain select * from Employees where department = 'IT';