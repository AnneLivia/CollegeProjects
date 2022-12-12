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
	('Rajs',102,'Coimbatore','8877665544');
    
INSERT INTO student2 (
	name,
    roll_number,
    location,
    phoneNumber
) VALUE
	('Raj',101,'Chennai','8877665544'),
	('Sasi',103,'Madurai', '7766553344'),
	('Ravi',104,'Salem', '8989898989'),
	('Sumathi',105,'Kanchipuram','8989856868');

-- BEfore delete student from table 2 
select * from student2;
-- select * from student1;
-- o delete students from Student2 table whose rollno is 
-- same as that in Student1 table and having location as chennai

delete from student2 WHERE roll_number in 
(select roll_number from student1 where location = 'Chennai');

-- After delete student from table 2
select * from student2;

DROP TABLE student1;
DROP TABLE student2;