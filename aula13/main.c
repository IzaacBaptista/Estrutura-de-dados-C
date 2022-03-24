#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício | Como limpar o buffer do teclado com a função scanf()

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char a, b;
    
    printf("Digite a primeira letra: ");
    scanf("%c", &a);

    printf("Digite a segunda letra: ");
    scanf(" %c", &b);

    // expaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
    // buffer =>
    // fflush(); 100%
    
    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}