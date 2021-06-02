<?php
    // conectando com o servidor e o banco de dados
    $conexao = mysqli_connect("localhost", "root", "","bdaula");
    if(!$conexao) {
        // se não houver conexão, fechar conexão e apresentar erro
        die("Erro de conexao ".mysqli_connect_error());
    } else {
        echo "BD conectado<br/>";
    }

    $email = "Annes@gmail.com";
    $senha = "123456";
    $nomeUsuario = "Anneh";

    $query = "SELECT * FROM cadastrousuarios where email = '$email' or nomeusuario='$nomeUsuario'";

    $selectTabela = mysqli_query($conexao, $query);

    // verificar a quantidade de linhas retornada
    $number_rows = mysqli_num_rows($selectTabela);

    echo $number_rows . "<br>";

    if($number_rows > 0) {
        //mysqli_fetch_array transforma um elemento sql em array
        while($info = mysqli_fetch_array($selectTabela)) {
            // echo $info['id'], '&nbsp', $info['nome'],'&nbsp',$info['nomeUsuario'],'&nbsp',$info['email'],'&nbsp', $info['senha'] . '<br>';
            if($info['senha'] != $senha) {
                echo "Senha incorreta <br>";
            } else {
                echo "Bem vindo<br/>";
            }
        }
    } else {
        echo "Email não cadastrado ou incorreto<br/>";
        echo "<a href='cadastro.html'><input type='button' value='Cadastro'></a>";
    }

    mysqli_close($conexao);
?>