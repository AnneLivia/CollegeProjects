<?php

$conexao = mysqli_connect('localhost', 'root', '') or die("Erro de conexao " . mysqli_connect_error());

$bd = mysqli_select_db($conexao, "donate_system");

if (empty($bd)) {
    die("Banco de dados não encontrado");
}

$id_doacao = $_POST['id_doacao'];
$id_requisicao = $_POST['id_requisicao'];
$veredito_doacao = $_POST['veredito_doacao'];

// verificar se o doador nao cancelou a doacao, vai que ele cancele um pouco antes da pessoa aprova e ela nem saiba
$search_element = mysqli_query($conexao, "SELECT * FROM desejo_doar WHERE id = '$id_doacao'");
if (mysqli_num_rows($search_element) == 0) {
    // requisicao de alimento não existe mais
    echo "<script>alert('Solicitação de doação inexistente. Provavelmente o doador cancelou a doação. Sinto muito!')</script>";
} else {
    $query = "UPDATE desejo_doar SET status = '$veredito_doacao' WHERE id = '$id_doacao'";
    $update = mysqli_query($conexao, $query);

    $semSucesso = false;
    if (!$update) {
        $semSucesso = true;
    }

    if ($veredito_doacao == 'REJEITADO') {
        $veredito_doacao = 'AGUARDANDO';
    }

    $query = "UPDATE requisicoes_de_doacoes SET status = '$veredito_doacao' WHERE id = '$id_requisicao'";
    $update = mysqli_query($conexao, $query);

    if (!$update) {
        $semSucesso = true;
    }

    if ($semSucesso) {
        echo "<script>alert('Erro na atualização do status.</script>";
    } else {
        echo "<script>alert('Status atualizado com sucesso!')</script>";
    }
}
header("refresh:0.5;url=minhas_requisicoes.php");
mysqli_close($conexao);
