#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Exercício 3 | Some os números ímpares de 1 a 1000 e imprima o resultado na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, soma = 0;

    for(i = 1; i <= 1000; i++)
        if(i % 2 != 0)
            soma += i;
        else
            printf("%d\n", soma);
        
    

    printf("A soma dos números ímpares de 1 a 1000 é: %d\n", soma);
        

    

    return 0;
}