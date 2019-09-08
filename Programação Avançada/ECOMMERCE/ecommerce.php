<?php
    session_start();
    if(isset($_SESSION['email'])) {
        $email = $_SESSION['email'];
        $qtdItems = $_SESSION['car'];
        $qtdb = array();

        for($i = 1; $i <= 10; $i++) {
           array_push($qtdb, $_SESSION['qtdb'.(string)$i]);
        }
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
                <form id="products" action="index-buy.php" method="POST">
                    <div id="book1" class="books">
                        <p id="price1"> R$: 78.90</p>
                        <img id="img1" src="assets/image/book1.jpg" alt="C++ Reactive Programming"/>
                        <input id="qtdb1" type='number' value=<?php echo $qtdb[0]?> name="qtdb1" min='0'/>
                        <input class="addCar" id="addCar1" type='submit' value='Add Car' name="add_1" min='0'/>
                    </div>

                    <div id="book2" class="books">
                        <p id="price2"> R$: 80.00</p>
                        <img id="img2" src="assets/image/book2.jpg" alt="Learn OpenCV"/>
                        <input id="qtdb2" type='number' value=<?php echo $qtdb[1]?> name="qtdb2" min='0'/>
                        <input class="addCar" id="addCar2" type='submit' value='Add Car' name="add_2" min='0'/>
                    </div>

                    <div id="book3" class="books">
                        <p id="price3"> R$: 100.00</p>
                        <img id="img3" src="assets/image/book3.jpg" alt="Deep Learning"/>
                        <input id="qtdb3" type='number' value=<?php echo $qtdb[2]?> name="qtdb3" min='0'/>
                        <input class="addCar" id="addCar3" type='submit' value='Add Car' name="add_3" min='0'/>
                    </div>

                    <div id="book4" class="books">
                        <p id="price4"> R$: 25.50</p>
                        <img id="img4" src="assets/image/book4.jpg" alt="Machine Learning for Beginners"/>
                        <input id="qtdb4" type='number' value=<?php echo $qtdb[3]?> name="qtdb4" min='0'/>
                        <input class="addCar" id="addCar4" type='submit' value='Add Car' name="add_4" min='0'/>
                    </div> 

                    <div id="book5" class="books">
                        <p id="price5"> R$: 20.24</p>
                        <img id="img5" src="assets/image/book5.jpg" alt="Mastering Phyton"/>
                        <input id="qtdb5" type='number' value=<?php echo $qtdb[4]?> name="qtdb5" min='0'/>
                        <input class="addCar" id="addCar5" type='submit' value='Add Car' name="add_5" min='0'/>
                    </div>

                    <div id="book6" class="books down">
                        <p id="price6"> R$: 200.20</p>
                        <img id="img6" src="assets/image/book6.jpg" alt="Surviving AI"/>
                        <input id="qtdb6" type='number' value=<?php echo $qtdb[5]?> name="qtdb6" min='0'/>
                        <input class="addCar" id="addCar6" type='submit' value='Add Car' name="add_6" min='0'/>
                    </div>

                    <div id="book7" class="books down">
                        <p id="price7"> R$: 200.30</p>
                        <img id="img7" src="assets/image/book7.jpg" alt="Competitive Programming"/>
                        <input id="qtdb7" type='number' value=<?php echo $qtdb[6]?> name="qtdb7" min='0'/>
                        <input class="addCar" id="addCar7" type='submit' value='Add Car' name="add_7" min='0'/>
                    </div>

                    <div id="book8" class="books down">
                        <p id="price8"> R$: 500.00</p>
                        <img id="img8" src="assets/image/book8.jpg" alt="Programming in Phyton 3"/>
                        <input id="qtdb8" type='number' value=<?php echo $qtdb[7]?> name="qtdb8" min='0'/>
                        <input class="addCar" id="addCar8" type='submit' value='Add Car' name="add_8" min='0'/>
                    </div>

                    <div id="book9" class="books down">
                        <p id="price9"> R$: 1008.90</p>
                        <img id="img9" src="assets/image/book9.jpg" alt="Artificial Intelligence"/>
                        <input id="qtdb9" type='number' value=<?php echo $qtdb[8]?> name="qtdb9" min='0'/>
                        <input class="addCar" id="addCar9" type='submit' value='Add Car' name="add_9" min='0'/>
                    </div>

                    <div id="book10" class="books down">
                        <p id="price10"> R$: 78.90</p>
                        <img id="img10" src="assets/image/book10.jpg" alt="AI for Data Science"/>
                        <input id="qtdb10" type='number' value=<?php echo $qtdb[9]?> name="qtdb10" min='0'/>
                        <input class="addCar" id="addCar10" type='submit' value='Add Car' name="add_10" min='0'/>
                    </div>
                    <textarea id="all" name="all" type=text readonly>
                    </textarea>
                    <input type="submit" value="Buy" id="btnSubmit"/>
                </form>
            </div>
        </div>
        <!-- por questões de desempenho a inserção do javascript tem que ficar no fim do body -->
        <script src="assets/js/script_store.js"></script>
        <script src="assets/js/script_buy.js"></script>
    </body>
</html>