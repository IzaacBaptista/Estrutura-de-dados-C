#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int valor, valor2;

    valor = 50;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor);

    printf("Digite outro valor inteiro: \n");
    scanf("%d", &valor2);

    printf("valor da variavel 1 =  %d\n\n", valor);
    printf("valor da variavel 2 =  %d\n\n", valor2);

    return 0;
}