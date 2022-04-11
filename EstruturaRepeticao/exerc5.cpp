#include <stdio.h>
int main(){
    float percent, salario, maiorsal, salarioreaj;
    int cont, quantd_funcionario;
    maiorsal = salario = 0;
    
    printf("informe a percentagem de aumento: \n");
    scanf("%f", &percent);

    printf("informe o numero de empregados: \n");
    scanf("%d", &quantd_funcionario);

    for(cont = 1; cont <= quantd_funcionario; cont++){
        printf("informe o salario do funcionario %d: \n", cont);
        scanf("%f", &salario);

        salarioreaj = salario + (salario *percent/100);
        printf("salario reajustado do funcionario %d= R$%.2f\n", cont, salarioreaj);

        if(salarioreaj>maiorsal){
            maiorsal = salarioreaj;
        }
    }
    printf("O maior salario reajustado= %.2f", maiorsal);
    return 0;
}
