#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
   char produto[50];
   int quantidade;
   float preco, total;
   
   printf("Escreva o nome do produto comprado: ");
   scanf("%s", produto);
   
   printf("Escreva a quantidade comprada: ");
   scanf("%d", &quantidade);
   
   printf("Escreva o preço unitário: ");
   scanf("%f", &preco);
   
   total = quantidade * preco;
   
   printf("\n---Valor da Compra---");
   printf("\n");
   printf("\nProduto = %s", produto);
   printf("\nQuantidade = %d", quantidade);
   printf("\nPreço total = %.2f", total);
   
   return 0;	
}
