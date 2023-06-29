#include <stdio.h>

int main(){
	float media;
	printf("Insira a sua media: \n");
	scanf("%f", &media);
	if(media < 7){
		printf("Reprovado\n");
	}
	else{
		printf("Aprovado\n");
	}
	return 0;
}
