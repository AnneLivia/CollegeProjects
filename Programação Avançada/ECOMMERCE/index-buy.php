<?php

    $price_book = array(78.90, 80.00, 100.00, 25.50, 20.24, 200.20, 200.30, 500.00, 1008.90, 78.90);

    $qtd = $total = 0;
    for ($i = 1; $i <= 10; $i++) {
        $qtd+=$_POST['qtdb' . (string)$i];
        $total+=$_POST['qtdb' . (string)$i] * $price_book[$i - 1];
    }
    
?>

<!DOCTYPE html>
<html lang="pt-br">

    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <!-- -->
        <meta http-equiv="X-UA-Compatible" content="ie=edge">
        <title>GETBOOK.COM - THE BEST WEBSITE TO BUY BOOKS</title>
        <link rel="stylesheet"  href="assets/css/style_buy.css"/>
    </head>

    <body>
        <div id="main">
            <div id="menu">
                <nav>
                    <a href="index.html" ><img src="assets/image/image.jpg" alt="A imagem contem uma pessoa" title="perfil"/> LOG OUT</a>
                    <a href="ecommerce.html" > RETURN </a>
                </nav>
            </div>
            <p class="content_center"> 
                Total books: 
                <?php
                    echo $qtd;
                ?>
                <br/><br/>
                Price: R$
                <?php
                    echo $total;
                ?>
            </p>
        <div>
    <body>
<html>