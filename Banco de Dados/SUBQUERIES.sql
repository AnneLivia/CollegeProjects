-- What is a subqueries?
-- Subqueries are queries embedded into other queries
-- subqueries merge data from multiple sources together
-- helps with adding other filtering criteria

CREATE TABLE student (
	name varchar(255),
    roll_number integer,
    location varchar(255),
    phoneNumber varchar(255)
);

CREATE TABLE class (
	name varchar(255),
    roll_number integer,
    section char
);

INSERT INTO student (
	name,
    roll_number,
    location,
    phoneNumber
) VALUE 
	('Ram',101,'Chennai','9988775566'),
	('Raj',102,'Coimbatore','8877665544'),
	('Sasi',103,'Madurai', '7766553344'),
	('Ravi',104,'Salem', '8989898989'),
	('Sumathi',105,'Kanchipuram','8989856868');
    
INSERT INTO class (
	name,
    roll_number,
    section
) VALUE 
	('Raj',102,'A'),
	('Ravi', 104, 'A'),
	('Sumathi', 105, 'B');

-- One subquerie here can be to display all info from table student
-- where in class, section is A

SELECT * 
FROM student 
WHERE roll_number IN (SELECT roll_number 
                      FROM class 
                      WHERE section = 'A');
-- The first subquery (inner one, return the roll_number of the 
-- student that is in the section A of the class, then the outer query is
-- performed, checking if the roll number of the student is in the roll_number return
-- from the class in the inner query (subquery)


select * from student;
select * from class;

DROP TABLE student;
DROP TABLE class;