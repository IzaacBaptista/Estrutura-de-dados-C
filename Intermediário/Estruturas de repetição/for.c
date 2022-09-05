#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Estrutura de repetição for (para) na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    // variável inteira inicializada com zero
    int i = 0;

    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);
    //printf("%d ", i++);

    for(i = 0; i <= 10; i++){
        printf("%d ", i);
    }

    return 0;
}