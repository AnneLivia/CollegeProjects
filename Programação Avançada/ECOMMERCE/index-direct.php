<?php
   
    
    $email = $_POST['UEmail'];
    $senha = $_POST['UPassword'];
    

    if($email == 'annelivia16@gmail.com') {
        if($senha == '123456') {
            session_start();
            $_SESSION['email'] = $email;
            $_SESSION['password'] = $senha;
            $_SESSION['car'] = '0';
            $_SESSION['price'] = '0.00';
            $_SESSION['qtdb1'] = 0;
            $_SESSION['qtdb2'] = 0;
            $_SESSION['qtdb3'] = 0;
            $_SESSION['qtdb4'] = 0;
            $_SESSION['qtdb5'] = 0;
            $_SESSION['qtdb6'] = 0;
            $_SESSION['qtdb7'] = 0;
            $_SESSION['qtdb8'] = 0;
            $_SESSION['qtdb9'] = 0;
            $_SESSION['qtdb10'] = 0;
            header('location: ecommerce.php');
        } else {
            header('location: index.php');
        }
    } else {
        header('location: index.php');
    }
?>