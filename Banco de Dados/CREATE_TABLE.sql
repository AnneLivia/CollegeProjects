/*Creating a table in the schema*/
CREATE TABLE person (
	Id char(10) PRIMARY KEY,
    nome char(250) NOT NULL,
    color char(250) NULL
);
#null is when a value in a table can be insert or not, and not null, is not allowed null value
#cannot insert a new record or update without insert a value in it