#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptografar(char frase[]){
    int i;
    
    for(i=0;i<81; i++){
        if(frase[i]=='a' || frase[i]=='e' || frase[i] =='i'  || frase[i] =='o'  
        || frase[i]=='u' || frase[i]=='A' || frase[i]=='E' || frase[i] =='I'  
        || frase[i] =='O'  || frase[i]=='U'  ){
            frase[i]='*';
        }
    }
    printf("%s", frase);
}


int main(){
    char frase[81];
    printf("Digite a frase que de 80 caracteres que deseja criptografar \n");
    gets(frase);
    criptografar(frase);
    return 0;
}