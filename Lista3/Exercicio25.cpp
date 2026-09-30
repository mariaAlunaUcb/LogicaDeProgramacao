#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n, i, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        soma += i;
    }

    printf("A soma de 1 até %d é: %d", n, soma);

    return 0;
}
