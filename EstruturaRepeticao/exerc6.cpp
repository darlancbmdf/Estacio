#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont, n, num, somapar, somaimpar;
    somapar = somaimpar = 0;
    printf("Digite a quantidade de numeros da lista; ");
    scanf("%d", &n);
    for(cont = 1; cont <= n; cont++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num%2==0){
            somapar = somapar + num;
        } else {
            somaimpar = somaimpar + num;
        }
    }
    printf("A soma dos numeros pares = %d\n", somapar);
    printf("A soma dos numeros impares = %d\n", somaimpar);
    return 0;
}