<?php
    session_start();
    if(isset($_SESSION['email'])) {
        $email = $_SESSION['email'];
        $qtdItems = $_SESSION['car'];
    } else {
        header('location: index.php');
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
        <link rel="stylesheet"  href="assets/css/style_store.css"/>
    </head>

    <body>
        <div id="main">
            <div id="menu">
                <nav>
                    <img src="assets/image/image.jpg" alt="A imagem contem uma pessoa" title="perfil" id="perfil"/> <?php echo $email; ?> 
                    <img src="assets/image/car.png" alt="A imagem contem um carrinho" title="car" id="car"/> <span id="itemsAdded"><?php echo $qtdItems; ?></span> 
                    <a href="index.php" >LOG OUT</a>
                </nav>
            </div>
            <div id="items">
                <form action="index-buy.php" method="POST">
                    <div id="book1" class="books">
                        <p> R$: 78.90</p>
                        <img src="assets/image/book1.jpg" alt="book1"/>
                        <input id="qtdb1" type='number' value='0' name="qtdb1" min='0'/>
                        <input class="addCar" id="addCar1" type='submit' value='Add Car' name="add_1" min='0'/>
                    </div>

                    <div id="book2" class="books">
                        <p> R$: 80.00</p>
                        <img src="assets/image/book2.jpg" alt="book2"/>
                        <input id="qtdb2" type='number' value='0' name="qtdb2" min='0'/>
                        <input class="addCar" id="addCar2" type='submit' value='Add Car' name="add_2" min='0'/>
                    </div>

                    <div id="book3" class="books">
                        <p> R$: 100.00</p>
                        <img src="assets/image/book3.jpg" alt="book3"/>
                        <input id="qtdb3" type='number' value='0' name="qtdb3" min='0'/>
                        <input class="addCar" id="addCar3" type='submit' value='Add Car' name="add_3" min='0'/>
                    </div>

                    <div id="book4" class="books">
                        <p> R$: 25.50</p>
                        <img src="assets/image/book4.jpg" alt="book4"/>
                        <input id="qtdb4" type='number' value='0' name="qtdb4" min='0'/>
                        <input class="addCar" id="addCar4" type='submit' value='Add Car' name="add_4" min='0'/>
                    </div> 

                    <div id="book5" class="books">
                        <p> R$: 20.24</p>
                        <img src="assets/image/book5.jpg" alt="book5"/>
                        <input id="qtdb5" type='number' value='0' name="qtdb5" min='0'/>
                        <input class="addCar" id="addCar5" type='submit' value='Add Car' name="add_5" min='0'/>
                    </div>

                    <div id="book6" class="books down">
                        <p> R$: 200.20</p>
                        <img src="assets/image/book6.jpg" alt="book6"/>
                        <input id="qtdb6" type='number' value='0' name="qtdb6" min='0'/>
                        <input class="addCar" id="addCar6" type='submit' value='Add Car' name="add_6" min='0'/>
                    </div>

                    <div id="book7" class="books down">
                        <p> R$: 200.30</p>
                        <img src="assets/image/book7.jpg" alt="book7"/>
                        <input id="qtdb7" type='number' value='0' name="qtdb7" min='0'/>
                        <input class="addCar" id="addCar7" type='submit' value='Add Car' name="add_7" min='0'/>
                    </div>

                    <div id="book8" class="books down">
                        <p> R$: 500.00</p>
                        <img src="assets/image/book8.jpg" alt="book8"/>
                        <input id="qtdb8" type='number' value='0' name="qtdb8" min='0'/>
                        <input class="addCar" id="addCar8" type='submit' value='Add Car' name="add_8" min='0'/>
                    </div>

                    <div id="book9" class="books down">
                        <p> R$: 1008.90</p>
                        <img src="assets/image/book9.jpg" alt="book9"/>
                        <input id="qtdb9" type='number' value='0' name="qtdb9" min='0'/>
                        <input class="addCar" id="addCar9" type='submit' value='Add Car' name="add_9" min='0'/>
                    </div>

                    <div id="book10" class="books down">
                        <p> R$: 78.90</p>
                        <img src="assets/image/book10.jpg" alt="book10"/>
                        <input id="qtdb10" type='number' value='0' name="qtdb10" min='0'/>
                        <input class="addCar" id="addCar10" type='submit' value='Add Car' name="add_10" min='0'/>
                    </div>
                    <input type="submit" value="Buy" id="btnSubmit"/>
                </form>
            </div>
        </div>
        <!-- por questões de desempenho a inserção do javascript tem que ficar no fim do body -->
        <script src="assets/js/script_store.js"></script>
    </body>
</html>