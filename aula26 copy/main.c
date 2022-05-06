#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    O que é operador unsigned? [número sem sinal]
    trocar o %d por %u
    limite para o tipo int: 2.147.483.647
    short int -> %d ou %hi
    unsigned short int %hu ou %d
    unsigned long int %lu

*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    unsigned int x = 2147483647;

    unsigned short int y = 55000;

    printf("\n\t %d \n\n", y);
    printf("\n\t %hi \n\n", y);
    printf("\n\t %hu \n\n", y);

    return 0;
}