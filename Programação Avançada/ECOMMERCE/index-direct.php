<?php
    session_start();
    
    $email = $_POST['UEmail'];
    $senha = $_POST['UPassword'];
    
    $_SESSION['email'] = $email;
    $_SESSION['email'] = $senha;

    if(isset($_SESSION['email']) && $email == 'annelivia16@gmail.com'
    && $senha == '123456') {
        header('location: ecommerce.html');
    } else {
        unset($_SESSION['email']);
        unset($_POST['UPassword']);
        header('location: index.html');
    }

    unset($_SESSION['email']);
    unset($_POST['UPassword']);
?>