#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como usar o operador long para o tipo primitivo double?

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float x = 3.1415;

    double y = 3.14155896587458962548;

    long double z = 3.14155896587458962548;

    printf("Valor de X é: %lf\n", x);
    printf("Valor de X é: %.10lf\n", x);
    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);
    printf("Um float precisa de %d bytes de memoria.\n", sizeof(float));
    printf("----------------------------------------------------------------------\n");
    printf("Valor de Y é: %lf\n", y);
    printf("Valor de Y é: %.10lf\n", y);
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);
    printf("Um double precisa de %d bytes de memoria.\n", sizeof(double));
    printf("-----------------------------------------------------------------------\n");

    printf("Valor de Z é: %lf\n", z);
    printf("Valor de Z é: %.10lf\n", z);
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof z);
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof(long double));

    return 0;
}