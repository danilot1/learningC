#include <stdio.h>

void calculovogais(char frase[]){
    int i, tamanho=0, qtd_vogais = 0;
    while(frase[tamanho] != '\0'){
        tamanho++;
    }
    for(i=0;i<tamanho;i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' ||
        frase[i] == 'u' ||frase[i] == 'A' ||frase[i] == 'E' || frase[i] == 'E' || frase[i] == 'I' || 
        frase[i] == 'O' || frase[i] == 'U'){
            qtd_vogais++;
        }
        
    }
    printf("A quantidade de vogais eh %d", qtd_vogais);
}
int main(){
    char frase[51];
    printf("digite uma frase de no max 50 caracteres \n");
    gets(frase);
    calculovogais(frase);
    return 0;
}