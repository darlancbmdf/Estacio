#include <stdio.h>
#include <stdlib.h>

int num;

int main(){
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num !=0){
        printf("o numero lido foi = %d\n\n", num);
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    return 0;
}