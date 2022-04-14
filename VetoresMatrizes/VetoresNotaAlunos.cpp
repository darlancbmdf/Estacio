#include <stdio.h>
#include <stdlib.h>
//Ler nota de 20 alunos e mostre as que são iguais ou maiores que a média

int main(){
    const int cont=5;
    float vet[cont], soma = 0.0, media;
    int posicao;
    for(posicao=0;posicao<cont;posicao++){
        scanf("%f", &vet[posicao]);
        soma = soma + vet[posicao];
    }
    media = soma/cont;
    for(posicao=0;posicao<cont;posicao++){
        if(vet[posicao] >= media){
            printf("%.2f\n", vet[posicao]);
        }
    }
}