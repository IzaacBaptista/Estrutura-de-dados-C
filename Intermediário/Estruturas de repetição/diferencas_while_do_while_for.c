#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Diferença entre as estruturas de repetição for, while e do while na linguagem C
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    //for
    int i = 0;
    for(i = 0; i < 10; i++){
        printf("Valor de i: %d\n", i);
    }

    //while
    int i = 0;
    while(i < 10){
        printf("Valor de i: %d\n", i);
        i++;
    }

    //do while
    int i = 0;
    do{
        printf("Valor de i: %d\n", i);
        i++;
    }while(i < 10);

    return 0;
}