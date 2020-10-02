#include <stdio.h>


int main (){
	
	int emprestimo;
	int juros;
	int valorTotal;
	int meses;
	int valorPagoMes;
	int valorPagoFinalMes;
	int jurosPagos;
	
	printf("Digite o valor da parcela");
	scanf("%d", &emprestimo);
	
	printf("Digite o numero de meses");
	scanf("%d", &meses);
	
	printf("Digite a taxa de juros ao mes");
	scanf("%d", &juros);
	
	valorPagoMes = emprestimo * juros /100;
	valorPagoFinalMes = emprestimo + valorPagoMes;
	valorTotal = valorPagoFinalMes * meses;
	jurosPagos = valorTotal - emprestimo * meses;
	
	printf("Valor total = %d \n", valorTotal);
	printf("Juros total pago = %d", jurosPagos);
	

	
	
	
	
	
	return 0;
}
