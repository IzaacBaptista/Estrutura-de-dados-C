#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como criar variáveis e ler números reais com a função scanf? | aula 5
//%d para numeros inteiros
//%f para numeros reais
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float numero = 3.1415;

    printf("Valor da minha variável: %f\n", numero);

    printf("\n Valor da minha variável: %.2f\n", numero);

    print("\n Digite um numero real: ");
    scanf("%f", &numero);

    printf("Valor lido: %.3f", numero);

    return 0;
}