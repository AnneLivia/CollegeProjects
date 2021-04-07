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
        // se deletado, remover todos os dados referentes a essa agenda na tabela agendamento.

        echo "<script>alert('Leito removido com sucesso.')</script>";
    }
}
header("refresh:0.5;url=cadastrar_leito.php");
mysqli_close($conexao);

?>