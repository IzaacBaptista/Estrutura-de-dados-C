#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
    Exercício 5: Calcular o índice de massa corporal (IMC) na linguagem C
*/

int main() {

  setlocale(LC_ALL, "Portuguese");

  float massa, altura, imc;

  printf("Digite seu peso (em kg) e sua altura (em metros): ");
  scanf("%f%f", &massa, &altura);

  imc = massa / (altura * altura);

  if (imc < 18.5)
    printf("IMC: %f\tAbaixo do peso\n", imc);
  else if (imc >= 18.5 && imc < 25)
    printf("IMC: %f\tPeso normal\n", imc);
  else if (imc >= 25 && imc < 30)
    printf("IMC: %f\tSobrepeso\n", imc);
  else if (imc >= 30 && imc < 35)
    printf("IMC: %f\tObesidade grau 1\n", imc);
  else if (imc >= 35 && imc < 40)
    printf("IMC: %f\tObesidade grau 2\n", imc);
  else
    printf("IMC: %f\tObesidade grau 3\n", imc);

  return 0;
}