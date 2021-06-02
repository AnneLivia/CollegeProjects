<?php
	session_start();
	if(isset($_SESSION['email'])){
		$email = $_SESSION['email'];
	} else {
		header('Location: login.html');
	}
?>

<!DOCTYPE html>
<html lang="pt-br">

	<head>
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
		<meta http-equiv="X-UA-Compatible" content="ie-edge">
		<title> Aula 04 HTML </title>
		<link rel="stylesheet" href="assets/css/style.css">
	</head>
	
	<body>
		<div class="VisualLogin">
			<label><?php echo $email; ?></label>
			<a href = "logout.php" >SAIR</a>
		</div>

		<div class="VisualLogin">
			<img id = "ImgCarrinho" src="assets/images/0item.png">
			<label id = "QtdCarrinho"><strong>0</strong></label>
		</div>

		<header>
			<h1>LOJA</h1>
		</header>
		
		<section class="content-center">
			<div class="AlinharCheckboxes">
				<input type="checkbox" name="produto1" id="produto1"/>
				<label for="produto1"><img src="assets/images/koala.jpg" alt="A imagem continha um koala" title="Este é um koala"></label>
				<input type="number" id="qtdProduto1" value="0" min='0'>
				<input type="checkbox" name="produto2" id="produto2"/>
				<label for="produto2"><img src="assets/images/koala.jpg" alt="A imagem continha um koala" title="Este é um koala"></label>
				<input type="number" id="qtdProduto2" value="0"  min='0'>
			</div>
			<div class="AlinharCheckboxes">
				<input type="checkbox" name="produto3" id="produto3"/>
				<label for="produto3"><img src="assets/images/koala.jpg" alt="A imagem continha um koala" title="Este é um koala"></label>
				<input type="number" id="qtdProduto3" value="0"  min='0'>
				<input type="checkbox" name="produto4" id="produto4"/>
				<label for="produto4"><img src="assets/images/koala.jpg" alt="A imagem continha um koala" title="Este é um koala"></label>
				<input type="number" id="qtdProduto4" value="0"  min='0'>
			</div>
			
			<div>
				<button id="addCarrinho">ADICIONAR AO CARRINHO</button>
			</div>
			<br>
			<div>
				<button id="finalizaCompras">FINALIZAR COMPRAS</button>
			</div>
			
		</section>
		
		<footer>
			<p>Programação avançada de computadores</p>
		</footer>
		
		<script src="assets/js/script-CarrinhoCompras.js"> </script>
		
	</body>	
</html>

