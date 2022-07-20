#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Decisão aninhadas na linguagem C [operador if/else aninhados]
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a = 10;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("Operador ternário");
    a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");

    printf("\n\nIf/else\n");
    if(a < 0)
        printf("\n\tValor negativo!\n");
    else {
        if(a > 0)
            printf("\n\tValor positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");
    }

    printf("Continuação do programa!\n");

    return 0;
}