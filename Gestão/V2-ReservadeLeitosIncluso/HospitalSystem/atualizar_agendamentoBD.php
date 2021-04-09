<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}

$Agenda_id = $_POST['Agenda_id'];
$id = $_POST['id_agendamento'];

// checar se o usuario escolheu outro medico e data.
$getTodasConsultas = "SELECT * FROM agendamento WHERE id = '$id'";

$select = mysqli_query($conexao, $getTodasConsultas);

$trocou = 0;

if (mysqli_num_rows($select) != 0) {
    while ($info = mysqli_fetch_array($select)) {
        if ($info['id_agenda'] !== $Agenda_id) {
            // pegar o id da antiga selecao para poder alterar capacidade no npaciente
            $id_antigo_agenda = $info['id_agenda'];
            $trocou = 1;
            break;
        }
    }
}


$id_medico  = "";
$nome_medico  = "";
$data  = "";
$nPaciente = "";
$nPaciente = "";

if ($trocou == 1) {
    $getTodasConsultas = "SELECT * FROM agenda WHERE id = '$Agenda_id'";
    $select = mysqli_query($conexao, $getTodasConsultas);

    if (mysqli_num_rows($select) != 0) {
        while ($info = mysqli_fetch_array($select)) {
            // se entrar aqui é porque o usuario escolheu outra data.
            // já que a agenda já possui o id do médico, a data da consulta o nome do medico, pegar todos os dados logo
            $id_medico = $info['id_medico'];
            $nome_medico = $info['nome_medico'];
            $data = $info['data'];
            $nPaciente = $info['nPacientes'];

            break;
        }
    }

    // agora atualizar os dados necessarios
    $query = "UPDATE agendamento SET data = '$data', nome_medico = '$nome_medico', 
    id_medico = '$id_medico', id_agenda = '$Agenda_id' WHERE id = '$id'";

    $deuCerto = true;
    $insert = mysqli_query($conexao, $query);
    if (!$insert) {
        echo "<script>alert('Erro ao atualizar os dados do agendamento.')</script>";
    } else {
        $nPaciente++;
        // agora atualizar os dados necessarios, na escolha atual, aumenta o nPacientes
        $query = "UPDATE agenda SET nPacientes = '$nPaciente' WHERE id = '$Agenda_id'";
        $insert = mysqli_query($conexao, $query);
        if ($insert) {
            $getTodasConsultas = "SELECT * FROM agenda WHERE id = '$id_antigo_agenda'";
            $select = mysqli_query($conexao, $getTodasConsultas);
            if (mysqli_num_rows($select) != 0) {
                while ($info = mysqli_fetch_array($select)) {
                    $nPacientes = $info['nPacientes'];
                    break;
                }
            }

            $nPacientes--;
            // agora atualizar os dados necessarios, na escolha antiga, diminui o nPacientes
            $query = "UPDATE agenda SET nPacientes = '$nPacientes' WHERE id = '$id_antigo_agenda'";
            $insert = mysqli_query($conexao, $query);
            if ($insert) {
                echo "<script>alert('Dados atualizados com sucesso!')</script>";
            } else {
                echo "<script>alert('Erro ao atualizar os dados da agenda médica.')</script>";
            }
        } else {
            echo "<script>alert('Erro ao atualizar os dados da agenda médica.')</script>";
        }
    }
}


header("refresh:0.5;url=agendar_consulta.php");
mysqli_close($conexao);
