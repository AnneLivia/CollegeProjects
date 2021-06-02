
document.getElementById("btnLogin").addEventListener("click", 
e => {
    // console.log("Esse botão foi apertado");
}); 

document.getElementById("formLogin").addEventListener("mouseenter", 
e => {
    // console.log("o mouse esta aqui");
}); 

document.querySelector("#formLogin").addEventListener("mouseleave", e => {
    // console.log("O mouse saiu do formulário");
})

document.querySelector("#formLogin").addEventListener("submit", e => {
    // e.preventDefault();
    let email = document.querySelector("#Uemail").value;
    let password = document.querySelector("#UPassword").value;

    let json = {
        email: email,
        password: password
    };

    if(!json.email) {
       console.log("Digite seu email");
    } else if(!json.password) {
        console.log("Digite a senha");
    } else {
        alert("Bem vindo!");
        // enviando para o arquivo php, servidor
        // consigo através daqui, enviar os dados para php
        document.querySelector('#formLogin').submit();  
    }
});