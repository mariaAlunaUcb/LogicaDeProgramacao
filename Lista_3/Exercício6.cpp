#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
   float pi = 3.14, raio, area;
   
   printf("Escreva o raio do círculo: ");
   scanf("%f", &raio);
   
   area = pi * pow(raio,2);
   
   printf("AREA = %.2f", area);
   
   return 0;	
}
