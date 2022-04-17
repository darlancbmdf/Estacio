#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4.
Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).*/

int main(){
    int matriz[4][4], lin, col;
    printf("digite valor para os elementos da matriz:\n ");
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++)
        if(lin==col){
            printf("Elemento[%d][%d] = 0\n", lin, col);
            matriz[lin][col]=0;
        } else {
            printf("Elemento[%d][%d] = ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }
    printf("\nListagem dos elementos da matriz:");
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
           printf("\nElemento[%d][%d] = %d" , lin, col, matriz[lin][col]);     
        }
    }
}