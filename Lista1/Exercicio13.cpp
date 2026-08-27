#include <stdio.h>

int main() {
    float pe, jarda, milha, polegada;

    printf("Digite uma medida em pes: ");
    scanf("%f", &pe);

    polegada = pe * 12;
    jarda = pe / 3;
    milha = jarda / 1760;

    printf("Polegadas = %.2f\n", polegada);
    printf("Pes = %.2f\n", pe);
    printf("Jardas = %.2f\n", jarda);
    printf("Milhas = %.5f\n", milha);

    return 0;
}
