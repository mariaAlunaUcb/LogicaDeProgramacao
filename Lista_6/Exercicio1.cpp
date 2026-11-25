#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//informações do aluno
struct Aluno{
 	int matricula;
 	char nome[50];
 	float n1, n2, media;
	
};


//media
float media(struct Aluno aluno[], int i){
	float res = (aluno[i].n1 + aluno[i].n2) / 2;
	return res;
}

//Situacao
void situacao(struct Aluno aluno[], int i, char resultado[]){
	
	if(aluno[i].media < 6){
	   strcpy(resultado, "resprovado");
		
	}else if(aluno[i].media >= 6){
		strcpy(resultado, "aprovado");
	}
	
}
	
// 1- Cadastro 
void cadastro(struct Aluno aluno[], int i, int total){
	i = total;
	
	printf("Digite a matricula: ");
	scanf("%d", &aluno[i].matricula);
	
	getchar();
	printf("Digite o nome: ");
	fgets(aluno[i].nome, 50, stdin);
	
	aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';
	
	printf("Digite a nota 1: ");
	scanf("%f", &aluno[i].n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &aluno[i].n2);
	
	
	aluno[i].media = media(aluno, i);
}

// 2 - Listagem
void listagem(struct Aluno aluno[], int i){
	char resultado[20];
	
	printf("\n--Aluno %d", i + 1);
	printf("\nMatricula: %d ", aluno[i].matricula);
	printf("\nNome: %s", aluno[i].nome);
	printf("\nMedia: %.2f", aluno[i].media);
	
	situacao(aluno,i, resultado);
	
	printf("\nSituacao: %s", resultado);
	printf("\n");
	
	i++;
	
}



// 3 - Media geral
float  media_geral(struct Aluno aluno[], int total){
	float soma = 0;
	float res = 0;
	
	if(total > 0){
		for(int i = 0; i < total; i++){
		 soma += aluno[i].media;
		
	    }
	    
	   res = soma/total;
	   printf("Media geral: %.2f", res);
	   
	   getchar();
	   getchar();
	   return res;
	   
	   
	}else{
	   	printf("\nOps, nenhum aluno foi cadastrado");
	   	getchar();
	   	getchar();
	   	return 0;
	}
	
	   
}

// 4 - Desempenho
void desempenho(struct Aluno aluno[], int i, int total){
	float maior_nota= 0;
	float menor_nota=10;
	int aluno_maior=0;
	int aluno_menor=0;
	
	for(i = 0; i < total; i++){
		if(aluno[i].media > maior_nota){
			maior_nota = aluno[i].media;
			aluno_maior = i;
			
		}
		
		if(aluno[i].media < menor_nota ){
			menor_nota = aluno[i].media;
			aluno_menor = i;
			
		}
		
		
		
	} 
	system("cls");
	printf("---------Desempenho--------");
	printf("\nMatricula: %d", aluno[aluno_maior].matricula);
	printf("\nNome: %s", aluno[aluno_maior].nome);
	printf("\nMaior media: %.1f", maior_nota);
	
	printf("\n\nMatricula: %d", aluno[aluno_menor].matricula);
	printf("\nNome: %s", aluno[aluno_menor].nome);
	printf("\nMenor media: %.1f", menor_nota);
	getchar();
	getchar();
}

// 5 - Destaque
void destaque(Aluno aluno[], int i, int total, float media_g){
	int quantidade = 0;
	if(total > 0){
		for (i = 0; i < total; i++){
		 if(aluno[i].media > media_g){
		     quantidade++;
		    }
	    }
	    
	 printf("Quantidade de alunos acima da media: %d", quantidade);
	    
	}else {
		printf("Ops, sem alunos cadastrados....");
	}
	
	
	getchar();
	getchar();
	
}


	
int main(){
 	struct Aluno aluno[10];
 	int op = -1;
 	int i;
 	int total = 0;
 	float media_g = 0;
	
	while(op != 0){
		system("cls");
		
		printf("----------MENU------------");
		printf("\n1 - Cadastrar alunos.");
		printf("\n2 - Listar alunos.");
		printf("\n3 - Ver media geral.");
		printf("\n4 - Desempenho.");
		printf("\n5 - Alunos destaque.");
		printf("\nEscolha: ");
		scanf("%d", &op);
		
		switch(op){
			 case 1:
			 	system("cls");
			 	
			 	 if(total < 10){
         	 		printf("--------Cadastro aluno %d-----\n", total + 1);
			 		cadastro(aluno, i, total);
			 		total++;
				 } else{
				 	printf("Limite de alunos atingido!");
				 }
				 
				 system("cls");
			 	break;
			 	
			case 2:
				system("cls");
				if(total > 0){
					printf("---------Lista-----------");
					
					 for(i = 0; i < total; i++){
					 listagem(aluno, i);
					 	
				    }
				}else{
					printf("Ops, nenhum aluno cadastrado...");
				}
			    
			    getchar();
			    getchar();
				
				system("cls");
				
				break;
				
			case 3: 
				media_g = media_geral(aluno, total);
				break;
				
			case 4:
				desempenho(aluno, i, total);
				break;
			
			case 5:
				destaque(aluno, i, total, media_g);
				// Alunos acima da
				break;
				
			case 0:
				printf("\nEncerrando...");
				break;
				
			default :
				printf("Essa opcao nao existe...");
				getchar();
				getchar();
				system("cls");
		}
		
	}
}