<?php
    // criando conexão com um banco de dados
    // primero é necessário colocar o nome do servidor
    // segundo é necessário colocar o nome do usuário do banco de dados 
    // terceiro é necessário colocar a senha se necessário
    // se fosse web, era necessário colocar o servidor na web (www.algumacoisa.com)
    $conexao = mysqli_connect("localhost","root", "");

    if(!$conexao) {
        // se não houver conexão, fechar conexão e apresentar erro
        die("Erro de conexao ".mysqli_connect_error());
    } else {
        echo "BD conectado<br/>";
    }

    // parametros: servidor, usuario, senha e banco de dados
    // $bd = mysqli_select_db("localhost", "root", "", "BDAula");
    // como já foi criado conexão, pode fazer o select somente dessa forma
    $bd = mysqli_select_db($conexao, "BDaula");

    // se empty retornar false, banco de dados não existe
    if(empty($bd)) {
        echo "Banco de dados não encontrado <br/>"; 
        // se não existe, cria banco de dados
        $bd = "CREATE DATABASE Bdaula DEFAULT CHARSET=utf8";
        // query aqui é um comando/execução feita no banco de dados
        // primeiro, segundo e terceiro parametro é o servidor, usuário e senha,
        // segundo parametro é a instrução (query) feita no banco de dados
        $criaBD = mysqli_query($conexao, $bd);

        if(!$criaBD) {
            echo "Banco de dados não criado<br>";
        } else {
            echo "Banco de dados criado com sucesso<br>";
        }
    } else {
        // se o banco de dados existe, então será criado uma tabela
        echo "Banco de dados encontrado<br>";
        // primeiro buscar tabela, se existe, não é necessário criar a table, caso contrário, criar tabela
        $tabela = "SELECT * FROM cadastroUsuarios";
        $buscaTabela = mysqli_query($conexao, $tabela);
        if(!$buscaTabela) {
            // se a tabela não existe, criar uma tabela
            echo "Tabela não existe<br>";

            $minhaTabela = "CREATE TABLE CadastroUsuarios(
                id int(100) NOT NULL AUTO_INCREMENT,
                nome varchar(40) NOT NULL,
                nomeUsuario varchar(40) NOT NULL,
                email varchar(60) NOT NULL,
                senha varchar(20) NOT NULL,
                primary key(id)
            ) DEFAULT CHARSET=utf8";

            $criaTabela = mysqli_query($conexao, $minhaTabela);

            if(!$criaTabela) {
                echo "Erro na criação da tabela<br/>";
            } else {
                echo "Tabela criada com sucesso!<br/>";
            }
        }
    }
    // sempre fechar a conexao para também poder abrir a conexão em outra página
    mysqli_close($conexao);
?>