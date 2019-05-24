<?php
   
    
    $email = $_POST['UEmail'];
    $senha = $_POST['UPassword'];
    

    if($email == 'annelivia16@gmail.com') {
        if($senha == '123456') {
            session_start();
            $_SESSION['email'] = $email;
            $_SESSION['password'] = $senha;
            header('location: ecommerce.php');
        } else {
            header('location: index.php');
        }
    } else {
        header('location: index.php');
    }
?>