function calculaTabuada() {
    let tabuada = document.querySelector("#tabuada tbody");
    let valorA = parseInt(document.querySelector("#valorA").value);
    
    tabuada.innerHTML = "";

    let ope = document.getElementById("operation").value;

    for(let valorB = 0; valorB <= 10; valorB++) {
        
        let resultado = result(valorA,valorB, ope);
        // crase `
        // td $(variavel)
        let conteudoLinhas = ` 
            <tr>
                <td>${valorA}</td> 
                <td>${ope}</td>
                <td>${valorB}</td>
                <td>=</td>
                <td>${resultado}</td>
            </tr>
        `;

        // criando elemento de tabela usando o metodo createElement
        let tr = document.createElement('tr');
        // no tr que é a linha havera as colunas criadas
        tr.innerHTML = conteudoLinhas;
        // na tabuada esta sendo concatenado os outros resultados
        tabuada.append(tr);
    }
}

function result(valorA, valorB, ope) {
    let result;
    switch(ope) {
        case "*":
            result = valorA * valorB;
            break;
        case "/":
            result = valorA / valorB;
            break;
        case "+":
            result = valorA + valorB;
            break;
        case "-":
            result = valorA - valorB;
            break;
    }
    return result;
}


document.querySelector("#valorA").addEventListener('change', calculaTabuada);
document.querySelector("#operation").addEventListener('change', calculaTabuada);
calculaTabuada()