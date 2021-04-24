<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "donate_system");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE donate_system DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}


if (!mysqli_query($conexao, "SELECT * FROM pacientes")) {
    $table = "CREATE TABLE Pacientes (
            id int NOT NULL AUTO_INCREMENT,
            email varchar(300) NOT NULL,
            nome varchar(300) NOT NULL,
            nascimento varchar(20) NOT NULL,
            cpf varchar(20) NOT NULL,
            genero varchar(20) NOT NULL,
            cep varchar(20) NOT NULL,
            ncasa INT NOT NULL,
            telefone varchar(40) NOT NULL,
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
    $criaTabela = mysqli_query($conexao, $table);
    if (!$criaTabela) {
        die("Erro ao criar tabela");
    }
}

$id_paciente = $_POST['id_paciente'];
$email = $_POST['user_email'];
$nome = $_POST['user_nome'];
$cpf = $_POST['Paciente_cpf'];
$nasc = date("d/m/Y", strtotime($_POST['user_dataLimite']));
$genero = $_POST['Paciente_genero'];
$cep = $_POST['Paciente_cep'];
$ncasa = $_POST['Paciente_ncasa'];
$telefone = $_POST['user_telefone'];
$atualEmail = $_POST['user_email_atual'];

$query = "UPDATE Pacientes SET 
        nome = '$nome',
        email = '$email',
        nascimento = '$nasc',
        cpf = '$cpf',
        genero = '$genero',
        cep = '$cep',
        ncasa = '$ncasa',
        telefone = '$telefone' WHERE email = '$atualEmail'";
$insert = mysqli_query($conexao, $query);

$deuCerto = true;

if (!$insert) {
    echo "<script>alert('Erro na atualização da tabela pacientes')</script>";
} else {
    // atualizar dado em consulta se houver
    if (mysqli_query($conexao, "SELECT * FROM consultas")) {
        $query = "UPDATE consultas SET 
                nome = '$nome',
                emailPaciente = '$email'
                WHERE emailPaciente = '$atualEmail'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro na atualização da tabela consulta.')</script>";
            $deuCerto = false;
        } 
    } 

    // atualizar dado em agendamento se houver
    if (mysqli_query($conexao, "SELECT * FROM agendamento")) {
        $query = "UPDATE agendamento SET 
                nome_paciente = '$nome'
                WHERE id_paciente = '$id_paciente'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro na atualização da tabela agendamento.')</script>";
            $deuCerto = false;
        } 
    } 

    // atualizar dado em agendamento se houver
    if (mysqli_query($conexao, "SELECT * FROM reserva_de_leitos")) {
        $query = "UPDATE reserva_de_leitos SET 
                nome_paciente = '$nome'
                WHERE id_paciente = '$id_paciente'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro na atualização da tabela reserva_de_leitos.')</script>";
            $deuCerto = false;
        } 
    } 

    if($deuCerto) {
        echo "<script>alert('Dados do paciente(a) $nome foi atualizado com sucesso')</script>";
    }
}

header("refresh:0.5;url=desejo_doar.php");
mysqli_close($conexao);

?>