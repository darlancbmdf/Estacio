#include <stdio.h>
//metodo para verificar quais alunos estão aprovados numa escola com a média de 3 notas
int main(){

    int quantidade_de_alunos;

    printf("informe o numero de alunos: ");
    scanf("%d", &quantidade_de_alunos);

    int quantidade_de_notas = 3;

    for(int contador_aluno=1; contador_aluno <= quantidade_de_alunos; contador_aluno++) {

        float notas[quantidade_de_notas];

        for(int contador_nota = 1; contador_nota <= quantidade_de_notas; contador_nota++){
            printf("entre com a nota%d do aluno%d: ", contador_nota, contador_aluno);
            scanf("%f", &notas[contador_nota]);
        }

        float acumulador = 0.0;
        for(int contador_nota=1; contador_nota<= quantidade_de_notas; contador_nota++) {
            acumulador += notas[cont];
        }

        float media = acumulador / quantidade_de_notas;

        if(media >= 7)
            printf("Aluno %d foi APROVADO com media: %.2f\n", contador_aluno, media);
        else
            printf("Aluno %d foi REPROVADO com media: %.2f\n", contador_aluno, media);
    }

    return 0;
}
