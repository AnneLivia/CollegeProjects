SELECT nomeDisciplina, curso, cargaHoraria FROM disciplinas.disciplina LIMIT 2;
## for Orable the limit structure can be written as: WHERE ROWRUN <= 2
## for DB2 the limit can be written as: FETCH FIRST 5 ROWS ONLY