

CREATE TABLE vendas (
	ID smallint PRIMARY KEY,
    nome_vendedor varchar(20),
    quantidade int,
    produto varchar(20),
    cidade varchar(20)
);

INSERT INTO vendas (
	ID,
    nome_vendedor,
    quantidade,
    produto,
    cidade
) VALUES 
	(10,'Jorge',1400,'Mouse','São Paulo'), 
    (12,'Tatiana',1220,'Teclado','São Paulo'), 
    (14,'Ana',1700,'Teclado','Rio de Janeiro'), 
    (15,'Rita',2120,'Webcam','Recife'), 
    (18,'Marcos',980,'Mouse','São Paulo'), 
    (19,'Carla',1120,'Webcam','Recife'), 
    (22,'Roberto',3145,'Mouse','São Paulo');

# select using aggregation to obtain the total of mouses
select sum(quantidade) AS TotalMouses 
from vendas Where produto = 'mouse';

# consult the totalize sells of all products per city
select cidade, sum(quantidade) AS Total FROM vendas 
group by cidade;

# consult the totalize sells
select sum(quantidade) AS Total FROM vendas;

# select using aggregation to obtain the total of mouses
select sum(quantidade) AS TotalMouses 
from vendas Where produto = 'mouse';

# consult the totalize sells of all products per city
select cidade, sum(quantidade) AS Total FROM vendas 
group by cidade;

# consult the totalize sells
-- select sum(quantidade) AS Total FROM vendas;

select cidade, count(*) as total from vendas group by cidade;

## using having -> similar to where but it's applied to group by
select cidade, sum(quantidade) AS sells FROM vendas
group by cidade having sum(quantidade) <= 2500;

## using having, returning the total sells of product "teclado"
## from citys with less than 1500 teclados vendidos
select cidade, sum(quantidade) AS TOTAL 
from vendas where produto = 'teclado' 
group by cidade having sum(quantidade) < 1500;
-- DROP TABLE vendas;