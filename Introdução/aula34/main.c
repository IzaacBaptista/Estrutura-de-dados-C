#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Exercício: Convertendo segundos em horas, minutos e segundos
*/

int main() {
    int segundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);
    
    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}