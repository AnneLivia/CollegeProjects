<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}


if (!mysqli_query($conexao, "SELECT * FROM reserva_de_leitos")) {
    $table = "CREATE TABLE reserva_de_leitos (
            id int NOT NULL AUTO_INCREMENT,
            id_leito int not null,
            tipo_leito varchar(300) NOT NULL,
            id_paciente int NOT NULL,
            nome_paciente varchar(300) NOT NULL,
            dataEntrada varchar(20) NOT NULL,
            dataSaida varchar(20),
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
    $criaTabela = mysqli_query($conexao, $table);
    if (!$criaTabela) {
        die("Erro ao criar tabela");
    }
}

$id_paciente = $_POST['Paciente_id'];
$id_leito = $_POST['leito_id'];
$data =  date("d/m/Y", strtotime($_POST['data_reserva_de_leito']));

$paciente_nome = "";
$tipo_leito = "";

$getTodasConsultas = "SELECT * FROM pacientes WHERE id = '$id_paciente'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $paciente_nome = $info['nome'];
    }
}

// pegar dados medico e data consulta
$getTodasConsultas = "SELECT * FROM leitos WHERE id = '$id_leito'";

$select = mysqli_query($conexao, $getTodasConsultas);

if (mysqli_num_rows($select) != 0) {

    while ($info = mysqli_fetch_array($select)) {
        $tipo_leito = $info['tipo'];
        $nPacientes = $info['nPacientes'];
    }
}

// atualizar npaciente se a inserção der certo.
// verificar se o paciente já não reservou o leito indicado para a data informada
$getInfo = "SELECT * FROM reserva_de_leitos WHERE id_paciente = '$id_paciente' AND id_leito = '$id_leito' AND dataEntrada = '$data'";

$selectInfo = mysqli_query($conexao, $getInfo);
// se não tiver, colocar
if (mysqli_num_rows($selectInfo) == 0) {
    $query = "INSERT INTO reserva_de_leitos(
            id_leito,
            tipo_leito, 
            id_paciente,
            nome_paciente,
            dataEntrada,
            dataSaida
        ) VALUES ('$id_leito', '$tipo_leito', '$id_paciente','$paciente_nome', '$data', 'INDETERMINADO')";
    $insert = mysqli_query($conexao, $query);
    if (!$insert) {
        echo "<script>alert('Erro na inserção')</script>";
    } else {
        // se realizado com sucesso atualizar o npaciente em LEITOS
        $nPacientes+=1;
        $query = "UPDATE leitos SET nPacientes = '$nPacientes' WHERE id = '$id_leito'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro ao atualizar os dados do leito.')</script>";
        } else {
            echo "<script>alert('Reserva de leito realizada com sucesso!')</script>";
        }
    }
} else {
    echo "<script>alert('O paciente informado já possui reserva para o leito na data especificada.')</script>";
}
header("refresh:0.5;url=reservar_leito.php");
mysqli_close($conexao);
