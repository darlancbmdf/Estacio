#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia uma matriz 4x4 de números inteiros. 
Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1*/

int main(){
    int mat1[4][4], mat2[4][4], lin, col;
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
            printf("Elemento[%d][%d] = ", lin, col);
            scanf("%d", &mat1[lin][col]);
            mat2[col][lin] = mat1[lin][col];
        }
    }
    for(lin=0;lin<4;lin++){
        for(col=0;col<4;col++){
            printf("mat2[%d][%d] = %d\n", lin, col, mat2[lin][col]);
        }
    }
}