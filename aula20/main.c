#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como usar o operador long para o tipo primitivo double?

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float x = 3.1415;

    double y = 3.14155896587458962548;

    printf("Valor de Y: %lf\n", y);
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);

    return 0;
}