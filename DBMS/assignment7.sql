USE library;

SHOW tables;

select * from members;

INSERT INTO members (member_id, name, email, phone, status) VALUES
(6, 'Sri Ram', 'ram@google.com', '9112235', 'active');

INSERT INTO members (member_id, name, email, phone, status) VALUES
(9, 'Sri Ram', 'ramsri@google.com', '9112235', 'active');

DELETE FROM members WHERE member_id = 6;

UPDATE members set phone = '1234567894' where member_id = 9;

select * from members;

commit;

SHOW VARIABLES LIKE 'secure_file_priv';

LOAD DATA INFILE 'C:/ProgramData/MySQL/MySQL Server 8.0/Uploads/books.csv'
INTO TABLE books
FIELDS TERMINATED BY ','
LINES TERMINATED BY '\n'
IGNORE 1 ROWS;
