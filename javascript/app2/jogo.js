/****************
Definir altura e largura criando uma variavel 
dos dois fora da function, ou seja, no escopo global 
e chamar a funcion no body pelo onresize
*/

var altura = 0
var largura = 0
var vidas = 1
var tempo = 10
var criaMoscaTempo = 1500

var nivel = window.location.search // atributo serach trará tudo que está depois da ?
nivel = nivel.replace('?', '')// replace substitui

if(nivel === 'facil'){
	//1500
	criaMoscaTempo = 1500
}else if (nivel ==='normal'){
	//1000
	criaMoscaTempo = 1000
} else if (nivel === 'dificil'){
	//750
	criaMoscaTempo = 750
}

function ajustaTamanhoPalcoJogo () {
	 altura = window.innerHeight
	 largura = window.innerWidth

	console.log(altura, largura)
}

ajustaTamanhoPalcoJogo()

// cronometro de tempo do jogo
var cronometro = setInterval (function(){
//caso o usuario vença a partida
	tempo -= 1
	if (tempo <0){
		clearInterval(cronometro)
		clearInterval(criarMosca)
		window.location.href = 'vitoria.html'
	} else{
	document.getElementById('cronometro').innerHTML = tempo //inner dentro das tags
	}
}, 1000)

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

		//afetará o elemento vidas caso nao clicar na mosca
		if(vidas > 3){
			window.location.href = 'fim_de_jogo.html'
		} else{
			//console.log('elemento selecionado foi: v' + vidas)
		document.getElementById('v' + vidas).src="imagens/coracao_vazio.png"
		vidas++
		}
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
	/*Ação quando clica na mosca antes de desaparecer*/
	mosca.onclick= function(){
		this.remove() // faz referência ao próprio elemento da função
	}

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