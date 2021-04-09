<?php
$id = $_GET['id'];

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}

// pegar dados medico e data consulta
$getTodasConsultas = "SELECT * FROM agendamento WHERE id = '$id'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $id_agenda = $info['id_agenda'];
    }
}

// obter npacientes em agenda para decrementar
$getTodasConsultas = "SELECT * FROM agenda WHERE id = '$id_agenda'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $nPacientes = $info['nPacientes'];
    }
}



// detelanto a tababela, deve-se decrementar o npacientes em agenda para liberar espaço para outro paciente
if (mysqli_query($conexao, "SELECT * FROM agendamento")) {
    $query = "DELETE FROM agendamento WHERE id = '$id'";
    $delete = mysqli_query($conexao, $query);
    if ($delete) {
        // se realizado com sucesso atualizar o npaciente em agenda
        $nPacientes -= 1;
        $query = "UPDATE agenda SET nPacientes = '$nPacientes' WHERE id = '$id_agenda'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro ao atualizar os dados da agenda.')</script>";
        } else {
            echo "<script>alert('Dados do agendamento da consulta foi removido com sucesso!')</script>";
        }
    } else {
        echo "<script>alert('Erro ao deletar a informação do banco de dados!')</script>";
    }
}
header("refresh:0.5;url=agendar_consulta.php");
mysqli_close($conexao);
