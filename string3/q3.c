// Resolução da questão 3 da lista 3 de Manipulação de Strings
// Códigos desenvolvidos na aula do dia 13-05-2024

#define QTDQUESTOES 50
#define QTDALUNOS 100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void limparBuffer() {
    char c;
    c = getchar();
    while (c != '\n' && c != EOF) {
        c = getchar();
    }
}

void preencherGabarito(char g[]) {
    int i;
    for (i = 0; i < QTDQUESTOES; i++) {
        printf("Resposta da questão %d: ", i + 1);
        scanf_s("%c",&g[i]); limparBuffer();
        while (g[i] < 'a' || g[i] > 'e') {
            printf("Resposta inválida. Digite a, b, c, d, ou e: ");
            scanf_s("%c",&g[i]); limparBuffer();
        }
    }
}

void preencherRespostas(char n[QTDALUNOS][100], char resp[QTDALUNOS][QTDQUESTOES]) {
    int aluno, questao;
    for (aluno = 0; aluno < QTDALUNOS; aluno++) {
        printf("Informe o nome do aluno %d: ", aluno + 1);
        gets_s(n[aluno]);
        for (questao = 0; questao < QTDQUESTOES; questao++) {
            printf("Informe a resposta de %s para a questão %d: ", n[aluno], questao+1);
            scanf_s("%c",&resp[aluno][questao]); limparBuffer();
            while (resp[aluno][questao] < 'a' || resp[aluno][questao] > 'e') {
                printf("Resposta inválida. Digite a, b, c, d, ou e: ");
                scanf_s("%c",&resp[aluno][questao]); limparBuffer();
            }
        }      
    }
}

void calcularAcertos(char gab[], char resp[QTDALUNOS][QTDQUESTOES], int acertos[]) {
    int aluno, questao;
    for (aluno = 0; aluno < QTDALUNOS; aluno++) {
        for (questao = 0; questao < QTDQUESTOES; questao++) {
            if (resp[aluno][questao] == gab[questao]) {
                acertos[aluno]++;
            }
        }
    }
}

void exibirResultados(int acertos[], char n[QTDALUNOS][100]) {
    int i;
    for (i = 0; i < QTDALUNOS; i++) {
        if (acertos[i] >= 70) {
            printf("O aluno %s obteve nota %d e está aprovado \n", n[i], acertos[i]);
        }
        else {
            printf("O aluno %s obteve nota %d e está reprovado \n", n[i], acertos[i]);
        }
    }
}
int main()
{
    char gabarito[QTDQUESTOES];
    char respostas[QTDALUNOS][QTDQUESTOES];
    char nomes[QTDALUNOS][100];
    int acertos[QTDALUNOS] = { 0 };
    printf("Preencher gabarito \n");
    preencherGabarito(gabarito);
    printf("Preencher as respostas dos alunos \n");
    preencherRespostas(nomes, respostas);
    calcularAcertos(gabarito, respostas, acertos);
    printf("Resultado do exame \n");
    exibirResultados(acertos, nomes);
    return 0;
}