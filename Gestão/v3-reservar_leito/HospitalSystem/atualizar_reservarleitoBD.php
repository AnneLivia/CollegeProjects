<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}

$datareserva = date("d/m/Y", strtotime($_POST['dataEntrada_reserva_de_leito']));
$datasaida = date("d/m/Y", strtotime($_POST['dataSaida_reserva_de_leito']));

$leito_id = $_POST['leito_id'];
$id = $_POST['id_reserva'];

// checar se o leito mudou
// pegar dados leito 
$getTodasConsultas = "SELECT * FROM reserva_de_leitos WHERE id = '$id'";

$select = mysqli_query($conexao, $getTodasConsultas);
$mudou_leito = false;
$antigo_id_leito = "";
if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        if ($leito_id != $info['id_leito']) {
            $mudou_leito = true;
        }
        $antigo_id_leito =  $info['id_leito'];
    }
}


if ($mudou_leito) {
    $getTodasConsultas = "SELECT * FROM leitos  WHERE id = '$leito_id'";

    $select = mysqli_query($conexao, $getTodasConsultas);
    if (mysqli_num_rows($select) != 0) {

        while ($info = mysqli_fetch_array($select)) {
            $tipo_leito = $info['tipo'];
            $nPacientes = $info['nPacientes'];
        }
    }

    $getTodasConsultas = "SELECT * FROM leitos WHERE id = '$antigo_id_leito'";

    $select = mysqli_query($conexao, $getTodasConsultas);
    if (mysqli_num_rows($select) != 0) {

        while ($info = mysqli_fetch_array($select)) {
            $nPacientesAntigo = $info['nPacientes'];
        }
    }
}

if ($mudou_leito) {
    $query = "UPDATE reserva_de_leitos SET dataEntrada = '$datareserva', dataSaida = '$datasaida',
            tipo_leito = '$tipo_leito', id_leito = '$leito_id' WHERE id = '$id'";

    // se atualizaou, atualizar o npacientes do novo id leito e do antigo
    $insert = mysqli_query($conexao, $query);

    $deuCerto = true;
    if (!$insert) {
        echo "<script>alert('Erro ao atualizar os dados da reserva.')</script>";
    } else {
        $nPacientes += 1;
        $nPacientesAntigo -= 1;
        $query = "UPDATE leitos SET nPacientes = '$nPacientes' WHERE id = '$leito_id'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            $deuCerto = false;
        }
        $query = "UPDATE leitos SET nPacientes = '$nPacientesAntigo' WHERE id = '$antigo_id_leito'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            $deuCerto = false;
        }

        if ($deuCerto) {
            echo "<script>alert('Dados da reserva foram atualizados com sucesso!')</script>";
        } else {
            echo "<script>alert('Erro ao atualizar os dados em leitos!')</script>";
        }
    }
} else {
    $query = "UPDATE reserva_de_leitos SET dataEntrada = '$datareserva', dataSaida = '$datasaida' WHERE id = '$id'";
    $insert = mysqli_query($conexao, $query);

    if (!$insert) {
        echo "<script>alert('Erro ao atualizar os dados da reserva.')</script>";
    } else {
        echo "<script>alert('Reserva atualizada com sucesso!')</script>";
    }
}

header("refresh:0.5;url=reservar_leito.php");
mysqli_close($conexao);
