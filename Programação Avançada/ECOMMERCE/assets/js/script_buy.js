document.querySelector("#btnSubmit").addEventListener('click', e => {
    e.preventDefault();
    var products = "";
    for(var i = 1; i <= 10; i++) {
        if(parseInt(document.querySelector("#qtdb"+i.toString()).value)) {
            products += "Livro: " + document.querySelector("#img"+i.toString()).alt + ", " +
            "Quantidade: " + document.querySelector("#qtdb"+i.toString()).value + ", " + 
            "Preço: " + document.querySelector("#price"+i.toString()).innerHTML + "<br/>";
        }
    }

    document.querySelector("#all").value = products;
    document.querySelector('#products').submit(); 
});

