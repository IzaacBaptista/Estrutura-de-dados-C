#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Exercício Como converter valor em Real para Dólar
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

        float valorReal, valorDolar;

        printf("Digite o valor em reais a ser convertido: ");
        scanf("%f", & valorReal);

        valorDolar = valorReal / 5.3;
        printf("Valor em dolar $%.2f\n", valorDolar);

    return 0;
}a