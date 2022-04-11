#include <stdio.h>
//metodo para verificar quais alunos estão aprovados numa escola com a média de 3 notas
int main(){
    float nota1, nota2, nota3, media;
    int num, cont;
    printf("informe o numero de alunos: ");
    scanf(" %d", &num);
    nota1 = 0;
    nota2 = 0;
    nota3 = 0;
    media = 0;
    for(cont = 1; cont <= num; cont++){
        printf("entre com a nota1 do aluno: ");
        scanf(" %f\n", &nota1);
        printf("entre com a nota2 do aluno: ");
        scanf(" %f\n", &nota2);
        printf("entre com a nota3 do aluno: ");
        scanf(" %f\n", &nota3);
        
        media = (nota1+nota2+nota3)/3;

        if(media >= 7){
            printf("Aluno %d foi APROVADO com media: %.2f\n", num, media);
        } else {
            printf("Aluno %d foi REPROVADO com media: %.2f\n", num, media);
        }
    }    
}