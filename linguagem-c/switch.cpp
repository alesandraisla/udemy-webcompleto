#include <stdio.h>

int main () {
	
	int i;
	
	printf("Insira um numero inteiro de 1 a 5 \n");
	scanf("%i", &i);
	
	// switch (coloca a variavel) � usado quando tem as alternativas que o usu�rio escolher� e cada uma sofrer� uma a��o
	// case ""1"" ( significa caso o valor da variavel seja 1 execute o seguinte)
	// pode adicionar quantos cases quiser
	//default (padr�o, caso a variavel nao tenha nenhuma a��o de cima a a��o padr�o ser� executada abaixo)
	// break (quando executa a a��o e depois vai para o break, automaticamente pular� fora dos cases.)
	
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
			printf("opcao n�o valida, favor inserir de 1 a 5");
			break;	
	}
	
		return 0;
}
