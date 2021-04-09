<?php
    
    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
        
    $bd = mysqli_select_db($conexao, "hospital_management");
    if(empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
        if(!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }


    if(!mysqli_query($conexao, "SELECT * FROM pacientes")) {
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
        if(!$criaTabela) {
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

    $getEmail = "SELECT email FROM Pacientes WHERE email = '$email'";

    $selectEmail = mysqli_query($conexao, $getEmail);

    if(mysqli_num_rows($selectEmail) == 0 ) {
        $query = "INSERT INTO Pacientes(
            email, 
            nome,
            nascimento, 
            cpf,
            genero,
            cep,
            ncasa,
            telefone
        ) VALUES ('$email', '$nome','$nasc', '$cpf', '$genero', '$cep', '$ncasa', '$telefone')";
        $insert = mysqli_query($conexao, $query);
        if(!$insert) {
            echo "<script>alert('Erro no cadastro')</script>";
        } else {
            echo "<script>alert('Dados do paciente(a) $nome cadastrado com sucesso')</script>";
        }
    } else {
        echo "<script>alert('Paciente já está cadastrado')</script>";
    }
    header("refresh:0.5;url=pacientes_ativos.php");
    mysqli_close($conexao);
?>