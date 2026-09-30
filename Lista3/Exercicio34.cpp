#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "");

    char produto[50];

    int quantidade;
    int opcao = 1;

    int vendas = 0;
    int totalProdutos = 0;

    float preco;
    float totalVenda;
    float faturamento = 0;
    float maiorVenda = 0;

    while (opcao == 1) {
        
        system("cls");
        printf("\nDeseja registrar uma venda?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        system("cls");
      
        if (opcao == 1) {

            printf("\nDigite o nome do produto: ");
            scanf(" %[^\n]", produto);

            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            printf("Digite o preco unitario: ");
            scanf("%f", &preco);

            totalVenda = quantidade * preco;

            vendas++;
            totalProdutos = totalProdutos + quantidade;
            faturamento = faturamento + totalVenda;

            if (totalVenda > maiorVenda) {
                maiorVenda = totalVenda;
            }

            printf("Total da venda: R$ %.2f\n", totalVenda);
        }
    }

    printf("\n===== RELATORIO FINAL =====\n");
    printf("Quantidade de vendas: %d\n", vendas);
    printf("Quantidade total de produtos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda realizada: R$ %.2f\n", maiorVenda);

    return 0;
}
