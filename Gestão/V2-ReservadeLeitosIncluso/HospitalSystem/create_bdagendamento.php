<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}


if (!mysqli_query($conexao, "SELECT * FROM agendamento")) {
    $table = "CREATE TABLE agendamento (
            id int NOT NULL AUTO_INCREMENT,
            id_agenda int not null,
            nome_medico varchar(300) NOT NULL,
            id_medico int NOT NULL,
            nome_paciente varchar(300) NOT NULL,
            id_paciente int NOT NULL,
            data varchar(20) NOT NULL,
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
    $criaTabela = mysqli_query($conexao, $table);
    if (!$criaTabela) {
        die("Erro ao criar tabela");
    }
}

$id_paciente = $_POST['Paciente_id'];
$id_agenda = $_POST['AgendaMedica_id'];

$medico_nome = "";
$id_medico = "";
$paciente_nome = "";
$data = "";

$getTodasConsultas = "SELECT * FROM pacientes WHERE id = '$id_paciente'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $paciente_nome = $info['nome'];
    }
}

// pegar dados medico e data consulta
$getTodasConsultas = "SELECT * FROM agenda WHERE id = '$id_agenda'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $medico_nome = $info['nome_medico'];
        $id_medico = $info['id_medico'];
        $data = $info['data'];
        $nPacientes = $info['nPacientes'];
    }
}

// atualizar npaciente se a inserção der certo.

// verificar se o paciente já não agendou para o medico e mesma data
$getInfo = "SELECT * FROM agendamento WHERE id_medico = '$id_medico' AND data = '$data' AND id_paciente = $id_paciente";

$selectInfo = mysqli_query($conexao, $getInfo);
// se não tiver, colocar
if (mysqli_num_rows($selectInfo) == 0) {
    $query = "INSERT INTO agendamento(
            id_agenda,
            nome_medico, 
            id_medico,
            nome_paciente,
            id_paciente,
            data
        ) VALUES ('$id_agenda', '$medico_nome', '$id_medico','$paciente_nome', '$id_paciente', '$data')";
    $insert = mysqli_query($conexao, $query);
    if (!$insert) {
        echo "<script>alert('Erro na inserção')</script>";
    } else {
        // se realizado com sucesso atualizar o npaciente em agenda
        $nPacientes+=1;
        $query = "UPDATE agenda SET nPacientes = '$nPacientes' WHERE id = '$id_agenda'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro ao atualizar os dados da agenda.')</script>";
        } else {
            echo "<script>alert('Agendamento realizado com sucesso!')</script>";
        }
    }
} else {
    echo "<script>alert('O paciente informado já agendou uma consulta com o médico na data especificada.')</script>";
}
header("refresh:0.5;url=agendar_consulta.php");
mysqli_close($conexao);
