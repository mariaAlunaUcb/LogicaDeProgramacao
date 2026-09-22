#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0, limite;
    float *notas;
    float soma = 0, media;

    printf("Escreva a quantidade de alunos que tem na sala: ");
    scanf("%d", &limite);

    notas = (float*) malloc(limite * sizeof(float));

    while(i < limite){
        printf("Escreva a nota do %d aluno: ", i + 1);
        scanf("%f", &notas[i]);
        i++;
    }

    i = 0;

    while(i < limite){
        soma = soma + notas[i];
        i++;
    }

    media = soma / limite;

    printf("\nA media geral da turma e: %.2f\n", media);

    free(notas);

    return 0;
}
