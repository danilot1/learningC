#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int comparacao(char sequencia1[51], char sequencia2[51]) {
    int i;
    for (i = 0; sequencia1[i] != '\0' && sequencia2[i] != '\0'; i++) {
        if (sequencia1[i] == sequencia2[i] || toupper(sequencia1[i]) == toupper(sequencia2[i])) {
            continue; 
        } else {
            return 0;
        }
    }
    return 1; 
}

int main() {
    char sequencia1[51];
    char sequencia2[51];
    int resultado;
    printf("Digite uma frase de no max 50 caracteres:\n");
    gets(sequencia1);
    printf("Digite outra frase de no max 50 caracteres:\n");
    gets(sequencia2);
    resultado = comparacao(sequencia1,sequencia2);
    printf("%d",resultado);
    return 0;
}