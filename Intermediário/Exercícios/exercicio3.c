#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
     Ex 3 Leia um número e diga se é divisível por 2, por 3 ou por 5 na linguagem C
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um valor qualquer: ");
    scanf("%d", &num);

    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        printf("É divisível por 2, 3 ou 5.\n");
    else
        printf("Não é divisível por 2, 3 ou 5.\n");

    return 0;
}