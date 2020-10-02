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
	
	idade = anoAtual - anoNascimento;
	
	printf("Sua idade e´: %i", idade);
	printf(" anos");
	
	
	
	return 0;
}
