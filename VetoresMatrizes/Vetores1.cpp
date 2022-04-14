#include <stdio.h>
#include <stdlib.h>
/* Programa que leia 100 numeros inteiros e mostre-os na ordem inversa em que foram lidos */

int main(){
    int cont;
    printf("informe o numero de interacoes deseja executar: ");
    scanf("%d", &cont);

    int vet[cont], posicao;
     
    for(posicao=0;posicao<cont;posicao++){
        scanf("%d", &vet[posicao]);
    }
    
    printf("numeros na ordem inversa: \n");
    /* para se imprimir numeros na ordem inversa deve se tomar cuidado de diminuir um da constante "cont" */
    for(posicao = cont-1;posicao>=0;posicao--){
        printf("%d \n", vet[posicao]);
    }
    return 0;
}
