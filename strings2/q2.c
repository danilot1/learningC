#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(){
    char nome[31];
    int tamanho = 0;
    printf("Qual o seu nome ? \n");
    scanf("%s",nome);
    fflush(stdin);
    while(nome[tamanho] != '\0'){
        tamanho++;
    }
    
    if(tamanho > 31){
        printf("Voce excedeu o numero de caractres \n");
    }
    else{
        printf("Ola %s", nome);
    }
    return 0;
}