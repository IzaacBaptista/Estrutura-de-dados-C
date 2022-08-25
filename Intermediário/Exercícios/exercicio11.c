#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Como calcular a média aritmética e ponderada (versão 2) na linguagem C
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) {
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else if(a == b || a == c || b == c)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");

    return 0;
}
