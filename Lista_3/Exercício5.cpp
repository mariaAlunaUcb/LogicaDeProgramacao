#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
   float base, altura, area;
   
   printf("Escreva a base do retângulo: ");
   scanf("%f", &base);
   
   printf("Escreva a altura do retângulo: ");
   scanf("%f", &altura);
   
   area = base * altura;
   printf("ÁREA = %.2f", area);
   
   return 0;	
}
