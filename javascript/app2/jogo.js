/****************
Definir altura e largura criando uma variavel 
dos dois fora da function, ou seja, no escopo global 
e chamar a funcion no body pelo onresize
*/

var altura = 0
var largura = 0

function ajustaTamanhoPalcoJogo () {
	 altura = window.innerHeight
	 largura = window.innerWidth

	console.log(altura, largura)
}

ajustaTamanhoPalcoJogo()

/************
 criando posições randômicas 
 Math.floor faz o arredondamento para baixo para eliminar as casas decimais
 deve criar uma function para encapsular tudo do jogo, 
 para que o Js entenda que o body não está zerado
 */

function posicaoRandomica(){


	// remover a mosca anterior (caso exista)
	if(document.getElementById('mosca')){
		document.getElementById('mosca').remove()
	}


	var posicaoX = Math.floor(Math.random() * altura) - 90   // gerar posição aleatória 
	var posicaoY = Math.floor(Math.random() * largura) - 90

	posicaoX = posicaoX < 0 ? 0 : posicaoX
	posicaoY = posicaoY <0 ? 0 : posicaoY

	console.log(posicaoX, posicaoY)

	var mosca = document.createElement('img') // criando elemento html
	mosca.src = 'imagens/mosca.png'			 // pegando a imagem
	mosca.className = tamanhoAleatorio() + ' ' + ladoAleatorio()    // atribuindo o estilo da imagem
	mosca.style.left = posicaoX + 'px'	// elemento posicionado nas cordenadas de forma dinâmica
	mosca.style.top = posicaoY + 'px'
	mosca.style.position = 'absolute'
	mosca.id = 'mosca'

	document.body.appendChild(mosca)		// adicionando um filho para o body



}



function tamanhoAleatorio(){
	var classe =Math.floor(Math.random() * 3)   //gerar posição aleatória e produz um numero de 0 até próximo de 1
	
	switch(classe) {
		case 0: 
			return 'mosca1'
		case 1:
			return 'mosca2'
		case 2:
			return 'mosca3'
	}
}


function ladoAleatorio (){
var classe = Math.floor(Math.random() * 2) // Colocou 2 pois terá apenas dois ladosa imagem

	switch(classe){
		case 0:
			return 'ladoA'
		case 1:
			return 'ladoB'
	}								//para alterar o lado da mosca
}