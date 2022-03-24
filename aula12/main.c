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

    //expaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
    
    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}