#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um para a variável “b”. 
    Em seguida, faça os passos que julgar necessário para que ao final, a variável “a” possua o valor que inicialmente estava em “b” 
    e a variável “b” possua o valor que inicialmente estava em “a”. 
    Traduza seu algoritmo para a linguagem C e exiba os valores na tela.

*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("Valores lidos: a: %d\tb: %d\n", a, b);
    
    c = a; 
    a = b;
    b = c;

    printf("Depois da troca: a: %d\tb: %d\n", a, b);

    return 0;
}