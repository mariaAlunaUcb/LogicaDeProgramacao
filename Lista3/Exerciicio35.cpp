#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i;
    int quantidade;
    char nome[50];

    float nota1, nota2, media;
    float somaMedias = 0;
    float maiorMedia, menorMedia;

    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    for(i = 0; i < quantidade; i++){

        system("cls");

        printf("Digite o nome do aluno: ");
        scanf("%s", nome);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        if(i == 0){
            maiorMedia = media;
            menorMedia = media;
        }

        somaMedias = somaMedias + media;

        if(media >= 7){
            printf("\nAprovado!");
            aprovados++;
        }
        else if(media >= 5){
            printf("\nRecuperação!");
            recuperacao++;
        }
        else{
            printf("\nReprovado!");
            reprovados++;
        }

        if(media > maiorMedia){
            maiorMedia = media;
        }

        if(media < menorMedia){
            menorMedia = media;
        }

        sleep(2);
    }

    float mediaGeral = somaMedias / quantidade;

    system("cls");

    printf("\n--- RESULTADO FINAL ---");

    printf("\n\nQuantidade de alunos: %d", quantidade);
    printf("\nQuantidade de aprovados: %d", aprovados);
    printf("\nQuantidade em recuperação: %d", recuperacao);
    printf("\nQuantidade de reprovados: %d", reprovados);
    printf("\nMédia geral da turma: %.2f", mediaGeral);
    printf("\nMaior média: %.2f", maiorMedia);
    printf("\nMenor média: %.2f", menorMedia);

    return 0;
}
