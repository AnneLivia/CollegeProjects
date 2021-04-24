document.querySelector(".btn-remover").addEventListener('click', e => {
    e.preventDefault();
    if (confirm("Tem certeza que deseja remover sua conta?")) {
        window.location.href = "delete_bdusers.php";
    }
});

document.querySelector(".btn-atualizar_settings_users").addEventListener('click', e => {
    e.preventDefault();


    let senha1 = document.querySelector(".setting_senha_nova1").value;
    let senha2 = document.querySelector(".setting_senha_nova2").value;

    let email = document.querySelector(".email_users").value;
    if (!email) {
        alert("Email não pode ficar vazio!");
    } else {
        if (senha1 == senha2) {
            if (confirm("Tem certeza que deseja atualizar seus dados?")) {
                document.querySelector('.settings_update_form').submit();
            }
        } else {
            alert("Senhas não coincidem.");
        }
    }
});