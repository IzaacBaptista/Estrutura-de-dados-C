#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    tabela ascii e acentuação
    1 byte (8 bits) -> 128 até 127
    unsigned 1 byte -> 0 até 255

    9 é o caractere de tabulação \t
    10 é o caractere de nova linha \n (enter)
    65 é a letra A maiúscula.
    66 é a letra B maiúscula.
    90 é a letra Z maiúscula.

    1º = setLocale(LC_ALL, NULL); // padrão da linguagem C
    1º = setLocale(LC_ALL, ""); // padrão do sistema operacional
    1º = setLocale(LC_ALL, "Portuguese"; // português brasileiro

*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    //printf("Coração\n");
    char letra = 'f';
    printf("%d", 102);
    printf("%c", 102);
    printf("%c", 103);
    

    return 0;
}