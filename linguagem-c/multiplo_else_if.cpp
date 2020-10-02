#include <stdio.h>

int main (){
	
	
	int idade;
	printf("Digite sua idade:\n");
	scanf("%i", &idade);
	
	// && une duas comparações
	
	
	if (idade <= 5){
		printf(" bebe \n");
	}else if (idade > 5 && idade <=10){
		printf(" crianca \n");
	}else if (idade > 10 && idade <=18){
		printf("Adolescente \n");
	}else if (idade > 18  && idade <=50){
		printf("Adulto");
	}else {
		printf("idoso \n");
	}	
	
	return 0;
}
