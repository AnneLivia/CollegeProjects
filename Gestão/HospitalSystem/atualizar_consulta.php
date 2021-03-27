<?php
session_start();
if (!isset($_SESSION['email'])) {
    header("location: login.php");
}


if (!isset($_SESSION['nome_Paciente'])) {
    header("location: consulta.php");
}

$email = $_SESSION['email'];
$nome_Paciente = $_SESSION['nome_Paciente'];
$email_Paciente = $_SESSION['email_Paciente'];
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

                        // dados do medico aqui
                        $id = $_GET['id'];
                        $query = "SELECT * FROM consultas WHERE id = '$id'";
                        $select = mysqli_query($conexao, $query);
                        while ($info = mysqli_fetch_array($select)) {
                            $medico_nome = $info['medico_nome'];
                            $paciente_nome = $info['nome'];
                            $data = $info['data'];
                            $peso = $info['peso'];
                            $altura = $info['altura'];
                            $diagnostico = $info['diagnostico'];
                            $receita = $info['receita'];
                        }
                        
                        $data = date("Y-d-m", strtotime($data));

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
                </ul>
            </div>
        </nav>
        <!-- /. NAV SIDE  -->
        <div id="page-wrapper">
            <div id="page-inner">
                <div class="row">
                    <div class="col-md-12">
                        <!-- Form Elements -->
                        <div class="panel panel-default painel_consulta_insert">
                            <div class="panel-heading">
                                Atualização de consulta
                            </div>
                            <div class="panel-body">
                                <div class="row">
                                    <div class="col-md-12">
                                        <form method="POST" action="atualizar_consultaBD.php" id="consulta_insert_form">
                                            <div class="form-group">
                                                <label>Nome do paciente</label>
                                                <input type="text" class="form-control" value="<?php echo $paciente_nome ?>" name="Paciente_nome" readonly maxlength="300"/>
                                            </div>
                                            <div class="form-group hide">
                                                <input type="text" class="form-control" placeholder="" name="id_consulta" value='<?php echo  $id ?>' readonly />
                                            </div>
                                            <div class="form-group">
                                                <label>Nome do médico</label>
                                                <input type="text" class="form-control" value="<?php echo $medico_nome ?>" name="Paciente_nome" readonly maxlength="300"/>
                                            </div>
                                            <div class="form-row">
                                                <div class="col-6">
                                                    <label>Data da consulta</label>
                                                    <input type="date" class="form-control" name="data" value="<?php echo $data ?>"/>
                                                </div>
                                                <div class="col-3">
                                                    <label>Peso (kg) </label>
                                                    <input type="text" class="form-control" name="Paciente_peso" value="<?php echo $peso ?>" required maxlength="10"/>
                                                    <p class="help-block">Ex: 1,70</p>
                                                </div>
                                                <div class="col-3">
                                                    <label>Altura (m) </label>
                                                    <input type="text" class="form-control" name="Paciente_altura" value="<?php echo $altura ?>" required maxlength="10"/>
                                                    <p class="help-block">Ex: 69,2</p>
                                                </div>
                                            </div>
                                            <div class="form-group">
                                                <label>Receita</label>
                                                <textarea type="text" class="form-control" name="Paciente_receita" required maxlength="500" /><?php echo $receita ?></textarea>
                                            </div>
                                            <div class="form-group">
                                                <label>Diagnóstico</label>
                                                <textarea type="text" class="form-control" placeholder="" name="Paciente_diagnostico" required maxlength="500"/><?php echo $diagnostico ?></textarea>
                                            </div>
                                            <button type="submit" class="btn-atualizar-consulta  btn btn-success rounded1">Atualizar consulta</button>
                                        </form>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                    <!-- End Form Elements -->
                </div>
            </div>
            <!-- /. ROW  -->
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