var wasAdded = [0,0,0,0,0,0,0,0,0,0];

document.querySelector("#addCar1").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb1").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[0]) {
        currentValue -= wasAdded[0];
    }

    result = qtd + currentValue;
    wasAdded[0] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar2").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb2").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[1]) {
        currentValue -= wasAdded[1];
    }

    result = qtd + currentValue;
    wasAdded[1] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar3").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb3").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[2]) {
        currentValue -= wasAdded[2];
    }

    result = qtd + currentValue;
    wasAdded[2] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar4").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb4").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[3]) {
        currentValue -= wasAdded[3];
    }

    result = qtd + currentValue;
    wasAdded[3] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar5").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb5").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[4]) {
        currentValue -= wasAdded[4];
    }

    result = qtd + currentValue;
    wasAdded[4] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar6").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb6").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[5]) {
        currentValue -= wasAdded[5];
    }

    result = qtd + currentValue;
    wasAdded[5] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar7").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb7").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[6]) {
        currentValue -= wasAdded[6];
    }

    result = qtd + currentValue;
    wasAdded[6] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar8").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb8").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[7]) {
        currentValue -= wasAdded[7];
    }

    result = qtd + currentValue;
    wasAdded[7] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar9").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb9").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[8]) {
        currentValue -= wasAdded[8];
    }

    result = qtd + currentValue;
    wasAdded[8] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});

document.querySelector("#addCar10").addEventListener('click', e => {
    e.preventDefault();
    var qtd = parseInt(document.querySelector("#qtdb10").value);
    var currentValue = parseInt(document.querySelector('#itemsAdded').innerHTML);
    var result = 0;
    if(wasAdded[9]) {
        currentValue -= wasAdded[9];
    }

    result = qtd + currentValue;
    wasAdded[9] = qtd; 
    document.querySelector('#itemsAdded').innerHTML =  result.toString();
});
