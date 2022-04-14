#include <stdio.h>
#include <stdlib.h>
/* Leia 50 numeros e armazende em um vetor, copie para um segundo vetor de 50 numeros */ 

int main(){
    int cont;
    printf("informe o numero de intercoes que deseja executar: ");
    scanf("%d", &cont);

    int vet1[cont], vet2[cont], posicao;
    for(posicao = 0; posicao < cont; posicao++){
        scanf("%d", &vet1[posicao]);
        if(vet1[posicao]%2 == 0){
            vet2[posicao] = vet1[posicao]+1;
        } else {
            vet2[posicao] = vet1[posicao]-1;
        }
    }
    printf("cada elemento de vet1 e vet2: ");
    for(posicao = 0; posicao < cont; posicao++){
        printf("vet1[%d] = %d ", posicao, vet1[posicao]);
        printf("vet2[%d] = %d ", posicao, vet2[posicao]);
    }
    return 0;
}