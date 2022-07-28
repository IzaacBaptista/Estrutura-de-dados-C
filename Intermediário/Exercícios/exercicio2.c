#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
     Exercício 2: Contando números positivos e negativos na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int um, dois, tres, quatro, cinco, positivos, negativos;

    printf("Digite o primeiro valor:");
    scanf("%d", &um);

    printf("Digite o primeiro valor:");
    scanf("%d", &dois);

    printf("Digite o primeiro valor:");
    scanf("%d", &tres);

    printf("Digite o primeiro valor:");
    scanf("%d", &quatro);

    printf("Digite o primeiro valor:");
    scanf("%d", &cinco);

    if(um < 0)
        negativos++;
    else
        positivos++;

    if(dois < 0)
        negativos++;
    else
        positivos++;

    if(tres < 0)
        negativos++;
    else
        positivos++;

    if(quatro < 0)
        negativos++;
    else
        positivos++;

    if(cinco < 0)
        negativos++;
    else
        positivos++;

    return 0;
}