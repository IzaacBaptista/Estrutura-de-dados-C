#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Qual o tamanho em memória de um float?

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float x = 3.1415;

    printf("Um float precisa de %d bytes de memória.\n", sizeof x);
    printf("Um float precisa de %d bytes de memória.\n", sizeof(float));
    
    return 0;
}