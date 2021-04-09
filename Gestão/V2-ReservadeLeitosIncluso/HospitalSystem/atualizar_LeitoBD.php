<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}

$quantidade = $_POST['quantidade_leito'];
$status = $_POST['status_leito_atualizar'];
$id = $_POST['id_leito'];

$query = "UPDATE leitos SET quantidade = '$quantidade',
            status = '$status' WHERE id = '$id'";
$insert = mysqli_query($conexao, $query);

$deuCerto = true;
if (!$insert) {
    echo "<script>alert('Erro ao atualizar os dados do leito.')</script>";
} else {
    echo "<script>alert('Dados do leito foram atualizados com sucesso!')</script>";
}

header("refresh:0.5;url=cadastrar_leito.php");
mysqli_close($conexao);

?>