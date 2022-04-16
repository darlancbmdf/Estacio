#include <stdio.h>
#include <stdlib.h>
/* Em uma turma com 50 alunos, cada um faz 3 provas por semestre. Além de armazenar as 3 provas dos 50 
alunos, existe a necessidade de mostrar: a média de cada prova, a média de cada aluno e a média da turma */

int main(){
    int qtdAlunos;
    printf("informe o numero de alunos: ");
    scanf("%d", &qtdAlunos);
    float prova1[qtdAlunos], prova2[qtdAlunos], prova3[qtdAlunos];
    float somaProva1, somaProva2, somaProva3;
    somaProva1 = 0;
    somaProva2 = 0;
    somaProva3 = 0;
    //informar o valor das notas dos alunos
    for(int i = 0; i < qtdAlunos; i++){
        printf("informe a nota da prova 1 do aluno %d: ", i+1);
        scanf("%f", &prova1[i]);
        somaProva1 = somaProva1 + prova1[i];
        printf("informe a nota da prova 2 do aluno %d: ", i+1);
        scanf("%f", &prova2[i]);
        somaProva2 = somaProva2 + prova2[i];
        printf("informe a nota da prova 3 do aluno %d: ", i+1);
        scanf("%f", &prova3[i]);
        somaProva3 = somaProva3 + prova3[i];
        printf("\n");
    }
    //Média das provas
    printf("a media da prova 1 foi de = %.2f\n", somaProva1/qtdAlunos);
    printf("a media da prova 2 foi de = %.2f\n", somaProva2/qtdAlunos);
    printf("a media da prova 3 foi de = %.2f\n\n", somaProva3/qtdAlunos);
    //media dos alunos
    float mediaAluno;
    for(int contAlunos = 0; contAlunos < qtdAlunos; contAlunos++){
        mediaAluno = (prova1[contAlunos]+ prova2[contAlunos]+ prova3[contAlunos])/3;
        printf("a media do aluno %d foi de = %.2f\n", contAlunos+1, mediaAluno);
    }
    printf("\n");
    //media da turma
    float mediaTurma;
    mediaTurma = (somaProva1 + somaProva2 + somaProva3) / (qtdAlunos * 3);
    printf("a media da turma foi de = %.2f\n", mediaTurma);
}