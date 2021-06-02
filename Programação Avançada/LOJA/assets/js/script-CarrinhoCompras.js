document.querySelector("#addCarrinho").addEventListener("click", e => {

	document.querySelector("#ImgCarrinho").src='assets/images/1item.png';
		
	var qtdprod1 = parseInt(document.querySelector("#qtdProduto1").value);
	var qtdprod2 = parseInt(document.querySelector("#qtdProduto2").value);
	var qtdprod3 = parseInt(document.querySelector("#qtdProduto3").value);
	var qtdprod4 = parseInt(document.querySelector("#qtdProduto4").value);

	qtdCarrinho = qtdprod1 + qtdprod2 + qtdprod3 + qtdprod4;
	document.querySelector('#QtdCarrinho').innerHTML = qtdCarrinho;
});

document.querySelector("#finalizaCompras").addEventListener("click", e => {

	
	qtdCarrinho = qtdprod1 + qtdprod2 + qtdprod3 + qtdprod4;
	document.querySelector('#QtdCarrinho').innerHTML = qtdCarrinho;
});

