SELECT 
	nomeDisciplina, curso #name of the column
FROM 
	disciplina #name of the table
WHERE 
	curso = 'sistemas de informação'; # condition
    # vagas >= 1;
    # curso <> 'sistemas de informação'; # difference symbol <>
    # vagas between 0 and 5;
    # curso is NULL # there's no data can be used to check if there's any missing information in this data
    # curso in ('sistemas de informação', 'Engenharia da computação');