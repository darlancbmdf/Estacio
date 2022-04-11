#include <stdio.h>
int main(){
    int num, cont, maior;
    maior = 0;

    //for, onde você digitará vários numeros e depois ele mostrará o maior numero
    for(cont=1;cont<=15;cont++)
    {
        printf("digite um numero: ");
        scanf(" %d", &num);
        //caso queria saber o menor é só mudar o sintal de > para < e mudar a variavel pra não confundir
        if(num > maior){
            maior = num;
        }
    }
    printf("o maior dos numeros lidos = %d\n", maior);
    return 0;
}