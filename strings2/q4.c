#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
    int main(){
        char nome[51];
        int i, tamanho = 0;
        while(nome[tamanho]!='\0'){
            tamanho++;
        }
        printf("Digite seu nome: ");
        gets(nome);
        for( i= 0; i<tamanho;i++){
            if(nome[i]!= isalpha(nome[i])){
                printf("O nome digitado e invalido \n");
            }
            
            else{
                printf("Bem vindo, %s ", nome);
            }
        }
        return 0;
    }