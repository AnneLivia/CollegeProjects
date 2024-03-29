<?php
    
    $email = addslashes($_POST['uEmail']);

    if(!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        echo "<script>alert('Endereço de email inválido')</script>";
        header("refresh: 0.5; url = login.php");
    } else {

        $password = addslashes($_POST['uSenha']);
        $cpf = addslashes($_POST['uCpf']);
        $genero = addslashes($_POST['adm_genero']);
        $nome = addslashes($_POST['uNomeCompleto']);

        $conexao = mysqli_connect('localhost', 'root', '') or die('Erro de conexão'.mysqli_connect_error());

        $bd = mysqli_select_db($conexao, "hospital_management");

        // se banco de dados não existe, criar outro
        if(empty($bd)) {
            $query = "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8";
            $createBD = mysqli_query($conexao, $query);
            // se o banco de dados não tiver sido criado
            if(!$createBD) {
                die("Erro ao criar banco de dados");
            }
        } 

        // se chegou aqui, BD existe ou foi criado
        // agora verificar se tabela adm existe, se não existir, criar
        $query = "SELECT * FROM adm";
        $select = mysqli_query($conexao, $query);
        // se não existir, criar a tabela
        if(!$select) {
            $query = "CREATE TABLE adm (
                id int(100) NOT NULL AUTO_INCREMENT,
                email varchar(200) NOT NULL,
                senha varchar(30) NOT NULL,
                genero varchar(20) NOT NULL,
                cpf varchar(30) NOT NULL,
                nomeCompleto varchar(200) NOT NULL,
                PRIMARY KEY(id)
            ) DEFAULT CHARSET=utf8";

            $createTable = mysqli_query($conexao, $query);
            
            if(!$createTable) {
                die("Tabela não foi criada com sucesso!");
            }
        }

        $search_element = mysqli_query($conexao, "SELECT * FROM adm WHERE email = '$email'");
        // se não tiver encontrado, dado não existe na tabela
        if(mysqli_num_rows($search_element) == 0) {
            $query = "INSERT INTO adm (email, senha, genero, cpf, nomeCompleto) VALUES ('$email', '$password', '$genero', '$cpf', '$nome')";
            $insert = mysqli_query($conexao, $query);
            if(!$insert) {
                echo "<script>alert('Erro ao cadastrar $email')</script>";
            } else {
                echo "<script>alert('$email cadastrado com sucesso!')</script>";
            }
        } else {
            echo "<script>alert('$email já esta cadastrado no sistema')</script>";
        }
        header("refresh: 0.5; url = login.php");
        mysqli_close($conexao);
    }
?>