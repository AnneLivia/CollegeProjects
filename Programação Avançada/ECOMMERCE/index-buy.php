<?php
    session_start();
    if(isset($_SESSION['email'])) {
        $email = $_SESSION['email'];
        $qtsItems = $_SESSION['car'];
    } else {
        header('location: index.php');
    }

    $price_book = array(78.90, 80.00, 100.00, 25.50, 20.24, 200.20, 200.30, 500.00, 1008.90, 78.90);

    $qtd = $total = 0;
    for ($i = 1; $i <= 10; $i++) {
        $_SESSION['qtdb'.(string)$i] = $_POST['qtdb' . (string)$i];
        $qtd+=$_POST['qtdb' . (string)$i];
        $total+=$_POST['qtdb' . (string)$i] * $price_book[$i - 1];

    }

    $_SESSION['car'] = $qtd;
    $_SESSION['price'] = $total;
    
    $price = $_SESSION['price'];
    $qtd = $_SESSION['car'];
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
                <img src="assets/image/image.jpg" alt="A imagem contem uma pessoa" title="perfil"/><?php echo $email?> <a href="index.php" >LOG OUT</a>
                    <a href="ecommerce.php" > RETURN </a>
                </nav>
            </div>
            <p id="content" class="content_center"> 
                Total books: 
                <?php
                    echo $qtd;
                ?>
                <br/><br/>
                Price: R$
                <?php
                    echo $price;
                ?>
            </p>
        <div>
    <body>
<html>