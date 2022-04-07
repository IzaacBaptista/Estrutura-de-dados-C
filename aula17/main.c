#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como aumentar o espaço de memória para um int com o operador long

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    long int x = 2147483647;
    long long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %ld\n", x);
    x++;
    printf("Valor de x: %lh\n", x);
    
    return 0;
}