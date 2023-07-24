#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Exercício 4 | Some os números ímpares de 1 a 1000 (mais eficiente) e imprima o resultado na linguagem C
    -> O bloco de repetição for é executado 500 vezes, pois a cada iteração, o valor de i é incrementado em 2.
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, soma = 0;

    for(i = 1; i <= 1000; i+=2)
        soma += i;

    printf("A soma dos números ímpares de 1 a 1000 é: %d\n", soma);  

    return 0;
}