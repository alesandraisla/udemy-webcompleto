#include <stdio.h>

int main (){
	
	int contador = 1; // contador recebe 1
	
	/*
	while(condicao  < <= > >= != ==  ){
	executar algum comando
	++;  ou --;
	}
	
	*/
	
	while (contador <= 5){
		printf("%i\n", contador);
		++contador; // se n�o definir o incremento/decremento o contador ir� contar eternamente (ciclo de loop eterno)
		
	};
		
		
		
		
	return 0;
}
