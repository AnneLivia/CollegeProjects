<?php

session_start();
$email = $_SESSION['email'];

$id = $_GET['id'];

$conexao = mysqli_connect('localhost', 'root', '') or die('Erro de conexão' . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "donate_system");

// se banco de dados não existe, criar outro
if (empty($bd)) {
    $query = "CREATE DATABASE donate_system DEFAULT CHARSET=utf8";
    $createBD = mysqli_query($conexao, $query);
    // se o banco de dados não tiver sido criado
    if (!$createBD) {
        die("Erro ao criar banco de dados");
    }
}

// se chegou aqui, BD existe ou foi criado
// agora verificar se tabela users existe, se não existir, criar
$query = "SELECT * FROM desejo_doar";
$select = mysqli_query($conexao, $query);
// se não existir, criar a tabela
if (!$select) {
    $query = "CREATE TABLE desejo_doar (
                id int(100) NOT NULL AUTO_INCREMENT,
                id_requisicao int(100) NOT NULL,
                email_doador varchar(200) NOT NULL,
                status varchar(200) NOT NULL,
                entregue BOOLEAN NOT NULL,
                data_solicitacao varchar(20) NOT NULL,
                PRIMARY KEY(id)
            ) DEFAULT CHARSET=utf8";

    $createTable = mysqli_query($conexao, $query);

    if (!$createTable) {
        die("Tabela não foi criada com sucesso!");
    }
}

$falseVariable = false;
// aprovado pode ser, aguardando, rejeitado ou aprovado.
$today = date("d/m/Y");

$query = "INSERT INTO desejo_doar 
        (id_requisicao, email_doador, status, entregue, data_solicitacao) VALUES 
        ('$id', '$email', 'AGUARDANDO', '$falseVariable', '$today')";

$insert = mysqli_query($conexao, $query);
if (!$insert) {
    echo "<script>alert('Erro ao acionar doação para a requisição selecionada. Tente novamente!')</script>";
} else {
    echo "<script>alert('Você demonstrou interesse em doar o(s) alimento(s) da requisição selecionada. Aguarde a aprovação do requerente.')</script>";
    // alterar status do requisicoes_de_doacoes para acionado.
    $query = "UPDATE requisicoes_de_doacoes SET status = 'ACIONADO' WHERE id = '$id'";
    $insert = mysqli_query($conexao, $query);
    if (!$insert) {
        echo "<script>alert('Erro ao atualizar o status na tabela de requisições de doação.')</script>";
    }
}

header("refresh: 0.5; url = minhas_doacoes.php");
mysqli_close($conexao);
