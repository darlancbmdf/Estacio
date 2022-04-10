#include <stdio.h>

int main(){
    int opcao;

    printf("informe um numero inteiro:\n");
    scanf(" %d", &opcao);

    if(opcao >=0){
        if(opcao == 0){
            printf("\nNumero nulo.\n");
        } else {
            printf("\nNumero positivo.\n");
        } 
    }else{
        printf("\nNumero negativo.\n");
    }

    //forma de implementação de switch case
    switch (opcao){
        case 1: {
            printf("\nNumero positivo");
            break;
        }
        case 0:{
            printf("\nNumero nulo");
            break;
        }
        default: printf("\nNumero negativo");
            break;
        }
}