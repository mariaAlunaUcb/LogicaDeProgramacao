#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    int voto1 = 0, voto2 = 0, voto3 = 0, vencedor = 0;
    int op = 1;
    
    while(op != 0){
    	
    	system("cls");
    	
    	printf("\n----SISTEMA ELEITORAL----");
    	printf("\n1- Candidato 1");
    	printf("\n2- Candidato 2");
    	printf("\n3- Candidato 2");
    	printf("\n\nEscolha uma opção: ");
    	scanf("%d", &op);
    	
    	switch(op){
    		
    		system("cls");
    		case 1:
    			printf("Você escolheu o candidato 1!");
    			voto1++;
    			sleep(1);
    		break;
    		
    		case 2:
    			printf("Você escolheu o candidato 2!");
    			voto2++;
    			sleep(1);
    		break;
    		
    		case 3:
    			printf("Você escolheu o candidato 3!");
    			voto3++;
    			sleep(1);
    		break;
    		
    		case 0:
    			printf("Encerrando sistema...");
    			sleep(1);
    		break;
    		
    		default:
    			printf("Esta opção não existe!");
    			sleep(1);
    		break;
    		
		}		
	}
    
    system("cls");
	printf("\n----RESULTADO FINAL---");
	printf("\nCandidato 1:  %d votos", voto1);
	printf("\nCandidato 2:  %d votos", voto2);
	printf("\nCandidato 3:  %d votos", voto3);
    
    
    if(voto1 > voto2 && voto1 > voto2){
       	 printf("\nVENCEDOR : candidato1");
    	
	}else if(voto2 > voto1 && voto2 > voto3){
	     printf("\nVENCEDOR : candidato2");
	     
	}else if(voto3 > voto1 && voto3 > voto2){
	     printf("\nVENCEDOR : candidato3");
	}
        
    return 0;
}
