#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    
    int i;
    float n[5];
    float maior, menor;
    int posicaoma = 1, posicaome = 1;
    
    for(i=0; i<5; i++){
        printf("Escreva o %dº número: ", i + 1);
        scanf("%f", &n[i]);
    }
    
    maior = n[0];
    menor = n[0];
    
    for(i=0; i<5; i++){
        
        if(n[i] > maior){
            maior = n[i];
            posicaoma = i + 1;
        }
        
        if(n[i] < menor){
            menor = n[i];
            posicaome = i + 1;
        }
    }
    
    printf("\n");
    printf("\nMaior = %.2f Posição = %d", maior, posicaoma);
    printf("\nMenor = %.2f Posição = %d", menor, posicaome);
    
    return 0;
}
