#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como ler vários valores do teclado com a função scanf()?

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("Digite três valores inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Valores lidos: $d, %d e %d\n", num1, num2, num3);

    return 0;
}