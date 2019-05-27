<?php
    $conexao = mysqli_connect("localhost", "root", "");
    if(!$conexao) {
        // se não houver conexão, fechar conexão e apresentar erro
        die("Erro de conexao ".mysqli_connect_error());
    } else {
        echo "BD conectado<br/>";
    }
    mysqli_close($conexao);
?>