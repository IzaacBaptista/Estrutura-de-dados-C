#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
     Como funciona o operador de decremento --
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int contador1 = 10;
    int contador2 = 20;
    int contador3 = 30;
    
    //sinônimos
    //contador--;
    //contador -= 1;
    //contador = contador - 1;

    printf("Valor do contador1: %d\n", contador1);
    printf("Valor do contador1: %d\n", contador1--);
    
    printf("Valor do contador2: %d\n", contador2);
    printf("Valor do contador2: %d\n", --contador2);
    
    printf("Valor do contador3: %d\n", contador3--);
    printf("Valor do contador3: %d\n", contador3);

    return 0;
}