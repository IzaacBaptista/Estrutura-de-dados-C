#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Exercício 1 | Leia um número, calcule e imprima sua tabuada na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, num;

    do{
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &num);
    }while(num < 1 || num > 10);

    for(i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num * i);
        

    

    return 0;
}