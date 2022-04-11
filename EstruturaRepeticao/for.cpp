#include <stdio.h>
int main(){
    int cont;
    //incremento
    cont = 1;
    printf("incremento:\n");
    for(cont==1;cont<=10;cont=cont+1)
    {
        printf("cont = %d\n", cont);
    }
        
    //decremento
    cont = 10;
    printf("decremento:\n");
    for(cont==1;cont>=1;cont=cont-1)
    {
        printf("cont = %d\n", cont);
    }
}