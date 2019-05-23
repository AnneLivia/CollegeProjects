<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    
    <!-- PAra criar cookies com javascript-->
    <script>
        // session é só no servidos, não posso criar session no javascript, mas pode ser obtido
        document.cookie = "usuario = anne liviiia";
        var lendoCookies = document.cookie;
        console.dir(lendoCookies);
    </script>
</body>
</html>

<?php
    $meuCookie = $_COOKIE['usuario'];

    // verificar se o cookie existe ou não
    if (isset($_COOKIE['usuario'])) {
        echo $meuCookie . ' esta logado<br/>';
        // header direciona para algum lugar
       
    } else {
        echo 'Login invalido<br/>';
    }

    // session é armazenado no servidor, portanto é mais seguro
   
?>