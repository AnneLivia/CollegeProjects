
document.getElementById("btnLogin").addEventListener("click", 
e => {
    console.log("Esse botão foi apertado");
}); 

document.getElementById("formLogin").addEventListener("mouseenter", 
e => {
    // console.log("o mouse esta aqui");
}); 

document.querySelector("#formLogin").addEventListener("mouseleave", e => {
    // console.log("O mouse saiu do formulário");
})

document.querySelector("#formLogin").addEventListener("submit", e => {
    e.preventDefault();
    let email = document.querySelector("#Uemail").value;
    let password = document.querySelector("#UPassword").value;

    let json = {
        email: email,
        password: password
    };

    /*
    // imprimind por padrão o json, como objeto
    console.log("Json", json);

    // transformando o json para string
    let stringJson = JSON.stringify(json);

    console.log("O Email é: " + email);
    console.log("A Senha é: " + password);

    // imprimindo a string
    console.log("Json", stringJson);

    // tranformando a string json para variavel
    let jsonParse = JSON.parse(stringJson);

    // imprimindo o que era antes
    console.log("Json novamente: "  + jsonParse.email);
    console.log("Json novamente: "  + jsonParse.password);
    */

    if(!json.email) {
       console.log("Digite seu email");
    } 
    else if(!json.password) {
        console.log("Digite a senha");
    } else {
        alert("Bem vindo!");
    }
});