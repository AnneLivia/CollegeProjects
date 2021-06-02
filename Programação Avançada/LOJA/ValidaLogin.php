<head>
	<meta charset="utf-8"> 
	<title>Login</title>
</head>
<body>
	<?php
	
		$email = $_POST['email'];
		$password = $_POST['password'];
		
		if($email == 'annelivia16@gmail.com') {
			
			if($password == '123456'){
				
				session_start();
				$_SESSION['email'] = $email;
				$_SESSION['password'] = $password;
				header('Location: PaginaInicial.php');
				
			} else {
				echo "<br><br><br><br><center><h1><strong>Senha incorreta!!</strong></h1></center>";
				echo "<center><strong>Clique no botao para voltar à página inicial!!</strong></center><br>";
				echo "<center><a href='login.html'><input type='button' value='Ínicio'></a></center>";
			}
		} else {
			echo "<br><br><br><br><center><h1><strong>Usuário incorreto!!</strong></h1></center>";
			echo "<center><strong>Clique no botao para voltar à página inicial!!</strong></center><br>";
			echo "<center><a href='login.html'><input type='button' value='Ínicio'></a></center>";
		}

	?>
</body>
</html>