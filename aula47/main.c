#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Estrutura de seleção switch case com caracter na linguagem C
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opcap;

    printf("a - Cadastrar produto\nb - Vender produto\nc - Buscar produto\nd - Imprimir relatório\ne - Sair");
    scanf("%d", &opcao);

    switch(opcao) {
    case 'a':
        printf("a - Cadastrar produto\n");
        break;
    case 'b':
        printf("b - Vender produto\n");
        break;
    case 'c':
        printf("c - Buscar produto\n");
        break;
    case 'd':
        printf("d - Imprimir relatório\n");
        break;
    case 'e':
        printf("e - Sair\n");
        break;
    default:
        printf("opção não encontrada, tente novamente!");
    }


    return 0;
}