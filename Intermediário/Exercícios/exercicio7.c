#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Leia um caractere e diga se é vogal ou consoante na linguagem C 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Digite um caracter: ");
    scanf("%d", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("caractere digitado é uma vogal");
    } else {
        printf("caractere digitado é uma consoante");
    }

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("caractere digitado é uma vogal");
    } else {
        printf("caractere digitado é uma consoante");
    }
    
    return 0;
}
