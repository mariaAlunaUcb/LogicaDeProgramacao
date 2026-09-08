#include <stdio.h>

int main() {
    int velocidade;
    const int limite = 80;

    printf("A velocidade permitida e de %dkm/h\n", limite);
    printf("Informe a velocidade do veiculo: ");
    scanf("%d", &velocidade);

    if (velocidade <= limite) {
        printf("Voce esta dentro da velocidade permitida.\nNao houve infracao.\n");
    } else {
        if (velocidade <= limite * 1.2) {
            printf("Infracao media: limite excedido em ate 20 por cento.\n");
            
        } else if (velocidade > limite * 1.2 && velocidade <= limite * 1.5) {
            printf("Infracao grave: limite excedido entre 20 e 50 por cento.\n");
            
        } else {
            printf("Infracao gravissima: limite excedido acima de 50 por cento.\n");
            
        }
    }

    if (velocidade == 120) {
        printf("Esta velocidade e extremamente elevada!\n");
        
    }

    return 0;
}

