#include <stdio.h>
int main(){
    int cont;
    //incremento
    printf("incremento:\n");
    for(cont=1;cont<=10;cont=cont+1)
    {
        printf("cont = %d\n", cont);
    }
        
    //decremento informanto numeros impares entre 1 e 9 (inclusive)
    printf("decremento:\n");
    for(cont=9;cont>=1;cont=cont-2)
    {
        printf("cont = %d\n", cont);
    }

    //mostrar soma dos números inteiros e positivos entre 1 e 10
    int sum;
    sum = 0;
    //aqui vemos uma forma de incremento cont = cont+1
    for(cont=1;cont<=10;cont = cont+1){
        sum = sum + cont;
    }
    printf("A soma dos numeros entre 1 e 10: %d\n", sum);

    //mostrar a média aritimética dos números inteiros e positivos entre 1 e 10
    float media, soma;
    sum = 0;
    //aqui vemos outra forma de incremento cont++
    for(cont=1;cont<=10;cont++){
        soma = soma + cont;
    }
    media = soma/10;
    printf("A media dos numeros entre 1 e 10 = %.2f\n", media);

}