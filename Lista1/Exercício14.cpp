#include <stdio.h>
#include <time.h>

int main() {
    int nascimento, anoAtual, idade, idade2050;

    time_t t = time(NULL);
    struct tm *data = localtime(&t);

    anoAtual = data->tm_year + 1900;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);

    idade = anoAtual - nascimento;
    idade2050 = 2050 - nascimento;

    printf("\nAno atual: %d", anoAtual);
    printf("\nIdade atual: %d anos", idade);
    printf("\nEm 2050 tera: %d anos", idade2050);

    return 0;
}
