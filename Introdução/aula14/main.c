#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Unidades de medidas na computação bit byte kB MB GB TB PB EB ZB YB

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float w = 1.0;
    int x = 1;
    char y = "1";
    double z = true;

    printf("Tamanho em memoria de um float: %f bytes\n", sizeof(float));
    printf("Tamanho em memoria de um float: %f bytes\n", sizeof w);
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));  //4*8=32 bits
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof x);
    printf("Tamanho em memoria de um char: %c bytes\n", sizeof(char));
    printf("Tamanho em memoria de um char: %c bytes\n", sizeof y));
    printf("Tamanho em memoria de um double: %d bytes\n", sizeof(double));
    printf("Tamanho em memoria de um double: %d bytes\n", sizeof z);

    return 0;
}