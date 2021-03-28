<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}

$data = date("d/m/Y", strtotime($_POST['data_agenda_atualizar']));
$capacidade = $_POST['capacidade_agenda_atualizar'];
$id = $_POST['id_agenda'];

$query = "UPDATE agenda SET data = '$data',
            capacidade = '$capacidade' WHERE id = '$id'";
$insert = mysqli_query($conexao, $query);
if (!$insert) {
    echo "<script>alert('Erro ao atualizar os dados da agenda.')</script>";
} else {
    echo "<script>alert('Dados atualizados com sucesso!')</script>";
}

header("refresh:0.5;url=agenda_medica.php");
mysqli_close($conexao);

?>