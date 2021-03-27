const signUpButton = document.getElementById('signUp');
const signInButton = document.getElementById('signIn');
const container = document.getElementById('containerX');

signUpButton.addEventListener('click', () => {
    container.classList.add("right-panel-active");
});

signInButton.addEventListener('click', () => {
    container.classList.remove("right-panel-active");
});

document.querySelector('.btnLogin').addEventListener('click', e => {
    e.preventDefault();
    let email = document.querySelector(".uEmail").value;
    let password = document.querySelector(".uSenha").value;

    if (!email || !password) {
        alert("Por favor, preencha os campos para se conectar");
    } else {
        // enviando para o arquivo php, servidor
        // consigo através daqui, enviar os dados para php
        // da o click no bd
        document.querySelector('.form-login-form').submit();
    }
});

document.querySelector(".btnRegistrar").addEventListener('click', e => {
    e.preventDefault();
    let email = document.querySelector(".uEmailCadastro").value;
    let password = document.querySelector(".uSenhaCadastro").value;
    let cpf = document.querySelector(".ucpf").value;
    let nome = document.querySelector(".uNomeCompleto").value;

    if (!email || !password || !cpf || !nome) {
        alert("Por favor, preencha os campos para se cadastrar");
    } else {
        // enviando para o arquivo php, servidor
        // consigo através daqui, enviar os dados para php
        document.querySelector('.form-cadastro-form').submit();
    }
});