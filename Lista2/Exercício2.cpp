#include <stdio.h>
#include <string.h>

int main(){
	char nome[30], sexo, estadoCivil[30];
	int anosDeCasamento;
	
	printf("Escreva o seu nome: ");
	scanf("%s", nome);
	
	printf("Escreva F para sexo feminino ou M para  sexo masculino: ");
	getchar();
	
	sexo = getchar();
	
	printf("Escreva seu estado civil: ");
	scanf("%s", estadoCivil);
	
	
	if( (sexo == 'F' || sexo == 'f' ) && strcasecmp(estadoCivil, "CASADA") == 0){
		
		printf("Tempo de casamento: ");
		scanf("%d", &anosDeCasamento);
	}
	
	printf("Ola, %s!", nome);
	printf("\nVoce e mulher e casada a %d anos.", anosDeCasamento);
	
	return 0;
	
	
}
