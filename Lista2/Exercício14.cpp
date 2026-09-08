#include <stdio.h>
#include <stdlib.h>

int main(){
	int prato;
	
	printf("\nCardapio: ");
	printf("\n");
	
	printf("\nOpcao 1 : Hamburguer com fritas.");
	printf("\nValor: R$28,00");
	printf("\n");
	
    printf("\nOpcao 2 : File de frango grelhado.");
	printf("\nValor: R$32,00");
	printf("\n");
	
    printf("\nOpcao 3 : Lasanha a bolonhesa. ");
	printf("\nValor: R$35,00");
	printf("\n");
	
	printf("\nOpcao 4 : File de peixe com arroz.");
	printf("\nValor: R$42,00");
	printf("\n");
	
	printf("\nOpcao 5 : Salada especial. ");
	printf("\nValor: R$25,00");
	printf("\n");
	
	printf("Escolha um prato de acordo com o numero de opcao: ");
	scanf("%d", &prato);
	
	system("cls");
	
	
	switch(prato) {
		
		case 1 :
	    	printf("\nVoce escolheu a opcao 1 : Hamburguer com fritas.");
	    	printf("\nValor: R$28,00");
	    break;
		
		case 2 :
			printf("\nVoce escolheu a opcao 2 : File de frango grelhado.");
	        printf("\nValor: R$32,00");
	    break;
	    
	    case  3 :
	    	printf("\nVoce escoheu a opcao 3 : Lasanha a bolonhesa. ");
	        printf("\nValor: R$35,00");
	    break;
	    
	    case  4 :
	        printf("\nVoce escolheu a opcao 4 : File de peixe com arroz.");
            printf("\nValor: R$42,00");
        break;
        
        case 5 :
        	printf("\nOpcao 5 : Salada especial. ");
	        printf("\nValor: R$25,00");
	    break;
	    
	    default:
	    	printf("\n Este prato não existe.");       	
			
	}
	
	return 0;
	
	
}
