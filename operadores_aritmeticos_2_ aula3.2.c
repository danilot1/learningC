#include <stdio.h>
int main(){
	
	int dado = 10;
	printf("Dado antes do incremento: %i \n",dado);
	
	dado ++;
	printf("Dado depois do incremento: %i \n",dado);
	
	dado --;
	printf("Dado depois do decremento: %i \n",dado);
	
	dado += 3;
	printf("Dado depois do incremento em 3 unidades: %i \n",dado);
	
	dado -= 3;
	printf("Dado depois do decremento em 3 unidades: %i \n",dado);
	
	dado *=10;
	printf("Dado depois de multiplicar por 10: %i \n",dado);
	
	return 0;
}
