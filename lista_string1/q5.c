#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
void contaCaracter(char frase [], char caracter){
    int i, qtdcaracter = 0, tamanho= 0;
    while(frase[tamanho]!='\0'){
        tamanho++;
    }
    for(i=0; i<tamanho;i++){
        if(frase[i]== caracter){
            qtdcaracter++;
        }
    }
    printf("O caractere '%c' aparece %d vezes na frase: %s ",caracter, qtdcaracter,frase);
}

int main() {
    char frase[101]; 
    char caracter;
    printf("Digite a fraase de no max 100 caracteres \n");
    gets(frase);
    printf("Digite o caracter que voce deseja contabilizar: \n");
    caracter = getchar();
    contaCaracter(frase,caracter);
    return 0;
}