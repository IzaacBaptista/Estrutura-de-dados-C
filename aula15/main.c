#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Reduzindo o consumo de memória com o operador short

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int w = 32767;
    int x = 32767;
    short int y = 32767;

    printf("Tamanho de um INT na memória: %d bytes\n", sizeof x);
    printf("Tamanho de um short INT na memória: %d bytes\n", sizeof y);

    printf("Valor de w: %d\n", w);
    w++;
    printf("Valor de w: %hi\n", w);
    
    return 0;
}