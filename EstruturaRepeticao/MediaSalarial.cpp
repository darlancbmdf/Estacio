#include <stdio.h>
//informar o salario de X empregados e depois calcular a média de salarios e qual o maior salário
int main(){
    float salario, maior, soma;
    int cont, empregados;
    maior = soma = 0;
    printf("Informe a quantidade de empregados da empresa: ");
    scanf(" %d", &empregados);
    for(cont = 1;cont <= empregados;cont++){
        printf("informe o salario do empregado %d: ",cont);
        scanf(" %f", &salario);
        printf("o salario do empregado %d = %.2f\n", cont, salario);
        if(salario > maior){
            maior = salario;
        }
        soma = soma + salario;
    }
    float media;
    media = 0;
    media = soma / empregados;
    printf("o total da folha foi de: R$ %.2f\n", soma);
    printf("a media dos salarios dos %d= R$%.2f\n", empregados, media);
    printf("o maior salario= R$%.2f\n", maior);
}