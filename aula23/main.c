#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
     O que significa Casting ou conversão de tipos na linguagem C
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int a = 10, b = 20;

    printf("\nSoma: %d\n", a + b);
    printf("\nSubtração: %d\n", a - b);
    printf("\nMultiplicação: %d\n", a * b);
    printf("\nDivisão: %d\n", a / b);
    printf("\nDivisão: %d\n", (float)a / b); //numeros reais
    printf("\nDivisão: %f\n", a / b);
    printf("\nDivisão: %f\n", (float)a / b); //numeros reais

    return 0;
}