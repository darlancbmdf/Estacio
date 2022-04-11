#include <stdio.h>
//metodo para verificar quais alunos estão aprovados numa escola com a média de 3 notas
int main(){

    int quantidadeAlunos;

    printf("informe o numero de alunos: ");
    scanf("%d", &quantidadeAlunos);

    int quantidadeNotas = 3;
    int tamanhoVetorNotas = quantidadeAlunos * quantidadeNotas;
    float notas[tamanhoVetorNotas];
    
    for(int i = 0; i < tamanhoVetorNotas; i++) {
        int contadorAluno = i / quantidadeAlunos + 1;
        int contadorNota = i % quantidadeNotas + 1;
        if(contadorNota == 1)
            printf("\n");
        printf("entre com a nota %d do aluno %d: ", contadorNota, contadorAluno);
        scanf("%f", &notas[i]);
    }
    
    float media[quantidadeAlunos];
    
    for(int i = 0; i < tamanhoVetorNotas; i += quantidadeNotas) {
        int contadorAluno = i / quantidadeAlunos;
        int contadorNota = i % quantidadeNotas + 1;
        media[contadorAluno] = (notas[i] + notas[i + 1] + notas[i + 2]) / quantidadeNotas;
    }
    
    printf("\n=====================\n");
    
    for(int i = 0; i < quantidadeAlunos; i++) {
        int contadorAluno = i + 1;
        
        if(media[i] >= 7)
            printf("Aluno %d foi APROVADO com media: %.2f\n", contadorAluno, media[i]);
        else
            printf("Aluno %d foi REPROVADO com media: %.2f\n", contadorAluno, media[i]);
    }
    
    printf("=====================");

    return 0;
}
