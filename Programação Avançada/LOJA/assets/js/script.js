document.getElementById("btn-submit").addEventListener("click", e => {
	console.log("O botão foi clicado!");
});

document.getElementById("form-login").addEventListener("mouseenter", e => {
	//console.log("O mouse está sobre o formulário");
});

document.querySelector("#form-login").addEventListener("mouseleave", e => {
	//console.log("O mouse saiu do formulário");
});

document.querySelector("#form-login").addEventListener("submit", e => {
	
	e.preventDefault();
	
	let email = document.querySelector("#email").value;
	let password = document.querySelector("#password").value;
	
	console.log("o email é: " + email);
	console.log("a senha é: " + password);
	
	let json = {
		email: email,
		password: password
	};
	
	console.log(json);
	
	let stringJSON = JSON.stringify(json);
	
	console.log(stringJSON);
	
	let jsonPARSE = JSON.parse(stringJSON);
	
	console.log(jsonPARSE.password);
	
	
	if(!json.email){
		console.log("Preencha o campo email.");
	}else if(!json.password){
		console.log("Preencha o campo senha.");
	}else{
		console.log("Dados validados com sucesso.");
		document.querySelector('#form-login').submit();
	}
});