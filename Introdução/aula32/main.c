#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Exercício Como calcular o valor a ser pago ao encanador
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

        float dias, valorFinal, desconto;

        printf("Quantos dias trabalhados? ");
        scanf("%f", &dias);

        valorFinal = dias * 45;
        desconto = valorFinal * 8/100;
        valorFinal = valorFinal - desconto;

        printf("A receber: R$%.2f\nDesconto R$%.2f\n", valorFinal, desconto);

    return 0;
}