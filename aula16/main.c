#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Somando 2 números inteiros positivos e o resultado ficou negativo

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int x = 456789132;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x);
    
    return 0;
}