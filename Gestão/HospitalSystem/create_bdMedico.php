<?php
    
    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
        
    $bd = mysqli_select_db($conexao, "hospital_management");
    if(empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
        if(!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }


    if(!mysqli_query($conexao, "SELECT * FROM Medicos")) {
        $table = "CREATE TABLE Medicos (
            id int(100) NOT NULL AUTO_INCREMENT,
            nome varchar(20) NOT NULL,
            nascimento varchar(20) NOT NULL,
            cpf varchar(20) NOT NULL,
            sexo varchar(20) NOT NULL,
            cidade varchar(20) NOT NULL,
            bairro varchar(20) NOT NULL,
            cep varchar(20) NOT NULL,
            ncasa INT NOT NULL,
            complemento varchar(60) NOT NULL,
            email varchar(60) NOT NULL,
            telefone varchar(40) NOT NULL,
            treinamento varchar(100) NOT NULL,
            dias varchar(100) NOT NULL,
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
        $criaTabela = mysqli_query($conexao, $table);
        if(!$criaTabela) {
            die("Erro ao criar tabela");
        } 
    }

    $email = $_POST['Medico_email'];
    $nome = $_POST['Medico_nome'];
    $cpf = $_POST['Medico_cpf'];
    $nasc = date("d/m/Y", strtotime($_POST['Medico_nascimento']));
    $sexo = $_POST['Medico_sexo'];
    $cidade = $_POST['Medico_cidade'];
    $bairro = $_POST['Medico_bairro'];
    $cep = $_POST['Medico_cep'];
    $ncasa = $_POST['Medico_ncasa'];
    $complemento = $_POST['Medico_complemento'];
    $telefone = $_POST['Medico_telefone'];
    $treinamento = $_POST['Medico_treinamento'];
    $dias = $_POST['Medico_days'];
   // echo "'$email', '$nome','$nasc', '$cpf', '$nasc', '$sexo', '$peso', '$altura', '$cidade', '$bairro', '$cep', '$ncasa', '$complemento'";
    $getEmail = "SELECT email FROM Medicos WHERE email = '$email'";

    $selectEmail = mysqli_query($conexao, $getEmail);

    if(mysqli_num_rows($selectEmail) == 0 ) {
        $query = "INSERT INTO Medicos(
            email, 
            nome,
            nascimento, 
            cpf,
            sexo,
            cidade,
            bairro,
            cep,
            ncasa,
            complemento,
            telefone,
            treinamento,
            dias
        ) VALUES ('$email', '$nome','$nasc', '$cpf', '$sexo', '$cidade', '$bairro', '$cep', '$ncasa', '$complemento', '$telefone', '$treinamento', '$dias')";
        $insert = mysqli_query($conexao, $query);
        if(!$insert) {
            echo "<script>alert('Erro no cadastro')</script>";
        } else {
            echo "<script>alert('Dados do Medico(a) $nome cadastrado com sucesso')</script>";
        }
    } else {
        echo "<script>alert('Email já cadastrado')</script>";
    }
    header("refresh:0.5;url=index.php");
    mysqli_close($conexao);
?>
