#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que gere uma matriz 5x5, com 0 nas casas de linha e colunas iguais e nas demais 1*/

int main(){
    int mat1[5][5], lin, col;
    for(lin=0;lin<5;lin++){;
        for(col=0;col<5;col++){;
            if(lin == col)
                mat1[lin][col] = 0;
            else
                mat1[lin][col] = 1;
        }
    }
    for(lin=0;lin<5;lin++){;
        for(col=0;col<5;col++){;
            if(col != 4)
                printf("  %d", mat1[lin][col]);
            else
                printf("  %d\n", mat1[lin][col]);
        }
    }
    /* Considere uma matriz 3x3 de inteiros, com seus elementos armazenados, de nome MAT. 
    Sua necessidade é exibir os elementos de sua diagonal principal. Para tal, o trecho de código na linguagem C é */
    /* for (int i=0;i<5;i++){
        printf("%d : ", mat1[i][i]);
    } */
    
    return 0;
}