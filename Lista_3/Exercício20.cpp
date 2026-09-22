
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, soma, subtracao, divisao, multiplicacao;
    int operacao;

    printf("Escreva um número: ");
    scanf("%f", &n1);

    printf("Escreva outro número: ");
    scanf("%f", &n2);

    system("cls");

    printf("\n----CALCULADORA----");
    printf("\nEscolha uma opção: ");
    printf("\n1- SOMA");
    printf("\n2- SUBTRAÇÃO");
    printf("\n3- MULTIPLICAÇÃO");
    printf("\n4- DIVISÃO");

    printf("\n\nDigite a opção: ");
    scanf("%d", &operacao);

    switch(operacao){

        case 1:
            soma = n1 + n2;
            printf("\nVocê escolheu soma.");
            printf("\nRESULTADO = %.2f", soma);
            break;

        case 2:
            subtracao = n1 - n2;
            printf("\nVocê escolheu subtração.");
            printf("\nRESULTADO = %.2f", subtracao);
            break;

        case 3:
            multiplicacao = n1 * n2;
            printf("\nVocê escolheu multiplicação.");
            printf("\nRESULTADO = %.2f", multiplicacao);
            break;

        case 4:
            if(n2 != 0){
                divisao = n1 / n2;
                printf("\nVocê escolheu divisão.");
                printf("\nRESULTADO = %.2f", divisao);
            }else{
                printf("\nErro! O segundo número não pode ser zero.");
            }
            break;

        default:
            printf("\nEsta opção não existe!");
    }

    return 0;
}

