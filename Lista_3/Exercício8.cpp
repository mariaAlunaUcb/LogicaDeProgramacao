#include <stdio.h>

int main(){
   float horaTb, valorHora, salario;
   
   printf("Escreva a quantidade de horas trabalhadas: ");
   scanf("%f", &horaTb);
   
   printf("Escreva o valor ganho por hora: ");
   scanf("%f", &valorHora);
   
   salario = horaTb * valorHora;
   printf("SALARIO BRUTO = R$%.2f", salario);
   
  
   return 0;	
}
