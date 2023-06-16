#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
    Exercício 2 | Repita a leitura de uma senha até que seja válida na linguagem
   C
*/

int main() {

  setlocale(LC_ALL, "Portuguese");

  int senhaCriada, senhaDigitada;

  printf("Crie sua senha: ");
  scanf("%d", &senhaCriada);
  printf("Senha criada com sucesso!\n");

  do {
    printf("Digite sua senha: ");
    scanf("%d", &senhaDigitada);

    if (senhaDigitada != senhaCriada)
      printf("Senha inválida!\n");
  } while (senhaDigitada != senhaCriada);

  printf("Senha válida!\n");

  return 0;
}