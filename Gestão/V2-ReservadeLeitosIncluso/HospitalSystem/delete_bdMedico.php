<?php
    $id = $_GET['id'];
    
    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
        
    $bd = mysqli_select_db($conexao, "hospital_management");
    if(empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
        if(!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }

    // if tabela existe
    if(mysqli_query($conexao, "SELECT * FROM Medicos")) {
        $query = "DELETE FROM Medicos WHERE id = '$id'";
        $delete = mysqli_query($conexao, $query);
        if($delete) {
            echo "<script>alert('Médico removido com sucesso')</script>";
        } 
    }
    header("refresh:0.5;url=medicos_ativos.php");
    mysqli_close($conexao);
?>