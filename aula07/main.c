#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Como criar variáveis e ler caracteres com a função getchar?

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Digite uma letra: ");
    //scanf("%c",&letra);
    letra = getchar();

    printf("Caracter lido: %c\n", letra);

    return 0;
}