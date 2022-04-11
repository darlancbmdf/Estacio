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
}