#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
     Como usar o operador de resto da divisão %
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int a = 7, b = 21;

    printf("\nResto da divisão inteira %d\n", b % 2);

    return 0;
}