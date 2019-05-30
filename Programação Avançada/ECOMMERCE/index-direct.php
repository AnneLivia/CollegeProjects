<?php
   
    
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

    $getEmail = "SELECT * FROM users WHERE email = '$email'";

    $selectEmail = mysqli_query($conexao, $getEmail);

    if(mysqli_num_rows($selectEmail) > 0) {
        // verificar senha
        while($info = mysqli_fetch_array($selectEmail)) {
            if($info['senha'] != $senha) {
                echo "<script>alert('Senha incorreta')</script>";
                header("refresh:0.5;url=index.php");
            } else {
                session_start();
                $_SESSION['email'] = $email;
                $_SESSION['password'] = $senha;
                $_SESSION['car'] = '0';
                $_SESSION['price'] = '0.00';
                $_SESSION['qtdb1'] = 0;
                $_SESSION['qtdb2'] = 0;
                $_SESSION['qtdb3'] = 0;
                $_SESSION['qtdb4'] = 0;
                $_SESSION['qtdb5'] = 0;
                $_SESSION['qtdb6'] = 0;
                $_SESSION['qtdb7'] = 0;
                $_SESSION['qtdb8'] = 0;
                $_SESSION['qtdb9'] = 0;
                $_SESSION['qtdb10'] = 0;
                echo "<script>alert('Bem Vindo, $email!')</script>";
                header("refresh:0.5;url=ecommerce.php");
            }
        }
    } else {
        echo "<script>alert('Email não cadastrado')</script>";
        header("refresh:0.5;url=index.php");
    }
    mysqli_close($conexao);
    
    
?>