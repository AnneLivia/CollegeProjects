﻿<?php
session_start();
if (!isset($_SESSION['email'])) {
    header("location: login.php");
}

$email = $_SESSION['email'];

// verificar todas as datas limites de entrega das requisicoes de doacao, se houver algum em que a data
// limite é antes do hoje, setar status para inspirado.
$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao com o servidor" . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "donate_system");

if (empty($bd)) {
    die("Banco de dados não encontrado");
}

$query = "SELECT * FROM requisicoes_de_doacoes";
$select = mysqli_query($conexao, $query);

$i = 1;
$datetoday = date('Y-m-d');
if (mysqli_num_rows($select) != 0) {
    while ($info = mysqli_fetch_array($select)) {
        $dataLimiteEntrega = $info['dataLimiteEntrega'];
        $id = $info['id'];
        // transformar para um formato de data comparavel
        // y-m-d
        $i++;
        $auxDate = "";
        for ($i = 6; $i < 10; $i++)
            $auxDate .= $dataLimiteEntrega[$i];
        $auxDate .= '-';
        for ($i = 3; $i < 5; $i++)
            $auxDate .= $dataLimiteEntrega[$i];
        $auxDate .= '-';
        for ($i = 0; $i < 2; $i++)
            $auxDate .= $dataLimiteEntrega[$i];
        $dataLimiteEntrega = $auxDate;
        if ($dataLimiteEntrega < $datetoday) {
            $query = "UPDATE requisicoes_de_doacoes SET status = 'INSPIRADO' WHERE id = '$id'";
            $update = mysqli_query($conexao, $query);
        }
    }
}

?>

<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Donate Food System</title>
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
                    <a class="navbar-brand" href="index.php"><img src="assets/img/food-donation.png" id="iconHopNav" /> &nbsp;DONATE FOOD SYSTEM</a>
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

                        $bd = mysqli_select_db($conexao, "donate_system");

                        if (empty($bd)) {
                            die("Banco de dados não encontrado");
                        }

                        $query = "SELECT genero FROM users WHERE email = '$email'";
                        $select = mysqli_query($conexao, $query);

                        if ($select) {
                            $genero = mysqli_fetch_array($select)['genero'];
                            if ($genero == "feminino") {
                                echo "<img src='assets/img/female.png' class='userImg img-responsive'/>";
                            } else {
                                echo "<img src='assets/img/male.png' class='userImg img-responsive'/>";
                            }
                        }

                        $query = "SELECT nome FROM users WHERE email = '$email'";
                        $select = mysqli_query($conexao, $query);
                        if ($select) {
                            $nome = mysqli_fetch_array($select)['nome'];
                        }

                        ?>

                        <p id="userNome"><?php echo $nome; ?></p>
                    </li>
                    <li>
                        <a href="index.php"><img src="assets/img/home_menu.png" class="iconMenu" /> Inicio</a>
                    </li>
                    <li>
                        <a href="desejo_doar.php"><img src="assets/img/icon_food_menu.png" class="iconMenu" /> Desejo doar </a>
                    </li>
                    <li>
                        <a href="desejo_receber.php"><img src="assets/img/food_receive_menu.png" class="iconMenu" /> Desejo receber </a>
                    </li>
                    <li>
                        <a href="endereco_usuario.php"><img src="assets/img/location_menu.png" class="iconMenu" /> Endereço de recebimento </a>
                    </li>
                    <li>
                        <a href="minhas_requisicoes.php"><img src="assets/img/myrequisitions_menu.png" class="iconMenu" /> Minhas requisições </a>
                    </li>
                    <li>
                        <a href="minhas_doacoes.php"><img src="assets/img/my_donations_menu.png" class="iconMenu" /> Minhas doações </a>
                    </li>
                </ul>
            </div>
        </nav>
        <!-- /. NAV SIDE  -->
        <div id="page-wrapper">
            <div id="page-inner">

                <div class="row">
                    <div class="col-md-12 main-index-presentation">
                        <h2 class="text-center"> SISTEMA PARA DOAÇÃO DE ALIMENTOS </h2>
                        <img src="assets/img/index_logo.jpg" />
                        <h3 class="text-center">
                            Este sistema permite a conexão entre o doador de alimentos e a pessoa que necessita dessas doações.
                            O ato de doar alimentos permite contribuir positiva e efetivamente para a transformação da sociedade.
                            <br/> 
                            <br />
                            Ao considerar as necessidades e limitações do próximo e ajudá-lo, podemos nos tornar mais igualitários e justos.
                            <br />
                            <br />
                            Neste sistema você terá a liberdade de realizar doações e também de requisitar doações, desse modo será possível praticar a
                            solidariedade mútua.
                        </h3>
                        <hr />
                        <h4 class="text-center"> Sistema desenvolvido pela <a href="https://www.github.com/annelivia" target="u_black">Anne Livia. </a></h4>
                        <h4 class="text-center"> © Todos os direitos reservados. </h4>
                        <hr />
                    </div>
                    <div class="col-md-12">
                        <h5 class="med_pat_title_table center"><img src="assets/img/food-donation_general.png" class="title_session" /> &nbsp; ÚLTIMAS DOAÇÕES E REQUISIÇÕES</h5>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-6">
                        <h5 class="med_pat_title_table">DOAÇÕES</h5>
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

                                    $bd = mysqli_select_db($conexao, "donate_system");
                                    if (empty($bd)) {
                                        $criaBD = mysqli_query($conexao, "CREATE DATABASE donate_system DEFAULT CHARSET=utf8");
                                        if (!$criaBD) {
                                            die("Erro ao criar banco de dados");
                                        }
                                    }


                                    if (mysqli_query($conexao, "SELECT * FROM pacientes")) {

                                        $consulta = "SELECT * FROM pacientes";

                                        $select = mysqli_query($conexao, $consulta);
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
                            <h5 class="med_pat_title_table">REQUISIÇÕES</h5>
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

                                        $bd = mysqli_select_db($conexao, "donate_system");
                                        if (empty($bd)) {
                                            $criaBD = mysqli_query($conexao, "CREATE DATABASE donate_system DEFAULT CHARSET=utf8");
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