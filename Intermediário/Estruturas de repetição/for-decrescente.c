#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Estrutura de repetição for (para) decrescente na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    // variável inteira inicializada com zero
    int i = 10;

    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d ", i--);
    //printf("%d\n\n ", i--);


    for(i = 10; i >= 0; i--){
        printf("%d ", i);
    }

    return 0;
}