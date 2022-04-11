#include <stdio.h>
//metodo para verificar quais alunos estão aprovados numa escola com a média de 3 notas
int main(){
    int quantidade_de_alunos;
    // Lê a quantidade de alunos que serão utilizados nos cálculos
    printf("informe o numero de alunos: ");
    scanf("%d", &quantidade_de_alunos);

    float notas[quantidade_de_alunos];

    // Lê as notas dinamicamente, de acordo com a quantidade de alunos
    for(int cont = 1; cont <= quantidade_de_alunos; cont++){
        printf("entre com a nota%d do aluno: ", cont);
        scanf("%f", &notas[cont]);
    }

    // Cálcula a soma das notas lidas
    float acumulador = 0.0;
    for(int cont=1; cont <= quantidade_de_alunos; cont++) {
        acumulador += notas[cont];
    }

    // Cálcula a média dinamicamente
    float media = acumulador / quantidade_de_alunos;

    // Decide se o aluno foi ou não aprovado
    if(media >= 7)
        printf("Aluno %d foi APROVADO com media: %.2f\n", cont, media);
    else
        printf("Aluno %d foi REPROVADO com media: %.2f\n", cont, media);

    return 0;
}
