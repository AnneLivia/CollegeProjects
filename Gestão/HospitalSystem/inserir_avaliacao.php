<?php
session_start();
if (!isset($_SESSION['email'])) {
    header("location: login.php");
}


if(!isset($_SESSION['nome_Paciente'])) {
    header("location: avaliacao.php");
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
                    <a class="navbar-brand" href="#"><i class="fa fa-square-o "></i>&nbsp;Hospital Management System</a>
                </div>
                <div class="navbar-collapse collapse">
                    <ul class="nav navbar-nav navbar-right">
                        <li><a id="Logout" href="#">LOG OUT</a></li>
                        <li><a href="settings.php">CONFIGURAÇÕES</a></li>
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
                        <a href="index.php"><img src="assets/img/home_menu.png" class="iconMenu"/> Inicio</a>
                    </li>
                    <li>
                        <a href="pacientes_ativos.php"><img src="assets/img/icon_patient_menu.png" class="iconMenu"/> Pacientes Ativos</a>
                    </li>
                    <li>
                        <a href="cadastrar_pacientes.php"><img src="assets/img/icon_patient_add_menu.png" class="iconMenu"/> Cadastrar Paciente</a>
                    </li>
                    <li>
                        <a href="avaliacao.php"><img src="assets/img/medical_appointment_menu.png" class="iconMenu"/> Consultas</a>
                    </li>
                    <li>
                        <a href="medicos_ativos.php"><img src="assets/img/icon_doctor_menu.png" class="iconMenu"/>  Médicos Ativos</a>
                    </li>
                    <li>
                        <a href="cadastrar_medicos.php"><img src="assets/img/icon_doctor_add_menu.png" class="iconMenu"/> Cadastrar Médicos</a>
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
                        <div class="panel panel-default">
                            <div class="panel-heading">
                                Avaliação dos Pacientes
                            </div>
                            <div class="panel-body">
                                <div class="row">
                                    <div class="col-md-6">
                                        <h3>Informações Básicas</h3>
                                        <form method="POST" action="create_bdAvaliacao.php">
                                            <div class="form-group">
                                                <label>Email</label>
                                                <input type="text" class="form-control" value="<?php echo $email_Paciente ?>" name="Paciente_email" readonly />
                                            </div>
                                            <div class="form-group">
                                                <label>Nome</label>
                                                <input type="text" class="form-control" value="<?php echo $nome_Paciente ?>" name="Paciente_nome" readonly />
                                            </div>
                                            <div class="form-group">
                                                <label>Data da Avaliação</label>
                                                <input type="date" class="form-control" name="data_avaliacao" />
                                            </div>
                                            <div class="form-group">
                                                <label>Possui deficiência? Qual?</label>
                                                <input type="text" class="form-control" name="Paciente_deficiencia" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Massa corporal (kg) </label>
                                                <input type="text" class="form-control" name="Paciente_massaCorporal" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Envergadura</label>
                                                <input type="text" class="form-control" name="Paciente_envergadura" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Perímetro da cintura</label>
                                                <input type="text" class="form-control" name="Paciente_cintura" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Abdominal</label>
                                                <input type="text" class="form-control" name="Paciente_abdominal" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Corrida de 20 metros (segundos)</label>
                                                <input type="text" class="form-control" placeholder="Digite a altura do Paciente" name="Paciente_corrida" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Salto em distância (metros)</label>
                                                <input type="text" class="form-control" name="Paciente_salto" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Triceps (milimetros)</label>
                                                <input type="text" class="form-control" name="Paciente_triceps" required />
                                            </div>
                                            <div class="form-group">
                                                <label>Coxa (milimetros)</label>
                                                <input type="text" class="form-control" name="Paciente_coxa" required />
                                            </div>
                                            <button type="submit" class="btn-cadastrar btn btn-primary">Cadastrar</button>
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