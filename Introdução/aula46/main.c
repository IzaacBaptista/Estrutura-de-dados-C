#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Estrutura de seleção switch case na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opcap;

    printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir relatório\n5 - Sair");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("1 - Cadastrar produto\n");
        break;
    case 2:
        printf("2 - Vender produto\n");
        break;
    case 3:
        printf("3 - Buscar produto\n");
        break;
    case 4:
        printf("4 - Imprimir relatório\n");
        break;
    case 5:
        printf("5 - Sair\n");
        break;
    default:
        printf("opção não encontrada, tente novamente!");
    }
    

    return 0;
}