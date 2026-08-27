#include <stdio.h>
#include <stdlib.h>
int main() {
   int NHoraTrabalho;
   float salarioMinimo, salarioFinal, valorHora, salarioBruto, imposto;
   
   printf("Digite o numero de horas trabalhadas: ");
   scanf("%d", &NHoraTrabalho);
   
   printf("Digite o salario minimo: ");
   scanf("%f", &salarioMinimo);
   
   valorHora = salarioMinimo/2;
   salarioBruto = NHoraTrabalho * valorHora;
   imposto = salarioBruto * 0.03;
   salarioFinal = salarioBruto - imposto;
   
   printf("Valor da hora = %.2f", valorHora);
   printf("\nSalario bruto = %.2f", salarioBruto);
   printf("\nValor de imposto = %.2f", imposto);
   printf("\nSalario final = %.2f", salarioFinal);
   
   
    
    return 0;
}
