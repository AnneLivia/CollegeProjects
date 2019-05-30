<?php
    session_start();

    $_SESSION['info'] = "";

    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
        
    $bd = mysqli_select_db($conexao, "getbooks");
    if(empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE getBooks DEFAULT CHARSET=utf8");
        if(!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }


    if(!mysqli_query($conexao, "SELECT * FROM users")) {
        $table = "CREATE TABLE users (
            id int(100) NOT NULL AUTO_INCREMENT,
            email varchar(60) NOT NULL,
            senha varchar(20) NOT NULL,
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
        $criaTabela = mysqli_query($conexao, $table);
        if(!$criaTabela) {
            die("Erro ao criar tabela");
        } 
    }

    $email = $_POST['UEmail'];
    $senha = $_POST['UPassword'];

    $getEmail = "SELECT email FROM users WHERE email = '$email'";

    $selectEmail = mysqli_query($conexao, $getEmail);

    if(mysqli_num_rows($selectEmail) == 0 ) {
        $query = "INSERT INTO users(email, senha) VALUES ('$email', '$senha')";
        $insert = mysqli_query($conexao, $query);
        echo "<script>alert('Conta cadastrada com sucesso')</script>";
    } else {
        echo "<script>alert('Email já cadastrado')</script>";
    }
    header("refresh:0.5;url=index.php");
    mysqli_close($conexao);
?>

