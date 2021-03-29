<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
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

$email = $_POST['Paciente_email'];
$nome = $_POST['Paciente_nome'];
$cpf = $_POST['Paciente_cpf'];
$nasc = date("d/m/Y", strtotime($_POST['Paciente_nascimento']));
$genero = $_POST['Paciente_genero'];
$cep = $_POST['Paciente_cep'];
$ncasa = $_POST['Paciente_ncasa'];
$telefone = $_POST['Paciente_telefone'];
$atualEmail = $_POST['Paciente_email_atual'];



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

if (!$insert) {
    echo "<script>alert('Erro na atualização')</script>";
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
        } else {
            echo "<script>alert('Dados do paciente(a) $nome foi atualizado com sucesso')</script>";
        }
    } else {
        echo "<script>alert('Dados do paciente(a) $nome foi atualizado com sucesso')</script>";
    }
}

header("refresh:0.5;url=pacientes_ativos.php");
mysqli_close($conexao);

?>