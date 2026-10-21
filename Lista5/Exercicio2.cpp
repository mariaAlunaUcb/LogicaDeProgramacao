#include <stdio.h>

int mes(int n){
	
	switch(n){
		case 1:
			printf("1 - Voce esta em janeiro");
			break;
			
		case 2:
			printf("2 - Voce esta em fevereiro ");
			break;
			
		case 3:
			printf("3 - Voce esta em marco");
			break;
		
		case 4:
			printf("4 - Voce esta em abril");
			break;
			
		case 5:
			printf("5 - Voce esta em maio");
			break;
			
		case 6:
			printf("6 - Voce esta em junho");
			break;
			
	    case 7:
	    	printf("7 - Voce esta em julho");
	    	break;
	     
	    case 8:
	    	printf("8 - Voce esta em agosto");
	    	break;
	    	
	    case 9:
	    	printf("9- Voce esta em setembro");
	    	break;
	    	
	    case 10:
	    	printf("10 - Voce esta em outubro");
	    	break;
	    	
	    case 11:
	    	printf("11 - Voce esta em novembro");
	    	break;
	    
	    case 12:
	    	printf("12 - Voce esta em desembro");
	    	break;
	 }
	}
	
int main(){
	int n;
	
	printf("Digite o numero do mes que voce esta: ");
	scanf("%d", &n);
	
	mes(n);
}
