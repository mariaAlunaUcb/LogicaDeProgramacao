#include <stdio.h>
#include <stdlib.h>
int main() {
    float precoFabrica, pLucro, lucro, pImposto, imposto, custo;
    
    printf("Escreva o preco de fabrica do veiculo: ");
    scanf("%f", &precoFabrica);
    
    printf("Escreva o percentual de lucro: ");
    scanf("%f", &lucro);
    
    printf("Escreva o percentual de imposto: ");
    scanf("%f", &imposto);
    
    pLucro = lucro * precoFabrica/100;
    pImposto = imposto * precoFabrica/100;
    
    custo = precoFabrica + pLucro + pImposto;
    
    system("cls");
    
    printf("Valor correspondente ao lucro do distribuidor =  R$ %.2f", pLucro);
    printf("\nValor correspondente aos impostos = R$ %2.f", pImposto);
    printf("\nPreco final do veiculo = R$ %.2f ", custo);

    return 0;
}
