<?php
    
    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
        
    $bd = mysqli_select_db($conexao, "hospital_management");
    if(empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
        if(!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }


    if(!mysqli_query($conexao, "SELECT * FROM leitos")) {
        $table = "CREATE TABLE leitos (
            id int NOT NULL AUTO_INCREMENT,
            tipo varchar(300) NOT NULL,
            quantidade int NOT NULL,
            status varchar(300) NOT NULL,
            nPacientes int NOT NULL,
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
        $criaTabela = mysqli_query($conexao, $table);
        if(!$criaTabela) {
            die("Erro ao criar tabela");
        } 
    }

    $tipo_leito = $_POST['tipo_leito'];
    $capacidade = $_POST['quantidade_leito'];
    $status = $_POST['status_leito'];

    // verficiar se o leito já não existe
    $getInfo = "SELECT * FROM leitos WHERE tipo = '$tipo_leito'";

    $selectInfo = mysqli_query($conexao, $getInfo);
    // se não tiver, colocar
    if(mysqli_num_rows($selectInfo) == 0 ) {
        $query = "INSERT INTO leitos(
            tipo, 
            quantidade, 
            status,
            nPacientes
        ) VALUES ('$tipo_leito', '$capacidade', '$status', '0')";
        $insert = mysqli_query($conexao, $query);
        if(!$insert) {
            echo "<script>alert('Erro no cadastro do leito.')</script>";
        } else {
            echo "<script>alert('Leito cadastrado com sucesso')</script>";
        }
    } else {
        echo "<script>alert('Já existe leito do tipo informado')</script>";
    }
    header("refresh:0.5;url=cadastrar_leito.php");
    mysqli_close($conexao);
?>