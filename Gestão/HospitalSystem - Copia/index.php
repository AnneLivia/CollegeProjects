<?php
session_start();
if (!isset($_SESSION['email'])) {
    header("location: login.php");
}

$email = $_SESSION['email'];
?>

<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">

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
                </ul>
            </div>
        </nav>
        <!-- /. NAV SIDE  -->
        <div id="page-wrapper">
            <div id="page-inner">

                <div class="row">
                    <div class="col-md-12 main-index-presentation">
                        <h2 class="text-center"> SISTEMA DE GERÊNCIAMENTO DE HOSPITAIS </h2>
                        <img src="assets/img/index_logo.jpg" />
                        <h3 class="text-center">
                            Este sistema possui vários recursos que permitem informatizar os principais procedimentos hospitalares,
                            incluindo o controle e organização de informações sobre médicos e pacientes,
                            marcação de consultas, relatórios e outros módulos importantes que proporcionam uma
                            gestão eficiente e eficaz dos processos clínicos.
                        </h3>
                        <hr/>
                        <h4 class="text-center"> Sistema desenvolvido pela <a href="https://www.github.com/annelivia" target="u_black">Anne Livia. </a></h4>
                        <h4 class="text-center"> © Todos os direitos reservados. </h4>
                        <hr/>
                    </div>
                    <div class="col-md-12">
                        <h5 class="med_pat_title_table center"><img src="assets/img/icon_titles_emphasis.png" class="title_session" /> &nbsp; Informações Gerais</h5>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-6">
                        <h5 class="med_pat_title_table">Pacientes</h5>
                        <div class="table-responsive">
                            <table class="table table-hover2 table-index-pacienteativo">
                                <thead>
                                    <tr class="table_paciente thead-dark">
                                        <th>Nome</th>
                                        <th>Email</th>
                                    </tr>
                                </thead>
                                <tbody>
                                    <?php

                                    $conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

                                    $bd = mysqli_select_db($conexao, "hospital_management");
                                    if (empty($bd)) {
                                        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
                                        if (!$criaBD) {
                                            die("Erro ao criar banco de dados");
                                        }
                                    }


                                    if (mysqli_query($conexao, "SELECT * FROM pacientes")) {

                                        $getTodosPacientes = "SELECT * FROM pacientes";

                                        $select = mysqli_query($conexao, $getTodosPacientes);
                                        $i = 1;
                                        if (mysqli_num_rows($select) != 0) {
                                            while ($info = mysqli_fetch_array($select) and $i <= 5) {
                                                $name = $info['nome'];
                                                $email = $info['email'];
                                                echo "<tr>
                                                    <td>$name</td>
                                                    <td>$email</td>
                                                </tr>";
                                                $i++;
                                            }
                                        }
                                    }

                                    mysqli_close($conexao);
                                    ?>
                                </tbody>
                            </table>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col-md-6">
                            <h5 class="med_pat_title_table">Médicos</h5>
                            <div class="table-responsive">
                                <table class="table table-hover2 table-index-medicoativo">
                                    <thead>
                                        <tr class="table_medico thead-dark">
                                            <th>Nome</th>
                                            <th>Especialidade</th>
                                        </tr>
                                    </thead>
                                    <tbody>
                                        <?php

                                        $conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

                                        $bd = mysqli_select_db($conexao, "hospital_management");
                                        if (empty($bd)) {
                                            $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
                                            if (!$criaBD) {
                                                die("Erro ao criar banco de dados");
                                            }
                                        }


                                        if (mysqli_query($conexao, "SELECT * FROM medicos")) {

                                            $getTodosMedicos = "SELECT * FROM medicos";

                                            $select = mysqli_query($conexao, $getTodosMedicos);
                                            $i = 1;
                                            if (mysqli_num_rows($select) != 0) {
                                                while ($info = mysqli_fetch_array($select) and $i <= 5) {
                                                    $name = $info['nome'];
                                                    $especialidade = $info['especialidade'];
                                                    echo "<tr>
                                                    <td>$name</td>
                                                    <td>$especialidade</td>
                                                </tr>";
                                                    $i++;
                                                }
                                            }
                                        }

                                        mysqli_close($conexao);
                                        ?>
                                    </tbody>
                                </table>
                            </div>
                        </div>
                    </div>
                </div>


                <hr />


                <div class="row">
                    <div class="col-md-12">
                        <h5 class="med_pat_title_table consulta-title text-center">Consultas</h5>
                        <div class="table-responsive">
                            <table class="table table-hover2 table-index-consultasativas">
                                <thead>
                                    <tr class="table_consulta thead-dark">
                                        <th>Paciente</th>
                                        <th>Médico</th>
                                        <th>Data</th>
                                    </tr>
                                </thead>
                                <tbody>
                                    <?php

                                    $conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

                                    $bd = mysqli_select_db($conexao, "hospital_management");
                                    if (empty($bd)) {
                                        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
                                        if (!$criaBD) {
                                            die("Erro ao criar banco de dados");
                                        }
                                    }


                                    if (mysqli_query($conexao, "SELECT * FROM consultas")) {

                                        $getTodasConsultas = "SELECT * FROM consultas";

                                        $select = mysqli_query($conexao, $getTodasConsultas);
                                        $i = 1;
                                        if (mysqli_num_rows($select) != 0) {
                                            while ($info = mysqli_fetch_array($select) and $i <= 5) {
                                                $nomePaciente = $info['nome'];
                                                $nomeMedico = $info['medico_nome'];
                                                $data = $info['data'];
                                                echo "<tr>
                                                    <td>$nomePaciente</td>
                                                    <td>$nomeMedico</td>
                                                    <td>$data</td>
                                                </tr>";
                                                $i++;
                                            }
                                        }
                                    }

                                    mysqli_close($conexao);
                                    ?>
                                </tbody>
                            </table>
                        </div>
                    </div>

                </div>

            </div>
            <footer>
                <p class="text-center footer">
                    Developed by <a href="https://github.com/AnneLivia" target="u_black">Anne Livia</a><br />
                    © All Rights Reserved.
                    <script>
                        document.write(new Date().getFullYear())
                    </script>
                </p>
            </footer>
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