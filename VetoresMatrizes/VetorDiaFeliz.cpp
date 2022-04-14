#include <stdio.h>
#include <stdlib.h>
//Leia uma sequencia de letras, terminada com a letra "z", e mostre quantas vezes cada vogal apareceu

int main(){
    int vet[5] = {0,0,0,0,0}, posicao;
    char letra;

    while(letra != 'z'){
        switch(letra){
            case 'a':
                vet[0]++;
                break;
            case 'e':
                vet[1]++;
                break;
            case 'i':
                vet[2]++;
                break;
            case 'o':
                vet[3]++;
                break;
            case 'u':
                vet[4]++;
                break;
        }
        scanf("%c", &letra);
    }
    printf("quantidade de cada vogal, em ordem: \n");
    for(posicao = 0;posicao < 5; posicao++){
        printf("%d ", vet[posicao]);
    }
    return 0;
}