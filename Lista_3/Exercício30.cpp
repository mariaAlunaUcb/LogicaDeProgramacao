#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float deposito, valor, saldo = 100;
   
  
    while(opcao != 4){
        system("cls");
        printf("\n------CAIXA ELETRÔNICO------");
        printf("\n1- Consultar saldo");
        printf("\n2- Depositar");
        printf("\n3- Sacar");
        printf("\n4- Sair");
        printf("\nEscolha uma das opções: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
                printf("O seu saldo atual é de: %.2f reais\n", saldo);
                break;

            case 2:
                printf("Digite o valor do depósito: ");
                scanf("%f", &deposito);

                saldo = saldo + deposito;

                printf("Depósito realizado!\n");
                break;

            case 3:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);

                if(valor <= saldo)
                {
                    saldo = saldo - valor;
                    printf("Saque realizado!\n");
                }
                else
                {
                    printf("Saldo insuficiente!\n");
                }

                break;

            case 4:
                printf("Saindo...");
                break;

            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
