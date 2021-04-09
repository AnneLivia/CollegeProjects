<?php

session_start();

// se sessão está setada, então existe tabela ADM
if (isset($_SESSION['email'])) {

    $email = $_SESSION['email'];
    $email_novo = $_POST['email_adm'];

    if (!filter_var($email_novo, FILTER_VALIDATE_EMAIL)) {
        echo "<script>alert('Endereço de email inválido')</script>";
        header("refresh: 0.5; url = settings.php");
    } else {


        $senha = $_POST['setting_senha_nova1'];
        $nome = $_POST['nome_adm'];

        $conexao = mysqli_connect('localhost', 'root', '') or die('Erro de conexão' . mysqli_connect_error());

        $bd = mysqli_select_db($conexao, "hospital_management");

        // se banco de dados não existe, criar outro
        if (empty($bd)) {
            $query = "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8";
            $createBD = mysqli_query($conexao, $query);
            // se o banco de dados não tiver sido criado
            if (!$createBD) {
                die("Erro ao criar banco de dados");
            }
        }

        // se chegou aqui, BD existe ou foi criado
        // agora verificar se tabela adm existe, se não existir, criar
        $query = "SELECT * FROM adm";
        $select = mysqli_query($conexao, $query);
        // se não existir, criar a tabela
        if (!$select) {
            $query = "CREATE TABLE adm (
                id int(100) NOT NULL AUTO_INCREMENT,
                email varchar(200) NOT NULL,
                senha varchar(30) NOT NULL,
                genero varchar(20) NOT NULL,
                cpf varchar(30) NOT NULL,
                nomeCompleto varchar(200) NOT NULL,
                PRIMARY KEY(id)
            ) DEFAULT CHARSET=utf8";

            $createTable = mysqli_query($conexao, $query);

            if (!$createTable) {
                die("Tabela não foi criada com sucesso!");
            }
        }

        $search_element = mysqli_query($conexao, "SELECT * FROM adm WHERE email = '$email'");

        // se senha não estiver setada, pega a senha atual no bd para mante-lá
        if (!$senha) {
            $query = "SELECT senha FROM adm WHERE email = '$email'";
            $select = mysqli_query($conexao, $query);

            if ($select) {
                $senhaAtual = mysqli_fetch_array($select)['senha'];
                $senha = $senhaAtual;
            }
        }

        // se nome não estiver setado, pega o nome atual no bd para mante-lo
        if (!$nome) {
            $query = "SELECT nomeCompleto FROM adm WHERE email = '$email'";
            $select = mysqli_query($conexao, $query);

            if ($select) {
                $nomeAtual = mysqli_fetch_array($select)['nomeCompleto'];
                $nome = $nomeAtual;
            }
        }

        $query = "UPDATE adm SET email = '$email_novo',
            senha = '$senha', nomeCompleto = '$nome' WHERE email = '$email'";
        $insert = mysqli_query($conexao, $query);
        if (!$insert) {
            echo "<script>alert('Erro ao atualizar os dados do cadastro')</script>";
        } else {
            echo "<script>alert('Dados atualizados com sucesso!')</script>";

            $_SESSION['email'] = $email_novo;
            $_SESSION['senha'] = $senha;
        }

        header("refresh: 0.5; url = settings.php");
        mysqli_close($conexao);
    }
}

?>
