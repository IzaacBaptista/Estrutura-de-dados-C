#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//O tipo primitivo double para números reais com precisão dupla

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float x = 3.1415;

    double y = 3.14154847989789654654321;

    printf("um double precisa de %d bytes de memória. \n", sizeof y);
    printf("um double precisa de %d bytes de memória. \n", sizeof(double));

    return 0;
}