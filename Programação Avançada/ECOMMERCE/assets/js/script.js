
document.querySelector("#btnLogin").addEventListener("submit", e => {
    e.preventDefault();
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
        // enviando para o arquivo php, servidor
        // consigo através daqui, enviar os dados para php
        document.querySelector('#formLogin').submit();  
    }
});