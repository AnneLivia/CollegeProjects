<?php
session_start();
if (!isset($_SESSION['email'])) {
    header("location: login.php");
}

if ($_GET['id'] == 'undefined') {
    header("location: reservar_leito.php");
}


$email = $_SESSION['email'];
?>

<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Hospital Management System</title>
    <!-- BOOTSTRAP STYLES-->
    <link href="assets/css/bootstrap.css" rel="stylesheet" />
    <!-- FONTAWESOME STYLES-->
    <link href="assets/css/font-awesome.css" rel="stylesheet" />
    <!-- CUSTOM STYLES-->
    <link href="assets/css/custom.css" rel="stylesheet" />
    <!-- GOOGLE FONTS-->
    <link href='http://fonts.googleapis.com/css?family=Open+Sans' rel='stylesheet' type='text/css' />
</head>

<body>
    <div id="wrapper">
        <div class="navbar navbar-inverse navbar-fixed-top">
            <div class="adjust-nav">
                <div class="navbar-header">
                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".sidebar-collapse">
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                    <a class="navbar-brand" href="index.php"><img src="assets/img/icon_hospital_nav.png" id="iconHopNav" /> &nbsp;HOSPITAL MANAGEMENT SYSTEM</a>
                </div>
                <div class="navbar-collapse collapse">
                    <ul class="nav navbar-nav navbar-right">
                        <li id="setting_item_nav"><a href="settings.php"><img src="assets/img/setting_icon.png"/ id="setting_icon"></a></li>
                        <li id="logout_item_nav"><a id="Logout" href="#"><img src="assets/img/logout_icon.png"/ id="logout_icon"></a></li>
                    </ul>
                </div>
            </div>
        </div>
        <!-- /. NAV TOP  -->
        <nav class="navbar-default navbar-side" role="navigation">
            <div class="sidebar-collapse">
                <ul class="nav" id="main-menu">
                    <li class="text-center user-image-back">
                        <?php
                        $address = "";

                        $conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao com o servidor" . mysqli_connect_error());

                        $bd = mysqli_select_db($conexao, "hospital_management");

                        if (empty($bd)) {
                            die("Banco de dados não encontrado");
                        }

                        $query = "SELECT genero FROM adm WHERE email = '$email'";
                        $select = mysqli_query($conexao, $query);

                        if ($select) {
                            $genero = mysqli_fetch_array($select)['genero'];
                            if ($genero == "feminino") {
                                echo "<img src='assets/img/female.png' class='userImg img-responsive'/>";
                            } else {
                                echo "<img src='assets/img/male.png' class='userImg img-responsive'/>";
                            }
                        }

                        $query = "SELECT nomeCompleto FROM adm WHERE email = '$email'";
                        $select = mysqli_query($conexao, $query);
                        if ($select) {
                            $nome = mysqli_fetch_array($select)['nomeCompleto'];
                        }

                        $id = $_GET['id'];
                        $getTodasConsultas = "SELECT * FROM reserva_de_leitos WHERE id = '$id'";

                        $select = mysqli_query($conexao, $getTodasConsultas);
                        if (mysqli_num_rows($select) != 0) {
                            while ($info = mysqli_fetch_array($select)) {
                                $id = $info['id'];
                                $nome_paciente = $info['nome_paciente'];
                                $dataEntrada = $info['dataEntrada'];
                                $id_leito = $info['id_leito'];
                                $dataSaida = $info['dataSaida'];
                            }
                        }
                        $auxDate = "";
                        for ($i = 6; $i < 10; $i++)
                            $auxDate .= $dataEntrada[$i];
                        $auxDate .= '-';
                        for ($i = 3; $i < 5; $i++)
                            $auxDate .= $dataEntrada[$i];
                        $auxDate .= '-';
                        for ($i = 0; $i < 2; $i++)
                            $auxDate .= $dataEntrada[$i];
                        $dataEntrada = $auxDate;

                        $auxDate = "";
                        for ($i = 6; $i < 10; $i++)
                            $auxDate .= $dataSaida[$i];
                        $auxDate .= '-';
                        for ($i = 3; $i < 5; $i++)
                            $auxDate .= $dataSaida[$i];
                        $auxDate .= '-';
                        for ($i = 0; $i < 2; $i++)
                            $auxDate .= $dataSaida[$i];
                        $dataSaida = $auxDate;

                        mysqli_close($conexao);
                        ?>

                        <p id="userNome"><?php echo $nome; ?></p>
                    </li>
                    <li>
                        <a href="index.php"><img src="assets/img/home_menu.png" class="iconMenu" /> Inicio</a>
                    </li>
                    <li>
                        <a href="pacientes_ativos.php"><img src="assets/img/icon_patient_menu.png" class="iconMenu" /> Pacientes Ativos</a>
                    </li>
                    <li>
                        <a href="cadastrar_pacientes.php"><img src="assets/img/icon_patient_add_menu.png" class="iconMenu" /> Cadastrar Paciente</a>
                    </li>
                    <li>
                        <a href="consulta.php"><img src="assets/img/medical_appointment_menu.png" class="iconMenu" /> Consultas</a>
                    </li>
                    <li>
                        <a href="medicos_ativos.php"><img src="assets/img/icon_doctor_menu.png" class="iconMenu" /> Médicos Ativos</a>
                    </li>
                    <li>
                        <a href="cadastrar_medicos.php"><img src="assets/img/icon_doctor_add_menu.png" class="iconMenu" /> Cadastrar Médicos</a>
                    </li>
                    <li>
                        <a href="agenda_medica.php"><img src="assets/img/icon_agenda_menu.png" class="iconMenu" /> Agenda Médica</a>
                    </li>
                    <li>
                        <a href="agendar_consulta.php"><img src="assets/img/icon_calendar_menu.png" class="iconMenu" /> Agendar Consulta</a>
                    </li>
                    <li>
                        <a href="cadastrar_leito.php"><img src="assets/img/hospital_bed_menu.png" class="iconMenu" /> Cadastrar Leito</a>
                    </li>
                    <li>
                        <a href="reservar_leito.php"><img src="assets/img/hospital-bed-book_menu.png" class="iconMenu" /> Reservar Leito</a>
                    </li>
                </ul>
            </div>
        </nav>
        <!-- /. NAV SIDE  -->
        <div id="page-wrapper">
            <div id="page-inner">
                <div class="row">
                    <div class="col-md-12">
                        <img class="img-leitos-reservar-ativos  center-block" src="assets/img/bed_reservar_hosp_info.jpg" />
                        <h2 class="title_ativos-leito">Atualizar reserva de leito</h2>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-12">
                        <!-- Form Elements -->
                        <div class="panel panel-default painel_agenda_medica_atualizar">
                            <div class="row">
                                <div class="col-md-12">
                                    <form method="POST" action="atualizar_reservarleitoBD.php" id="leito_reservar_form_atualizar">
                                        <div class="form-row">
                                        <div class="form-group hide">
                                                <input type="text" class="form-control" placeholder="" name="id_reserva" value='<?php echo  $id ?>' readonly />
                                            </div>
                                            <div class="col-6">
                                                <label>Paciente</label><br />
                                                <select class="form-control select-style select-reservar-consulta" readonly name="Paciente_id" required>
                                                   <option value=""><?php echo $nome_paciente ?></option>";
                                                </select>
                                            </div>
                                            <div class="col-6">
                                                <label>Leito</label><br />
                                                <select class="form-control select-style select-reservar-leito" name="leito_id" required>
                                                    <option value=""> Selecione o leito disponível </option>
                                                    <?php

                                                    $conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

                                                    $bd = mysqli_select_db($conexao, "hospital_management");
                                                    if (empty($bd)) {
                                                        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
                                                        if (!$criaBD) {
                                                            die("Erro ao criar banco de dados");
                                                        }
                                                    }


                                                    if (mysqli_query($conexao, "SELECT * FROM leitos")) {

                                                        $getTodosMedicos = "SELECT * FROM leitos";

                                                        $select = mysqli_query($conexao, $getTodosMedicos);

                                                        if (mysqli_num_rows($select) != 0) {
                                                            $ii = 0;
                                                            while ($info = mysqli_fetch_array($select)) {
                                                                $tipo = $info['tipo'];
                                                                $id = $info['id'];
                                                                $available = $info['nPacientes'];
                                                                $capacidade = $info['quantidade'];
                                                                $status = $info['status'];
                                                                $vagas = $capacidade - $available;
                                                                $ii++;
                                                                if($id == $id_leito) {
                                                                    echo "<option value='$id' selected>$tipo - vagas: $vagas </option>";
                                                                } else if ($status === 'Ativo' && $vagas > 0) {
                                                                    echo "<option value='$id'>$tipo - vagas: $vagas </option>";
                                                                }
                                                            }
                                                        }
                                                    }

                                                    mysqli_close($conexao);
                                                    ?>
                                                </select>
                                            </div>
                                            <div class="col-6">
                                                <label>Data de entrada</label>
                                                <input type="date" class="form-control dataEntrada_reserva_de_leito" placeholder="" value="<?php echo $dataEntrada ?>" name="dataEntrada_reserva_de_leito" required />
                                            </div>
                                            <div class="col-6">
                                                <label>Data de saída</label>
                                                <input type="date" class="form-control dataSaida_reserva_de_leito" placeholder="" value="<?php echo $dataSaida ?>" name="dataSaida_reserva_de_leito" required />
                                            </div>
                                            <div class="col-6 center-block">
                                                <button type="submit" id="btn-reservar-leito-atualizar" class="btn-add1 btn btn-success rounded1">Reservar</button>
                                            </div>
                                        </div>
                                    </form>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
            <!-- End Form Elements -->
            <footer>
                <p class="text-center">
                    Developed by <a href="https://github.com/AnneLivia" target="u_black">Anne Livia</a><br />
                    © All Rights Reserved.
                    <script>
                        document.write(new Date().getFullYear())
                    </script>
                </p>
            </footer>
        </div>

    </div>

    </div>


    <!-- /. WRAPPER  -->
    <!-- SCRIPTS -AT THE BOTOM TO REDUCE THE LOAD TIME-->
    <!-- JQUERY SCRIPTS -->
    <script src="assets/js/jquery-1.10.2.js"></script>
    <!-- BOOTSTRAP SCRIPTS -->
    <script src="assets/js/bootstrap.min.js"></script>
    <!-- METISMENU SCRIPTS -->
    <script src="assets/js/jquery.metisMenu.js"></script>
    <!-- CUSTOM SCRIPTS -->
    <script src="assets/js/custom.js"></script>
</body>

</html>