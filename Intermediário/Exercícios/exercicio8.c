#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
    Dado o número do mês, diga quantos dias têm esse mês (versão 2) na linguagem
   C
*/

int main() {

  setlocale(LC_ALL, "Portuguese");

  int mes;

  printf("Digite um numero: ");
  scanf("%d", &mes);

  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("\nO mes possui 31 dias\n");
    break;
  case 2:
    printf("\nO mes possui 28 dias\n");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("\nO mes possui 30 dias\n");
    break;
  default:
    printf("\nValor nao corresponde a nenhum mes!\n");
  }

  return 0;
}
