#include <stdio.h>

int main (){
	
	
	int inteira = 10;       //Usa o comando %i
	float decimal = 10.5;   //Usa o comando %f para ajustar as casa decimais colocar %0.2f
	char caractere = 'a';   // Usa o comando %c
	
	printf ("%i\n", inteira);
	printf("%0.2f\n", decimal);
	printf("%c\n", caractere);
	
		
	// divindo valores usando o float 
	
	printf("======Dividindo valores usando o float========\n\n");
	
	int num1 = 5;
	float num2 = 2;
	float resultado = num1 / num2;
	
	printf("%0.2f\n", resultado);
		
	
	
	
	return 0;
}
