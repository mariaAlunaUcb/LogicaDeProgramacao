#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float litro, km, consumo;
	
	printf("Registre a distância percorrida em km : ");
	scanf("%f", &km );
	
	printf("Registre quantos litros de combustível foram gastos: ");
	scanf("%f", &litro);
	
	consumo = km/litro;
	
	printf("\nA média de consumo do seu carro é de: %.2fKm/l", consumo);
	
	
	return 0;
}
