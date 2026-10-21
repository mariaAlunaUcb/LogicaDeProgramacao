
#include <stdio.h>

void trocar(int A[10][10]) {
    int i, aux;
    
    for (i = 0; i < 10; i++) {
        aux = A[1][i];
        A[1][i] = A[7][i];
        A[7][i] = aux;
    }

    for (i = 0; i < 10; i++) {
        aux = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = aux;
    }


    for (i = 0; i < 10; i++) {
        aux = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = aux;
    }

 
    for (i = 0; i < 10; i++) {
        aux = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = aux;
    }
}

int main() {
    int A[10][10];
    int i, j;


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

  trocar(A);

    printf("\n--- MATRIZ ALTERADA ---\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
