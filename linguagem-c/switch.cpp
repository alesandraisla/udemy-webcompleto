#include <stdio.h>

int main () {
	
	int i;
	
	printf("Insira um numero inteiro de 1 a 5 \n");
	scanf("%i", &i);
	
	// switch (coloca a variavel) é usado quando tem as alternativas que o usuário escolherá e cada uma sofrerá uma ação
	// case ""1"" ( significa caso o valor da variavel seja 1 execute o seguinte)
	// pode adicionar quantos cases quiser
	//default (padrão, caso a variavel nao tenha nenhuma ação de cima a ação padrão será executada abaixo)
	// break (quando executa a ação e depois vai para o break, automaticamente pulará fora dos cases.)
	
	switch(i){
		case 1:
			printf(" Primeiro \n");
			break;
		case 2:
			printf(" Segundo \n");
			break;
		case 3: 
			printf(" Terceiro \n");
			break;	
		case 4:
			printf(" Quarto \n");
			break;	
		case 5:
			printf(" Quinto \n");
			break;	
		default:
			printf("opcao não valida, favor inserir de 1 a 5");
			break;	
	}
	
		return 0;
}
