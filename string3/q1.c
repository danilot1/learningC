#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
 
// deve ter obrigatoriamente 9 caracteres
// precisa corrigir
int entrada_do_produto(char cod_prod[10]){
    int tamanho = 0, qtd_letras = 0, qtd_numeros = 0;
    printf("Digite o codigo do produto: \n");
    fgets(cod_prod,10,stdin);
    while(cod_prod[tamanho] != '\0'){
        if(isalpha(cod_prod[tamanho])){
            qtd_letras++;
        }
        else if(isdigit(cod_prod[tamanho])){
            qtd_numeros++;
        }
        tamanho++;
    }
    printf("%d\n",tamanho);
    printf("%d\n",qtd_letras);
    printf("%d\n",qtd_numeros);
 
     if(tamanho!=9){
        return 2;
    }
 
    else if((cod_prod[0] != 'A' && cod_prod[0] != 'a') || (qtd_letras != 4 ) || (qtd_numeros != 5)){
        return 3;
    }
    else{
        return 1;
    }
}
 
int main(){
    char cod_prod[10];
    int resultado;
    resultado = entrada_do_produto(cod_prod);
    printf("%d\n",resultado);
    if(resultado == 1){
        printf("O codigo %s e valido" ,cod_prod);
    }
    else if( resultado ==2){
        printf("O codigo %s nao e valido: quantidade invalida de caracteres", cod_prod);
    }
    else if( resultado == 3){
        printf("o codigo %s nao e valido: formato incorreto", cod_prod);
    }
}