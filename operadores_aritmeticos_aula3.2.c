#include <stdio.h>
 int main(){
	
	int A, B, soma, subtr, multipl, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d",&A);
	printf("Digite o segundo valor: \n");
	scanf("%d",&B);
	
	soma = A + B;
	subtr = A - B;
	multipl = A * B;
	divis = A / B;
	
	printf("Resultados: \n");
	printf("Soma: %d \n",soma);
	printf("Subtracao: %d \n",subtr);
	printf("Multiplicacao: %d \n",multipl);
	printf("Divisao: %d \n", divis);
	
	
	return 0;
	
 }
