#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Estrutura de decisão. Verificando se um número é negativo
*/

int main() {

    int a =10;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if( a < 0 )
        printf("\n\tValor negativo!\n");

    printf("Continuação do programa!\n");

    return 0;
}