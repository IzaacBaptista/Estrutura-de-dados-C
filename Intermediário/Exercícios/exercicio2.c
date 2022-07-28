#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
     Exercício 2: Contando números positivos e negativos na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int valor, positivos, negativos;

    printf("Digite o primeiro valor:");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("Digite o segundo valor:");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("Digite o terceiro valor:");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("Digite o quarto valor:");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("Digite o quinto valor:");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("\nPositivos: %d\nNegativos: %d\n", positivos, negativos);

    return 0;
}