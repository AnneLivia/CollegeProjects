<?php
    // session é armazenado no servidor, portanto é mais seguro
    // session deve ser a primeira coisa a ser colocada em um site que for utilizar session
    // aqui é inicializado a sessão
    session_start();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>SESSION</title>
</head>
<body>
    <?php
        // aqui a sessão é criada
        $_SESSION['usuario'] = 'annelivia';
        $_SESSION['senha'] = '12345';

        
        // echo "Senha: " . $_SESSION['senha'] . "<br/>";

        unset($_SESSION['usuario']);
        unset($_SESSION['senha']);

        if(isset($_SESSION['usuario'])) {
            echo $_SESSION['usuario'] . " esta logado <br/>";
        } else {
            echo " nao logado <br/>";
        }
    ?>
</body>
</html>