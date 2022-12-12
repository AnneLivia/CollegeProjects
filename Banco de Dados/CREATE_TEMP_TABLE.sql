CREATE temporary table temp as (
	SELECT * FROM disciplina
    WHERE curso = 'sistemas de informação'
);

select * from temp ORDER BY DES;

