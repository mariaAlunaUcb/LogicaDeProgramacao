#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    char produto[100][50];
    int quantidade[100];

    float valorUnitario[100];
    float valorTotal[100];
    float totalFinal = 0;

    int i = 0;
    int opcao = 1;

    printf("----CONTROLE DE DESPESAS----\n");

    while (opcao == 1) {

        printf("Digite o nome do produto: ");
        scanf(" %s", produto[i]);

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade[i]);

        printf("Digite o valor unitario: R$ ");
        scanf("%f", &valorUnitario[i]);

        valorTotal[i] = quantidade[i] * valorUnitario[i];

        totalFinal = totalFinal + valorTotal[i];

        i++;
        
        system("cls");
        printf("\nDeseja cadastrar outro produto?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        
        system("cls");

        printf("\n");
    }

    printf("\nRelatorio final\n\n");

    for (int j = 0; j < i; j++) {

        printf("Produto: %s\n", produto[j]);
        printf("Quantidade: %d\n", quantidade[j]);
        printf("Valor unitario: R$ %.2f\n", valorUnitario[j]);
        printf("Valor total: R$ %.2f\n", valorTotal[j]);
        printf("\n");
    }

    printf("Valor final das despesas: R$ %.2f\n", totalFinal);

    return 0;
}
