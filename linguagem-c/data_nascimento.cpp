#include <stdio.h>

int main () {
		/*
	int dia;
	int mes;
	int ano;

	
	printf("Digite o dia de nascimento");
	scanf("%i", &dia);
	
	printf("Digite o mes de nascimento ");
	scanf("%i", &mes );
	
	printf("Digite o ano de nascimento");
	scanf("%i", &ano);
	
	printf("Sua data de nascimento e':\n dia = %i \n mes = %i \n ano = %i", dia, mes, ano);
	*/
	
	int anoAtual;
	int anoNascimento;
	int idade;

	

	
	printf("========== Descobrindo a idade ==========\n\n");
	
	printf("Digite o ano atual:");
	scanf("%i", &anoAtual);
	
	printf("Digite o seu ano de nascimento:");
	scanf("%i", &anoNascimento);
	
	printf("\n===== Resultado =====\n\n");
	
	
	if (anoNascimento > anoAtual){
		printf(" Erro: Data de nascimento superior a data atual. \n Favor refazer o teste");
	
	} else if (anoNascimento <= 0){
		printf(" Erro: Data de nascimento incorreta. A data de nascimento tem que ser maior ou igual a 1. \n Favor refazer o teste");
		
	} else {
		idade = anoAtual - anoNascimento;
		printf("Sua idade e´: %i", idade);
		printf(" anos");
		
	}
	
	
	
	
	

	
	
	
	return 0;
}
