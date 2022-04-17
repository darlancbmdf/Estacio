#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritimo que leia dados inteiros e armazene-os em uma matriz 3x4.
Em seguida mostre a quantidade de números pares e impares armarzenados na matriz.*/

int main(){
    int matriz[3][4], lin, col, contPar=0, contImpar=0;
    for(lin=0;lin<3;lin++){
        for(col=0;col<4;col++){
            printf("\nElemento[%d]{%d] = ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }
    printf("\n******************* Saida de Dados *********************\n");
    for(lin=0;lin<3;lin++){
        for(col=0;col<4;col++){
            //printf("valor %d eh %s\n", matriz[lin][col], matriz[lin][col]%2 == 0?"par":"impar");
            if(matriz[lin][col]%2 == 0){
                contPar++;
            } else {
                contImpar++;
            }
        }
    }
    printf("\nPares: %d", contPar);
    printf("\nImpares: %d", contImpar);

    return 0;
}