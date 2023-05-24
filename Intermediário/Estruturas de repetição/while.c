#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Estrutura de repetição while (enquanto) na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

   int valor;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){ // enquanto valor for menor ou igual a zero
    printf("Valor invalido. Digite um valor maior que zero: ");
    scanf("%d", &valor);
    }

    printf("Valor lido: %d\n", valor);

    return 0;
}