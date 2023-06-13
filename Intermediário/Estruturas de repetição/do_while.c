#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
    Estrutura de repetição do while (faça enquanto) na linguagem C
*/

int main() {

  setlocale(LC_ALL, "Portuguese");

  int valor, valor2;

  printf("Digite um valor maior que zero: ");
  scanf("%d", &valor);

  while (valor <= 0) { // enquanto valor for menor ou igual a zero
    printf("Valor invalido. Digite um valor maior que zero: ");
    scanf("%d", &valor);
  }

  printf("Valor lido: %d\n\n", valor);

  do
    ( // faça
        printf("Digite um valor maior que zero: ");
        scanf("%d",
              &valor2);) while (valor2 <=
                                0); // enquanto valor for menor ou igual a zero

  printf("Valor lido: %d\n", valor2);

  return 0;
}
