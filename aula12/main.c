#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício | Como ler dois caracteres

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char a, b;
    
    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);
    
    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}