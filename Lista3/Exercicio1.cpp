#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	
	printf("Escreva o seu nome: ");
	scanf("%s", &nome);
	
	system("cls");
	
	printf("Olá, %s! Seja bem-vindo(a) à disciplina de Lógica de Programação.", nome);
	
	return 0;
}
