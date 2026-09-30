#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float salario, valorHora;
    int horasTra;
    
    printf("Registre a quantidade de horas trabalhadas: ");
    scanf("%d", &horasTra);
    
    printf("Registre o valor ganho por hora: ");
    scanf("%f", &valorHora);
	
	salario = horasTra * valorHora;
	
	printf("\n Seu salário bruto: %.2f", salario);
	
	return 0;
}
