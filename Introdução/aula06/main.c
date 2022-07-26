#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como criar variáveis e ler caracteres com a função scanf? | aula 6
//%c para imprimir caracteres
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char sexo = 'k';

    printf("Valor da variável sexo: %c\n", sexo);

    printf("Digite seu sexo: (f, F, m, ou M) ");
    scanf("%c", &sexo);

    printf("Valor da variável sexo: %c\n", sexo);

    return 0;
}