<?php
session_start();

$email = $_POST['Paciente_email'];

$conexao = mysqli_connect('localhost', 'root', '') or die('Erro de conexão' . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");

// se banco de dados não existe, criar outro
if (empty($bd)) {
    $createBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    // se o banco de dados não tiver sido criado
    if (!$createBD) {
        die("Erro ao criar banco de dados");
    }
}

// se chegou aqui, BD existe ou foi criado
// agora verificar se tabela Pacientes existe

// pode_inserir é a variável que determinará se poderá inserir os dados da avaliação ou não
$pode_inserir = false;
// se tabela Pacientes existir
if (mysqli_query($conexao, "SELECT * FROM Pacientes")) {
    // verificar se o email digitado existe lá, pois só assim poderá ser cadastrado uma avaliação
    $search_element = mysqli_query($conexao, "SELECT * FROM Pacientes WHERE email = '$email'");
    // se não tiver encontrado, dado não existe na tabela
    if (mysqli_num_rows($search_element) > 0 ){
        // agora se tiver encontrado, Paciente está cadastrado na academia, por isso pode inserir recebe true,
        $pode_inserir = true;
        // mas, já que somente uma avaliação por vez será cadastrada para cada Paciente, 
        // deve ser verificado se a avaliação desse Paciente já não está cadastrada
        if(mysqli_query($conexao, "SELECT * FROM avaliacao")) {
           $possui_avaliacao = mysqli_query($conexao, "SELECT * FROM avaliacao WHERE email = '$email'");
           if (mysqli_num_rows($possui_avaliacao) > 0) {
               // se entrar aqui, é porque já existe dados sobre esse Paciente na tabela de avaliação
               // portanto pode inserir recebe false, para não permitir que o dado seja inserido
               $pode_inserir = false;
               echo "<script>alert('Paciente com email $email, já possui avaliação cadastrada no sistema')</script>";
           } 
        } 

        if($pode_inserir){
            // se entrar aqui, é porque o Paciente é cadastrado na academia, e esse Paciente ainda não possui avaliação cadastrada
            while ($info = mysqli_fetch_array($search_element)) {
                // portanto, obter o nome e o email desse Paciente, para que possa ser criado as sessões e 
                // inserido esses dados no form, para que o usuário não necessite preencher novamente
                $_SESSION['nome_Paciente'] = $info['nome'];
                $_SESSION['email_Paciente'] = $email;
                
                header("location: inserir_avaliacao.php");
            }
        } 
    } else {
        // se chegou aqui, email não está cadastrado no sistema
        echo "<script>alert('Paciente com email $email, não está cadastrado no sistema')</script>";
    }
} else {
    echo "<script>alert('Não existe Paciente cadastrado no sistema')</script>";
}

header("refresh: 0.5; url = email_avaliacao.php");

mysqli_close($conexao);
