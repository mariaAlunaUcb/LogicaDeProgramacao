#include <stdio.h>

int main() {
    float pesoSaco, racaoGato, racaoTotal, resto;

    printf("Digite o peso do saco de racao em kg: ");
    scanf("%f", &pesoSaco);

    printf("Digite a quantidade de racao dada para cada gato em gramas: ");
    scanf("%f", &racaoGato);

    pesoSaco = pesoSaco * 1000;

    racaoTotal = racaoGato * 2;

    racaoTotal = racaoTotal * 5;

    resto = pesoSaco - racaoTotal;

    printf("A quantidade de racao que restou foi: %.2f gramas", resto);

    return 0;
}
