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
                        <a href="index.php"><img src="assets/img/home_menu.png" class="iconMenu" /> Inicio</a>
                    </li>
                    <li>
                        <a href="pacientes_ativos.php"><img src="assets/img/icon_patient_menu.png" class="iconMenu" /> Pacientes Ativos</a>
                    </li>
                    <li>
                        <a href="cadastrar_pacientes.php"><img src="assets/img/icon_patient_add_menu.png" class="iconMenu" /> Cadastrar Paciente</a>
                    </li>
                    <li>
                        <a href="avaliacao.php"><img src="assets/img/medical_appointment_menu.png" class="iconMenu" /> Consultas</a>
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
                        <div class="panel panel-default painel_paciente_medico">
                            <div class="panel-heading">
                                Cadastrar médicos no sistema
                            </div>
                            <div class="panel-body">
                                <div class="row">
                                    <div class="col-md-12">
                                        <form method="POST" action="create_bdMedico.php" id="medico_cadastro_form">
                                            <div class="form-group">
                                                <label>Nome Completo</label>
                                                <input class="form-control" id="Medico_nome" name="Medico_nome" placeholder="" required />
                                            </div>
                                            <div class="form-row">
                                                <div class="col-4">
                                                    <label>CRM</label>
                                                    <input type="text" class="form-control" placeholder="" name="Medico_crm" required />
                                                </div>
                                                <div class="col">
                                                    <label>Data de Nascimento</label>
                                                    <input type="date" class="form-control" name="Medico_nascimento" required />
                                                </div>
                                                <div class="col">
                                                    <label>Telefone</label>
                                                    <input type="text" class="form-control" placeholder="" name="Medico_telefone" required />
                                                    <p class="help-block">(091) 90000-0000</p>
                                                </div>
                                            </div>
                                            <div class="form-group">
                                                <label>Gênero</label>
                                                <div class="radio">
                                                    <label>
                                                        <input type="radio" name="Medico_genero" id="optionsRadios1" value="feminino" checked /> <img src="assets/img/fem_gender_icon.png" id="genderFemaleIconCadastrar" /> &nbsp; Feminino
                                                    </label>
                                                </div>
                                                <div class="radio">
                                                    <label>
                                                        <input type="radio" name="Medico_genero" id="optionsRadios2" value="masculino" /> <img src="assets/img/male_gender_icon.png" id="genderMaleIconCadastrar" /> &nbsp; Masculino
                                                    </label>

                                                </div>
                                            </div>

                                            <div class="form-row">
                                                <div class="col">
                                                    <label>CEP</label>
                                                    <input type="text" class="form-control" placeholder="" name="Medico_cep" required />
                                                </div>
                                                <div class="col">
                                                    <label>Número da casa</label>
                                                    <input type="text" class="form-control" placeholder="" name="Medico_ncasa" required />
                                                </div>
                                            </div>

                                            <div class="form-group">
                                                <label>Especialidade</label>
                                                <input class="form-control" id="Medico_treinamento" name="Medico_especialidade" placeholder="" required />
                                                <p class="help-block">Ex: cardiologia, endocrinologia</p>
                                            </div>
                            
                                            <button type="submit" class="btn btn-success btn-cadastrar-medico rounded1">Cadastrar</button>
                                        </form>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                    <!-- End Form Elements -->
                </div>
            </div>
            <footer>
                <p class="text-center">
                    Developed by <a href="https://github.com/AnneLivia" target="u_black">Anne Livia</a>
                    and <a href="https://github.com/Marcos-Fernando" target="u_black">Marcos Fernando</a><br />
                    © All Rights Reserved.
                    <script>
                        document.write(new Date().getFullYear())
                    </script>
                </p>
            </footer>
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