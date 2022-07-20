#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
    O operador ternário na linguagem C
    condição ? verdadeiro : falso
*/

int main() {

  setlocale(LC_ALL, "Portuguese");

  int a = 10;

  printf("Digite um valor qualquer: ");
  scanf("%d", &a);

  printf("Operador ternário");
  a < 0 ? printf("\n\tValor negativo!\n")
        : printf("\n\tValor positivo ou igual a zero!\n");

  printf("Continuação do programa!\n");

  return 0;
}