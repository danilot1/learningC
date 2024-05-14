
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
 
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int verifica(const char nome[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (!isalpha(nome[i]) && nome[i] != ' ') {
            return 0;
        }
    }
    return 1;
}
 
void conversao(char nome[]) {
    int tamanho = 0;
    printf("Digite o seu nome: \n");
    gets(nome);
    tamanho = strlen(nome);
   
    // Remover o caractere de nova linha (\n) do final da string, se presente
    if (nome[tamanho] == '\n') {
        nome[tamanho] = '\0';
        tamanho--; // Decrementar o tamanho para desconsiderar o caractere de nova linha
    }
 
    while (verifica(nome, tamanho) == 0) {
        printf("Digite um valor válido: ");
        gets(nome);
        tamanho = strlen(nome);
        if (nome[tamanho] == '\n') {
            nome[tamanho] = '\0';
            tamanho--; // Decrementar o tamanho para desconsiderar o caractere de nova linha
        }
    }
 
    for (int i = 0; i < tamanho; i++) {
        if(i == 0 || nome[i-1] == ' '){
            nome[i] = toupper(nome[i]);
        }
        else{
            nome[i] = tolower(nome[i]);
        }
       
    }
    printf("%s", nome);
}
 
int main() {
    char nome[100]; // Definindo um tamanho máximo para a string nome
    conversao(nome);
    return 0;
}
 