#include <stdio.h>

int main (){
	
	//gerar um numero fatorial
	//ex de 5 é 5*4*3*2*1 - 1 - 1 -1 
	
	int fatorial = 5; // 5*4*3*2*1 = 120

	int resposta = 1;
	
	
	for (fatorial = 5; fatorial >= 1; fatorial--){    //enquanto o fatorial que é 5 for maior ou igual a 1 reduza 1 de fatorial
		//	resposta = fatorial - 1; 
		resposta *= fatorial; // resposta = resposta * fatorial
	}
	
		printf("O numero fatorial e´%i\n", resposta);	
	
	
	
	
	
	return 0;
}
