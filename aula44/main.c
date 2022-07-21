#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
    O operador lógico ou (||) na linguagem C (Disjunção)
*/

int main() {

  setlocale(LC_ALL, "Portuguese");

  /*    int idade;

      printf("Digite sua idade: ");
      scanf("%d", &idade);

      if(idade menor ou igual a 5){
          printf("Este passageiro tem direito à gratuidade!");
      else{
          if(idade maior ou igual a 60)
          printf("Este passageiro tem direito à gratuidade!");
          else
          printf("Este passageiro não tem direito à gratuidade!");
      }
  */
  // Se a idade do passageiro for menor ou igual a 5 ou maior ou igual a 60 o
  // passageiro possui gratuidade.

  // Contudo, esta versão pode ser melhorada utilizando o operador lógico ou,
  // assim:

  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade menor ou igual 5 || idade maior ou igual 60)
    printf("Este passageiro tem direito à gratuidade!");
  else
    printf("Este passageiro não tem direito à gratuidade!");

  return 0;
}
