#include <stdio.h>

int main (){
	
	//Variável é um espaço em memória que armazena uma informação
	int primeiraIdade;
	primeiraIdade = 23;
	printf("A primeira idade e' = %i.\n", primeiraIdade);   // int ->declarar %i e depois informar o nome da variavel após a virgula 
		
	int segundaIdade = 18;
	printf("A segunda idade e' = %i. \n", segundaIdade);
	
	int terceiraIdade = 26;				// pode escrever tudo de uma vez
	printf("A terceira idade e' = %i. \n\n\n\n", terceiraIdade);
	
	//Imprimindo todas variaveis de uma única vez//
	printf(" Primeira idade = %i\n Segunda idade = %i\n Terceira idade = %i \n\n\n", primeiraIdade, segundaIdade, terceiraIdade );
	
	int idadeTotal;
	idadeTotal = primeiraIdade + segundaIdade + terceiraIdade;
	
	printf(" Soma das idades = %i ", idadeTotal);
	
	
		
	
	return 0;
}
