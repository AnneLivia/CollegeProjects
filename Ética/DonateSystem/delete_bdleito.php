<?php
$id = $_GET['id'];

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "hospital_management");
if (empty($bd)) {
    $criaBD = mysqli_query($conexao, "CREATE DATABASE hospital_management DEFAULT CHARSET=utf8");
    if (!$criaBD) {
        die("Erro ao criar banco de dados");
    }
}

// if tabela existe
if (mysqli_query($conexao, "SELECT * FROM leitos")) {
    $query = "DELETE FROM leitos WHERE id = '$id'";
    $delete = mysqli_query($conexao, $query);
    if ($delete) {
        // se deletado, remover todos os dados referentes a esse leito na tabela reserva_de_leitos.
        $query = "DELETE FROM reserva_de_leitos WHERE id_leito = '$id'";
        $delete = mysqli_query($conexao, $query);
        if($delete) {
            echo "<script>alert('Dados do leito selecionado foram removidos com sucesso.')</script>";
        } else {
            echo "<script>alert('Erro ao remover dados da tabela de reserva de leito.')</script>";
        }
    }
}
header("refresh:0.5;url=cadastrar_leito.php");
mysqli_close($conexao);

?>