<?php
    
    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
        
    $bd = mysqli_select_db($conexao, "hospital_management");
    if(empty($bd)) {
        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
        if(!$criaBD) {
            die("Erro ao criar banco de dados");
        }
    }


    if(!mysqli_query($conexao, "SELECT * FROM agenda")) {
        $table = "CREATE TABLE agenda (
            id int NOT NULL AUTO_INCREMENT,
            nome_medico varchar(300) NOT NULL,
            id_medico int NOT NULL,
            capacidade int NOT NULL,
            data varchar(20) NOT NULL,
            PRIMARY KEY(id)
        )  DEFAULT CHARSET=utf8";
        $criaTabela = mysqli_query($conexao, $table);
        if(!$criaTabela) {
            die("Erro ao criar tabela");
        } 
    }

    $id_medico = $_POST['Medico_id_agenda'];
    $medico_nome = " ";
    $getTodasConsultas = "SELECT * FROM medicos WHERE id = '$id_medico'";

    $select = mysqli_query($conexao, $getTodasConsultas);

    if (mysqli_num_rows($select) != 0) {

        while ($info = mysqli_fetch_array($select)) {
            $medico_nome = $info['nome'];
        }
    }


    $capacidade = $_POST['capacidade_agenda'];
    $date = date("d/m/Y", strtotime($_POST['data_agenda']));

    // verficiar se o medico já não tem agenda para essa data
    $getInfo = "SELECT * FROM agenda WHERE id_medico = '$id_medico' AND data = '$date'";

    $selectInfo = mysqli_query($conexao, $getInfo);
    // se não tiver, colocar
    if(mysqli_num_rows($selectInfo) == 0 ) {
        $query = "INSERT INTO agenda(
            nome_medico, 
            id_medico,
            capacidade, 
            data
        ) VALUES ('$medico_nome', '$id_medico','$capacidade', '$date')";
        $insert = mysqli_query($conexao, $query);
        if(!$insert) {
            echo "<script>alert('Erro na inserção')</script>";
        } else {
            echo "<script>alert('Agenda cadastrada com sucesso')</script>";
        }
    } else {
        echo "<script>alert('A Data da consulta informada para $medico_nome já está inserida no sistema')</script>";
    }
    header("refresh:0.5;url=agenda_medica.php");
    mysqli_close($conexao);
?>