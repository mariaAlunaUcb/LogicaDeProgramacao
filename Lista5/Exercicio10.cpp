
#include <stdio.h>

void calcularIdade(int dia, int mes, int ano) {
    int diaAtual, mesAtual, anoAtual;
    int anos, meses, dias;

    printf("Digite o dia atual: ");
    scanf("%d", &diaAtual);

    printf("Digite o mes atual: ");
    scanf("%d", &mesAtual);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anos = anoAtual - ano;
    meses = mesAtual - mes;
    dias = diaAtual - dia;

    if (dias < 0) {
        dias = dias + 30;
        meses--;
    }

    if (meses < 0) {
        meses = meses + 12;
        anos--;
    }

    printf("\nIdade: %d anos, %d meses e %d dias\n", anos, meses, dias);
}

int main() {
    int dia, mes, ano;

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    calcularIdade(dia, mes, ano);

    return 0;
}
