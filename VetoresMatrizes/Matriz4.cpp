#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia dados e armazene em uma matriz 3x3 de números inteiros. 
Em seguida, mostre os elementos que sejam iguais ao maior número armazenado na matriz.*/

int main(){
    int mat1[3][3], maiorNum = 0, contIgual = 0, lin, col;
    printf("Entre com numeros para o elemento: ");
    for(lin=0; lin<3;lin++){
        for(col=0;col<3;col++){
            printf("\nElemento[%d][%d] = ", lin, col);
            scanf("%d", &mat1[lin][col]);
            if(mat1[lin][col] > maiorNum){
                maiorNum = mat1[lin][col];
            } 
        }
    }
    for(lin=0;lin<3;lin++){;
        for(col=0;col<3;col++){
            if(mat1[lin][col] == maiorNum){
               contIgual++;
            }
        }
    }
    printf("\nO maior numero foi: %d", maiorNum);
    printf("\nOcorrencias do maior numero: %d vezes", contIgual);

    return 0;
}