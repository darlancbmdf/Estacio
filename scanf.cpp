#include <stdio.h>
int main(){
    float dividendo;
    int divisor;
    printf("Entre com um numero real: ");
    scanf("%f", &dividendo);
    printf("Entre com um numero inteiro: ");
    scanf("%d", &divisor);
    printf("A divisao de %.2f por %d vale: %.2f\n", dividendo, divisor, dividendo/divisor);

}