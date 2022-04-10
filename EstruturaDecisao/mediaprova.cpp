#include <stdio.h>
int main(){
    //definição das variáveis
    float av1, av2, media;
    //informo o valor da primeira avaliação
    printf("Informe o valor da primeira avaliacao: \n");
    //atribui à variável o valor informado
    scanf(" %f", &av1);
    //informo o valor da segunda avaliação
    printf("Informe o valor da segunda avaliacao: \n");
    //atribui à variável o valor informado
    scanf(" %f", &av2);
    //verifico a média das duas avaliações
    media = (av1 + av2) / 2.00;
    //informo se o aluno foi aprovado ou reprovado,
    //a nota para ser considerado aprovado deve ser igual ou maior que 7.00
    if(media >= 7.00){
        printf("o aluno foi APROVADO, a nota dele foi: %.2f\n", media);
    } else {
        printf("o aluno foi REPROVADO, a nota dele foi: %.2f\n", media);
    }
}