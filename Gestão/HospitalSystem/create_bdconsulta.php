<?php
session_start();
if (isset($_SESSION['email_Paciente'])) {
    $conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

    $bd = mysqli_select_db($conexao, "hospital_management");
    if (empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
        if (!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }


    if (!mysqli_query($conexao, "SELECT * FROM Consultas")) {
        $table = "CREATE TABLE Consultas (
                id int NOT NULL AUTO_INCREMENT,
                emailPaciente varchar(300) NOT NULL,
                nome varchar(300) NOT NULL,
                data varchar(20) NOT NULL,
                peso varchar(10) NOT NULL,
                altura varchar(10) NOT NULL,
                medico_nome varchar(300) NOT NULL,
                medico_id INT NOT NULL,
                diagnostico varchar(500) NOT NULL,
                receita varchar(500) NOT NULL,
                PRIMARY KEY(id)
            )  DEFAULT CHARSET=utf8";
        $criaTabela = mysqli_query($conexao, $table);
        if (!$criaTabela) {
            die("Erro ao criar tabela");
        }
    }

    $nome = $_POST['Paciente_nome'];
    $data = date("d/m/Y", strtotime($_POST['data']));
    $peso = $_POST['Paciente_peso'];
    $altura = $_POST['Paciente_altura'];
    $medico_id = $_POST['Medico_id'];
    $medico_nome = " ";
    $getTodasConsultas = "SELECT * FROM medicos WHERE id = '$medico_id'";

    $select = mysqli_query($conexao, $getTodasConsultas);

    if (mysqli_num_rows($select) != 0) {
       
        while ($info = mysqli_fetch_array($select)) {
            $medico_nome = $info['nome'];
        }
            
    }

    $receita = $_POST['Paciente_receita'];
    $diagnostico = $_POST['Paciente_diagnostico'];
    $email_paciente = $_SESSION['email_Paciente'];


    $query = "INSERT INTO Consultas (
                emailPaciente,
                nome,
                medico_nome,
                data,
                peso,
                altura,
                medico_id,
                diagnostico,
                receita
            ) VALUES ('$email_paciente', '$nome', '$medico_nome', '$data', '$peso', '$altura', '$medico_id', '$diagnostico', '$receita')";
    $insert = mysqli_query($conexao, $query);
    if (!$insert) {
        echo "<script>alert('Erro na inserção dos dados')</script>";
    } else {
        echo "<script>alert('Consulta do Paciente(a) $nome cadastrado com sucesso')</script>";
        // unset as sessões para que outra consulta de outro Paciente possa ser inserida
        unset($_SESSION['nome_Paciente']);
        unset($_SESSION['email_Paciente']);
    }
}

header("refresh:0.5;url=consulta.php");
mysqli_close($conexao);
