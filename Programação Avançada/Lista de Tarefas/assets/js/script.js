// inserindo dados padrões no array de objetos
let dados = [];

function updateids() {
    let i = 1;
    dados.forEach(tarefa => {
        tarefa.id = i++;
    });
}

// função utilizada para atualizar a lista de tarefas na tela
function listarTarefas() {
    // limpando dados na tela
    document.querySelector('.listaTarefas').innerHTML = '';
    // percorrendo array de objetos 
    dados.forEach(tarefa => {
        // criando elemento do tipo li
        let li = document.createElement('li');
        // inserindo conteudo neste element
        li.innerHTML = `
        <input type="checkbox" id="tarefa-${tarefa.id}"/>
        <label for="tarefa-${tarefa.id}">${tarefa.titulo}</label> 
        <span>${tarefa.date} ${tarefa.hour} - ${tarefa.local}</span>
        <button id="delete">X</button> <button id="edit">Edit</button>`;
        // quando ouver algum mudança no checkbox
        li.querySelector('input').addEventListener("change", e => {
            if(e.target.checked) {
                // se ele estiver marcado, inserir classe que especifica isso
                li.classList.add('complete');
            } else {
                // remover classe quando o checkbox for desmarcado
                li.classList.remove('complete');
            }
        });

        // função utilizada para quando os botões de deletar lista forem clicado
        li.querySelector('#delete').addEventListener('click', e => {
            // obtendo o id do parent node do botão que é tarefa-algum_número
            // e separando este número levando em consideração o -, onde
            // a primeira posição do array será a palavra tarefa e a segunda posição
            // será o número da tarefa  
            let idd = e.target.parentNode.querySelector('input').id.split('-')[1]; 
            // obtendo o titulo da tarefa no id que está no label
            let titulo = e.target.parentNode.querySelector('label').innerHTML;
            // criando uma caixa de dialogo para confirmar se o usuário realmente quer deletar a tarefa
            if(confirm(`Deseja realmente deletar a tarefa ${titulo} ?`)) {
                // obter todos os valores do array 'dados' onde só são retornados valores
                // em que o id da tarefa seja diferente do id da tarefa que o usuário quer remover
                dados = dados.filter(tarefa => tarefa.id != parseInt(idd)); 
                // e atualizar as tarefas na tela do site
                updateids();
                listarTarefas();
            }
        });
        
        // função utilizada para quando os botões de editar a lista forem clicado
        li.querySelector('#edit').addEventListener('click', e => {
            // obtendo o id do parent node do botão que é tarefa-algum_número
            // e separando este número levando em consideração o -, onde
            // a primeira posição do array será a palavra tarefa e a segunda posição
            // será o número da tarefa  
            let idd = e.target.parentNode.querySelector('input').id.split('-')[1];
            // obtendo o titulo da tarefa no id que está no label
            let titulo = e.target.parentNode.querySelector('label').innerHTML;
            let date = e.target.parentNode.querySelector('span').innerHTML.split(' - ')[0].split(' ')[0];
            let hour = e.target.parentNode.querySelector('span').innerHTML.split(' - ')[0].split(' ')[1];
            let local = e.target.parentNode.querySelector('span').innerHTML.split(' - ')[1];
            // criando uma caixa de dialogo do tipo prompt para que o usuário entre com algum valor
            // de modo que o que estava antes seja sobreescrito, onde o primeiro parametro da função
            // é a mensagem da caixa de dialogo e o segundo parametro é o valor padrão inserido no input
            // que neste caso será o titulo da tarefa
            let updateTask = prompt('Editar tarefa: ', titulo);
            let updateDate = prompt('Atualizar data (## / ## / ####): ', date);
            let updateHour = prompt('Atualizar hora: (## : ## : ##)', hour);
            let updateLocal = prompt('Atualizar cidade: ', local);
            dados.forEach( task => {
                // updating text if possible
                if(task.id == idd) {
                    if(updateTask != "" && updateTask != null)
                        task.titulo = updateTask;
                    if(updateDate != "" && updateDate != null && isValidDate(updateDate))
                        task.date = updateDate;
                    if(updateHour != "" && updateHour != null && isValidHour(updateHour))
                        task.hour = updateHour;
                    if(updateLocal != "" && updateLocal != null)
                        task.local = updateLocal;
                }
                // e atualizar as tarefas na tela do site
                listarTarefas();
            });
        });
        // append a tarefa no final das já inseridas
        document.querySelector('.listaTarefas').append(li);
    });
}

function isValidDate(updateDate) {
    copyStr = '';
    for(let i = 0; i < updateDate.length; i++) {
        if(updateDate[i] != '/') {
            copyStr+='0';
        } else {
            copyStr+='/';
        }
    }

    return (copyStr === "00/0/0000" || copyStr === "00/00/0000");
}

function isValidHour(updateHour) {
    copyStr = '';
    for(let i = 0; i < updateHour.length; i++) {
        if(updateHour[i] != ':')
            copyStr+='0';
        else
            copyStr+=':';
    }

    return (copyStr == "00:00:00" || copyStr == "00:0:00");
}


function isEmpty(str) {
    for(let i = 0; i < str.length; i++) {
        if(str[i] != " ")
            return false;
    }
    return true;
}

// sempre que apertar alguma tecla
document.querySelector('#novaTarefa').addEventListener('keyup', e => {
    // se for enter, inserir valor digitado na tela
    // se o valor em e.target.value for igual de vazio, ele não adicionará nada
    if(e.key == "Enter" && !isEmpty(e.target.value)) {
        // inserindo no array
        dados.push({
            id: dados.length + 1,
            titulo: e.target.value,
            date: new Date().getDate() + "/" + (parseInt(new Date().getMonth()) + 1).toString() + "/" + new Date().getFullYear(),
            hour: new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds(),
            local: 'Castanhal',
        });
        // limpando dados do input para que possa ser digitado outra coisa novamente
        // sem que o dado anterior esteja presente
        e.target.value = "";
        // atualizando tarefas na tela
        updateids();
        listarTarefas();
    }
});

// chamando função listarTarefas para que assim que o site seja carregado, ele possa inserir
// os valores padrões do array dados na tela
listarTarefas();


