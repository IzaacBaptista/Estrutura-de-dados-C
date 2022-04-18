#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

    O que são caracteres de escape \n, \t, \", \' e \\

    Quebra de linha     -> \n
    Tabulação           -> \t
    Aspas dupla         -> \"
    Aspas simples       -> \'
    Contrabarra         -> \\

*/



int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("\n\nIsto é uma mensagem.\n\n");
    printf("\n\n\tIsto é uma mensagem.\n\n");
    printf("\n\n\tIsto é uma \"mensagem\".\n\n");
    printf("\n\n\tIsto é uma \'mensagem\'.\n\n");
    printf("\n\n\tIsto é uma \\mensagem.\n\n");

    return 0;
}