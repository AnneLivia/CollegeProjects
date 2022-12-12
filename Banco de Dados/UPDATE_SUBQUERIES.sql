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
    ('Ravi',104,'Salem', '8989898989'),
	('Raju',102,'Coimbatore','8877665544');
    
INSERT INTO student2 (
	name,
    roll_number,
    location,
    phoneNumber
) VALUE 
	('Sai',103,'Mumbai', '7766553344'),
	('Raj',101,'Chennai','8877665544'),
	('Sri',102,'Coimbatore','8877665544');

select * from student2;

-- To update name of the students to geeks in Student2
-- table whose location is same as Raju,Ravi in Student1 table

update student2 
set name = 'geeks' where
location in (select location from student1 
where name = 'Raju' or name = 'Ravi');

-- After delete student from table 2
select * from student2;

DROP TABLE student1;
DROP TABLE student2;