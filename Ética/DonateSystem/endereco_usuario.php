<?php
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
        $status = $info['status'];
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
        if ($dataLimiteEntrega < $datetoday AND $status = 'AGUARDANDO') {
            $query = "UPDATE requisicoes_de_doacoes SET status = 'INSPIRADO' WHERE id = '$id'";
            $update = mysqli_query($conexao, $query);
        }
    }
}


?>

<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Donate System</title>
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
                    <a class="navbar-brand" href="index.php"><img src="assets/img/food-donation.png" id="iconHopNav" /> &nbsp;Donate Food System</a>
                </div>
                <div class="navbar-collapse collapse">
                    <ul class="nav navbar-nav navbar-right">
                        <li id="nav_top_style"><a href="settings.php"><img src="assets/img/setting_icon.png"/ id="setting_icon"></a></li>
                        <li id="nav_top_style"><a href="info.php"><img src="assets/img/info.png"/ id="info_icon"></a></li>
                        <li id="nav_top_style"><a id="Logout" href="#"><img src="assets/img/logout_icon.png"/ id="logout_icon"></a></li>
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

                        $query = "SELECT cpf FROM users WHERE email = '$email'";
                        $select = mysqli_query($conexao, $query);
                        if ($select) {
                            $cpf = mysqli_fetch_array($select)['cpf'];
                        }


                        $getTodasConsultas = "SELECT * FROM endereco_user WHERE email = '$email'";

                        $endereco = "";
                        $complemento = "";
                        $cep = "";
                        $bairro = "";
                        $cidade = "";
                        $select = mysqli_query($conexao, $getTodasConsultas);
                        if (mysqli_num_rows($select) != 0) {
                            while ($info = mysqli_fetch_array($select)) {
                                $endereco = $info['endereco'];
                                $complemento = $info['complemento'];
                                $cep = $info['cep'];
                                $bairro = $info['bairro'];
                                $cidade = $info['cidade'];
                            }
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
                    <div class="col-md-12">
                        <!-- Form Elements -->
                        <div class="panel panel-default painel_settings">
                            <div class="panel-heading">
                                Endereço para o recebimento de doações
                            </div>
                            <div class="panel-body">
                                <div class="row">
                                    <div class="col-md-12">
                                        <form method="POST" action="create_bdEnderecoUser.php" id="form-style" class="settings_update_form">
                                            <div class="form-group">
                                                <label>Nome Completo</label>
                                                <input class="form-control" name="nome_users" id="nome_completo_user_settings" readonly placeholder="" value='<?php echo $nome ?>' />
                                            </div>
                                            <div class="form-row">
                                                <div class="col">
                                                    <label>Email</label>
                                                    <input type="email" name="email_users" class="form-control email_users" readonly placeholder="" value='<?php echo $email ?>' />
                                                </div>
                                            </div>
                                            <div class="form-row">
                                                <div class="col">
                                                    <label>CEP </label>
                                                    <input type="text" name="cep_user" class="form-control cep_user" placeholder="" value='<?php echo $cep ?>' required />
                                                </div>
                                                <div class="col">
                                                    <label>Endereço </label>
                                                    <input type="text" name="endereco_user" class="form-control complemento_user" placeholder="" value='<?php echo $endereco ?>' required />
                                                </div>
                                            </div>
                                            <div class="form-row">
                                                <div class="col">
                                                    <label>Bairro </label>
                                                    <input type="text" name="bairro_user" class="form-control bairro_user" placeholder="" value='<?php echo $bairro ?>' required />
                                                </div>
                                                <div class="col">
                                                    <label>Cidade </label>
                                                    <input type="text" name="cidade_user" class="form-control cidade_user" placeholder="" value='<?php echo $cidade ?>' required />
                                                </div>
                                                <div class="col">
                                                    <label>Complemento</label>
                                                    <input type="text" name="complemento_user" class="form-control complemento_user" placeholder="" value='<?php echo $complemento ?>' required />
                                                </div>
                                            </div>
                                            <div class="col-12 center-block">
                                                <button type="submit" class="btn btn-success btn-style btn-inserir-endereco rounded1">Confirmar Endereço</button>
                                            </div>
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
                    Developed by <a href="https://github.com/AnneLivia" target="u_black">Anne Livia</a><br />
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
    <script src="assets/js/settings.js"></script>
</body>

</html>