<?php
session_start();
if (!isset($_SESSION['email'])) {
    header("location: login.php");
}

if ($_GET['id'] == 'undefined') {
    header("location: agenda_medica.php");
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
                        $getTodasConsultas = "SELECT * FROM agenda WHERE id = '$id'";

                        $select = mysqli_query($conexao, $getTodasConsultas);
                        if (mysqli_num_rows($select) != 0) {
                            while ($info = mysqli_fetch_array($select)) {
                                $id = $info['id'];
                                $nome_medico = $info['nome_medico'];
                                $capacidade = $info['capacidade'];
                                $data = $info['data'];
                                $nPacientes = $info['nPacientes'];
                            }
                        }

                        $auxDate = "";
                        for ($i = 6; $i < 10; $i++)
                            $auxDate .= $data[$i];
                        $auxDate .= '-';
                        for ($i = 3; $i < 5; $i++)
                            $auxDate .= $data[$i];
                        $auxDate .= '-';
                        for ($i = 0; $i < 2; $i++)
                            $auxDate .= $data[$i];
                        $data = $auxDate;

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
                        <img class="img-agenda-ativos center-block" src="assets/img/agenda_info.png" />
                        <h2 class="title_ativos-agenda">Atualizar dados do atendimento médico</h2>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-12">
                        <!-- Form Elements -->
                        <div class="panel panel-default painel_agenda_medica_atualizar">
                            <div class="row">
                                <div class="col-md-12">
                                    <form method="POST" action="atualizar_agendaBD.php" id="agenda_form_atualizar">
                                        <div class="form-row">
                                            <div class="form-group hide">
                                                <input type="text" class="form-control" placeholder="" name="id_agenda" value='<?php echo  $id ?>' readonly />
                                            </div>
                                            <div class="col-4">
                                                <label>Nome do médico</label>
                                                <input type="text" class="form-control" value="<?php echo $nome_medico ?>" name="nome_medico_atualizar" readonly maxlength="300" />
                                            </div>
                                            <div class="col-4">
                                                <label>Data</label>
                                                <input type="date" class="form-control data_agenda_atualizar" placeholder="" value="<?php echo $data ?>" name="data_agenda_atualizar" required />
                                            </div>
                                            <div class="col-2">
                                                <label>Capacidade</label>
                                                <input type="number" class="form-control capacidade_agenda_atualizar" value="<?php echo $capacidade ?>" placeholder="" min=0 value=0 name="capacidade_agenda_atualizar" required />
                                            </div>
                                            <div class="form-group hide">
                                            <input type="number" class="form-control nPacientes_agenda_atualizar" value="<?php echo $nPacientes ?>" name="nPacientes"  />
                                            </div>
                                            <div class="col-2">
                                                <label class="hide_label">Email</label>
                                                <button type="submit" id="btn-atualizar-agenda" class="btn-add1 btn btn-success rounded1">Adicionar</button>
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
    <script src="assets/js/custom.js" ></script>
</body>

</html>