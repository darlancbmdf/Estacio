#include <stdio.h>

int main(){
    int cadastrado, ativo, logado;
    char opcao;
    
    cadastrado = ativo = logado = 0;

    printf("Deseja cadastrar a conta? S/N \n");
    scanf(" %c", &opcao);
    
    if(opcao == 'S'){
        cadastrado = 1;
        printf("\nConta cadastrada.\n");
    }
    
    printf("Deseja ativar a conta? S/N \n");
    scanf(" %c", &opcao);
    
    if(opcao == 'S'){
        ativo = 1;
        printf("\nConta ativada.\n");
    }
   
    printf("Deseja logar a conta? S/N \n");
    scanf(" %c", &opcao);
    
    if(opcao == 'S'){
        logado = 1;
        printf("\nConta logada.\n");
    }
    //caso deseje que mostre onde houve erro, deve-se implementar os elses nos primeiros ifs
    if((cadastrado == 1) && (ativo == 1) && (logado == 1)){
        printf("\nSeja bem vindo!\n");
    } else {
        printf("\nOcorreu um erro!\n");
    }
}