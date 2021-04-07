<?php
session_start();
if (!isset($_SESSION['email'])) {
    header("location: login.php");
}

if ($_GET['id'] == 'undefined') {
    header("location: agendar_consulta.php");
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
                        $getTodasConsultas = "SELECT * FROM agendamento WHERE id = '$id'";

                        $select = mysqli_query($conexao, $getTodasConsultas);
                        if (mysqli_num_rows($select) != 0) {
                            while ($info = mysqli_fetch_array($select)) {
                                $nome_paciente = $info['nome_paciente'];
                                $id_agenda_agendamento = $info['id_agenda'];
                            }
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
                    <li>
                        <a href="agendar_consulta.php"><img src="assets/img/icon_calendar_menu.png" class="iconMenu" /> Agendar Consulta</a>
                    </li>
                    <li>
                        <a href="cadastrar_leito.php"><img src="assets/img/hospital_bed_menu.png" class="iconMenu" /> Cadastrar Leito</a>
                    </li>
                </ul>
            </div>
        </nav>
        <!-- /. NAV SIDE  -->
        <div id="page-wrapper">
            <div id="page-inner">
                <div class="row">
                    <div class="col-md-12">
                        <img class="img-agendamento-ativos center-block" src="assets/img/agendamento_info.png" />
                        <h2 class="title_ativos-agendamento">Agendamento de consulta</h2>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-12">
                        <!-- Form Elements -->
                        <div class="panel panel-default painel_agendamento_atualizar">
                            <div class="row">
                                <div class="col-md-12">
                                    <form method="POST" action="atualizar_agendamentoBD.php" id="agendamento_form">
                                        <div class="form-row">
                                            <div class="form-group hide">
                                                <input type="text" class="form-control" placeholder="" name="id_agendamento" value='<?php echo  $id ?>' readonly />
                                            </div>
                                            <div class="col-5">
                                                <label>Nome do paciente</label>
                                                <input type="text" class="form-control" value="<?php echo $nome_paciente ?>" name="nome_paciente_atualizar" readonly maxlength="300" />
                                            </div>
                                            <div class="col-5">
                                                <label>Médicos e datas disponíveis</label><br />
                                                <select class="form-control select-agendar-consulta" name="Agenda_id" required>
                                                    <option value=""> Selecione a opção de atendimento desejada</option>
                                                    <?php

                                                    $conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

                                                    $bd = mysqli_select_db($conexao, "hospital_management");
                                                    if (empty($bd)) {
                                                        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
                                                        if (!$criaBD) {
                                                            die("Erro ao criar banco de dados");
                                                        }
                                                    }


                                                    if (mysqli_query($conexao, "SELECT * FROM agenda")) {

                                                        $getTodasAgenda = "SELECT * FROM agenda";

                                                        $select = mysqli_query($conexao, $getTodasAgenda);

                                                        if (mysqli_num_rows($select) != 0) {
                                                            $ii = 0;
                                                            while ($info = mysqli_fetch_array($select)) {
                                                                $nomeMedico = $info['nome_medico'];
                                                                $dataAtendimento = $info['data'];
                                                                $id_agenda = $info['id'];
                                                                $vagasDisponiveis = $info['capacidade'] - $info['nPacientes'];
                                                                $ii++;
                                                                if ($info['nPacientes'] < $info['capacidade'] || $info['id'] == $id_agenda_agendamento) {
                                                                    if($id_agenda === $id_agenda_agendamento) {
                                                                        echo "<option selected value='$id_agenda'>$nomeMedico - $dataAtendimento - vagas: $vagasDisponiveis </option>";
                                                                    } else {
                                                                        echo "<option value='$id_agenda'>$nomeMedico - $dataAtendimento - vagas: $vagasDisponiveis </option>";
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    mysqli_close($conexao);
                                                    ?>
                                                </select>
                                            </div>
                                            <div class="col-2">
                                                <label class="hide_label">Email</label>
                                                <button type="submit" class="btn-agendar-consulta btn btn-success rounded1">Agendar</button>
                                            </div>
                                        </div>
                                    </form>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <footer>
                <p class="text-center">
                    Developed by <a href="https://github.com/AnneLivia" target="u_black">Anne Livia</a><br />
                    © All Rights Reserved.
                    <script>
                        document.write(new Date().getFullYear())
                    </script>
                </p>
            </footer>
            <!-- End Form Elements -->
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