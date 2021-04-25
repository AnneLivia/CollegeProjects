<?php

    $id = $_GET['id'];
    
    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
        
    $bd = mysqli_select_db($conexao, "donate_system");
    if(empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE donate_system DEFAULT CHARSET=utf8");
        if(!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }

    // if tabela existe
    if(mysqli_query($conexao, "SELECT * FROM requisicoes_de_doacoes")) {
        $query = "DELETE FROM requisicoes_de_doacoes WHERE id = '$id'";
        $delete = mysqli_query($conexao, $query);
        if($delete) {
            echo "<script>alert('Requisição de doação foi removida com sucesso.')</script>";
        } 
    }
    header("refresh:0.5;url=minhas_requisicoes.php");
    mysqli_close($conexao);
?>