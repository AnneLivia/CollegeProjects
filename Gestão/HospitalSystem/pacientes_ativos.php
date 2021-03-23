<?php 
    session_start();
    if(!isset($_SESSION['email'])) {
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
                    <a class="navbar-brand" href="index.php"><img src="assets/img/icon_hospital_nav.png" id="iconHopNav"/> &nbsp;HOSPITAL MANAGEMENT SYSTEM</a>
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
                        <h2>Pacientes cadastrados no sistema </h2>
                    </div>
                </div>
                
                <div class="row">
                    <div class="col-md-6">
                        <table class="table_ativos table table-striped table-bordered table-hover">
                            <thead>
                                <tr>
                                    <th>Nome</th>
                                    <th>Email</th>
                                    <th>CPF</th>
                                    <th>Nasc.</th>
                                    <th>Sexo</th>
                                    <th>Peso</th>
                                    <th>Altura</th>
                                    <th>Cidade</th>
                                    <th>Bairro</th>
                                    <th>CEP</th>
                                    <th>N/Casa</th>
                                    <th>Complemento</th>
                                    <th>Celular</th>
                                    <th></th>
                                </tr>
                            </thead>
                            <tbody>
                                <?php
                                
                                    $conexao = mysqli_connect('localhost','root', '') or die("Erro de conexao ".mysqli_connect_error());
                                        
                                    $bd = mysqli_select_db($conexao, "hospital_management");
                                    if(empty($bd)) {
                                        $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
                                        if(!$criaBD) {
                                            die("Erro ao criar banco de dados");
                                        }
                                    }
                                
                                
                                    if(mysqli_query($conexao, "SELECT * FROM pacientes")) {
                                    
                                        $getTodosPacientes = "SELECT * FROM pacientes";
                                    
                                        $select = mysqli_query($conexao, $getTodosPacientes);
                                        
                                        if(mysqli_num_rows($select) != 0 ) {
                                            $i = 0;
                                            while($info = mysqli_fetch_array($select)) {
                                                $id = $info['id'];
                                                $name = $info['nome'];
                                                $email = $info['email'];
                                                $cpf = $info['cpf'];
                                                $nasc = $info['nascimento'];
                                                $sexo = $info['sexo'];
                                                $peso = $info['peso'];
                                                $altura = $info['altura'];
                                                $cidade = $info['cidade'];
                                                $bairro = $info['bairro'];
                                                $cep = $info['cep'];
                                                $ncasa = $info['ncasa'];
                                                $complemento = $info['complemento'];
                                                $telefone = $info['telefone'];
                                                echo "<tr id='$id'>
                                                        <td>$name</td>
                                                        <td>$email</td>
                                                        <td>$cpf</td>
                                                        <td>$nasc</td>
                                                        <td>$sexo</td>
                                                        <td>$peso</td>
                                                        <td>$altura</td>
                                                        <td>$cidade</td>
                                                        <td>$bairro</td>
                                                        <td>$cep</td>
                                                        <td>$ncasa</td>
                                                        <td>$complemento</td>
                                                        <td>$telefone</td>
                                                        <td><button class='deletePaciente btn btn-danger'>Delete</button></td>
                                                </tr>";
                                            }
                                            $i++;
                                        }
                                    }
                                    
                                    mysqli_close($conexao);
                                ?>
                            </tbody>
                        </table>
                    </div>
                </div>
            </div>
            <footer>
                <p class="text-center">
                    Developed by <a href="https://github.com/AnneLivia" target="u_black">Anne Livia</a><br/>
                    © All Rights Reserved.
                    <script>document.write(new Date().getFullYear())</script>
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