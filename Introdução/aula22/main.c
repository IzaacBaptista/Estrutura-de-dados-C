#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
     Como usar as operações básicas da matemática na linguagem C
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("\nSoma: %d\n", 10 + 20);
    printf("\nSubtração: %d\n", 10 - 20);
    printf("\nMultiplicação: %d\n", 10 * 20);
    printf("\nDivisão: %d\n", 10 / 20);
    printf("\nDivisão: %d\n", 10.0 / 20.0); //numeros inteiros
    printf("\nDivisão: %f\n", 10 / 20);
    printf("\nDivisão: %f\n", 10.0 / 20.0); //numeros inteiros

    return 0;
}