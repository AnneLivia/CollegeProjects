<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}


if (!mysqli_query($conexao, "SELECT * FROM Consultas")) {
    $table = "CREATE TABLE Consultas (
            id int NOT NULL AUTO_INCREMENT,
            emailPaciente varchar(300) NOT NULL,
            nome varchar(300) NOT NULL,
            data varchar(20) NOT NULL,
            peso varchar(10) NOT NULL,
            altura varchar(10) NOT NULL,
            medico_nome varchar(300) NOT NULL,
            medico_id INT NOT NULL,
            diagnostico varchar(500) NOT NULL,
            receita varchar(500) NOT NULL,
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
    $criaTabela = mysqli_query($conexao, $table);
    if (!$criaTabela) {
        die("Erro ao criar tabela");
    }
}

$data = date("d/m/Y", strtotime($_POST['data']));
$peso = $_POST['Paciente_peso'];
$altura = $_POST['Paciente_altura'];
$receita = $_POST['Paciente_receita'];
$diagnostico = $_POST['Paciente_diagnostico'];
$id = $_POST['id_consulta'];

$query = "UPDATE consultas SET data = '$data',
            peso = '$peso', altura = '$altura', receita = '$receita', diagnostico = '$diagnostico' WHERE id = '$id'";
$insert = mysqli_query($conexao, $query);
if (!$insert) {
    echo "<script>alert('Erro ao atualizar os dados da consulta')</script>";
} else {
    echo "<script>alert('Dados atualizados com sucesso!')</script>";
}

header("refresh:0.5;url=consulta.php");
mysqli_close($conexao);

?>