#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Estrutura de decisão. Verificando se um número é negativo
*/

int main() {
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if( num < 0 )
        printf("O valor digitado eh negativo!\n");

    printf("Fim do programa!\n");

    return 0;
}