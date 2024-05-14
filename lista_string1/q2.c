#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void criptografar(char frase[], char fraseinvertida[]){
    int i,j, fim = 0 ;
    while(frase[fim] != '\0' && frase[fim] != '\n'){
        fim++;
    }
    i = fim - 1;
    j = 0;
    while (j<fim){
        fraseinvertida[j] = frase[i];
        i--;
        j++;
        }
    fraseinvertida[fim] = '\0';
    printf("Frase criptografada: %s \n",fraseinvertida);
}

int main(){
    char frase[101], frase_inver[101];
    
    printf("Digite a frase de no max 100 caracteres que deseja criptografar \n");
    fgets(frase,101,stdin);
    criptografar(frase,frase_inver);
    return 0;
}