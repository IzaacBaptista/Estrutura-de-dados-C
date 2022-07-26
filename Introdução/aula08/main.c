#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como criar variáveis e ler caracteres com a função getc?
//stdin é a entrada padrão do computador (Teclado)
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin);

    printf("Caracter lido: %c\n", letra);

    return 0;
}