<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}


if (!mysqli_query($conexao, "SELECT * FROM Medicos")) {
    $table = "CREATE TABLE Medicos (
        id INT NOT NULL AUTO_INCREMENT,
        nome varchar(300) NOT NULL,
        nascimento varchar(20) NOT NULL,
        crm varchar(50) NOT NULL,
        genero varchar(20) NOT NULL,
        cep varchar(20) NOT NULL,
        ncasa INT NOT NULL,
        telefone varchar(40) NOT NULL,
        especialidade varchar(300) NOT NULL,
        PRIMARY KEY(id)
    )  DEFAULT CHARSET=utf8";
    $criaTabela = mysqli_query($conexao, $table);
    if (!$criaTabela) {
        die("Erro ao criar tabela");
    }
}

$nome = $_POST['Medico_nome'];
$crm = $_POST['Medico_crm'];
$nasc = date("d/m/Y", strtotime($_POST['Medico_nascimento']));
$genero = $_POST['Medico_genero'];
$cep = $_POST['Medico_cep'];
$ncasa = $_POST['Medico_ncasa'];
$telefone = $_POST['Medico_telefone'];
$especialidade = $_POST['Medico_especialidade'];
$medicoID = $_POST['medico_id'];


$query = "UPDATE medicos SET 
        nome = '$nome',
        telefone = '$telefone',
        nascimento = '$nasc',
        crm = '$crm',
        genero = '$genero',
        cep = '$cep',
        ncasa = '$ncasa',
        especialidade = '$especialidade' WHERE id = '$medicoID'";
$insert = mysqli_query($conexao, $query);

$deucerto = true;

if (!$insert) {
    echo "<script>alert('Erro na atualização da tabela médicos')</script>";
} else {
    // se o usuario remover o medico, o dado continuara salvo no banco de dados porque o que importa é deixar
    // os dados la mesmo que o medico saia do hospital
    // atualizar dado em consulta se houver
    if (mysqli_query($conexao, "SELECT * FROM consultas")) {
        $query = "UPDATE consultas SET 
                medico_nome = '$nome'
                WHERE medico_id = '$medicoID'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro na atualização da tabela consultas')</script>";
            $deucerto = false;
        } 
    }

    
    // fazer a mesma atualização para a tabela de agenda se houver
    if (mysqli_query($conexao, "SELECT * FROM agenda")) {
        $query = "UPDATE agenda SET 
                nome_medico = '$nome'
                WHERE id_medico = '$medicoID'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro na atualização da tabela agenda')</script>"; 
            $deucerto = false;
        }
    }

    // fazer a mesma atualização para a tabela de agendamento se houver
    if (mysqli_query($conexao, "SELECT * FROM agendamento")) {
        $query = "UPDATE agendamento SET 
                nome_medico = '$nome'
                WHERE id_medico = '$medicoID'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro na atualização da tabela agendamento')</script>"; 
            $deucerto = false;
        }
    }

    if($deucerto) {
        echo "<script>alert('Dados do médico foi atualizado com sucesso.')</script>";
    }
}

header("refresh:0.5;url=medicos_ativos.php");
mysqli_close($conexao);
