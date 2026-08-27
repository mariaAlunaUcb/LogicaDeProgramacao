#include <stdio.h>
#include <stdlib.h>

int main(){
   float nota1, nota2, nota3, mediaPonderada;
   
   printf("Escreva a sua nota 1: ");
   scanf("%f", &nota1);
   
   printf("Escreva a sua nota 2: ");
   scanf("%f", &nota2);
   
   printf("Escreva a sua nota 3: ");
   scanf("%f", &nota3);
   
   mediaPonderada = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6;
   printf("A sua media ponderada e: %.2f", mediaPonderada);
	
   return 0;
}
