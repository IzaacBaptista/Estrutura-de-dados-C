#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    O operador ternário na linguagem C
    condição ? verdadeiro : falso
*/

int main() {

    int a = 10;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");
    
    printf("Continuação do programa!\n");

    return 0;
}