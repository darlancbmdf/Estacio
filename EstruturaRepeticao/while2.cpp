#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, media;
    nota1 = nota2 = nota3 = media = 0;
    int alunos;
    alunos = 1;
    while(alunos<=2){
        printf("informe a nota 1 do aluno: ");
        scanf("%f", &nota1);
        printf("informe a nota 2 do aluno: ");
        scanf("%f", &nota2);
        printf("informe a nota 3 do aluno: ");
        scanf("%f", &nota3);
        media = (nota1+nota2+nota3)/3;
        if(media>=7){
            printf("O aluno %d foi APROVADO com media %.2f\n\n", alunos, media);
        } else {
            printf("O aluno %d foi REPROVADO com media %.2f\n\n", alunos, media);
        }
        alunos++;
        
    }
    return 0;
}