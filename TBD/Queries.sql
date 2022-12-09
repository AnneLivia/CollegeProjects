# 1. Mostrar os projetos com os usuários que criaram o projeto, usando join (0,25pt);
SELECT * FROM proj_project as proj
INNER JOIN proj_user AS puser ON (puser.id = proj.id_user);

# 2. Mostrar os projetos com os usuários, mostrando também os usuários que não tem projeto, usando join (0,25pt);
SELECT * FROM proj_project AS proj
RIGHT JOIN proj_user AS puser ON (puser.id = proj.id_user);

# 3. Mostrar os usuários e seus projetos, mostrando também os usuários que não tem projeto, usando join (0,5pt);
SELECT * FROM proj_user AS puser
LEFT JOIN proj_project AS proj ON (puser.id = proj.id_user);

# 4. Criar uma view para mostrar o primeiro nome, o ultimo nome, a organização e o projeto dos usuários (0,5pt);
CREATE VIEW view_user_proj AS (
	SELECT puser.fname, puser.lname, puser.org, proj.name FROM proj_user AS puser
    INNER JOIN proj_project AS proj ON (proj.id_user = puser.id)
);

SELECT * FROM view_user_proj;

# 5. Criar uma view para mostrar o primeiro nome, o ultimo nome, a organização, o projeto dos usuários 
# e o número de sequências em cada projeto (0,5pt);
CREATE VIEW view_user_proj_nseq AS (
	SELECT puser.fname, puser.lname, puser.org, proj.name, COUNT(seq.id) AS qtd_sequence FROM proj_user AS puser
    INNER JOIN proj_project AS proj ON (proj.id_user = puser.id)
    INNER JOIN proj_seq AS seq ON (proj.id = seq.id_proj)
	GROUP BY proj.id
);

SELECT * FROM view_user_proj_nseq;

# 6. Criar uma view para mostrar os status das sequências e número de sequências naquele estado (1pt);
# dúvida, aqui é para mostrar apenas os status que estão ligados as sequencias?
CREATE VIEW view_stats_nseq AS (
	SELECT stat.name, COUNT(seq.id) AS qtd_sequence 
    FROM proj_status AS stat
	INNER JOIN proj_seq AS seq ON (seq.id_status = stat.id)
	GROUP BY stat.id
);

SELECT * FROM view_stats_nseq;

# 7. Criar uma view para mostrar todos os status das sequências e número de sequências naquele estado (1pt);
# dúvida, aqui é para mostrar todos os status, independentemente de estarem ligados as sequencias ou nao ?
CREATE VIEW view_allstats_nseq AS (
	SELECT stat.name, COUNT(seq.id) AS qtd_sequence 
    FROM proj_status AS stat
	LEFT JOIN proj_seq AS seq ON (seq.id_status = stat.id)
	GROUP BY stat.id
);

SELECT * FROM view_allstats_nseq;

# 8. Criar um trigger para diminuir o número de sequências de um projeto quando uma sequência for deletada (1pt);

# primeiro, caso a tabela proj_project não tenha uma coluna chamada qtd_seq, criar a coluna em questão, para
# poder aplicar as triggers das questões 8 e 9, se já tiver, pode ignorar a linha a seguir
ALTER TABLE proj_project ADD qtd_seq INT NOT NULL;

## agora preencher todas as qtd_seq com seus respectivos valores (já que inicialmente cada um tem 0)
## vai ser criado um funcion para isso. vai facilitar a inserção
UPDATE proj_project AS proj
SET proj.qtd_seq = 
(
	SELECT COUNT(*) FROM proj_seq AS seq 
	WHERE seq.id_proj = proj.id
);

DELIMITER $
# gatilho disparado depois de deletar
# é possivel acessar a linha deletada com o uso do OLD.your_column_name
CREATE TRIGGER trigger_dec_seq AFTER DELETE ON proj_seq
FOR EACH ROW
BEGIN
	UPDATE proj_project AS proj SET qtd_seq = qtd_seq - 1
    WHERE proj.id = OLD.id_proj;
END$

DELIMITER ;

# Test DELETE na tabela proj_seq
DELETE FROM proj_seq WHERE id = 410;
DELETE FROM proj_seq WHERE id = 26208;

# 9. Criar um trigger para aumentar o número de sequências de um projeto quando uma sequência for inserida (1pt);

# aqui usa-se o comando new
DELIMITER $
# gatilho disparado depois de deletar
CREATE TRIGGER trigger_inc_seq AFTER INSERT ON proj_seq
FOR EACH ROW
BEGIN
	UPDATE proj_project AS proj SET qtd_seq = qtd_seq + 1
    WHERE proj.id = NEW.id_proj;
END$

DELIMITER ;

# o código abaixo irá inserir outra vez o dado removido anteriormente para testar o trigger de insert seq
INSERT INTO `proj_seq` 
	(`id`, `id_proj`, `title`, `seq`, `deletado`, `id_status`, `blast_rid`, `blast_rtoe`, `blast_start`, `blast_end`, `evalue`, `type`)
VALUES
	(410,1,'>CCMB663_NODE_25-gene-3.64','MLDPFPPPPAWLRDFVEPWALHYNVPALTEHAHEVIIAFAGYLFIHFILSPVLSPVLFPN\nHYPKLKPRTKLNWDVHVVSLVQSTFINGMALWVMFADEDRASMNASERIYGYTGACGLVS\nAFAAGYFVYDLIVSTIYVKLFGIGMLFHGISALWVFSFGFRPFVNFYSPVFILYELSSPF\nLNIHWFLDKVNMTGSNLQWYNGMMLLFTFFSCRLLWGTYQSVAVYRDMWYALKQTWDATA\nAATPLEPVDLTSQVFQVRGGSGSEMAKYASFTAGGVPTWLVLTYVISNVVLNFLNYFWFS\nKMVETVLKRFRGPAEKSGPAGKPSKEEQISHLKEEITQKVVLEAASKLEQEEGSPFLDGV\nSEEKVASAVDSGLTEELRKRKVQLSS',0,3,NULL,NULL,'2020-04-08 09:06:53','2020-04-08 10:44:13','10','protein');
	
INSERT INTO `proj_seq` 
	(`id`, `id_proj`, `title`, `seq`, `deletado`, `id_status`, `blast_rid`, `blast_rtoe`, `blast_start`, `blast_end`, `evalue`, `type`)
VALUES
	(26208,3,'>CBS139.54_scaffold_8-gene-6.25','MIRPRWLAVLLVVFLLLGAVIWWLLTALVSLLKVLLVPSGPRNQRQELSLSPEHNDRSRQIRSSVNGSHTPDKESMDEAASVRNEQQSVGIPIDVGTMEGLPTLASRLAKGPVMHTNSGESSPSVQQLPSSVSSGLLSPSEINSGHDTTITTPLLPNGRPQAGDIFDDYEPSRLAFTGNGFLITGSQKKKGVRISLDTQGEVSIMRSVVFNKLGLPLEPCTESLVPFRQAADTASIPMIGKVRVDWRFAQDIMTYQTDFYVVENNQFDVLIGLPTIVRYKLLQPRFAIPKVMARDHLERQIMLDTLDS',0,3,NULL,NULL,'2020-04-09 05:06:59','2020-04-09 06:17:13','10','protein');

# 10. Mostrar o primeiro nome, o ultimo nome, a organização e o projeto dos usuários, usando stored procedures (1pt);

DELIMITER $
CREATE PROCEDURE sp_user_proj()
BEGIN
	SELECT puser.fname, puser.lname, puser.org, proj.name FROM proj_user AS puser
    INNER JOIN proj_project AS proj ON proj.id_user = puser.id;
END$
DELIMITER ;

CALL sp_user_proj();

# 11. Mostrar o primeiro nome, o ultimo nome, a organização e o nome do projeto, dado o nome do projeto, usando stored procedures (1pt);

DELIMITER $
CREATE PROCEDURE sp_user_proj_by_name(IN proj_name VARCHAR(250))
BEGIN
	SELECT puser.fname, puser.lname, puser.org, proj.name FROM proj_user AS puser
    INNER JOIN proj_project AS proj ON proj.id_user = puser.id AND proj.name = proj_name;
END$
DELIMITER ;

CALL sp_user_proj_by_name("Aeromonas_B044.faa");

# 12. Mostrar o total de sequências finalizadas (id_status in (3,4)), usando stored procedures (1pt);

DELIMITER $
CREATE PROCEDURE sp_finished_seq()
BEGIN
	SELECT COUNT(*) AS total_seq_finalizadas FROM proj_seq WHERE id_status IN (3, 4);
END$
DELIMITER ;

CALL sp_finished_seq();

# 13. Mostrar o total de sequências dado um status, usando stored procedures (1pt);

DELIMITER $
CREATE PROCEDURE sp_total_seq_by_status(IN status_name VARCHAR(250))
BEGIN
	SELECT COUNT(*) AS total_seq FROM proj_seq AS seq
    INNER JOIN proj_status AS stats ON (stats.id = seq.id_status AND stats.name = status_name);
END$
DELIMITER ;

CALL sp_total_seq_by_status("Sequence error");