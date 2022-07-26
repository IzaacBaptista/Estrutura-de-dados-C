#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Exercício 1: Como encontrar o maior e o menor entre três números na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, c, menor, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);


    // primeira solução

    if(a < b){
        if (a < c) {
            menor = a;
            printf("\n menor: %d", a);
        } else {
            menor = c;
            printf("\n menor: %d", c);
        }
    } else {
        if(b < c) {
            menor = b;
            printf("\n menor: %d", b);
        } else { 
            menor = c;
            printf("\n menor: %d", c);
        }
    }

    //segunda solução
    
    if(a > b){
        if (a > c){
            maior = a;
            printf("\n maior: %d", a);
        }else {
            maior = c;
            printf("\n maior: %d", c);
        }
    } else {
        if(b > c){
            maior = b;
            printf("\n maior: %d", b);
        }else{
            maior = c;
            printf("\n maior: %d", c);
        }
    }

    return 0;
}