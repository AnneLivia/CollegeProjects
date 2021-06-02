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

// pegar dados da reserva para obter o id do leito
$getTodasConsultas = "SELECT * FROM reserva_de_leitos WHERE id = '$id'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $id_leito = $info['id_leito'];
    }
}

// obter npacientes em leitos para decrementar
$getTodasConsultas = "SELECT * FROM leitos WHERE id = '$id_leito'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $nPacientes = $info['nPacientes'];
    }
}

// detelanto a tababela, deve-se decrementar o npacientes em leitos para liberar espaço para outro paciente
if (mysqli_query($conexao, "SELECT * FROM reserva_de_leitos")) {
    $query = "DELETE FROM reserva_de_leitos WHERE id = '$id'";
    $delete = mysqli_query($conexao, $query);
    if ($delete) {
        // se realizado com sucesso atualizar o npaciente em leitos
        $nPacientes -= 1;
        $query = "UPDATE leitos SET nPacientes = '$nPacientes' WHERE id = '$id_leito'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro ao atualizar os dados do leito.')</script>";
        } else {
            echo "<script>alert('Reserva removida com sucesso!')</script>";
        }
    } else {
        echo "<script>alert('Erro ao deletar a informação do banco de dados!')</script>";
    }
}
header("refresh:0.5;url=reservar_leito.php");
mysqli_close($conexao);
