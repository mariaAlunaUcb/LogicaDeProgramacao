#include <stdio.h>
#include <stdlib.h>
int main() {
    float salario, cheque1, cheque2, saldoFinal;
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    printf("Digite o valor do primeiro cheque: ");
    scanf("%f", &cheque1);
    
    printf("Digite o valor do segundo cheque: ");
    scanf("%f", &cheque2);
    
    saldoFinal = salario - (cheque1 + cheque1 * 0.0038) - (cheque2  + cheque2 * 0.0038);
    printf("O valor final e = %.2f ", saldoFinal);
    
    
    return 0;
}
