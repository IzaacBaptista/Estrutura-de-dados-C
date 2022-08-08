#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Ex 4: Conversão cambial de Real para Dólar ou de Dólar para Real na linguagem C
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    float valor, valorConvertido;
    int opcao;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Converter de Real para Dólar\n2 - Converter de Dólar para Real\n");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        valorConvertido = valor/5.30;
        printf("\nValor convertido: $ %.2f\n", valorConvertido);
        break;
    case 2:
        valorConvertido = valor*5.30;
        printf("\nValor convertido: R$ %.2f\n", valorConvertido);
        break;
    default:
        printf("\nOpção inválida!\n");
    }
    //printf("\nValor convertido: %2f\n", valorConvertido);


    return 0;
}