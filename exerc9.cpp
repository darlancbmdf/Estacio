#include <stdio.h>
int main(){
    char inicial;
    int idade;
    printf("entre com a sua idade e a sua inicial:\n");
    scanf("%d %c", &idade, &inicial);
    printf("voce tem %d anos e seu nome comeca com %c\n", idade, inicial);
}