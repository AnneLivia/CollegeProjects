<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>hospital Management System</title>
    <!-- BOOTSTRAP STYLES-->
    <link href="assets/css/bootstrap.css" rel="stylesheet" />
    <!-- FONTAWESOME STYLES-->
    <link href="assets/css/font-awesome.css" rel="stylesheet" />
    <!-- CUSTOM STYLES-->
    <link href="assets/css/login.css" rel="stylesheet" />
    <!-- GOOGLE FONTS-->
    <link href='http://fonts.googleapis.com/css?family=Open+Sans' rel='stylesheet' type='text/css' />
</head>

<!-- BEGIN BODY -->

<body>

    <!-- PAGE CONTENT -->
    <div class="container">
        <div class="text-center">
            <img src="assets/img/icon_hosp.png" id="logoimg" alt=" Logo" />
        </div>
        <div class="tab-content">
            <div id="login" class="tab-pane active">
                <form action="create_bdadm.php" class="form-signin" method="POST">
                    <input id="uNomeCompleto" name="uNomeCompleto" type="text" placeholder="Insira seu nome completo" class="form-control" required />  
                    <input id="uEmail" name="uEmail" type="email" placeholder="Insira seu email" class="form-control" required />
                    <input id="uSenha" name="uSenha" type="password" placeholder="Digite sua senha" class="form-control" required />
                    <input id="uCpf" name="uCpf" type="text" placeholder="000.000.000-00" class="form-control" required />
                    <div class="form-group">
                        <label id="label_gen">Gênero: </label>
                        <div class="radio">
                            <label id="optionsradio_label1">
                                <input type="radio" name="adm_genero" id="optionsRadios1" value="feminino" checked /> <img src="assets/img/fem_gender_icon.png" id="genderFemaleIconCadastrar"/> &nbsp; Feminino
                            </label>
                        </div>
                        <div class="radio">
                            <label id="optionsradio_label2">
                                <input type="radio" name="adm_genero" id="optionsRadios2" value="masculino" /> <img src="assets/img/male_gender_icon.png" id="genderMaleIconCadastrar"/> &nbsp; Masculino
                            </label>
                        </div>
                    </div>
                    <button class="btn text-muted text-center btn-success btnRegistrar" type="submit">Registrar</button>
                    <button class="btn text-muted text-center btn-default btnVoltar">Voltar</button>
                </form>
            </div>
            <footer>
                <p class="text-center">
                    Developed by <a href="https://github.com/AnneLivia" target="u_black">Anne Livia</a>
                    <br />
                    © All Rights Reserved.
                    <script>
                        document.write(new Date().getFullYear())
                    </script>
                </p>
            </footer>
        </div>

        <script src="assets/js/cadastro.js"></script>

</body>
<!-- END BODY -->

</html>