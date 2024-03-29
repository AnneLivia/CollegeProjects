<?php
    session_start();
    if(isset($_SESSION['email'])) {
        unset($_SESSION['email']);
        unset($_SESSION['password']);
        unset($_SESSION['car']);
        unset($_SESSION['price']);
        for($i = 1; $i <= 10; $i++) {
            if(isset($_SESSION['qtdb'.$i]))
                unset($_SESSION['qtdb'.$i]);
        }
    }
?>

<!DOCTYPE html>
<html lang="pt-br">

    <head>
        <meta charset="UTF-8">
        <!-- DEVICE-WIDTH IS THE WIDTH OF THE DEVICE THAT I AM USING-->
        <!-- INITIAL-SCALE - OPEN WITH SOME TYPE OF ZOOM (THAT'S THE INITIAL SCALE) -->
        <!-- MAXIMUM SCALE, MINIMUM SCALE CONTROL HOW MUCH THE USER CAN GIVE A ZOOM-->
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <!-- -->
        <meta http-equiv="X-UA-Compatible" content="ie=edge">
        <title>GETBOOK.COM - THE BEST WEBSITE TO BUY BOOKS</title>
        <link rel="stylesheet"  href="assets/css/style.css"/>
    </head>

    <body>
        <div id="main">
            <section>
                <div id="login">  
                    <div id="formLogin" class="logform content_center">
                        <p class="content_center">Sign In to GETBook.com</p>
                        <form action="index-direct.php" method="POST">
                            <div>
                                <input id="Uemail" name="UEmail" type="email" placeholder="Type your email." required>
                            </div>
                            <div>
                                <input id="UPassword" name="UPassword" type="password" placeholder="Type your password." required>
                            </div>    
                            <div>
                                <button id="btnLogin">Log In </button>
                            </div>
                            <div>
                                <button id="btnCadastro">Cadastrar</button>
                            </div>
                        </form>
                    </div>
                </div>

                <div id="info" class="content_center">
                   <h1>Welcome</h1>
                   <p> Here you can find the book you want</p>
                   <img src="assets/image/iconBook.jpg" alt="this is an object"/>
                </div>
            </section>

            <footer class="content_center">
                <p>YOU CAN FIND BOOKS HERE</p>
            </footer>
        </div>
    
        <!-- por questões de desempenho a inserção do javascript tem que ficar no fim do body -->
        <script src="assets/js/script.js"></script>
    
    </body>
</html>