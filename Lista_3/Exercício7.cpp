#include <stdio.h>

int main(){
   float tempCe, tempFa;
   
   printf("Escreva a temperatura em celsius: ");
   scanf("%f", &tempCe);

   tempFa = (tempCe * 9/5) + 32;
   
   printf("TEMPERATURA EM FAHRENHEIT = %.2f", tempFa);
   
   return 0;	
}
