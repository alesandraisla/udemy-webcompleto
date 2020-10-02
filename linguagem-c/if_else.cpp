#include <stdio.h>

int main (){
	
	int idade;
	
	
	printf("Favor informar a idade:\n");
	scanf("%i", &idade);
	
	if (idade < 18){
		printf("Menor de idade");
		
	} else {
		printf("Maior de idade");
	}
	
	
	
return 0;
	
}
