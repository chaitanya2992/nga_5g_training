CREATE DATABASE library;

USE library;

CREATE TABLE Authors (
    author_id INT PRIMARY KEY,
    author_name VARCHAR(255) NOT NULL
);

CREATE TABLE Book_category (
    book_category_id INT PRIMARY KEY,
    book_category_name VARCHAR(100) NOT NULL
);

CREATE TABLE Books (
    book_id INT PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    isbn VARCHAR(20) UNIQUE,
    publisher VARCHAR(255),
    published_year INT,
    book_category_id INT,
    total_copies INT DEFAULT 1,
    available_copies INT DEFAULT 1,
    FOREIGN KEY (book_category_id) REFERENCES Book_category(book_category_id)
);

CREATE TABLE Book_Authors (
    book_id INT,
    author_id INT,
    FOREIGN KEY (book_id) REFERENCES Books(book_id),
    FOREIGN KEY (author_id) REFERENCES Authors(author_id)
);

CREATE TABLE Members (
    member_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    email VARCHAR(255) UNIQUE,
    phone VARCHAR(20),
    status VARCHAR(20) DEFAULT 'active'
);

CREATE TABLE Book_issued (
    issue_id INT PRIMARY KEY,
    book_id INT,
    member_id INT,
    issue_date DATE,
    due_date DATE,
    return_date DATE,
    status VARCHAR(20) DEFAULT 'issued',
    FOREIGN KEY (book_id) REFERENCES Books(book_id),
    FOREIGN KEY (member_id) REFERENCES Members(member_id)
);

INSERT INTO Authors (author_id, author_name) VALUES
(1, 'J.K. Rowling'),
(2, 'George Orwell'),
(3, 'J.R.R. Tolkien'),
(4, 'Agatha Christie'),
(5, 'Dan Brown');

INSERT INTO Book_category (book_category_id, book_category_name) VALUES
(1, 'Fiction'),
(2, 'Fantasy'),
(3, 'Mystery'),
(4, 'Science Fiction'),
(5, 'Thriller');

INSERT INTO Books (book_id, title, isbn, publisher, published_year, book_category_id, total_copies, available_copies) VALUES
(101, 'Harry Potter and the Sorcerer''s Stone', '9780439708180', 'Bloomsbury', 1997, 2, 10, 7),
(102, '1984', '9780451524935', 'Secker & Warburg', 1949, 4, 8, 5),
(103, 'The Hobbit', '9780345339683', 'George Allen & Unwin', 1937, 2, 6, 4),
(104, 'Murder on the Orient Express', '9780062073501', 'Collins Crime Club', 1934, 3, 5, 3),
(105, 'The Da Vinci Code', '9780307474278', 'Doubleday', 2003, 5, 7, 6);

INSERT INTO Book_Authors (book_id, author_id) VALUES
(101, 1),
(102, 2),
(103, 3),
(104, 4),
(105, 5);

INSERT INTO Members (name, email, phone, status) VALUES
('ramun', 'ramun@example.com', '9876543210', 'active'),
('Bobby', 'bobby@example.com', '9123456780', 'active'),
('Charlie', 'charlie@example.com', '9988776655', 'inactive'),
('Prince', 'prince@example.com', '9090909090', 'active'),
('guru', 'guru@example.com', '9112233445', 'active');

INSERT INTO Book_issued (issue_id, book_id, member_id, issue_date, due_date, return_date, status) VALUES
(1, 101, 1, '2026-04-01', '2026-04-10', NULL, 'issued'),
(2, 102, 2, '2026-03-25', '2026-04-05', '2026-04-04', 'returned'),
(3, 103, 3, '2026-04-02', '2026-04-12', NULL, 'issued'),
(4, 104, 4, '2026-03-20', '2026-03-30', '2026-03-29', 'returned'),
(5, 105, 5, '2026-04-05', '2026-04-15', NULL, 'issued');

commit;




