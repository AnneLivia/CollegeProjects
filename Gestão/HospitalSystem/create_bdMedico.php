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
        if(!$criaTabela) {
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

    $getCRM = "SELECT crm FROM Medicos WHERE crm = '$crm'";

    $selectCRM = mysqli_query($conexao, $getCRM);

    if(mysqli_num_rows($selectCRM) == 0 ) {
        $query = "INSERT INTO Medicos( 
            nome,
            nascimento, 
            crm,
            genero,
            cep,
            ncasa,
            telefone,
            especialidade
        ) VALUES ('$nome','$nasc', '$crm', '$genero', '$cep', '$ncasa', '$telefone', '$especialidade')";
        $insert = mysqli_query($conexao, $query);
        if(!$insert) {
            echo "<script>alert('Erro no cadastro')</script>";
        } else {
            echo "<script>alert('Dados do Medico(a) $nome cadastrado com sucesso')</script>";
        }
    } else {
        echo "<script>alert('Médico(a) já está cadastrado')</script>";
    }
    header("refresh:0.5;url=medicos_ativos.php");
    mysqli_close($conexao);
?>
