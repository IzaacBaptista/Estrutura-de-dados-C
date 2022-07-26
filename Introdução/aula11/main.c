#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício | Como ler idade, peso altura e sexo do usuário

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura e o sexo (f, F, m ou M): \n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);

    return 0;
}