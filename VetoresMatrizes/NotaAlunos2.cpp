#include <stdio.h>
#include <stdlib.h>
/* Em uma turma com 50 alunos, cada um faz 3 provas por semestre. Além de armazenar as 3 provas dos 50 
alunos, existe a necessidade de mostrar: a média de cada prova, a média de cada aluno e a média da turma */

int main(){
    int qtdAlunos;
    printf("informe o numero de alunos: ");
    scanf("%d", &qtdAlunos);
    float prova1[qtdAlunos], prova2[qtdAlunos], prova3[qtdAlunos];
    float somaProva[3];
    //informar o valor das notas dos alunos
    for(int i = 0; i < qtdAlunos; i++){
        printf("informe a nota da prova 1 do aluno %d: ", i+1);
        scanf("%f", &prova1[i]);
        somaProva[0] = somaProva[0] + prova1[i];
        printf("informe a nota da prova 2 do aluno %d: ", i+1);
        scanf("%f", &prova2[i]);
        somaProva[1] = somaProva[1] + prova2[i];
        printf("informe a nota da prova 3 do aluno %d: ", i+1);
        scanf("%f", &prova3[i]);
        somaProva[2] = somaProva[2] + prova3[i];
        printf("\n");
    }
    //Média das provas
    printf("a media da prova 1 foi de = %.2f\n", somaProva[0]/qtdAlunos);
    printf("a media da prova 2 foi de = %.2f\n", somaProva[1]/qtdAlunos);
    printf("a media da prova 3 foi de = %.2f\n\n", somaProva[2]/qtdAlunos);
    //media dos alunos
    float mediaAluno = 0;
    for(int contAlunos = 0; contAlunos < qtdAlunos; contAlunos++){
        mediaAluno = (prova1[contAlunos]+ prova2[contAlunos]+ prova3[contAlunos])/3;
        printf("a media do aluno %d foi de = %.2f\n", contAlunos+1, mediaAluno);
    }
    printf("\n");
    //media da turma
    float mediaTurma = 0;
    mediaTurma = (somaProva[0] + somaProva[1] + somaProva[2]) / (qtdAlunos * 3);
    printf("a media da turma foi de = %.2f\n\n", mediaTurma);

    return 0;
}