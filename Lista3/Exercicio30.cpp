#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float saldo = 1000;
    float valor;

    while(opcao != 4){

        printf("\n--- CAIXA ELETRÔNICO ---\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        system("cls");

        switch(opcao){

            case 1:
                printf("\nSeu saldo é: R$ %.2f\n", saldo);
            break;

            case 2:
                printf("\nDigite o valor do depósito: ");
                scanf("%f", &valor);

                saldo = saldo + valor;

                printf("Depósito realizado!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
            break;

            case 3:
                printf("\nDigite o valor do saque: ");
                scanf("%f", &valor);

                if(valor <= saldo){
                    saldo = saldo - valor;

                    printf("Saque realizado!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                    
                }else{
                    printf("Saldo insuficiente!\n");
                }
            break;

            case 4:
                printf("\nPrograma está sendo encerrado...\n");
                sleep(3);
            break;
            

            default:
                printf("\nOpção inválida!\n");
        }
        
       
    }

    return 0;
}
	

