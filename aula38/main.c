#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Endentação e uso das chaves na linguagem C 
*/

int main() {

    int a =10;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nResultado logico: %d\n", a < 0);

    if(a < 0) {
        printf("\n\tValor negativo!\n");
        printf("\n\t**Valor negativo!**\n");
    } else {
        printf("\n\tValor positivo ou igual a zero!\n");
        printf("\n\t**Valor positivo ou igual a zero!**\n");
    }

    printf("Continuação do programa!\n");

    return 0;
}