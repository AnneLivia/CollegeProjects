<?php
    // primeiro parametro é o nome do cookie,
    // segundo parametro é o valor desse cookie
    // terceiro parametro é o tempo de duração do cookie
    // para o terceiro parametro: 60 segundos * 60 minuto * 24 horas * 3 dias + time() - tempo atual 
    // cookie trabalha em segundos
   
    setcookie("nome", "Anne", (time() + 60*60*24*3));

    // cookie é armazenado no navegador (menos seguro)
    $meuCookie = $_COOKIE['nome'];

    // verificar se o cookie existe ou não
    if (isset($_COOKIE['nome'])) {
        echo $meuCookie . ' esta logado<br/>';
        // header direciona para algum lugar
        header("location: index.html");
    } else {
        echo 'Login invalido<br/>';
    }

    // session é armazenado no servidor, portanto é mais seguro


   
?>