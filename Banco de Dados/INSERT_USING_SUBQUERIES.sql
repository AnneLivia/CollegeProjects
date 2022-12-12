-- What is a subqueries?
-- Subqueries are queries embedded into other queries
-- subqueries merge data from multiple sources together
-- helps with adding other filtering criteria

CREATE TABLE student1 (
	name varchar(255),
    roll_number integer,
    location varchar(255),
    phoneNumber varchar(255)
);

CREATE TABLE student2 (
	name varchar(255),
    roll_number integer,
    location varchar(255),
    phoneNumber varchar(255)
);

INSERT INTO student1 (
	name,
    roll_number,
    location,
    phoneNumber
) VALUE 
	('Ram',101,'Chennai','9988775566'),
	('Raj',102,'Coimbatore','8877665544');
    
INSERT INTO student2 (
	name,
    roll_number,
    location,
    phoneNumber
) VALUE 
	('Sasi',103,'Madurai', '7766553344'),
	('Ravi',104,'Salem', '8989898989'),
	('Sumathi',105,'Kanchipuram','8989856868');

-- BEfore add all from table 2 into table 1
select * from student1;

-- Insert all rows from student2 (table 2) in the table 1 (student 1)
INSERT INTO student1 SELECT * FROM student2;

-- After add all from table 2 into table 1
select * from student1;

DROP TABLE student1;
DROP TABLE student2;