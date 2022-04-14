#include <stdio.h>
#include <stdlib.h>
/* Ler 50 numeros e armazenar em um vetor. Depois leia 5 numeros e 
compare com os do vetor, caso um seja reconhecido, mostrar */

int main(){
    int vet1[50], num, posicao, cont;

    for(posicao = 0; posicao < 50; posicao++){
        vet1[posicao] = posicao;
    }

    for(cont=0; cont<=5; cont++){
        printf("informe um numero inteiro de 0 a 49: ");
        scanf("%d", &num);
        if(num<50){
            for(posicao = 0; posicao < 50; posicao++){
                if(vet1[posicao] == num){
                    printf("vet1[%d] = %d\n", vet1[posicao], num);
                } 
            }
        } else{
            printf("numero %d nao esta no escopo.\n", num);
            if(cont!=0){
            cont = cont--;
            }
        }
    }
    return 0;
}