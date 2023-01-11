#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
    Estrutura de repetição for com incremento diferente de 1 na linguagem C
*/

int main() {

  setlocale(LC_ALL, "Portuguese");

  int i;

    for(i = 1; i <= 100; i+=2{
    if (i % 2 != 0) {
      printf("%d ", i);
    }
    }

    return 0;
}