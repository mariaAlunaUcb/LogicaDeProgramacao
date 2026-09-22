#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	
	char nome[30];
	
	printf("Solicite o seu nome: ");
    scanf("%s", nome);
	
	printf("Olá, %s! Seja bem-vindo à disciplina de Lógica de Programação.", nome);
	
	return 0;
	
}
