#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
int validacao(char senha[]){
   int i, tamanho = 0;
   printf("Digite a senha para valida-la \n");
   for (i = 0; i < 20; i++) {
        senha[i] = getch();
        if (senha[i] == '\r') {
            senha[i] = '\0';
            break;
        }
        printf("*");
    }
    tamanho = strlen(senha);
    for(i=0;i<tamanho;i++){
        if((senha[i] >='A' || senha[i] >= 'a') && (senha[i]<='Z' || senha[i] <='z') || (senha[i] >= '0' || senha[i] <= '9') && !isalnum(senha[i])){
            return 1;
        }
        else{
            return 0;
        }
    }
    
}
int main (){
    char senha [21];
    int resultado;
    resultado = validacao(senha);
    if(resultado == 1){
        printf("\n%d (valida)",resultado);
    }
    else if(resultado == 0){
        printf("\n%d (invalida)",resultado);
    }
   
}