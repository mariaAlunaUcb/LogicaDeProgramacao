#include <stdio.h>

#define tam 500

void calcularGratis(int A[], int B[]) {
    int i;

    for (i = 0; i < tam; i++) {
        B[i] = A[i] / 15;
    }
}

int main() {
    int A[tam], B[tam];
    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite a quantidade de filmes do cliente %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    calcularGratis(A, B);

    for (i = 0; i < tam; i++) {
        printf("Cliente %d tem direito a %d locacoes gratis.\n", i + 1, B[i]);
    }

    return 0;
}