// let dados = new Array;
// those things inside dados is a json (Javascript Object Notation)
let dados = [{
    id: 1,
    titulo: "Estudar HTML",
}, {
    id: 2,
    titulo: "Estudar CSS",
}, {
    id: 3,
    titulo: "Estudar Javascript",
}, {
    id: 4,
    titulo: "Estudar PHP",
}];

function listarTarefas() {
    document.querySelector('.listaTarefas').innerHTML = '';
    dados.forEach(tarefa => {
        // creating li
        let li = document.createElement('li');
        // inserting in html
        // tarefa is the variable of the array
        // ${} is a way to insert a variable of javascript in the html data
        li.innerHTML = `
        <input type="checkbox" id="tarefa-${tarefa.id}"/>
        <label for="tarefa-${tarefa.id}">${tarefa.titulo}</label>
        <button>X</button>`;
        
        // quando o usuário clicar no input, isso irá mudar
        li.querySelector('input').addEventListener("change", e => {
            // e.target pega o item que eu selecionar
            // checked é para verificar se o meu target está com o valor marcado
            if(e.target.checked) {
                // classlist faz a listagem das classes do li
                // add vai incluir outra classe
                li.classList.add('complete');
            } else {
                // remover class
                li.classList.remove('complete');
            }
        });

    li.querySelector('button').addEventListener('click', e => {
        // console.warn("Você vai deletar este item.");
        // console.dir(e);
        
        // filter vai pegar os dados dentro do array que não condiz com algum dado
        /*
        dados = dados.filter(tarefa => {
            return tarefa.id != parseInt(idd);
        });
        */
        /*
        let button = e.target;
        let li = button.parentNode;
        let input = li.querySelector('input');
        let id = input.id;
        let idArray = id.split('-');
        let idd = idArray[1];
        */
        let idd = e.target.parentNode.querySelector('input').id.split('-')[1]; 
        let titulo = e.target.parentNode.querySelector('label').innerHTML;
        if(confirm(`Deseja realmente deletar a tarefa ${titulo} ?`)) {
            dados = dados.filter(tarefa => tarefa.id != parseInt(idd)); 
            listarTarefas();
        }
    });

    document.querySelector('.listaTarefas').append(li);
    });
}

// sempre que eu apertar alguma tecla
document.querySelector('#novaTarefa').addEventListener('keyup', e => {
    if(e.key == "Enter") {
        console.log(e.target.value);
        dados.push({
            id: dados.length + 1,
            titulo: e.target.value
        });
        e.target.value = "";
    
        listarTarefas();
    }
});

listarTarefas();


