<?php
    // conectando com o servidor e o banco de dados
    $conexao = mysqli_connect("localhost", "root", "","bdaula");
    if(!$conexao) {
        // se não houver conexão, fechar conexão e apresentar erro
        die("Erro de conexao ".mysqli_connect_error());
    } else {
        echo "BD conectado<br/>";
    }

    $nome = "Anne";
    $email = "Anne@gmail.com";
    $senha = "123456";
    $nomeUsuario = "Anne";

    $query = "INSERT INTO cadastrousuarios (nome, nomeUsuario, email, senha) 
    VALUES ('$nome', '$nomeUsuario', '$email', '$senha')";

    $inserirTabela = mysqli_query($conexao, $query);

    // mysqli_insert_id vai pegar o id do ultimo inserido no registro
    if(mysqli_insert_id($conexao)) {
        echo "<span style='color:green'>usuario cadastrado com sucesso<br/></span>";
    } else {
        echo "<span style='color:red'>usuario não cadastrado com sucesso</br></span>";
    }

    mysqli_close($conexao);
?>