#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    O operador lógico e (&&) na linguagem C (Conjunção) 
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    int idade;
    char sexo;

    printf("Digite seu sexo f ou m e sua idade: ");
    scanf("%c%d", &idade, &sexo);
    
    if(sexo == 'm'){
        if(idade == 18)
            printf("Alistamento obrigatório!\n");
        else 
            printf("Dispensado!\n");
    }
    else {
        printf("Dispensada!\n");
    }

    printf("Continuação do programa!\n");

    return 0;
}