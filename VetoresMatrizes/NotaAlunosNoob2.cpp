#include <stdio.h>
#include <stdlib.h>
/* Em uma turma com 50 alunos, cada um faz 3 provas por semestre. Além de armazenar as 3 provas dos 50 
alunos, existe a necessidade de mostrar: a média de cada prova, a média de cada aluno e a média da turma */

int main(){
    printf("quantos alunos há na sala?");
    int qtdAlunos, qtdProvas = 3;
    scanf("%d", &qtdAlunos);
    int qtdNotas = qtdAlunos * qtdProvas + 1;
    //criar vetor para guardar a quatidade de notas
    float notas[qtdNotas];

    //para cada aluno será pedido as 3 provas e armazenado no vetor notas[]
    for(int i=0; i <= qtdAlunos; i++){
        for(int contProvas = 1; contProvas <= qtdProvas; contProvas++ ){
            printf("entre com a nota %d do  aluno %d: ", contProvas, i);
            scanf("%f", notas[contProvas]);
        }

        float mediaProva[qtdProvas];
        
        //vamos calcular a média de cada prova
        for(i = 1; i <= qtdNotas; i += qtdProvas){

        }

    }


}